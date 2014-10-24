<?php
/**
 * @file
 * Ctools plugin for displaying hearing responses(webform submissions) in custom way.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Hearing response'),
  'category' => t('ProPeople'),
  'render callback' => 'pane_hearing_response_render_pane',
  'edit form' => 'pane_hearing_response_edit_form',
  'all contexts' => TRUE,
  'defaults' => array(
    'nid' => '%node:nid',
    'submission_id' => '%response:raw',
  )
);


/**
 * Edit form callback for our ctools content type.
 *
 * Allow to choose id of webform  to show.
 */
function pane_hearing_response_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['nid'] = array(
    '#type' => 'textfield',
    '#title' => t('Node ID'),
    '#default_value' => $conf['nid'],
  );

  $form['submission_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Submission ID'),
    '#default_value' => $conf['submission_id'],
  );

  return $form;
}

/**
 * The submit ctools plugin form stores the data in $conf.
 */
function pane_hearing_response_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    $form_state['conf'][$key] = $form_state['input'][$key];
  }
}

/**
 * Render callback of our ctools plugin.
 *
 * Display hearing responses (webform submissions) with regard to selected filters and page number.
 */
function pane_hearing_response_render_pane($subtype, $conf, $args, $contexts) {
  module_load_include('inc', 'webform', 'includes/webform.submissions');

  $block = new stdClass();
  $nid = ctools_context_keyword_substitute($conf['nid'], array(), $contexts);
  $sid = ctools_context_keyword_substitute($conf['submission_id'], array(), $contexts);

  $node = node_load($nid);
  $submission = webform_get_submission($nid, $sid);



  // Render the admin UI breadcrumb.
  $breadcrumb = drupal_get_breadcrumb();

  if (isset($node)) {
    $webform_breadcrumb = array();
    $webform_breadcrumb[] = empty($breadcrumb) ? l(t('Home'), '<front>') : array_shift($breadcrumb);
    $webform_breadcrumb[] = l($node->title, 'node/' . $node->nid);
    $breadcrumb = $webform_breadcrumb;
  }

  drupal_set_breadcrumb($breadcrumb);


  // Use code from webform_submission_render().
  $component_tree = array();
  $renderable = array();
  $page_count = 1;

  // Meta data that may be useful for modules implementing
  // hook_webform_submission_render_alter().
  $renderable['#node'] = $node;
  $renderable['#submission'] = $submission;
  $renderable['#format'] = 'html';

  // Set the theme function for submissions.
  $renderable['#theme'] = array('webform_submission_' . $node->nid, 'webform_submission');

  // Remove excluded components.
  $components = $node->webform['components'];
  foreach ($components as $id => &$component) {
    $component['name'] .= ':';
    if ($component['type'] == 'email') {
      unset($components[$id]);
    }
  }

  _webform_components_tree_build($components, $component_tree, 0, $page_count);

  // Make sure at least one field is available
  if (isset($component_tree['children'])) {
    // Recursively add components to the form.
    foreach ($component_tree['children'] as $component) {
      if (_webform_client_form_rule_check($node, $component, $component['page_num'], NULL, $submission)) {
        _webform_client_form_add_component($node, $component, NULL, $renderable, $renderable, NULL, $submission, 'html');
      }
    }
  }
  // End code from webform_submission_render().

  $block->content = drupal_render($renderable);

  return $block;
}