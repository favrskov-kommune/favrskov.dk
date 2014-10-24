<?php
/**
 * @file
 * views_hearings.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_hearings_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'hearings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Hearings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Hearings';
  $handler->display->display_options['css_class'] = 'job-list';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '25';
  $handler->display->display_options['pager']['options']['advance']['content_class'] = 'table>tbody';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_hearing_end_date' => 'field_hearing_end_date',
  );
  $handler->display->display_options['style_options']['default'] = 'field_hearing_end_date';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hearing_end_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Hearing end date */
  $handler->display->display_options['fields']['field_hearing_end_date']['id'] = 'field_hearing_end_date';
  $handler->display->display_options['fields']['field_hearing_end_date']['table'] = 'field_data_field_hearing_end_date';
  $handler->display->display_options['fields']['field_hearing_end_date']['field'] = 'field_hearing_end_date';
  $handler->display->display_options['fields']['field_hearing_end_date']['label'] = 'End date';
  $handler->display->display_options['fields']['field_hearing_end_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hearing_end_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hearing_end_date']['settings'] = array(
    'format_type' => 'short_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_hearing_end_date']['field_api_classes'] = TRUE;
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
    'hearing' => 'hearing',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Hearing start date (field_hearing_start_date) */
  $handler->display->display_options['filters']['field_hearing_start_date_value']['id'] = 'field_hearing_start_date_value';
  $handler->display->display_options['filters']['field_hearing_start_date_value']['table'] = 'field_data_field_hearing_start_date';
  $handler->display->display_options['filters']['field_hearing_start_date_value']['field'] = 'field_hearing_start_date_value';
  $handler->display->display_options['filters']['field_hearing_start_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_hearing_start_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_hearing_start_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_hearing_start_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Hearing end date (field_hearing_end_date) */
  $handler->display->display_options['filters']['field_hearing_end_date_value']['id'] = 'field_hearing_end_date_value';
  $handler->display->display_options['filters']['field_hearing_end_date_value']['table'] = 'field_data_field_hearing_end_date';
  $handler->display->display_options['filters']['field_hearing_end_date_value']['field'] = 'field_hearing_end_date_value';
  $handler->display->display_options['filters']['field_hearing_end_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_hearing_end_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_hearing_end_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_hearing_end_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Hearing Category (field_hearing_category) (selective) */
  $handler->display->display_options['filters']['field_hearing_category_tid_selective']['id'] = 'field_hearing_category_tid_selective';
  $handler->display->display_options['filters']['field_hearing_category_tid_selective']['table'] = 'field_data_field_hearing_category';
  $handler->display->display_options['filters']['field_hearing_category_tid_selective']['field'] = 'field_hearing_category_tid_selective';
  $handler->display->display_options['filters']['field_hearing_category_tid_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_hearing_category_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_hearing_category_tid_selective']['expose']['operator_id'] = 'field_hearing_category_tid_selective_op';
  $handler->display->display_options['filters']['field_hearing_category_tid_selective']['expose']['label'] = 'Hearing Category';
  $handler->display->display_options['filters']['field_hearing_category_tid_selective']['expose']['operator'] = 'field_hearing_category_tid_selective_op';
  $handler->display->display_options['filters']['field_hearing_category_tid_selective']['expose']['identifier'] = 'field_hearing_category_tid_selective';
  $handler->display->display_options['filters']['field_hearing_category_tid_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Taxonomy, Location (field_taxonomy_location) (selective) */
  $handler->display->display_options['filters']['field_taxonomy_location_tid_selective']['id'] = 'field_taxonomy_location_tid_selective';
  $handler->display->display_options['filters']['field_taxonomy_location_tid_selective']['table'] = 'field_data_field_taxonomy_location';
  $handler->display->display_options['filters']['field_taxonomy_location_tid_selective']['field'] = 'field_taxonomy_location_tid_selective';
  $handler->display->display_options['filters']['field_taxonomy_location_tid_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_taxonomy_location_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_taxonomy_location_tid_selective']['expose']['operator_id'] = 'field_taxonomy_location_tid_selective_op';
  $handler->display->display_options['filters']['field_taxonomy_location_tid_selective']['expose']['label'] = 'Taxonomy, Location';
  $handler->display->display_options['filters']['field_taxonomy_location_tid_selective']['expose']['operator'] = 'field_taxonomy_location_tid_selective_op';
  $handler->display->display_options['filters']['field_taxonomy_location_tid_selective']['expose']['identifier'] = 'field_taxonomy_location_tid_selective';
  $handler->display->display_options['filters']['field_taxonomy_location_tid_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );

  /* Display: Hearings List pane */
  $handler = $view->new_display('panel_pane', 'Hearings List pane', 'hearings_list_pane');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Hearings Filtered List pane */
  $handler = $view->new_display('panel_pane', 'Hearings Filtered List pane', 'hearings_filtered_list_pane');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'hearing_category' => 'hearing_category',
    'kle' => 0,
    'local' => 0,
    'location' => 0,
    'media_folders' => 0,
    'media_tags' => 0,
    'os2web_hr_manager_job_position_categories' => 0,
    'os2web_kultunaut_categories' => 0,
    'os2web_kultunaut_types' => 0,
    'os2web_meetings_tax_committee' => 0,
    'os2web_meetings_tax_location' => 0,
    'os2web_meetings_tax_status' => 0,
    'os2web_social_directory_audience' => 0,
    'os2web_social_directory_activity' => 0,
    'os2web_social_directory_association_type' => 0,
    'os2web_social_directory_contact_person_role' => 0,
    'page_subscription_category' => 0,
    'phonebook_administration' => 0,
    'phonebook_committee' => 0,
    'phonebook_department' => 0,
    'phonebook_party' => 0,
    'phonebook_type' => 0,
    'subject_area' => 0,
    'video_category' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
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
    'hearing' => 'hearing',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Hearing start date (field_hearing_start_date) */
  $handler->display->display_options['filters']['field_hearing_start_date_value']['id'] = 'field_hearing_start_date_value';
  $handler->display->display_options['filters']['field_hearing_start_date_value']['table'] = 'field_data_field_hearing_start_date';
  $handler->display->display_options['filters']['field_hearing_start_date_value']['field'] = 'field_hearing_start_date_value';
  $handler->display->display_options['filters']['field_hearing_start_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_hearing_start_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_hearing_start_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_hearing_start_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Hearing end date (field_hearing_end_date) */
  $handler->display->display_options['filters']['field_hearing_end_date_value']['id'] = 'field_hearing_end_date_value';
  $handler->display->display_options['filters']['field_hearing_end_date_value']['table'] = 'field_data_field_hearing_end_date';
  $handler->display->display_options['filters']['field_hearing_end_date_value']['field'] = 'field_hearing_end_date_value';
  $handler->display->display_options['filters']['field_hearing_end_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_hearing_end_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_hearing_end_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_hearing_end_date_value']['default_date'] = 'now';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
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
      'label' => 'Taxonomy term: Name',
    ),
  );
  $translatables['hearings'] = array(
    t('Master'),
    t('Hearings'),
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
    t('No results'),
    t('Title'),
    t('End date'),
    t('Hearing Category'),
    t('Taxonomy, Location'),
    t('Hearings List pane'),
    t('View panes'),
    t('Hearings Filtered List pane'),
    t('term'),
    t('All'),
  );
  $export['hearings'] = $view;

  $view = new view();
  $view->name = 'hearings_location';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Hearings Location';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Actual Hearings';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'See all';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'news-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'news-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['style_options']['switcher'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'location' => 'location',
    'hearing_category' => 0,
    'kle' => 0,
    'local' => 0,
    'media_folders' => 0,
    'media_tags' => 0,
    'os2web_hr_manager_job_position_categories' => 0,
    'os2web_kultunaut_categories' => 0,
    'os2web_kultunaut_types' => 0,
    'os2web_meetings_tax_committee' => 0,
    'os2web_meetings_tax_location' => 0,
    'os2web_meetings_tax_status' => 0,
    'os2web_social_directory_audience' => 0,
    'os2web_social_directory_activity' => 0,
    'os2web_social_directory_association_type' => 0,
    'os2web_social_directory_contact_person_role' => 0,
    'page_subscription_category' => 0,
    'phonebook_administration' => 0,
    'phonebook_committee' => 0,
    'phonebook_department' => 0,
    'phonebook_party' => 0,
    'phonebook_type' => 0,
    'subject_area' => 0,
    'video_category' => 0,
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_type'] = '0';
  $handler->display->display_options['fields']['path']['element_label_type'] = '0';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['created']['element_type'] = 'span';
  $handler->display->display_options['fields']['created']['element_class'] = 'date';
  $handler->display->display_options['fields']['created']['element_label_type'] = '0';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'news_date';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'short_date';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_teaser']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_teaser']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_teaser']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
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
    'hearing' => 'hearing',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Hearing start date (field_hearing_start_date) */
  $handler->display->display_options['filters']['field_hearing_start_date_value']['id'] = 'field_hearing_start_date_value';
  $handler->display->display_options['filters']['field_hearing_start_date_value']['table'] = 'field_data_field_hearing_start_date';
  $handler->display->display_options['filters']['field_hearing_start_date_value']['field'] = 'field_hearing_start_date_value';
  $handler->display->display_options['filters']['field_hearing_start_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_hearing_start_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_hearing_start_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_hearing_start_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Hearing end date (field_hearing_end_date) */
  $handler->display->display_options['filters']['field_hearing_end_date_value']['id'] = 'field_hearing_end_date_value';
  $handler->display->display_options['filters']['field_hearing_end_date_value']['table'] = 'field_data_field_hearing_end_date';
  $handler->display->display_options['filters']['field_hearing_end_date_value']['field'] = 'field_hearing_end_date_value';
  $handler->display->display_options['filters']['field_hearing_end_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_hearing_end_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_hearing_end_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_hearing_end_date_value']['default_date'] = 'now';

  /* Display: Hearings latest pane */
  $handler = $view->new_display('panel_pane', 'Hearings latest pane', 'hearings_latest_pane');
  $handler->display->display_options['link_url'] = 'hearings';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
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
      'label' => 'Taxonomy term: Name',
    ),
  );

  /* Display: Hearings first exipring pane */
  $handler = $view->new_display('panel_pane', 'Hearings first exipring pane', 'hearings_first_expiring_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Expiring Hearings';
  $handler->display->display_options['link_url'] = 'hearings';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_type'] = '0';
  $handler->display->display_options['fields']['path']['element_label_type'] = '0';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Hearing end date */
  $handler->display->display_options['fields']['field_hearing_end_date']['id'] = 'field_hearing_end_date';
  $handler->display->display_options['fields']['field_hearing_end_date']['table'] = 'field_data_field_hearing_end_date';
  $handler->display->display_options['fields']['field_hearing_end_date']['field'] = 'field_hearing_end_date';
  $handler->display->display_options['fields']['field_hearing_end_date']['label'] = 'Til';
  $handler->display->display_options['fields']['field_hearing_end_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_hearing_end_date']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_hearing_end_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_hearing_end_date']['element_class'] = 'date';
  $handler->display->display_options['fields']['field_hearing_end_date']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_hearing_end_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_hearing_end_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hearing_end_date']['settings'] = array(
    'format_type' => 'news_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_teaser']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_teaser']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_teaser']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Hearing end date (field_hearing_end_date) */
  $handler->display->display_options['sorts']['field_hearing_end_date_value']['id'] = 'field_hearing_end_date_value';
  $handler->display->display_options['sorts']['field_hearing_end_date_value']['table'] = 'field_data_field_hearing_end_date';
  $handler->display->display_options['sorts']['field_hearing_end_date_value']['field'] = 'field_hearing_end_date_value';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['hearings_location'] = array(
    t('Master'),
    t('Actual Hearings'),
    t('See all'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('No results'),
    t('term'),
    t('All'),
    t('Hearings latest pane'),
    t('more'),
    t('View panes'),
    t('Hearings first exipring pane'),
    t('Expiring Hearings'),
    t('Til'),
  );
  $export['hearings_location'] = $view;

  return $export;
}
