<?php
/**
 * @file
 * panel_404_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function panel_404_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_404';
  $strongarm->value = 'page-404';
  $export['site_404'] = $strongarm;

  return $export;
}
