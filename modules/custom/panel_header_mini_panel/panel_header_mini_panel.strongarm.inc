<?php
/**
 * @file
 * panel_header_mini_panel.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function panel_header_mini_panel_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_panels_search_page';
  $strongarm->value = 'soegning';
  $export['apachesolr_panels_search_page'] = $strongarm;

  return $export;
}
