<?php
/**
 * @file
 * config_media_browser_plus.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function config_media_browser_plus_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_browser_plus_disable_default_view';
  $strongarm->value = 0;
  $export['media_browser_plus_disable_default_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_browser_plus_filesystem_folders';
  $strongarm->value = 0;
  $export['media_browser_plus_filesystem_folders'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_browser_plus_thumbnails_as_default_browser';
  $strongarm->value = 1;
  $export['media_browser_plus_thumbnails_as_default_browser'] = $strongarm;

  return $export;
}
