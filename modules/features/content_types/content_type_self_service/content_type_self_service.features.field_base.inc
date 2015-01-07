<?php
/**
 * @file
 * content_type_self_service.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function content_type_self_service_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_require_login'
  $field_bases['field_require_login'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_require_login',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  return $field_bases;
}
