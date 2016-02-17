<?php
/**
 * @file
 * content_type_banner_element.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function content_type_banner_element_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'cntrmd_banner_element'.
  $field_bases['cntrmd_banner_element'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'cntrmd_banner_element',
    'indexes' => array(
      'date' => array(
        0 => 'date',
      ),
    ),
    'locked' => 0,
    'module' => 'content_reminder',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'content_reminder',
  );

  // Exported field_base: 'field_transperent_overlay'.
  $field_bases['field_transperent_overlay'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_transperent_overlay',
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
