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
  $environment->url = 'http://localhost:8080/solr/favrskov';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_access_always_add_grants' => 1,
    'apachesolr_direct_commit' => 1,
    'apachesolr_index_last' => array(
      'node' => array(
        'last_changed' => '1417703326',
        'last_entity_id' => '129',
      ),
    ),
    'apachesolr_index_updated' => 0,
    'apachesolr_last_optimize' => 1417705179,
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
    'apachesolr_soft_commit' => 1,
    'group_field' => 'tos_name',
    'group_limit' => '2',
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'article',
      1 => 'news',
      2 => 'phone_book',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
