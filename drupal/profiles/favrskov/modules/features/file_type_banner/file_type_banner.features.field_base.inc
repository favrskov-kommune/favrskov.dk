<?php
/**
 * @file
 * file_type_banner.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function file_type_banner_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_html_and_js'.
  $field_bases['field_html_and_js'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_html_and_js',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
