<?php
/**
 * @file
 * panel_403_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function panel_403_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_403';
  $strongarm->value = 'page-403';
  $export['site_403'] = $strongarm;

  return $export;
}
