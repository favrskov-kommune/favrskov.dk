<?php
/**
 * @file
 * config_background_image.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function config_background_image_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
