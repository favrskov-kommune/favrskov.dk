<?php
/**
 * @file
 * view_slider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function view_slider_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_type") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function view_slider_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function view_slider_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: front_page_slider
  $nodequeues['front_page_slider'] = array(
    'name' => 'front_page_slider',
    'title' => 'Forside - topbannere (slider lille billede)',
    'subqueue_title' => '',
    'size' => 3,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'insert_at_front' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'slider_element',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
