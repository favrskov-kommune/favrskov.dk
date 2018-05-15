<?php
/**
 * @file
 * feeds_volunteer_jobs_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function feeds_volunteer_jobs_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = TRUE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'volunteer_jobs';
  $feeds_importer->config = array(
    'name' => 'Volunteer jobs',
    'description' => 'Imports volunteer jobs from feeds.favrskov.dk service.',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 1,
        'designated_hub' => 'https://feeds.favrskov.dk/frivilligejobs.json',
        'request_timeout' => '',
        'auto_scheme' => 'http',
        'accept_invalid_cert' => 0,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExJsonPath',
      'config' => array(
        'sources' => array(
          'title' => array(
            'name' => 'Title',
            'value' => '$.Title',
            'debug' => 1,
            'weight' => '1',
          ),
          'resume' => array(
            'name' => 'Resume',
            'value' => '$.resume',
            'debug' => 0,
            'weight' => '2',
          ),
          'organisation' => array(
            'name' => 'Organization',
            'value' => '$.organisation',
            'debug' => 0,
            'weight' => '3',
          ),
          'apply_url_title' => array(
            'name' => 'Apply url title',
            'value' => '$.Title',
            'debug' => 0,
            'weight' => '4',
          ),
          'apply_url' => array(
            'name' => 'Apply url',
            'value' => '$.apply_url',
            'debug' => 0,
            'weight' => '5',
          ),
        ),
        'context' => array(
          'value' => '$.*',
        ),
        'display_errors' => 0,
        'source_encoding' => array(
          0 => 'auto',
        ),
        'debug_mode' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '3600',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'resume',
            'target' => 'field_volunteer_jobs_resume',
            'format' => 'filtered_html',
          ),
          2 => array(
            'source' => 'organisation',
            'target' => 'field_volunteer_jobs_institution',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'apply_url_title',
            'target' => 'field_volunteer_jobs_apply_url:title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'apply_url',
            'target' => 'field_volunteer_jobs_apply_url:url',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'update_non_existent' => 'delete',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'volunteer_jobs',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '3600',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['volunteer_jobs'] = $feeds_importer;

  return $export;
}
