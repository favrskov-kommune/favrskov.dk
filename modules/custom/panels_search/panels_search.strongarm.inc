<?php
/**
 * @file
 * panels_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function panels_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_stats_enabled';
  $strongarm->value = '1';
  $export['apachesolr_stats_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_stats_flush_log_timer';
  $strongarm->value = '259200';
  $export['apachesolr_stats_flush_log_timer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_stats_gadget_key';
  $strongarm->value = '';
  $export['apachesolr_stats_gadget_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_stats_ignore_ip_list';
  $strongarm->value = '';
  $export['apachesolr_stats_ignore_ip_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_stats_ignore_role_list';
  $strongarm->value = array(
    1 => 0,
    2 => 0,
  );
  $export['apachesolr_stats_ignore_role_list'] = $strongarm;

  return $export;
}
