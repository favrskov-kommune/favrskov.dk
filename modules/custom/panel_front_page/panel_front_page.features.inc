<?php
/**
 * @file
 * panel_front_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panel_front_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
