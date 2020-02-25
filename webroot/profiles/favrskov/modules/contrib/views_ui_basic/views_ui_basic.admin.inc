<?php
/**
 * @file views_ui_basic.admin.inc
 * Admin form to setup editable views & fields
 */

/**
 * Admin form
 */
function views_ui_basic_admin_form() {
  $form["#prefix"] = t('Use this form to define which Views may be editable by users with the !permission permission.<br /><strong>Please note that the edits made using this module will automatically override default display settings.</strong>', array('!permission' => l(t('edit views basic settings'), 'admin/people/permissions', array('fragment' => 'module-views_ui_basic'))));

  $form['fsfields'] = array(
    '#type'  => 'fieldset',
    '#title' => t('Editable Fields'),
    '#description' => t('Select the fields users may edit.'),
  );
  $form['fsfields']['fields'] = array(
    '#type' => 'checkboxes',
    '#options' => _views_ui_basic_fields(),
    '#default_value' => variable_get('views_ui_basic_fields', array()),
  );

  $views = views_get_all_views();

  $saved = variable_get('views_ui_basic', array());

  $form['fsviews'] = array(
    '#type'  => 'fieldset',
    '#title' => t('Views'),
  );

  foreach ($views as $view_key => $view_object) {
    if (!isset($view_object->disabled) || !$view_object->disabled) {
      if (!empty($view_object->description)) {
        $form['fsviews']["{$view_key}_fieldset"] = array(
          '#title' => $view_object->description . ' ('. $view_key .') | ' . l(t('edit view'), "admin/structure/views/view/$view_key/edit/", array('attributes' => array('target' => '_blank'))),
          '#type' => 'fieldset',
        );
      } else {
        $form['fsviews']["{$view_key}_fieldset"] = array(
          '#title' => $view_key . ' | ' . l(t('edit view'), "admin/structure/views/view/$view_key/edit/", array('attributes' => array('target' => '_blank'))),
          '#type' => 'fieldset',
        );
      }
      $options = array();
      foreach ($view_object->display as $display_key => $views_display) {
        $title = $views_display->display_title;
        if ($views_display->display_plugin == 'page') {
          $title = l($title, $views_display->display_options['path'], array('attributes' => array('target' => '_blank')));
        }
        $options[$display_key] = "$display_key ($title)";
      }

      $form['fsviews']["{$view_key}_fieldset"][$view_key] = array(
        '#type' => 'checkboxes',
        '#options' => $options,
        '#default_value' => (isset($saved[$view_key])) ? $saved[$view_key] : array(),
      );
    }
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  return $form;
}

/**
 * Admin form submit
 */
function views_ui_basic_admin_form_submit($form, &$form_state) {
  $save = array();

  variable_set('views_ui_basic_fields',  array_filter($form_state['values']['fields']));

  foreach ($form_state['values'] as $k => $v) {
    if ($k != 'fields' && is_array($v) && $v_nozero = array_filter($v)) { // remove 0 value
      $save[$k] = array_keys($v_nozero);
    }
  }

  variable_set('views_ui_basic', $save);

  // Rebuild our menu tabs.
  variable_set('menu_rebuild_needed', TRUE);
  // Empty path cache so paths are loaded in overlay if needed.
  cache_clear_all('views_ui_basic_paths', 'cache');

  drupal_set_message(t('Views settings have been saved.'));
}
