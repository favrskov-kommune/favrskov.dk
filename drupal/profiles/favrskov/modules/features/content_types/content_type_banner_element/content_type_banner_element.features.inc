<?php
/**
 * @file
 * content_type_banner_element.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_banner_element_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_banner_element_node_info() {
  $items = array(
    'banner_element' => array(
      'name' => t('Banner element'),
      'base' => 'node_content',
      'description' => t('Picture with title and link'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
