<?php
/**
 * @file
 * panel_header_mini_panel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panel_header_mini_panel_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
