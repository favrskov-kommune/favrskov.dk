<?php

/**
 * @file
 * config_search.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function config_search_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'localhost server';
  $environment->url = 'http://localhost:8983/solr/favrskov';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_access_always_add_grants' => 0,
    'apachesolr_direct_commit' => 0,
    'apachesolr_multilingual_index_settings' => array(
      'apachesolr_multilingual_index' => 1,
      'apachesolr_multilingual_map_language_neutral' => 'und',
      'apachesolr_multilingual_clir' => array(
        'apachesolr_multilingual_index_translations' => 0,
        'apachesolr_multilingual_index_unpublished_translations' => 0,
        'apachesolr_multilingual_index_term_translations' => 0,
      ),
    ),
    'apachesolr_read_only' => '0',
    'apachesolr_soft_commit' => 0,
    'group_field' => 'tos_name',
    'group_limit' => '2',
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'article',
      1 => 'news',
      2 => 'phone_book',
    ),
    'file' => array(
      0 => 'document',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
