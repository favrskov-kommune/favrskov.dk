<?php

/**
 * @file
 * Views hooks implemented for the Apache Solr Exclude Node module.
 */

/**
 * Implements hook_views_data().
 */
function apachesolr_exclude_node_views_data() {
  $data = array();
  $data['apachesolr_exclude_node']['table']['group'] = t('Apache Solr Exclude Node');
  $data['apachesolr_exclude_node']['table']['join'] = array(
    'node' => array(
      'left_table' => 'node_revision',
      'left_field' => 'vid',
      'field' => 'vid',
      'type' => 'LEFT',
    ),
    'node_revision' => array(
      'left_field' => 'vid',
      'field' => 'vid',
      'type' => 'LEFT',
    ),
  );
  $data['apachesolr_exclude_node']['exclude'] = array(
    'title' => t('Exclude status'),
    'help' => t('Whether or not the content is excluded from Apache Solr.'),
    'field' => array(
      'handler' => 'views_handler_field_boolean',
      'click sortable' => TRUE,
      'output formats' => array(
        'excluded-notexcluded' => array(t('Excluded'), t('Not excluded')),
      ),
    ),
    'filter' => array(
      'handler' => 'apachesolr_exclude_node_views_handler_filter_status',
      'label' => t('Excluded'),
      'type' => 'yes-no',
      'use equal' => TRUE, // Use status = 1 instead of status <> 0 in WHERE statment
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  // Excluded
  /*
  $data['apachesolr_exclude_node']['excluded'] = array(
    'title' => t('Excluded from search'),
    'help' => t('Filters out content not excluded from Apache Solr.'),
    'filter' => array(
      'field' => 'exclude',
      'handler' => 'views_handler_filter_apachesolr_exclude_node_excluded',
      'label' => t('Excluded from search'),
    ),
  );
  */
  return $data;
}