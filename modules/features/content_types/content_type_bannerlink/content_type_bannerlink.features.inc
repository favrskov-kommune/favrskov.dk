<?php
/**
 * @file
 * content_type_bannerlink.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_bannerlink_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_bannerlink_node_info() {
  $items = array(
    'bannerlink' => array(
      'name' => t('Bannerlink'),
      'base' => 'node_content',
      'description' => t('Handlingsknap, bruges til at skabe opmærksomhed om en handling i en artikel'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
