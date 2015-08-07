<?php
/**
 * @file
 * content_type_bannerlink.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function content_type_bannerlink_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'cntrmd_bannerlink'
  $field_bases['cntrmd_bannerlink'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'cntrmd_bannerlink',
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

  // Exported field_base: 'field_banner_link_color'
  $field_bases['field_banner_link_color'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_banner_link_color',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'red-background' => 'Red',
        'blue-background' => 'Blue',
        'grey-background' => 'Grey',
        'light-grey-background' => 'Light grey',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
