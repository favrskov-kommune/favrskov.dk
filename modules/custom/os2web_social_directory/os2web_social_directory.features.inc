<?php
/**
 * @file
 * os2web_social_directory.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_social_directory_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_social_directory_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function os2web_social_directory_node_info() {
  $items = array(
    'os2web_social_directory' => array(
      'name' => t('OS2web Social Directory - Association'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title', array(), array('context' => 'type:social_directory:title')),
      'help' => '',
    ),
  );
  return $items;
}
