<?php
/**
 * @file
 * fields_shared.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fields_shared_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fields_shared_node_info() {
  $items = array(
    'shared' => array(
      'name' => t('Shared'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
