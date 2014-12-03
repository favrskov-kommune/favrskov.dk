<?php
/**
 * @file
 * config_autoarch.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function config_autoarch_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
