<?php
/**
 * @file
 * content reminder configurations.
 */

/**
 * Implements hook_form().
 *
 * this is the configuration form
 */
function content_reminder_config_form($form, &$form_state) {
  $form['content_reminder_presets'] = array(
    '#type' => 'textarea',
    '#title' => t('Presets'),
    '#description' => t('Presets for notification dates. Uses the strtotime PHP function as value. Put each preset as a value|label row.'),
    '#default_value' => variable_get('content_reminder_presets',
      'today + 1 month|One month' . "\n" .
      'today + 2 month|Two months' . "\n" .
      '2011-12-12|December 12'),
    '#cols' => 10,
  );

  $options = array();
  $cant_use = array();
  $entities = entity_get_info();
  foreach ($entities as &$entity) {
    foreach ($entity['bundles'] as $key => &$bundle) {
      if (strlen('cntrmd_' . $key) > 32) {
        $cant_use[$key] = $bundle['label'] . ' (' . $entity['label'] . ')';
      }
      else {
        $options[$key] = $bundle['label'] . ' (' . $entity['label'] . ')';
      }
    }
  }

  $form['content_reminder_bundles'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Types'),
    '#description' => t('Which types can be notified'),
    '#default_value' => variable_get('content_reminder_bundles', array()),
    '#options' => $options,
  );

  if ($cant_use) {
    $form['content_reminder_unusable'] = array(
      '#type' => 'checkboxes',
      '#title' => t('Other types'),
      '#description' => t('Which types can not be notified, due to Drupal field length restriciton.'),
      '#options' => $cant_use,
      '#disabled' => TRUE,
    );
  }

  $form['#submit'][] = 'content_reminder_update_types';

  return system_settings_form($form);
}

/**
 * App node form submit, saves app instance configuration values.
 */
function content_reminder_update_types($form, &$form_state) {
  $entities = entity_get_info();
  $bundles = array();
  foreach ($entities as $entity_name => &$entity) {
    foreach ($entity['bundles'] as $bundle_name => &$bundle) {
      $bundles[$bundle_name] = array(
        'entity' => $entity_name,
        'bundle' => $bundle_name,
      );
    }
  }

  foreach ($form_state['values']['content_reminder_bundles'] as $bundle => $enabled) {
    if ($enabled) {
      // Add field.
      if (isset($bundles[$bundle])) {
        content_reminder_add_notification_field($bundles[$bundle]['entity'],
          $bundles[$bundle]['bundle']);
      }
    }
    else {
      // Remove field.
      if (isset($bundles[$bundle])) {
        content_reminder_remove_notification_field($bundles[$bundle]['entity'],
          $bundles[$bundle]['bundle']);
      }
    }
  }
}

/**
 * Function to add the notification field to a bundle.
 */
function content_reminder_add_notification_field($entity_type, $bundle_name) {
  $field_info = content_reminder_notification_field();
  $field_info['field_config']['field_name'] = 'cntrmd_' . $bundle_name;
  $field_info['field_instance']['field_name'] = 'cntrmd_' . $bundle_name;
  $field_info['field_instance']['bundle'] = $bundle_name;
  $field_info['field_instance']['entity_type'] = $entity_type;

  if (strlen($field_info['field_config']['field_name']) > 32) {
    drupal_set_message(
      t('Can not add reminder field to !bundle_type, the field name exceeds the allowed limit.',
        array('!bundle_type' => $bundle_name)), $type = 'error'
    );
    return;
  }

  $field = field_info_field($field_info['field_config']['field_name']);
  if (empty($field)) {
    $field = field_create_field($field_info['field_config']);
  }

  $instance = field_info_instance($field_info['field_instance']['entity_type'],
    $field_info['field_instance']['field_name'], $field_info['field_instance']['bundle']);
  if (empty($instance)) {
    field_create_instance($field_info['field_instance']);
  }
}

/**
 * Function to remove the notication field from a bundle.
 */
function content_reminder_remove_notification_field($entity_type, $bundle_name) {
  $instance = field_info_instance($entity_type, 'content_reminder_' . $bundle_name, $bundle_name);
  if (!empty($instance)) {
    field_delete_instance($instance, FALSE);
  }
}
