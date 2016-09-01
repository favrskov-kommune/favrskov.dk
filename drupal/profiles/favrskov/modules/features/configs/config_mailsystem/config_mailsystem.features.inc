<?php
/**
 * @file
 * config_mailsystem.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function config_mailsystem_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
