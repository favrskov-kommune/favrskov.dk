<?php
/**
 * @file
 * views_locations.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function views_locations_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_basic';
  $strongarm->value = array(
    'locations' => array(
      0 => 'locations_block_pane',
    ),
  );
  $export['views_ui_basic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_basic_fields';
  $strongarm->value = array(
    'title' => 'title',
    'header' => 'header',
  );
  $export['views_ui_basic_fields'] = $strongarm;

  return $export;
}
