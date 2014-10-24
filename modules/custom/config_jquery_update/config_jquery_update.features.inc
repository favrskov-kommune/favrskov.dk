<?php
/**
 * @file
 * config_jquery_update.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function config_jquery_update_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
