<?php
/**
 * @file
 * content_type_volunteer_jobs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_volunteer_jobs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_volunteer_jobs_node_info() {
  $items = array(
    'volunteer_jobs' => array(
      'name' => t('Volunteer jobs'),
      'base' => 'node_content',
      'description' => t('Content type aimed to be a storage between import via feeds and display via view to the end user. In other words - should not be accessible by anonymous.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
