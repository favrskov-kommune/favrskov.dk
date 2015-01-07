<?php
/**
 * @file
 * content_type_self_service.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_self_service_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_self_service_node_info() {
  $items = array(
    'self_service' => array(
      'name' => t('Self Service'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
