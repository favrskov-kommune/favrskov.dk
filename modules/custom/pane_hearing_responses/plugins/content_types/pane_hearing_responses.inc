<?php
/**
 * @file
 * Ctools plugin for displaying hearing responses(webform submissions) in custom way.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Hearing responses'),
  'category' => t('ProPeople'),
  'render callback' => 'pane_hearing_responses_render_pane',
  'edit form' => 'pane_hearing_responses_edit_form',
  'all contexts' => TRUE,
  'defaults' => array(
    'webform_id' => '',
  )
);


/**
 * Edit form callback for our ctools content type.
 *
 * Allow to choose id of webform  to show.
 */
function pane_hearing_responses_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['webform_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Webform ID'),
    '#default_value' => $conf['webform_id'],
  );

  return $form;
}

/**
 * The submit ctools plugin form stores the data in $conf.
 */
function pane_hearing_responses_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    $form_state['conf'][$key] = $form_state['input'][$key];
  }
}

/**
 * Render callback of our ctools plugin.
 *
 * Display hearing responses (webform submissions) with regard to selected filters and page number.
 */
function pane_hearing_responses_render_pane($subtype, $conf, $args, $contexts) {
  $block = new stdClass();
  $webform_id = ctools_context_keyword_substitute($conf['webform_id'], array(), $contexts);

  $filter_components = pane_hearing_responses_get_filter_components($webform_id);
  $filters_form = drupal_get_form('pane_hearing_responses_filter_form', $filter_components, $webform_id);
  $content = '<div id="hearing-responses-form">' . drupal_render($filters_form)
    . pane_hearing_responses_get_view($webform_id) . '</div>';
  $block->content .= $content;

  drupal_add_library('system', 'drupal.ajax');
  drupal_add_js(drupal_get_path('module', 'pane_hearing_responses') . '/js/pane_hearing_responses.js');
  drupal_add_js(array('hearings' => array('filters' => $filter_components, 'webform_id' => $webform_id)), 'setting');

  return $block;
}