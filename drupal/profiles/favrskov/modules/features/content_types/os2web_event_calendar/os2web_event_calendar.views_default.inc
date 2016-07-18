<?php
/**
 * @file
 * os2web_event_calendar.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_event_calendar_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'os2web_event_calendar_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OS2web Event Calendar List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'View all';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_os2web_ec_tax_category_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['advance']['content_class'] = '.display.grid.clearfix';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['switcher'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Taxonomy, Category (field_os2web_ec_tax_category) */
  $handler->display->display_options['relationships']['field_os2web_ec_tax_category_tid']['id'] = 'field_os2web_ec_tax_category_tid';
  $handler->display->display_options['relationships']['field_os2web_ec_tax_category_tid']['table'] = 'field_data_field_os2web_ec_tax_category';
  $handler->display->display_options['relationships']['field_os2web_ec_tax_category_tid']['field'] = 'field_os2web_ec_tax_category_tid';
  $handler->display->display_options['relationships']['field_os2web_ec_tax_category_tid']['label'] = 'term';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Taxonomy, Category */
  $handler->display->display_options['fields']['field_os2web_ec_tax_category']['id'] = 'field_os2web_ec_tax_category';
  $handler->display->display_options['fields']['field_os2web_ec_tax_category']['table'] = 'field_data_field_os2web_ec_tax_category';
  $handler->display->display_options['fields']['field_os2web_ec_tax_category']['field'] = 'field_os2web_ec_tax_category';
  $handler->display->display_options['fields']['field_os2web_ec_tax_category']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_ec_tax_category']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_os2web_ec_tax_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_ec_tax_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Start date - End date */
  $handler->display->display_options['fields']['field_os2web_ec_date']['id'] = 'field_os2web_ec_date';
  $handler->display->display_options['fields']['field_os2web_ec_date']['table'] = 'field_data_field_os2web_ec_date';
  $handler->display->display_options['fields']['field_os2web_ec_date']['field'] = 'field_os2web_ec_date';
  $handler->display->display_options['fields']['field_os2web_ec_date']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_ec_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_ec_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_ec_date']['settings'] = array(
    'format_type' => 'calendar_event_front_date',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => 'now',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_os2web_ec_date']['delta_offset'] = '0';
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_os2web_ec_teaser']['id'] = 'field_os2web_ec_teaser';
  $handler->display->display_options['fields']['field_os2web_ec_teaser']['table'] = 'field_data_field_os2web_ec_teaser';
  $handler->display->display_options['fields']['field_os2web_ec_teaser']['field'] = 'field_os2web_ec_teaser';
  $handler->display->display_options['fields']['field_os2web_ec_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_ec_teaser']['element_label_colon'] = FALSE;
  /* Field: Content: Start date - End date */
  $handler->display->display_options['fields']['field_os2web_ec_date_1']['id'] = 'field_os2web_ec_date_1';
  $handler->display->display_options['fields']['field_os2web_ec_date_1']['table'] = 'field_data_field_os2web_ec_date';
  $handler->display->display_options['fields']['field_os2web_ec_date_1']['field'] = 'field_os2web_ec_date';
  $handler->display->display_options['fields']['field_os2web_ec_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_ec_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_ec_date_1']['settings'] = array(
    'format_type' => 'ec_date',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => 'now',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_os2web_ec_date_1']['delta_offset'] = '0';
  /* Field: Content: Location name */
  $handler->display->display_options['fields']['field_os2web_ec_location_name']['id'] = 'field_os2web_ec_location_name';
  $handler->display->display_options['fields']['field_os2web_ec_location_name']['table'] = 'field_data_field_os2web_ec_location_name';
  $handler->display->display_options['fields']['field_os2web_ec_location_name']['field'] = 'field_os2web_ec_location_name';
  $handler->display->display_options['fields']['field_os2web_ec_location_name']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_ec_location_name']['element_label_colon'] = FALSE;
  /* Field: Content: Free event */
  $handler->display->display_options['fields']['field_os2web_ec_free_event']['id'] = 'field_os2web_ec_free_event';
  $handler->display->display_options['fields']['field_os2web_ec_free_event']['table'] = 'field_data_field_os2web_ec_free_event';
  $handler->display->display_options['fields']['field_os2web_ec_free_event']['field'] = 'field_os2web_ec_free_event';
  $handler->display->display_options['fields']['field_os2web_ec_free_event']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_ec_free_event']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_ec_free_event']['alter']['text'] = 'Free';
  $handler->display->display_options['fields']['field_os2web_ec_free_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_ec_free_event']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_ec_free_event']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_ec_free_event']['type'] = 'list_key';
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_os2web_ec_price']['id'] = 'field_os2web_ec_price';
  $handler->display->display_options['fields']['field_os2web_ec_price']['table'] = 'field_data_field_os2web_ec_price';
  $handler->display->display_options['fields']['field_os2web_ec_price']['field'] = 'field_os2web_ec_price';
  $handler->display->display_options['fields']['field_os2web_ec_price']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_ec_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_ec_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_ec_price']['type'] = 'text_plain';
  /* Field: Views If Empty: Views If Empty */
  $handler->display->display_options['fields']['views_ifempty']['id'] = 'views_ifempty';
  $handler->display->display_options['fields']['views_ifempty']['table'] = 'views_ifempty';
  $handler->display->display_options['fields']['views_ifempty']['field'] = 'views_ifempty';
  $handler->display->display_options['fields']['views_ifempty']['label'] = '';
  $handler->display->display_options['fields']['views_ifempty']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_ifempty']['emptyfield'] = 'field_os2web_ec_free_event';
  $handler->display->display_options['fields']['views_ifempty']['outputfield'] = 'field_os2web_ec_price';
  /* Field: Taxonomy term: Color */
  $handler->display->display_options['fields']['field_os2web_ec_color']['id'] = 'field_os2web_ec_color';
  $handler->display->display_options['fields']['field_os2web_ec_color']['table'] = 'field_data_field_os2web_ec_color';
  $handler->display->display_options['fields']['field_os2web_ec_color']['field'] = 'field_os2web_ec_color';
  $handler->display->display_options['fields']['field_os2web_ec_color']['relationship'] = 'field_os2web_ec_tax_category_tid';
  $handler->display->display_options['fields']['field_os2web_ec_color']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_ec_color']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_ec_color']['alter']['text'] = '[field_os2web_ec_color-rgb] ';
  $handler->display->display_options['fields']['field_os2web_ec_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_ec_color']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_ec_color']['type'] = 'colorfield_raw_rgb';
  $handler->display->display_options['fields']['field_os2web_ec_color']['settings'] = array(
    'display_hash' => 1,
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Start date - End date -  start date (field_os2web_ec_date) */
  $handler->display->display_options['sorts']['field_os2web_ec_date_value']['id'] = 'field_os2web_ec_date_value';
  $handler->display->display_options['sorts']['field_os2web_ec_date_value']['table'] = 'field_data_field_os2web_ec_date';
  $handler->display->display_options['sorts']['field_os2web_ec_date_value']['field'] = 'field_os2web_ec_date_value';
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
    'os2web_event_calendar' => 'os2web_event_calendar',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Taxonomy, Category (field_os2web_ec_tax_category) */
  $handler->display->display_options['filters']['field_os2web_ec_tax_category_tid']['id'] = 'field_os2web_ec_tax_category_tid';
  $handler->display->display_options['filters']['field_os2web_ec_tax_category_tid']['table'] = 'field_data_field_os2web_ec_tax_category';
  $handler->display->display_options['filters']['field_os2web_ec_tax_category_tid']['field'] = 'field_os2web_ec_tax_category_tid';
  $handler->display->display_options['filters']['field_os2web_ec_tax_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_os2web_ec_tax_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_ec_tax_category_tid']['expose']['operator_id'] = 'field_os2web_ec_tax_category_tid_op';
  $handler->display->display_options['filters']['field_os2web_ec_tax_category_tid']['expose']['operator'] = 'field_os2web_ec_tax_category_tid_op';
  $handler->display->display_options['filters']['field_os2web_ec_tax_category_tid']['expose']['identifier'] = 'ecategory';
  $handler->display->display_options['filters']['field_os2web_ec_tax_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_os2web_ec_tax_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_os2web_ec_tax_category_tid']['vocabulary'] = 'os2web_event_calendar_categories';
  /* Filter criterion: Content: Start date - End date - end date (field_os2web_ec_date:value2) */
  $handler->display->display_options['filters']['field_os2web_ec_date_value2']['id'] = 'field_os2web_ec_date_value2';
  $handler->display->display_options['filters']['field_os2web_ec_date_value2']['table'] = 'field_data_field_os2web_ec_date';
  $handler->display->display_options['filters']['field_os2web_ec_date_value2']['field'] = 'field_os2web_ec_date_value2';
  $handler->display->display_options['filters']['field_os2web_ec_date_value2']['operator'] = '>';
  $handler->display->display_options['filters']['field_os2web_ec_date_value2']['expose']['operator_id'] = 'field_os2web_ec_date_value2_op';
  $handler->display->display_options['filters']['field_os2web_ec_date_value2']['expose']['label'] = 'Start date - End date - end date (field_os2web_ec_date:value2)';
  $handler->display->display_options['filters']['field_os2web_ec_date_value2']['expose']['operator'] = 'field_os2web_ec_date_value2_op';
  $handler->display->display_options['filters']['field_os2web_ec_date_value2']['expose']['identifier'] = 'field_os2web_ec_date_value2';
  $handler->display->display_options['filters']['field_os2web_ec_date_value2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_os2web_ec_date_value2']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_os2web_ec_date_value2']['add_delta'] = 'yes';

  /* Display: Listing pane */
  $handler = $view->new_display('panel_pane', 'Listing pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Deck pane */
  $handler = $view->new_display('panel_pane', 'Deck pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['switcher'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_os2web_ec_tax_category_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
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
    'os2web_event_calendar' => 'os2web_event_calendar',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Start date - End date - end date (field_os2web_ec_date:value2) */
  $handler->display->display_options['filters']['field_os2web_ec_date_value2']['id'] = 'field_os2web_ec_date_value2';
  $handler->display->display_options['filters']['field_os2web_ec_date_value2']['table'] = 'field_data_field_os2web_ec_date';
  $handler->display->display_options['filters']['field_os2web_ec_date_value2']['field'] = 'field_os2web_ec_date_value2';
  $handler->display->display_options['filters']['field_os2web_ec_date_value2']['operator'] = '>';
  $handler->display->display_options['filters']['field_os2web_ec_date_value2']['expose']['operator_id'] = 'field_os2web_ec_date_value2_op';
  $handler->display->display_options['filters']['field_os2web_ec_date_value2']['expose']['label'] = 'Start date - End date - end date (field_os2web_ec_date:value2)';
  $handler->display->display_options['filters']['field_os2web_ec_date_value2']['expose']['operator'] = 'field_os2web_ec_date_value2_op';
  $handler->display->display_options['filters']['field_os2web_ec_date_value2']['expose']['identifier'] = 'field_os2web_ec_date_value2';
  $handler->display->display_options['filters']['field_os2web_ec_date_value2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_os2web_ec_date_value2']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_os2web_ec_date_value2']['add_delta'] = 'yes';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Category',
    ),
  );
  $translatables['os2web_event_calendar_list'] = array(
    t('Master'),
    t('View all'),
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
    t('term'),
    t('Free'),
    t('[field_os2web_ec_color-rgb] '),
    t('Start date - End date - end date (field_os2web_ec_date:value2)'),
    t('Listing pane'),
    t('View panes'),
    t('Deck pane'),
    t('more'),
    t('All'),
  );
  $export['os2web_event_calendar_list'] = $view;

  return $export;
}
