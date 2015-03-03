<?php
/**
 * @file
 * config_comments.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function config_comments_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
