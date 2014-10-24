<?php
/**
 * @file
 * os2web_kultunaut.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_kultunaut_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_kultunaut_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function os2web_kultunaut_node_info() {
  $items = array(
    'os2web_kultunaut_event' => array(
      'name' => t('OS2web Kultunaut Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'os2web_kultunaut_import' => array(
      'name' => t('OS2web Kultunaut Import'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
