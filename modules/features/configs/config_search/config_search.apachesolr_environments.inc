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
    'apachesolr_index_last' => array(
      'node' => array(
        'last_changed' => '1425394484',
        'last_entity_id' => '1586',
      ),
    ),
    'apachesolr_index_updated' => 1425394801,
    'apachesolr_last_optimize' => 1425384001,
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'article',
      1 => 'news',
      2 => 'phone_book',
      3 => 'shared',
    ),
    'file' => array(
      0 => 'document',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
