<?php

/**
 * @file
 * Administrative stuff.
 */

/**
 * Media browser plus settings form.
 *
 * @see system_settings_form()
 */
function media_browser_plus_media_settings($form, &$form_state = array()) {
  $form['media_browser_plus_thumbnails_as_default_browser'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use Media Browser Plus thumbnails view as default.'),
    '#description' => t('If enabled the thumbnails view will displayed when accessing "admin/content/file".'),
    '#default_value' => variable_get('media_browser_plus_thumbnails_as_default_browser', TRUE),
  );
  $form['media_browser_plus_thumbnails_as_default_browser_current'] = array(
    '#type' => 'value',
    '#default_value' => variable_get('media_browser_plus_thumbnails_as_default_browser', TRUE),
  );
  $form['media_browser_plus_disable_default_view'] = array(
    '#type' => 'checkbox',
    '#title' => t('Disable the provided default view.'),
    '#description' => t('Disableds the view shipped with the module. Handy when using features and a modified view.'),
    '#default_value' => variable_get('media_browser_plus_disable_default_view', FALSE),
  );

  $form['advanced'] = array(
    '#type' => 'fieldset',
    '#title' => t('Advanced settings'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['advanced']['media_browser_plus_filesystem_folders'] = array(
    '#type' => 'checkbox',
    '#title' => t('Create folders in filesystem'),
    '#default_value' => variable_get('media_browser_plus_filesystem_folders', TRUE),
    '#description' => t('If enabled the "virtual" folder structure will be created in the filesystem too. This helps to organize the files on the disk.'),
  );
  $form['advanced']['root_folder'] = array(
    '#type' => 'textfield',
    '#title' => t('Media Root folder'),
    '#default_value' => variable_get('media_root_folder'),
    '#description' => t("The root folder for files handled by the media module. <strong>Attention: Changing this will move all existing files in the file system too!</strong>"),
    '#states' => array(
      'invisible' => array(
        ':input[name="media_browser_plus_filesystem_folders"]' => array('checked' => FALSE),
      ),
    ),
  );
  $form['advanced']['current_root_folder'] = array(
    '#type' => 'value',
    '#default_value' => variable_get('media_root_folder'),
  );

  $form['#submit'][] = 'media_browser_plus_media_settings_submit';

  $form = system_settings_form($form);
  if (variable_get('media_browser_plus_filesystem_folders', TRUE)) {
    $form['actions']['rebuild_folder_structure'] = array(
      '#type' => 'submit',
      '#value' => t('Rebuild folder structure'),
      '#name' => 'rebuild_folder_structure',
    );
  }

  return $form;
}

/**
 * Submit handler for the Media browser plus settings form.
 *
 * The settings itself are stored by system_settings_form_submit()
 */
function media_browser_plus_media_settings_submit($form, &$form_state) {
  // Check if the root folder was changed and move files if necessary.
  $old_root = trim($form_state['values']['current_root_folder'], '/');
  $new_root = trim($form_state['values']['root_folder'], '/');
  if ($old_root != $new_root) {
    module_load_include('inc', 'media_browser_plus', 'includes/media_browser_plus.folders');
    media_browser_plus_move_root_folder($old_root, $new_root);
  }
  // Check if a folder structure rebuild was requested.
  if ($form_state['triggering_element']['#name'] == 'rebuild_folder_structure') {
    module_load_include('inc', 'media_browser_plus', 'includes/media_browser_plus.folders');
    media_browser_plus_rebuild_folder_structure();
  }

  // If the menu position of MBP was changed, rebuild the menu.
  if ($form_state['values']['media_browser_plus_thumbnails_as_default_browser_current'] != $form_state['values']['media_browser_plus_thumbnails_as_default_browser']) {
    variable_set('menu_rebuild_needed', TRUE);
  }
}
