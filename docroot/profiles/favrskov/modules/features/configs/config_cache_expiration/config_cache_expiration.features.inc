<?php
/**
 * @file
 * config_cache_expiration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function config_cache_expiration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
