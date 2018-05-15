<?php
/**
 * @file
 * content_type_slider_element.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function content_type_slider_element_filter_default_formats() {
  $formats = array();

  // Exported format: No Filter.
  $formats['no_filter'] = array(
    'format' => 'no_filter',
    'name' => 'No Filter',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
