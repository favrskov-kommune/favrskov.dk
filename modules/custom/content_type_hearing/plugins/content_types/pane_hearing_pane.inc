<?php
/**
 * @file
 * Ctools plugin for displaying hearing webform.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Hearing pane'),
  'category' => t('ProPeople'),
  'render callback' => 'pane_hearing_pane_render',
  'edit form' => 'pane_hearing_pane_edit_form',
  'all contexts' => TRUE,
  'defaults' => array(
    'webform_id' => '%node:field_hearing_webform_id',
  )
);

/**
 * Edit form callback for our ctools content type.
 *
 * Allow to choose id of webform  to show.
 */
function pane_hearing_pane_edit_form($form, &$form_state) {

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
function pane_hearing_pane_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    $form_state['conf'][$key] = $form_state['input'][$key];
  }
}

/**
 * Render callback of our ctools plugin.
 */
function pane_hearing_pane_render($subtype, $conf, $args, $contexts) {
  $block = new stdClass();

  $nid = ctools_context_keyword_substitute($conf['webform_id'], array(), $contexts);

  $node = node_load($nid);

  $form = drupal_get_form('webform_client_form_' . $nid, $node);

  $block->content = render($form);

  return $block;
}
