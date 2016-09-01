<?php

/**
 * @file
 * Implementation of the administration image upload and selecton form.
 */

/**
 * The image administation form.
 */
function dynamic_background_admin_images($form, &$form_state) {
  if (module_exists('domain')) {
    drupal_set_message(t('This form is domain-sensitive, settings will be applied to current domain only.'), 'warning', FALSE);
  }

  $form = array();

  // Load settings
  $settings = variable_get('dynamic_background_setting', array());
  if (empty($settings)) {
    drupal_set_message(t('You have not yet configured "Dynamic background". Click <a href="@link">here</a> to configure it.',
              array('@link' => url('admin/config/user-interface/backgrounds/default'))), 'warning');
    return;
  }

  // File upload form encoded.
  $form['#attributes'] = array('enctype' => 'multipart/form-data');

  $form['dynamic_background_images'] = array(
    '#type' => 'fieldset',
    '#title' => t('Upload images'),
    '#collapsed' => FALSE,
    '#collapsible' => FALSE,
    '#prefix' => '<div id="dynamic-background-upload-wrapper">',
    '#suffix' => '</div>',
  );

  // Load images
  $images = dynamic_background_load_images('default');
  $active_fid = dynamic_background_active_image('default', '-1');
  if ($active_fid) {
    $active_fid = $active_fid->fid;
  }

  // Build images form elements.
  $i = 0;
  foreach ($images as $fid => $uri) {
    $i++;
    $default = array(
      'picture' => $uri,
      'fid' => $fid,
      'picture_use' => ($fid == $active_fid) ? 1 : 0,
      'picture_delete' => 0,
    );
    $form['dynamic_background_images']['image_' . $fid] = array(
      '#type' => 'background_upload_form',
      '#title' => t('Background image %num', array('%num' => $i)),
      '#default_value' => $default,
    );
  }

  // Add empty upload slots, if any left and unlimited not selected.
  if (is_numeric($settings['num_of_pictures'])) {
    for ($i; $settings['num_of_pictures'] > $i; $i++) {
      $form['dynamic_background_images']['image_' . $i] = array(
        '#type' => 'background_upload_form',
        '#title' => t('Background image %num', array('%num' => $i+1)),
        '#default_value' => array(),
      );
    }
  }
  else {
    // Add logic to handle add-one-more button.
    if (!isset($form_state['upload_slots'])) {
      $form_state['upload_slots'] = 1;
    }

    // Add empty upload slots.
    for ($slots = 0; $slots < $form_state['upload_slots']; $slots++) {
      $i++;
      $form['dynamic_background_images']['image_' . $i] = array(
        '#type' => 'background_upload_form',
        '#title' => t('Background image %num', array('%num' => $i)),
        '#default_value' => array(),
      );
    }

    // Create add one more button.
    $form['dynamic_background_images']['add_image'] = array(
      '#type' => 'submit',
      '#value' => t('Add one more'),
      '#submit' => array('dynamic_background_admin_images_add_one'),
      '#ajax' => array(
        'callback' => 'dynamic_background_admin_images_add_one_callback',
        'wrapper' => 'dynamic-background-upload-wrapper',
      ),
    );
  }

  // Give it system setting form style.
  $form['#theme'] = array('system_settings_form');

  // Set validators and submit handler(s).
  $form['#validate'][] = 'dynamic_background_admin_images_validate';
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );

  return $form;
}

/**
 * Callback for both ajax-enabled buttons.
 *
 * This simply selects and returns the fieldset with the names in it.
 */
function dynamic_background_admin_images_add_one_callback($form, $form_state) {
  return $form['dynamic_background_images'];
}

/**
 * Submit handler for the "add-one-more" button.
 *
 * It just increments the max counter and causes a rebuild.
 */
function dynamic_background_admin_images_add_one($form, &$form_state) {
  $form_state['upload_slots']++;
  $form_state['rebuild'] = TRUE;
}

/**
 * The administration images form validator form. It handles uploading the
 * image and deletion if the checkbox is flaged.
 */
function dynamic_background_admin_images_validate($form, &$form_state) {
  if (isset($form_state['submit_handlers']) && $form_state['submit_handlers'][0] == 'dynamic_background_admin_images_add_one') {
    return;
  }

  // Load settings.
  $settings = variable_get('dynamic_background_setting', array());

  // Validate the file extension (move to config, with upload path).
  $validators = array(
    'file_validate_extensions' => array($settings['extensions']),
  );

  // Loop through all uploaded files.
  if (!empty($_FILES)) {
    foreach ($_FILES['files']['name'] as $file_field => $val) {
      if ($val == '') {
        continue;
      }

      // Save the image.
      try {
        dynamic_background_save_image($file_field, 'default', -1);
      }
      catch (Exception $e) {
        form_set_error('default', $e->getMessage());
      }
    }
  }

  // Check for image deletion.
  foreach ($form_state['values'] as $field => $data) {
    if (preg_match('/^image_(\d{1,4})/', $field) && isset($data['picture_delete']) && $data['picture_delete']) {
      try {
        // Delete the image.
        dynamic_background_delete_image($data['fid']);
      }
      catch (Exception $e) {
        form_set_error($field, $e->getMessage());
      }
    }
  }
}

/**
 * Administration images form submittion handler.
 */
function dynamic_background_admin_images_submit($form, &$form_state) {
  // Exclude unnecessary elements.
  unset($form_state['values']['submit'], $form_state['values']['reset'], $form_state['values']['form_id'], $form_state['values']['op'], $form_state['values']['form_token'], $form_state['values']['form_build_id']);

  // Active background enabled?
  $active = FALSE;

  // Set currently active background image.
  foreach ($form_state['values'] as $field => $data) {
    if (preg_match('/^image_(\d{1,2})/', $field) && isset($data['picture_use']) && $data['picture_use']) {
      dynamic_background_set_active($data['fid'], 'default', -1);
      $active = TRUE;
    }
  }

  // If no active background where selecte, remove the previouse selected one.
  if (!$active) {
    dynamic_background_set_active(NULL, 'default', -1);
  }

  drupal_set_message(t('The configuration options have been saved.'));
}