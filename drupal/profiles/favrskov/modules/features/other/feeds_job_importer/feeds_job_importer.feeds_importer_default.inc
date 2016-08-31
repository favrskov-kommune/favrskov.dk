<?php
/**
 * @file
 * feeds_job_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function feeds_job_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'job_importer';
  $feeds_importer->config = array(
    'name' => 'Job importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 1,
        'designated_hub' => 'http://feeds.favrskov.dk/joblistings.json',
        'request_timeout' => '',
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExJsonPath',
      'config' => array(
        'context' => array(
          'value' => '$.*',
        ),
        'sources' => array(
          'title' => array(
            'name' => 'Title',
            'value' => '$.job_headline',
            'debug' => 1,
            'weight' => '0',
          ),
          'apply_link_title' => array(
            'name' => 'Apply link title',
            'value' => '$.job_headline',
            'debug' => 0,
            'weight' => '1',
          ),
          'apply_link' => array(
            'name' => 'Apply link',
            'value' => '$.apply_link',
            'debug' => 0,
            'weight' => '2',
          ),
          'destination_link_title' => array(
            'name' => 'Destination link title',
            'value' => '$.job_headline',
            'debug' => 0,
            'weight' => '3',
          ),
          'destination_link' => array(
            'name' => 'Destination link',
            'value' => '$.destination_link',
            'debug' => 0,
            'weight' => '4',
          ),
          'headline' => array(
            'name' => 'Headline',
            'value' => '$.job_headline',
            'debug' => 0,
            'weight' => '5',
          ),
          'job_id' => array(
            'name' => 'Job ID',
            'value' => '$.job_id',
            'debug' => 0,
            'weight' => '6',
          ),
          'place_of_work' => array(
            'name' => 'Place of work',
            'value' => '$.place_of_work',
            'debug' => 0,
            'weight' => '7',
          ),
          'start_date' => array(
            'name' => 'Start date',
            'value' => '$.apply_date',
            'debug' => 0,
            'weight' => '8',
          ),
          'language' => array(
            'name' => 'Language',
            'value' => '',
            'debug' => 0,
            'weight' => '9',
          ),
        ),
        'display_errors' => 0,
        'debug_mode' => 0,
        'source_encoding' => array(
          0 => 'auto',
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '21600',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'apply_link_title',
            'target' => 'field_job_apply_link:title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'apply_link',
            'target' => 'field_job_apply_link:url',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'destination_link_title',
            'target' => 'field_job_destination_link:title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'destination_link',
            'target' => 'field_job_destination_link:url',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'headline',
            'target' => 'field_job_headline',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'job_id',
            'target' => 'field_job_id',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'place_of_work',
            'target' => 'field_job_place_of_work',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'start_date',
            'target' => 'field_job_start_date:start',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'language',
            'target' => 'language',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'job',
        'update_non_existent' => 'delete',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '21600',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['job_importer'] = $feeds_importer;

  return $export;
}
