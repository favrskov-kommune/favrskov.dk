<?php
/**
 * @file
 * config_fics_esdh.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function config_fics_esdh_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
