<?php
/**
 * @file
 * os2web_social_directory.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_social_directory_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'os2web_social_directory_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'apachesolr__solr';
  $view->human_name = 'OS2web Social Directory List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'label' => 'label',
    'sm_vid_OS2web_Social_Directory___Audience' => 'sm_vid_OS2web_Social_Directory___Audience',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sm_vid_OS2web_Social_Directory___Audience' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Apache Solr: url */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = 'Name';
  $handler->display->display_options['fields']['label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['path'] = '[url]';
  /* Field: Apache Solr: sm_vid_OS2web_Social_Directory_–_Audience */
  $handler->display->display_options['fields']['sm_vid_OS2web_Social_Directory___Audience']['id'] = 'sm_vid_OS2web_Social_Directory___Audience';
  $handler->display->display_options['fields']['sm_vid_OS2web_Social_Directory___Audience']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['sm_vid_OS2web_Social_Directory___Audience']['field'] = 'sm_vid_OS2web_Social_Directory___Audience';
  $handler->display->display_options['fields']['sm_vid_OS2web_Social_Directory___Audience']['label'] = 'Audience';
  /* Filter criterion: Apache Solr: bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['value'] = 'os2web_social_directory';
  /* Filter criterion: Apache Solr: Search */
  $handler->display->display_options['filters']['keyword']['id'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['keyword']['field'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keyword']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['keyword']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keyword']['expose']['operator'] = 'keyword_op';
  $handler->display->display_options['filters']['keyword']['expose']['identifier'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Apache Solr: sm_vid_OS2web_Social_Directory_–_Audience */
  $handler->display->display_options['filters']['sm_vid_OS2web_Social_Directory___Audience']['id'] = 'sm_vid_OS2web_Social_Directory___Audience';
  $handler->display->display_options['filters']['sm_vid_OS2web_Social_Directory___Audience']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['sm_vid_OS2web_Social_Directory___Audience']['field'] = 'sm_vid_OS2web_Social_Directory___Audience';
  $handler->display->display_options['filters']['sm_vid_OS2web_Social_Directory___Audience']['value'] = array();
  $handler->display->display_options['filters']['sm_vid_OS2web_Social_Directory___Audience']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sm_vid_OS2web_Social_Directory___Audience']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['sm_vid_OS2web_Social_Directory___Audience']['expose']['label'] = 'Audience';
  $handler->display->display_options['filters']['sm_vid_OS2web_Social_Directory___Audience']['expose']['operator'] = 'sm_vid_OS2web_Social_Directory___Audience_op';
  $handler->display->display_options['filters']['sm_vid_OS2web_Social_Directory___Audience']['expose']['identifier'] = 'sm_vid_OS2web_Social_Directory___Audience';
  $handler->display->display_options['filters']['sm_vid_OS2web_Social_Directory___Audience']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['sm_vid_OS2web_Social_Directory___Audience']['type'] = 'select';
  /* Filter criterion: Apache Solr: sm_vid_OS2web_Social_Directory_–_Activity */
  $handler->display->display_options['filters']['sm_vid_OS2web_Social_Directory_–_Activity']['id'] = 'sm_vid_OS2web_Social_Directory_–_Activity';
  $handler->display->display_options['filters']['sm_vid_OS2web_Social_Directory_–_Activity']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['sm_vid_OS2web_Social_Directory_–_Activity']['field'] = 'sm_vid_OS2web_Social_Directory_–_Activity';
  $handler->display->display_options['filters']['sm_vid_OS2web_Social_Directory_–_Activity']['value'] = array();
  $handler->display->display_options['filters']['sm_vid_OS2web_Social_Directory_–_Activity']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sm_vid_OS2web_Social_Directory_–_Activity']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['sm_vid_OS2web_Social_Directory_–_Activity']['expose']['label'] = 'Activity';
  $handler->display->display_options['filters']['sm_vid_OS2web_Social_Directory_–_Activity']['expose']['operator'] = 'sm_vid_OS2web_Social_Directory_–_Activity_op';
  $handler->display->display_options['filters']['sm_vid_OS2web_Social_Directory_–_Activity']['expose']['identifier'] = 'sm_vid_OS2web_Social_Directory_–_Activity';
  $handler->display->display_options['filters']['sm_vid_OS2web_Social_Directory_–_Activity']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['sm_vid_OS2web_Social_Directory_–_Activity']['type'] = 'select';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $translatables['os2web_social_directory_list'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Name'),
    t('Audience'),
    t('Search'),
    t('Activity'),
    t('Content pane'),
    t('View panes'),
  );
  $export['os2web_social_directory_list'] = $view;

  return $export;
}
