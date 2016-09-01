<?php
/**
 * @file
 * taxonomy_local.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function taxonomy_local_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'synonyms_synonyms'
  $field_bases['synonyms_synonyms'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'synonyms_synonyms',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
