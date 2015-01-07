<?php
/**
 * @file
 * config_borger_dk.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function config_borger_dk_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
