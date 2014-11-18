<?php
/**
 * @file
 * views_page_subscription.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_page_subscription_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'page_subscription';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Page subscription';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_position_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_position_category' => 'field_position_category',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_position_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'os2web_hr_manager_job_position_categories' => 'os2web_hr_manager_job_position_categories',
    'kle' => 0,
    'local' => 0,
    'location' => 0,
    'media_folders' => 0,
    'media_tags' => 0,
    'os2web_kultunaut_categories' => 0,
    'os2web_kultunaut_types' => 0,
    'os2web_meetings_tax_committee' => 0,
    'os2web_meetings_tax_location' => 0,
    'os2web_meetings_tax_status' => 0,
    'page_subscription_category' => 0,
    'phonebook_administration' => 0,
    'phonebook_committee' => 0,
    'phonebook_department' => 0,
    'phonebook_party' => 0,
    'phonebook_type' => 0,
    'subject_area' => 0,
    'video_category' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Position Category */
  $handler->display->display_options['fields']['field_position_category']['id'] = 'field_position_category';
  $handler->display->display_options['fields']['field_position_category']['table'] = 'field_data_field_position_category';
  $handler->display->display_options['fields']['field_position_category']['field'] = 'field_position_category';
  $handler->display->display_options['fields']['field_position_category']['label'] = '';
  $handler->display->display_options['fields']['field_position_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_position_category']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_position_category']['alter']['text'] = 'Jobs:[field_position_category]';
  $handler->display->display_options['fields']['field_position_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_position_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_position_category']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'today';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node.changed' => 'node.changed',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_hr_manager_job' => 'os2web_hr_manager_job',
  );

  /* Display: Jobs pane */
  $handler = $view->new_display('panel_pane', 'Jobs pane', 'jobs_pane');

  /* Display: Meetings pane */
  $handler = $view->new_display('panel_pane', 'Meetings pane', 'meetings_pane');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_os2web_meetings_committee',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_os2web_meetings_committee' => 'field_os2web_meetings_committee',
    'field_os2web_meetings_type' => 'field_os2web_meetings_type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_os2web_meetings_committee' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_os2web_meetings_type' => array(
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
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'os2web_meetings_tax_committee' => 'os2web_meetings_tax_committee',
    'kle' => 0,
    'local' => 0,
    'location' => 0,
    'media_folders' => 0,
    'media_tags' => 0,
    'os2web_hr_manager_job_position_categories' => 0,
    'os2web_kultunaut_categories' => 0,
    'os2web_kultunaut_types' => 0,
    'os2web_meetings_tax_location' => 0,
    'os2web_meetings_tax_status' => 0,
    'page_subscription_category' => 0,
    'phonebook_administration' => 0,
    'phonebook_committee' => 0,
    'phonebook_department' => 0,
    'phonebook_party' => 0,
    'phonebook_type' => 0,
    'subject_area' => 0,
    'video_category' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Committee */
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['id'] = 'field_os2web_meetings_committee';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['table'] = 'field_data_field_os2web_meetings_committee';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['field'] = 'field_os2web_meetings_committee';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['alter']['text'] = 'Meeting agendas and minutes:[field_os2web_meetings_committee]';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_os2web_meetings_type']['id'] = 'field_os2web_meetings_type';
  $handler->display->display_options['fields']['field_os2web_meetings_type']['table'] = 'field_data_field_os2web_meetings_type';
  $handler->display->display_options['fields']['field_os2web_meetings_type']['field'] = 'field_os2web_meetings_type';
  $handler->display->display_options['fields']['field_os2web_meetings_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'today';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node.changed' => 'node.changed',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_meetings_meeting' => 'os2web_meetings_meeting',
  );

  /* Display: Articles pane */
  $handler = $view->new_display('panel_pane', 'Articles pane', 'articles_pane');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_update_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_update_category' => 'field_update_category',
    'field_teaser' => 'field_teaser',
    'field_update_teaser' => 'field_update_teaser',
    'views_ifempty' => 'views_ifempty',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_update_category' => array(
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
    'field_update_teaser' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'views_ifempty' => array(
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
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'page_subscription_category' => 'page_subscription_category',
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
    'phonebook_administration' => 0,
    'phonebook_committee' => 0,
    'phonebook_department' => 0,
    'phonebook_party' => 0,
    'phonebook_type' => 0,
    'subject_area' => 0,
    'video_category' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  $handler->display->display_options['relationships']['parent']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Update category */
  $handler->display->display_options['fields']['field_update_category']['id'] = 'field_update_category';
  $handler->display->display_options['fields']['field_update_category']['table'] = 'field_data_field_update_category';
  $handler->display->display_options['fields']['field_update_category']['field'] = 'field_update_category';
  $handler->display->display_options['fields']['field_update_category']['label'] = '';
  $handler->display->display_options['fields']['field_update_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_update_category']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_update_category']['alter']['text'] = '[name]:[field_update_category]';
  $handler->display->display_options['fields']['field_update_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_update_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_update_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_update_category']['delta_offset'] = '0';
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['element_default_classes'] = FALSE;
  /* Field: Content: Update teaser */
  $handler->display->display_options['fields']['field_update_teaser']['id'] = 'field_update_teaser';
  $handler->display->display_options['fields']['field_update_teaser']['table'] = 'field_data_field_update_teaser';
  $handler->display->display_options['fields']['field_update_teaser']['field'] = 'field_update_teaser';
  $handler->display->display_options['fields']['field_update_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_update_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_update_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_update_teaser']['element_default_classes'] = FALSE;
  /* Field: Views If Empty: Views If Empty */
  $handler->display->display_options['fields']['views_ifempty']['id'] = 'views_ifempty';
  $handler->display->display_options['fields']['views_ifempty']['table'] = 'views_ifempty';
  $handler->display->display_options['fields']['views_ifempty']['field'] = 'views_ifempty';
  $handler->display->display_options['fields']['views_ifempty']['label'] = '';
  $handler->display->display_options['fields']['views_ifempty']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_ifempty']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['views_ifempty']['emptyfield'] = 'field_update_teaser';
  $handler->display->display_options['fields']['views_ifempty']['outputfield'] = 'field_teaser';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'today';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node.changed' => 'node.changed',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Send update (field_send_update) */
  $handler->display->display_options['filters']['field_send_update_value']['id'] = 'field_send_update_value';
  $handler->display->display_options['filters']['field_send_update_value']['table'] = 'field_data_field_send_update';
  $handler->display->display_options['filters']['field_send_update_value']['field'] = 'field_send_update_value';
  $handler->display->display_options['filters']['field_send_update_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Has taxonomy terms (with depth)';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'page_subscription_category';
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '1';

  /* Display: Hearings pane */
  $handler = $view->new_display('panel_pane', 'Hearings pane', 'hearings_pane');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_hearing_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_hearing_category' => 'field_hearing_category',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_hearing_category' => array(
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
    'page_subscription_category' => 0,
    'phonebook_administration' => 0,
    'phonebook_committee' => 0,
    'phonebook_department' => 0,
    'phonebook_party' => 0,
    'phonebook_type' => 0,
    'subject_area' => 0,
    'video_category' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Hearing Category */
  $handler->display->display_options['fields']['field_hearing_category']['id'] = 'field_hearing_category';
  $handler->display->display_options['fields']['field_hearing_category']['table'] = 'field_data_field_hearing_category';
  $handler->display->display_options['fields']['field_hearing_category']['field'] = 'field_hearing_category';
  $handler->display->display_options['fields']['field_hearing_category']['label'] = '';
  $handler->display->display_options['fields']['field_hearing_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hearing_category']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hearing_category']['alter']['text'] = 'Hearings:[field_hearing_category]';
  $handler->display->display_options['fields']['field_hearing_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hearing_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hearing_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'today';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node.changed' => 'node.changed',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hearing' => 'hearing',
  );
  $translatables['page_subscription'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term'),
    t('Jobs pane'),
    t('View panes'),
    t('Meetings pane'),
    t('Type'),
    t('Articles pane'),
    t('Parent'),
    t('[name]:[field_update_category]'),
    t('Has taxonomy terms (with depth)'),
    t('Hearings pane'),
  );
  $export['page_subscription'] = $view;

  return $export;
}
