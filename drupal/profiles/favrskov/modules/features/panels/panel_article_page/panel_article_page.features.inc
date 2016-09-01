<?php
/**
 * @file
 * panel_article_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panel_article_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
