<?php
/**
 * @file
 * os2web_meetings_aside.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_meetings_aside_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'os2web_meetings_aside';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OS2Web Meetings Aside';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = t('Next meeting');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['css_class'] = 'sidebar-filters';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_os2web_meetings_date) */
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['id'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['table'] = 'field_data_field_os2web_meetings_date';
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['field'] = 'field_os2web_meetings_date_value';
  /* Contextual filter: Content: Committee (field_os2web_meetings_committee) */
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['id'] = 'field_os2web_meetings_committee_tid';
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['table'] = 'field_data_field_os2web_meetings_committee';
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['field'] = 'field_os2web_meetings_committee_tid';
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Date -  start date (field_os2web_meetings_date) */
  $handler->display->display_options['arguments']['field_os2web_meetings_date_value']['id'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['arguments']['field_os2web_meetings_date_value']['table'] = 'field_data_field_os2web_meetings_date';
  $handler->display->display_options['arguments']['field_os2web_meetings_date_value']['field'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['arguments']['field_os2web_meetings_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_os2web_meetings_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_os2web_meetings_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_os2web_meetings_date_value']['year_range'] = '-9:+9';
  $handler->display->display_options['arguments']['field_os2web_meetings_date_value']['granularity'] = 'day';
  $handler->display->display_options['arguments']['field_os2web_meetings_date_value']['use_fromto'] = 'no';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_meetings_meeting' => 'os2web_meetings_meeting',
  );

  /* Display: Previous meeting */
  $handler = $view->new_display('panel_pane', 'Previous meeting', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = t('Previous meeting');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_os2web_meetings_date) */
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['id'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['table'] = 'field_data_field_os2web_meetings_date';
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['field'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['order'] = 'DESC';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_os2web_meetings_committee_tid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Committee',
    ),
    'field_os2web_meetings_date_value' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Date',
    ),
  );

  /* Display: Next meeting */
  $handler = $view->new_display('panel_pane', 'Next meeting', 'panel_pane_2');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_os2web_meetings_committee_tid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Committee',
    ),
    'field_os2web_meetings_date_value' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Date',
    ),
  );
  $translatables['os2web_meetings_aside'] = array(
    t('Master'),
    t('Next meeting'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('olol'),
    t('All'),
    t('Previous meeting'),
    t('View panes'),
  );
  $export['os2web_meetings_aside'] = $view;

  return $export;
}
