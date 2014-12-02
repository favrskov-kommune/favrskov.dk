<?php
/**
 * @file
 * content_type_frontpage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_frontpage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_frontpage_node_info() {
  $items = array(
    'frontpage' => array(
      'name' => t('Frontpage'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
