<?php
/**
 * @file
 * config_webform.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function config_webform_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_types';
  $strongarm->value = array(
    1 => 'webform',
  );
  $export['webform_node_types'] = $strongarm;

  return $export;
}
