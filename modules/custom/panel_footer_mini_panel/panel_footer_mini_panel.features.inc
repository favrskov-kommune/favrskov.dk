<?php
/**
 * @file
 * panel_footer_mini_panel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panel_footer_mini_panel_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}
