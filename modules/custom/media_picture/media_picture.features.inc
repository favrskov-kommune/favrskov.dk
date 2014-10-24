<?php
/**
 * @file
 * media_picture.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function media_picture_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "1");
  }
}
