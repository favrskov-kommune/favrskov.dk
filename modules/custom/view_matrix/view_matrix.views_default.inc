<?php
/**
 * @file
 * view_matrix.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function view_matrix_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'matrix_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Matrix view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = t('Latest information');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_taxonomy_subject_area_tid' => array(
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
  $handler->display->display_options['pager']['options']['advance']['content_class'] = '.view-content .display';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'matrix-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'item-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['style_options']['switcher'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['path']['element_type'] = '0';
  $handler->display->display_options['fields']['path']['element_label_type'] = '0';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'event_front_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['created']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'event_front_date';
  /* Field: Views If Empty: Views If Empty */
  $handler->display->display_options['fields']['views_ifempty']['id'] = 'views_ifempty';
  $handler->display->display_options['fields']['views_ifempty']['table'] = 'views_ifempty';
  $handler->display->display_options['fields']['views_ifempty']['field'] = 'views_ifempty';
  $handler->display->display_options['fields']['views_ifempty']['label'] = '';
  $handler->display->display_options['fields']['views_ifempty']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_ifempty']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['views_ifempty']['emptyfield'] = 'field_date';
  $handler->display->display_options['fields']['views_ifempty']['outputfield'] = 'created';
  /* Field: Content: Taxonomy, Subject Area */
  $handler->display->display_options['fields']['field_taxonomy_subject_area']['id'] = 'field_taxonomy_subject_area';
  $handler->display->display_options['fields']['field_taxonomy_subject_area']['table'] = 'field_data_field_taxonomy_subject_area';
  $handler->display->display_options['fields']['field_taxonomy_subject_area']['field'] = 'field_taxonomy_subject_area';
  $handler->display->display_options['fields']['field_taxonomy_subject_area']['label'] = '';
  $handler->display->display_options['fields']['field_taxonomy_subject_area']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_taxonomy_subject_area']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_taxonomy_subject_area']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_taxonomy_subject_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_taxonomy_subject_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_taxonomy_subject_area']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_taxonomy_subject_area']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_taxonomy_subject_area']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_teaser']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_teaser']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_default_classes'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date_1']['id'] = 'field_date_1';
  $handler->display->display_options['fields']['field_date_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_1']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_date_1']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_date_1']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_1']['settings'] = array(
    'format_type' => 'matrix_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = '';
  $handler->display->display_options['fields']['created_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['created_1']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['created_1']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'matrix_date';
  /* Field: Views If Empty: Views If Empty */
  $handler->display->display_options['fields']['views_ifempty_1']['id'] = 'views_ifempty_1';
  $handler->display->display_options['fields']['views_ifempty_1']['table'] = 'views_ifempty';
  $handler->display->display_options['fields']['views_ifempty_1']['field'] = 'views_ifempty';
  $handler->display->display_options['fields']['views_ifempty_1']['label'] = '';
  $handler->display->display_options['fields']['views_ifempty_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_ifempty_1']['emptyfield'] = 'field_date_1';
  $handler->display->display_options['fields']['views_ifempty_1']['outputfield'] = 'created_1';
  /* Field: Content: Taxonomy, Location */
  $handler->display->display_options['fields']['field_taxonomy_location']['id'] = 'field_taxonomy_location';
  $handler->display->display_options['fields']['field_taxonomy_location']['table'] = 'field_data_field_taxonomy_location';
  $handler->display->display_options['fields']['field_taxonomy_location']['field'] = 'field_taxonomy_location';
  $handler->display->display_options['fields']['field_taxonomy_location']['label'] = '';
  $handler->display->display_options['fields']['field_taxonomy_location']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_taxonomy_location']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_taxonomy_location']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_taxonomy_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_taxonomy_location']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_taxonomy_location']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['granularity'] = 'day';
  /* Contextual filter: Content: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['limit'] = '0';
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
    'article' => 'article',
    'news' => 'news',
  );

  /* Display: Matrix block */
  $handler = $view->new_display('panel_pane', 'Matrix block', 'matrix_block');
  $handler->display->display_options['argument_input'] = array(
    'type' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Type',
    ),
  );
  $translatables['matrix_view'] = array(
    t('Master'),
    t('Latest information'),
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
    t('All'),
    t('Matrix block'),
    t('View panes'),
  );
  $export['matrix_view'] = $view;

  return $export;
}
