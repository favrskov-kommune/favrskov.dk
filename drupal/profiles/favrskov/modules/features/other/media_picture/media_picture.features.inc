<?php
/**
 * @file
 * media_picture.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function media_picture_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
}
