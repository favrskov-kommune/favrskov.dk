<?php
/**
 * @file
 * views_banners.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function views_banners_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodequeue_view_per_queue';
  $strongarm->value = 0;
  $export['nodequeue_view_per_queue'] = $strongarm;

  return $export;
}
