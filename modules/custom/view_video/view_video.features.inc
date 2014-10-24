<?php
/**
 * @file
 * view_video.features.inc
 */

/**
 * Implements hook_views_api().
 */
function view_video_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function view_video_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: front_page_video_block
  $nodequeues['front_page_video_block'] = array(
    'name' => 'front_page_video_block',
    'title' => 'Front page: Video block',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'video_element',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
