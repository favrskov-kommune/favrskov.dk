<?php
/**
 * @file
 * content_type_slider_element.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_slider_element_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_slider_element_node_info() {
  $items = array(
    'slider_element' => array(
      'name' => t('Slider element'),
      'base' => 'node_content',
      'description' => t('Et stort billede med tekstboks. Kan indsættes i en slider'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
