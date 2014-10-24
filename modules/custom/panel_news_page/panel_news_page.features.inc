<?php
/**
 * @file
 * panel_news_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panel_news_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
