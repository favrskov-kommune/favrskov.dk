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
        'designated_hub' => 'https://signatur.frontlab.com/ExtJobs/Rss.aspx?ClientId=1435',
        'request_timeout' => '',
        'auto_scheme' => 'http',
        'accept_invalid_cert' => 0,
        'cache_http_result' => 1,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'title',
          'xpathparser:2' => 'category',
          'xpathparser:4' => 'link',
          'xpathparser:5' => 'description',
          'xpathparser:6' => 'deadline',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:2' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
        ),
        'context' => '//item',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:2' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
          ),
        ),
        'allow_override' => 1,
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
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => 0,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_job_category',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_job_destination_link:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_job_description',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_job_deadline:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'job',
        'update_non_existent' => 'delete',
        'insert_new' => 1,
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '3600',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['job_importer'] = $feeds_importer;

  return $export;
}
