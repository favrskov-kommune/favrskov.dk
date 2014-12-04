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
  $environment->url = 'http://localhost:8080/solr/roskilde';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_index_last' => array(
      'node' => array(
        'last_changed' => '1417703326',
        'last_entity_id' => '86',
      ),
    ),
    'apachesolr_index_updated' => 1417705179,
    'apachesolr_last_optimize' => 1417705179,
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
