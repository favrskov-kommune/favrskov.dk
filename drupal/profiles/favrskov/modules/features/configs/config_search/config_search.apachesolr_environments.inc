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
  $environment->conf = array();
  $environment->index_bundles = array(
    'node' => array(
      0 => 'article',
      1 => 'job',
      2 => 'news',
      3 => 'phone_book',
      4 => 'shared',
      5 => 'volunteer_jobs',
    ),
    'file' => array(
      0 => 'document',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
