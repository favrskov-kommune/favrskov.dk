<?php
/**
 * @file
 * media_breakpoints.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function media_breakpoints_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
}
