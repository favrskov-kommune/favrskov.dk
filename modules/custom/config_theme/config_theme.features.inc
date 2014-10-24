<?php
/**
 * @file
 * config_theme.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function config_theme_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
