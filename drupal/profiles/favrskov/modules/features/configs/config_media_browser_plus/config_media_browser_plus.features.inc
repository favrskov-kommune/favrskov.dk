<?php
/**
 * @file
 * config_media_browser_plus.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function config_media_browser_plus_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
