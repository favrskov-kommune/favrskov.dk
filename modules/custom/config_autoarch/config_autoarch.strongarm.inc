<?php
/**
 * @file
 * config_autoarch.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function config_autoarch_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autoarch_date_granularity';
  $strongarm->value = 'Y-m-d';
  $export['autoarch_date_granularity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autoarch_node_types';
  $strongarm->value = array(
    'news' => 'news',
    'article' => 0,
    'banner_element' => 0,
    'borger_dk_article' => 0,
    'faq' => 0,
    'factbox' => 0,
    'frontpage' => 0,
    'os2web_event_calendar' => 0,
    'os2web_hr_manager_job' => 0,
    'phone_book' => 0,
    'self_service' => 0,
    'shared' => 0,
    'slider_element' => 0,
    'subjectpage' => 0,
    'webform' => 0,
  );
  $export['autoarch_node_types'] = $strongarm;

  return $export;
}
