<?php
/**
 * @file
 * os2web_kultunaut.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_kultunaut_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'os2web_kultunaut_rss_feed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OS2web Kultunaut RSS feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kultunaut events feed';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'D, d M Y H:i:s O';
  /* Field: Feeds item: Item GUID */
  $handler->display->display_options['fields']['guid']['id'] = 'guid';
  $handler->display->display_options['fields']['guid']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['guid']['field'] = 'guid';
  $handler->display->display_options['fields']['guid']['label'] = '';
  $handler->display->display_options['fields']['guid']['element_label_colon'] = FALSE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_kultunaut_event_url']['id'] = 'field_kultunaut_event_url';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['table'] = 'field_data_field_kultunaut_event_url';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['field'] = 'field_kultunaut_event_url';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_url']['type'] = 'text_plain';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_kultunaut_event_category']['id'] = 'field_kultunaut_event_category';
  $handler->display->display_options['fields']['field_kultunaut_event_category']['table'] = 'field_data_field_kultunaut_event_category';
  $handler->display->display_options['fields']['field_kultunaut_event_category']['field'] = 'field_kultunaut_event_category';
  $handler->display->display_options['fields']['field_kultunaut_event_category']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_category']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_category']['alter']['text'] = '[field_kultunaut_event_category]:';
  $handler->display->display_options['fields']['field_kultunaut_event_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['id'] = 'field_kultunaut_event_start_date';
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['table'] = 'field_data_field_kultunaut_event_start_date';
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['field'] = 'field_kultunaut_event_start_date';
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['settings'] = array(
    'format_type' => 'short_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[field_kultunaut_event_category] [field_kultunaut_event_start_date] 
[body]';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'ignore',
    'trim_options' => array(
      'text' => 'text',
    ),
  );
  /* Sort criterion: Content: Start Date (field_kultunaut_event_start_date) */
  $handler->display->display_options['sorts']['field_kultunaut_event_start_date_value']['id'] = 'field_kultunaut_event_start_date_value';
  $handler->display->display_options['sorts']['field_kultunaut_event_start_date_value']['table'] = 'field_data_field_kultunaut_event_start_date';
  $handler->display->display_options['sorts']['field_kultunaut_event_start_date_value']['field'] = 'field_kultunaut_event_start_date_value';
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
    'os2web_kultunaut_event' => 'os2web_kultunaut_event',
  );
  /* Filter criterion: Indhold: End Date (field_kultunaut_event_end_date) */

  $handler->display->display_options['filters']['field_kultunaut_event_end_date_value']['id'] = 'field_kultunaut_event_end_date_value';
  $handler->display->display_options['filters']['field_kultunaut_event_end_date_value']['table'] = 'field_data_field_kultunaut_event_end_date';
  $handler->display->display_options['filters']['field_kultunaut_event_end_date_value']['field'] = 'field_kultunaut_event_end_date_value';
  $handler->display->display_options['filters']['field_kultunaut_event_end_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_kultunaut_event_end_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_kultunaut_event_end_date_value']['default_date'] = 'today';

  /* Display: Kultunaut RSS feed */
  $handler = $view->new_display('feed', 'Kultunaut RSS feed', 'feed_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => '',
        'language' => '',
        'category' => '',
        'image' => '',
        'copyright' => '',
        'managingEditor' => '',
        'webMaster' => '',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'title',
        'link' => 'field_kultunaut_event_url',
        'description' => 'body',
        'author' => '',
        'category' => '',
        'comments' => '',
        'enclosure' => '',
        'guid' => 'guid',
        'pubDate' => 'changed',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['path'] = 'rss/kultunaut';
  $handler->display->display_options['sitename_title'] = 0;
  $translatables['os2web_kultunaut_rss_feed'] = array(
    t('Master'),
    t('Kultunaut events feed'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('[field_kultunaut_event_category]:'),
    t('[field_kultunaut_event_category] [field_kultunaut_event_start_date] 
[body]'),
    t('Kultunaut RSS feed'),
  );
  $export['os2web_kultunaut_rss_feed'] = $view;

  return $export;
}
