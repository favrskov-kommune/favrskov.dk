<?php
/**
 * @file
 * taxonomy_local.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function taxonomy_local_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
