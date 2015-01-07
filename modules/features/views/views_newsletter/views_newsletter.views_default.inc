<?php
/**
 * @file
 * views_newsletter.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_newsletter_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'view_newsletter';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Newsletter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Date string */
  $handler->display->display_options['fields']['field_date_string']['id'] = 'field_date_string';
  $handler->display->display_options['fields']['field_date_string']['table'] = 'field_data_field_date_string';
  $handler->display->display_options['fields']['field_date_string']['field'] = 'field_date_string';
  $handler->display->display_options['fields']['field_date_string']['label'] = '';
  $handler->display->display_options['fields']['field_date_string']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_string']['element_default_classes'] = FALSE;
  /* Field: Content: Main story title */
  $handler->display->display_options['fields']['field_main_story_title']['id'] = 'field_main_story_title';
  $handler->display->display_options['fields']['field_main_story_title']['table'] = 'field_data_field_main_story_title';
  $handler->display->display_options['fields']['field_main_story_title']['field'] = 'field_main_story_title';
  $handler->display->display_options['fields']['field_main_story_title']['label'] = '';
  $handler->display->display_options['fields']['field_main_story_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_main_story_title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_main_story_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_story_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_main_story_title']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Main story image */
  $handler->display->display_options['fields']['field_main_story_image']['id'] = 'field_main_story_image';
  $handler->display->display_options['fields']['field_main_story_image']['table'] = 'field_data_field_main_story_image';
  $handler->display->display_options['fields']['field_main_story_image']['field'] = 'field_main_story_image';
  $handler->display->display_options['fields']['field_main_story_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_story_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_story_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_main_story_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_story_image']['settings'] = array(
    'image_style' => 'newsletter',
    'image_link' => '',
  );
  /* Field: Content: Main story image link */
  $handler->display->display_options['fields']['field_main_story_image_link']['id'] = 'field_main_story_image_link';
  $handler->display->display_options['fields']['field_main_story_image_link']['table'] = 'field_data_field_main_story_image_link';
  $handler->display->display_options['fields']['field_main_story_image_link']['field'] = 'field_main_story_image_link';
  $handler->display->display_options['fields']['field_main_story_image_link']['label'] = '';
  $handler->display->display_options['fields']['field_main_story_image_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_story_image_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_main_story_image_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_main_story_image_link']['type'] = 'link_absolute';
  /* Field: Content: Main story image description */
  $handler->display->display_options['fields']['field_main_story_image_desc']['id'] = 'field_main_story_image_desc';
  $handler->display->display_options['fields']['field_main_story_image_desc']['table'] = 'field_data_field_main_story_image_desc';
  $handler->display->display_options['fields']['field_main_story_image_desc']['field'] = 'field_main_story_image_desc';
  $handler->display->display_options['fields']['field_main_story_image_desc']['label'] = '';
  $handler->display->display_options['fields']['field_main_story_image_desc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_story_image_desc']['element_default_classes'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Content: Send time */
  $handler->display->display_options['fields']['field_send_time']['id'] = 'field_send_time';
  $handler->display->display_options['fields']['field_send_time']['table'] = 'field_data_field_send_time';
  $handler->display->display_options['fields']['field_send_time']['field'] = 'field_send_time';
  $handler->display->display_options['fields']['field_send_time']['label'] = '';
  $handler->display->display_options['fields']['field_send_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_send_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_send_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_send_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'view_newsletter';
  $handler->display->display_options['fields']['view']['display'] = 'related_news_list';
  $handler->display->display_options['fields']['view']['arguments'] = '!nid';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = '';
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_1']['view'] = 'view_newsletter';
  $handler->display->display_options['fields']['view_1']['display'] = 'related_events_list';
  $handler->display->display_options['fields']['view_1']['arguments'] = '!nid';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_2']['id'] = 'view_2';
  $handler->display->display_options['fields']['view_2']['table'] = 'views';
  $handler->display->display_options['fields']['view_2']['field'] = 'view';
  $handler->display->display_options['fields']['view_2']['label'] = '';
  $handler->display->display_options['fields']['view_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_2']['view'] = 'view_newsletter';
  $handler->display->display_options['fields']['view_2']['display'] = 'related_links_list';
  $handler->display->display_options['fields']['view_2']['arguments'] = '!nid';
  /* Field: Content: Created in MailChimp time */
  $handler->display->display_options['fields']['field_created_in_mailchimp_time']['id'] = 'field_created_in_mailchimp_time';
  $handler->display->display_options['fields']['field_created_in_mailchimp_time']['table'] = 'field_data_field_created_in_mailchimp_time';
  $handler->display->display_options['fields']['field_created_in_mailchimp_time']['field'] = 'field_created_in_mailchimp_time';
  $handler->display->display_options['fields']['field_created_in_mailchimp_time']['label'] = '';
  $handler->display->display_options['fields']['field_created_in_mailchimp_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_created_in_mailchimp_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_created_in_mailchimp_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_created_in_mailchimp_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: MailChimp Template id */
  $handler->display->display_options['fields']['field_mailchimp_template_id']['id'] = 'field_mailchimp_template_id';
  $handler->display->display_options['fields']['field_mailchimp_template_id']['table'] = 'field_data_field_mailchimp_template_id';
  $handler->display->display_options['fields']['field_mailchimp_template_id']['field'] = 'field_mailchimp_template_id';
  $handler->display->display_options['fields']['field_mailchimp_template_id']['label'] = '';
  $handler->display->display_options['fields']['field_mailchimp_template_id']['element_type'] = '0';
  $handler->display->display_options['fields']['field_mailchimp_template_id']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_mailchimp_template_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mailchimp_template_id']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_mailchimp_template_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_mailchimp_template_id']['type'] = 'text_plain';
  /* Sort criterion: Content: Send time (field_send_time) */
  $handler->display->display_options['sorts']['field_send_time_value']['id'] = 'field_send_time_value';
  $handler->display->display_options['sorts']['field_send_time_value']['table'] = 'field_data_field_send_time';
  $handler->display->display_options['sorts']['field_send_time_value']['field'] = 'field_send_time_value';
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
    'newsletter' => 'newsletter',
  );
  /* Filter criterion: Content: Created in MailChimp time (field_created_in_mailchimp_time) */
  $handler->display->display_options['filters']['field_created_in_mailchimp_time_value']['id'] = 'field_created_in_mailchimp_time_value';
  $handler->display->display_options['filters']['field_created_in_mailchimp_time_value']['table'] = 'field_data_field_created_in_mailchimp_time';
  $handler->display->display_options['filters']['field_created_in_mailchimp_time_value']['field'] = 'field_created_in_mailchimp_time_value';
  $handler->display->display_options['filters']['field_created_in_mailchimp_time_value']['operator'] = 'empty';
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'minute';
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now - 5  minutes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_send_time.field_send_time_value' => 'field_data_field_send_time.field_send_time_value',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter_1']['id'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter_1']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter_1']['operator'] = '<=';
  $handler->display->display_options['filters']['date_filter_1']['granularity'] = 'minute';
  $handler->display->display_options['filters']['date_filter_1']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter_1']['date_fields'] = array(
    'field_data_field_send_time.field_send_time_value' => 'field_data_field_send_time.field_send_time_value',
  );

  /* Display: Newsletter list */
  $handler = $view->new_display('panel_pane', 'Newsletter list', 'newsletter_list');
  $handler->display->display_options['display_description'] = 'Used for creatin mailchimp capmaign';

  /* Display: Related news list */
  $handler = $view->new_display('panel_pane', 'Related news list', 'related_news_list');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_image_thumbnail' => 'field_image_thumbnail',
    'title' => 'title',
    'field_teaser' => 'field_teaser',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_image_thumbnail' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_teaser' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Related news (field_related_news) */
  $handler->display->display_options['relationships']['field_related_news_nid']['id'] = 'field_related_news_nid';
  $handler->display->display_options['relationships']['field_related_news_nid']['table'] = 'field_data_field_related_news';
  $handler->display->display_options['relationships']['field_related_news_nid']['field'] = 'field_related_news_nid';
  $handler->display->display_options['relationships']['field_related_news_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_related_news_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_related_news_nid';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Image / thumbnail */
  $handler->display->display_options['fields']['field_image_thumbnail']['id'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['table'] = 'field_data_field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['field'] = 'field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail']['relationship'] = 'field_related_news_nid';
  $handler->display->display_options['fields']['field_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_image_thumbnail']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image_thumbnail']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_thumbnail']['settings'] = array(
    'image_style' => 'newsletter_news',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_thumbnail']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image_thumbnail']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_image_thumbnail']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_related_news_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['relationship'] = 'field_related_news_nid';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['element_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_related_news_nid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Related events list */
  $handler = $view->new_display('panel_pane', 'Related events list', 'related_events_list');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_os2web_ec_date' => 'field_os2web_ec_date',
    'field_os2web_ec_tax_category' => 'field_os2web_ec_tax_category',
    'title' => 'title',
    'field_teaser' => 'field_teaser',
    'field_os2web_ec_date_1' => 'field_os2web_ec_date_1',
    'field_os2web_ec_location_name' => 'field_os2web_ec_location_name',
    'field_os2web_ec_free_event' => 'field_os2web_ec_free_event',
    'field_os2web_ec_price' => 'field_os2web_ec_price',
    'views_ifempty' => 'views_ifempty',
    'field_os2web_ec_color' => 'field_os2web_ec_color',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_os2web_ec_date' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_ec_tax_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_teaser' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_ec_date_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_ec_location_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_ec_free_event' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_ec_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_ifempty' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_ec_color' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Related events (field_related_events) */
  $handler->display->display_options['relationships']['field_related_events_nid']['id'] = 'field_related_events_nid';
  $handler->display->display_options['relationships']['field_related_events_nid']['table'] = 'field_data_field_related_events';
  $handler->display->display_options['relationships']['field_related_events_nid']['field'] = 'field_related_events_nid';
  $handler->display->display_options['relationships']['field_related_events_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_related_events_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_kultunaut_event_url']['id'] = 'field_kultunaut_event_url';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['table'] = 'field_data_field_kultunaut_event_url';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['field'] = 'field_kultunaut_event_url';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['relationship'] = 'field_related_events_nid';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_url']['type'] = 'text_plain';
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['id'] = 'field_kultunaut_event_start_date';
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['table'] = 'field_data_field_kultunaut_event_start_date';
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['field'] = 'field_kultunaut_event_start_date';
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['relationship'] = 'field_related_events_nid';
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['settings'] = array(
    'format_type' => 'event_front_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Kategori */
  $handler->display->display_options['fields']['field_kultunaut_event_category']['id'] = 'field_kultunaut_event_category';
  $handler->display->display_options['fields']['field_kultunaut_event_category']['table'] = 'field_data_field_kultunaut_event_category';
  $handler->display->display_options['fields']['field_kultunaut_event_category']['field'] = 'field_kultunaut_event_category';
  $handler->display->display_options['fields']['field_kultunaut_event_category']['relationship'] = 'field_related_events_nid';
  $handler->display->display_options['fields']['field_kultunaut_event_category']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_related_events_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_kultunaut_event_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_related_events_nid';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
    'trim_type' => 'chars',
    'trim_suffix' => '',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'full',
    'trim_options' => array(
      'text' => 'text',
    ),
  );
  /* Field: Content: Dato */
  $handler->display->display_options['fields']['field_kultunaut_event_date']['id'] = 'field_kultunaut_event_date';
  $handler->display->display_options['fields']['field_kultunaut_event_date']['table'] = 'field_data_field_kultunaut_event_date';
  $handler->display->display_options['fields']['field_kultunaut_event_date']['field'] = 'field_kultunaut_event_date';
  $handler->display->display_options['fields']['field_kultunaut_event_date']['relationship'] = 'field_related_events_nid';
  $handler->display->display_options['fields']['field_kultunaut_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_date']['type'] = 'text_plain';
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_kultunaut_event_time']['id'] = 'field_kultunaut_event_time';
  $handler->display->display_options['fields']['field_kultunaut_event_time']['table'] = 'field_data_field_kultunaut_event_time';
  $handler->display->display_options['fields']['field_kultunaut_event_time']['field'] = 'field_kultunaut_event_time';
  $handler->display->display_options['fields']['field_kultunaut_event_time']['relationship'] = 'field_related_events_nid';
  $handler->display->display_options['fields']['field_kultunaut_event_time']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_time']['type'] = 'text_plain';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_kultunaut_event_location']['id'] = 'field_kultunaut_event_location';
  $handler->display->display_options['fields']['field_kultunaut_event_location']['table'] = 'field_data_field_kultunaut_event_location';
  $handler->display->display_options['fields']['field_kultunaut_event_location']['field'] = 'field_kultunaut_event_location';
  $handler->display->display_options['fields']['field_kultunaut_event_location']['relationship'] = 'field_related_events_nid';
  $handler->display->display_options['fields']['field_kultunaut_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_location']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_related_news_nid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Related links list */
  $handler = $view->new_display('panel_pane', 'Related links list', 'related_links_list');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_image_thumbnail' => 'field_image_thumbnail',
    'title' => 'title',
    'field_teaser' => 'field_teaser',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_image_thumbnail' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_teaser' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Related links (field_related_links) */
  $handler->display->display_options['relationships']['field_related_links_value']['id'] = 'field_related_links_value';
  $handler->display->display_options['relationships']['field_related_links_value']['table'] = 'field_data_field_related_links';
  $handler->display->display_options['relationships']['field_related_links_value']['field'] = 'field_related_links_value';
  $handler->display->display_options['relationships']['field_related_links_value']['label'] = 'field_related_links';
  $handler->display->display_options['relationships']['field_related_links_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Related content */
  $handler->display->display_options['fields']['field_related_links_content_1']['id'] = 'field_related_links_content_1';
  $handler->display->display_options['fields']['field_related_links_content_1']['table'] = 'field_data_field_related_links_content';
  $handler->display->display_options['fields']['field_related_links_content_1']['field'] = 'field_related_links_content';
  $handler->display->display_options['fields']['field_related_links_content_1']['relationship'] = 'field_related_links_value';
  $handler->display->display_options['fields']['field_related_links_content_1']['label'] = '';
  $handler->display->display_options['fields']['field_related_links_content_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_related_links_content_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_links_content_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_related_links_content_1']['type'] = 'node_reference_path';
  $handler->display->display_options['fields']['field_related_links_content_1']['settings'] = array(
    'alias' => 1,
    'absolute' => 1,
  );
  /* Field: Field collection item: Related content */
  $handler->display->display_options['fields']['field_related_links_content']['id'] = 'field_related_links_content';
  $handler->display->display_options['fields']['field_related_links_content']['table'] = 'field_data_field_related_links_content';
  $handler->display->display_options['fields']['field_related_links_content']['field'] = 'field_related_links_content';
  $handler->display->display_options['fields']['field_related_links_content']['relationship'] = 'field_related_links_value';
  $handler->display->display_options['fields']['field_related_links_content']['label'] = '';
  $handler->display->display_options['fields']['field_related_links_content']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_related_links_content']['alter']['path'] = '[field_related_links_content_1]';
  $handler->display->display_options['fields']['field_related_links_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_links_content']['type'] = 'node_reference_plain';
  /* Field: Field collection item: Related link */
  $handler->display->display_options['fields']['field_related_links_link']['id'] = 'field_related_links_link';
  $handler->display->display_options['fields']['field_related_links_link']['table'] = 'field_data_field_related_links_link';
  $handler->display->display_options['fields']['field_related_links_link']['field'] = 'field_related_links_link';
  $handler->display->display_options['fields']['field_related_links_link']['relationship'] = 'field_related_links_value';
  $handler->display->display_options['fields']['field_related_links_link']['label'] = '';
  $handler->display->display_options['fields']['field_related_links_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_links_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_related_links_link']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_related_news_nid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Newsletter update */
  $handler = $view->new_display('panel_pane', 'Newsletter update', 'newsletter_update');
  $handler->display->display_options['display_description'] = 'Used for update mailchimp capmaign';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'newsletter' => 'newsletter',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Created in MailChimp time (field_created_in_mailchimp_time) */
  $handler->display->display_options['filters']['field_created_in_mailchimp_time_value']['id'] = 'field_created_in_mailchimp_time_value';
  $handler->display->display_options['filters']['field_created_in_mailchimp_time_value']['table'] = 'field_data_field_created_in_mailchimp_time';
  $handler->display->display_options['filters']['field_created_in_mailchimp_time_value']['field'] = 'field_created_in_mailchimp_time_value';
  $handler->display->display_options['filters']['field_created_in_mailchimp_time_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_created_in_mailchimp_time_value']['group'] = 1;
  /* Filter criterion: Content: MailChimp campaign id (field_mailchimp_campaign_id) */
  $handler->display->display_options['filters']['field_mailchimp_campaign_id_value']['id'] = 'field_mailchimp_campaign_id_value';
  $handler->display->display_options['filters']['field_mailchimp_campaign_id_value']['table'] = 'field_data_field_mailchimp_campaign_id';
  $handler->display->display_options['filters']['field_mailchimp_campaign_id_value']['field'] = 'field_mailchimp_campaign_id_value';
  $handler->display->display_options['filters']['field_mailchimp_campaign_id_value']['operator'] = 'not empty';
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'Nid';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'none',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $translatables['view_newsletter'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Newsletter list'),
    t('Used for creatin mailchimp capmaign'),
    t('View panes'),
    t('Related news list'),
    t('field_related_news'),
    t('All'),
    t('Related events list'),
    t('field_related_events'),
    t('Related links list'),
    t('field_related_links'),
    t('Newsletter update'),
    t('Used for update mailchimp capmaign'),
    t('Nid'),
  );
  $export['view_newsletter'] = $view;

  return $export;
}
