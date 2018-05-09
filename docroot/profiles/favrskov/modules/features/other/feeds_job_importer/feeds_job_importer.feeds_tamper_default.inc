<?php
/**
 * @file
 * feeds_job_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function feeds_job_importer_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'job_importer-description-find_replace_regex';
  $feeds_tamper->importer = 'job_importer';
  $feeds_tamper->source = 'description';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/(style=")+[a-zA-Z0-9(-:;")\\s]*/',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['job_importer-description-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'job_importer-start_date-date_converter';
  $feeds_tamper->importer = 'job_importer';
  $feeds_tamper->source = 'start_date';
  $feeds_tamper->plugin_id = 'date_converter';
  $feeds_tamper->settings = array(
    'type' => 'update_date',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Convert date during export to format used on Favrskov site';
  $export['job_importer-start_date-date_converter'] = $feeds_tamper;

  return $export;
}
