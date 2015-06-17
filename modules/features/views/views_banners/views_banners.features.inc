<?php
/**
 * @file
 * views_banners.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function views_banners_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function views_banners_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function views_banners_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: front_page_banners_block
  $nodequeues['front_page_banners_block'] = array(
    'name' => 'front_page_banners_block',
    'title' => 'Front page: Banners block',
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
      0 => 'banner_element',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function views_banners_image_default_styles() {
  $styles = array();

  // Exported image style: banner_thumb.
  $styles['banner_thumb'] = array(
    'effects' => array(
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 317,
          'height' => 190,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'banner_thumb',
  );

  return $styles;
}
