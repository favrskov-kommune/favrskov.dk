<?php
/**
 * @file
 * panels_comments_unsubscribe.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panels_comments_unsubscribe_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
