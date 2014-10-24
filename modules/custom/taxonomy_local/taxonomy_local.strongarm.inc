<?php
/**
 * @file
 * taxonomy_local.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function taxonomy_local_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'synonyms_settings_5';
  $strongarm->value = array(
    'synonyms' => array(
      0 => 'synonyms_synonyms',
    ),
  );
  $export['synonyms_settings_5'] = $strongarm;

  return $export;
}
