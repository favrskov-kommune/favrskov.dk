<?php
/**
 * @file
 * content_type_frontpage.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function content_type_frontpage_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_front_color_scheme'
  $field_bases['field_front_color_scheme'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_front_color_scheme',
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
        'red' => 'red',
        'green' => 'green',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
