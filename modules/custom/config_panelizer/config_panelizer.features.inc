<?php
/**
 * @file
 * config_panelizer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function config_panelizer_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
