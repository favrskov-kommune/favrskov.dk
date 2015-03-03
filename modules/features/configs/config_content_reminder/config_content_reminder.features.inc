<?php
/**
 * @file
 * config_content_reminder.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function config_content_reminder_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
