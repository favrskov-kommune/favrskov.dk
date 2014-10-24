<?php
/**
 * @file
 * views_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kommende arrangementer';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = t('See all');
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Type (field_kultunaut_event_type) */
  $handler->display->display_options['relationships']['field_kultunaut_event_type_tid']['id'] = 'field_kultunaut_event_type_tid';
  $handler->display->display_options['relationships']['field_kultunaut_event_type_tid']['table'] = 'field_data_field_kultunaut_event_type';
  $handler->display->display_options['relationships']['field_kultunaut_event_type_tid']['field'] = 'field_kultunaut_event_type_tid';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_kultunaut_event_url']['id'] = 'field_kultunaut_event_url';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['table'] = 'field_data_field_kultunaut_event_url';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['field'] = 'field_kultunaut_event_url';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['element_class'] = 'global-link';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_url']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_url']['type'] = 'text_plain';
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['id'] = 'field_kultunaut_event_start_date';
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['table'] = 'field_data_field_kultunaut_event_start_date';
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['field'] = 'field_kultunaut_event_start_date';
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['settings'] = array(
    'format_type' => 'event_front_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_kultunaut_event_category']['id'] = 'field_kultunaut_event_category';
  $handler->display->display_options['fields']['field_kultunaut_event_category']['table'] = 'field_data_field_kultunaut_event_category';
  $handler->display->display_options['fields']['field_kultunaut_event_category']['field'] = 'field_kultunaut_event_category';
  $handler->display->display_options['fields']['field_kultunaut_event_category']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_category']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_kultunaut_event_url] ';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['path'] = '[field_kultunaut_event_url]';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
    'trim_type' => 'chars',
    'trim_suffix' => '',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'trim',
    'trim_options' => array(
      'text' => 'text',
    ),
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_kultunaut_event_date']['id'] = 'field_kultunaut_event_date';
  $handler->display->display_options['fields']['field_kultunaut_event_date']['table'] = 'field_data_field_kultunaut_event_date';
  $handler->display->display_options['fields']['field_kultunaut_event_date']['field'] = 'field_kultunaut_event_date';
  $handler->display->display_options['fields']['field_kultunaut_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_date']['alter']['path'] = '[field_kultunaut_event_url]';
  $handler->display->display_options['fields']['field_kultunaut_event_date']['element_label_colon'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_kultunaut_event_time']['id'] = 'field_kultunaut_event_time';
  $handler->display->display_options['fields']['field_kultunaut_event_time']['table'] = 'field_data_field_kultunaut_event_time';
  $handler->display->display_options['fields']['field_kultunaut_event_time']['field'] = 'field_kultunaut_event_time';
  $handler->display->display_options['fields']['field_kultunaut_event_time']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_time']['alter']['text'] = ', [field_kultunaut_event_time]';
  $handler->display->display_options['fields']['field_kultunaut_event_time']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_kultunaut_event_location']['id'] = 'field_kultunaut_event_location';
  $handler->display->display_options['fields']['field_kultunaut_event_location']['table'] = 'field_data_field_kultunaut_event_location';
  $handler->display->display_options['fields']['field_kultunaut_event_location']['field'] = 'field_kultunaut_event_location';
  $handler->display->display_options['fields']['field_kultunaut_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_location']['alter']['path'] = '[field_kultunaut_event_url]';
  $handler->display->display_options['fields']['field_kultunaut_event_location']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Start Date (field_kultunaut_event_start_date) */
  $handler->display->display_options['sorts']['field_kultunaut_event_start_date_value']['id'] = 'field_kultunaut_event_start_date_value';
  $handler->display->display_options['sorts']['field_kultunaut_event_start_date_value']['table'] = 'field_data_field_kultunaut_event_start_date';
  $handler->display->display_options['sorts']['field_kultunaut_event_start_date_value']['field'] = 'field_kultunaut_event_start_date_value';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_kultunaut_event_type_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  /* Filter criterion: Content: End Date (field_kultunaut_event_end_date) */
  $handler->display->display_options['filters']['field_kultunaut_event_end_date_value']['id'] = 'field_kultunaut_event_end_date_value';
  $handler->display->display_options['filters']['field_kultunaut_event_end_date_value']['table'] = 'field_data_field_kultunaut_event_end_date';
  $handler->display->display_options['filters']['field_kultunaut_event_end_date_value']['field'] = 'field_kultunaut_event_end_date_value';
  $handler->display->display_options['filters']['field_kultunaut_event_end_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_kultunaut_event_end_date_value']['default_date'] = 'now';

  /* Display: Events block */
  $handler = $view->new_display('panel_pane', 'Events block', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['switcher'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_kultunaut_event_url']['id'] = 'field_kultunaut_event_url';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['table'] = 'field_data_field_kultunaut_event_url';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['field'] = 'field_kultunaut_event_url';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_url']['alter']['path'] = '[field_kultunaut_event_url]';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['alter']['link_class'] = 'global-link';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_url']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_url']['type'] = 'text_plain';
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['id'] = 'field_kultunaut_event_start_date';
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['table'] = 'field_data_field_kultunaut_event_start_date';
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['field'] = 'field_kultunaut_event_start_date';
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['alter']['path'] = '[field_kultunaut_event_url]';
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['settings'] = array(
    'format_type' => 'event_front_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_kultunaut_event_category']['id'] = 'field_kultunaut_event_category';
  $handler->display->display_options['fields']['field_kultunaut_event_category']['table'] = 'field_data_field_kultunaut_event_category';
  $handler->display->display_options['fields']['field_kultunaut_event_category']['field'] = 'field_kultunaut_event_category';
  $handler->display->display_options['fields']['field_kultunaut_event_category']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_kultunaut_event_url] ';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['path'] = '[field_kultunaut_event_url]';
  $handler->display->display_options['fields']['body']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
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
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_kultunaut_event_date']['id'] = 'field_kultunaut_event_date';
  $handler->display->display_options['fields']['field_kultunaut_event_date']['table'] = 'field_data_field_kultunaut_event_date';
  $handler->display->display_options['fields']['field_kultunaut_event_date']['field'] = 'field_kultunaut_event_date';
  $handler->display->display_options['fields']['field_kultunaut_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_date']['alter']['path'] = '[field_kultunaut_event_url]';
  $handler->display->display_options['fields']['field_kultunaut_event_date']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_date']['element_label_colon'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_kultunaut_event_time']['id'] = 'field_kultunaut_event_time';
  $handler->display->display_options['fields']['field_kultunaut_event_time']['table'] = 'field_data_field_kultunaut_event_time';
  $handler->display->display_options['fields']['field_kultunaut_event_time']['field'] = 'field_kultunaut_event_time';
  $handler->display->display_options['fields']['field_kultunaut_event_time']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_time']['alter']['text'] = ', [field_kultunaut_event_time]';
  $handler->display->display_options['fields']['field_kultunaut_event_time']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_time']['alter']['path'] = '[field_kultunaut_event_url]';
  $handler->display->display_options['fields']['field_kultunaut_event_time']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_time']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_kultunaut_event_location']['id'] = 'field_kultunaut_event_location';
  $handler->display->display_options['fields']['field_kultunaut_event_location']['table'] = 'field_data_field_kultunaut_event_location';
  $handler->display->display_options['fields']['field_kultunaut_event_location']['field'] = 'field_kultunaut_event_location';
  $handler->display->display_options['fields']['field_kultunaut_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_location']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_location']['alter']['path'] = '[field_kultunaut_event_url]';
  $handler->display->display_options['fields']['field_kultunaut_event_location']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_location']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<article role="article">
 <header>
   <div class="date">
     [field_kultunaut_event_start_date]
   </div>
   <div class="category">
     [field_kultunaut_event_category] 
   </div>
   <h1>[title]</h1>
 </header>
  <p>
   [body]
  </p>
  <footer>
   <p>
     [field_kultunaut_event_date] [field_kultunaut_event_time]<br>[field_kultunaut_event_location]
   </p>
  </footer>
</article>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
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
      'label' => 'Taxonomy term: Name',
    ),
  );
  $handler->display->display_options['link_to_view'] = '0';

  /* Display: Events page block */
  $handler = $view->new_display('panel_pane', 'Events page block', 'events_page_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Arrangementer';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = t('See all');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_kultunaut_event_category_tid' => array(
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
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['advance']['content_class'] = '.view-content .display';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'item-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['style_options']['switcher'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'global-link';
  $handler->display->display_options['fields']['view_node']['element_label_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_kultunaut_event_url']['id'] = 'field_kultunaut_event_url';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['table'] = 'field_data_field_kultunaut_event_url';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['field'] = 'field_kultunaut_event_url';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_url']['type'] = 'text_plain';
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['id'] = 'field_kultunaut_event_start_date';
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['table'] = 'field_data_field_kultunaut_event_start_date';
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['field'] = 'field_kultunaut_event_start_date';
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_start_date']['settings'] = array(
    'format_type' => 'event_front_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_kultunaut_event_category']['id'] = 'field_kultunaut_event_category';
  $handler->display->display_options['fields']['field_kultunaut_event_category']['table'] = 'field_data_field_kultunaut_event_category';
  $handler->display->display_options['fields']['field_kultunaut_event_category']['field'] = 'field_kultunaut_event_category';
  $handler->display->display_options['fields']['field_kultunaut_event_category']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_category']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_category']['alter']['path'] = 'events?field_kultunaut_event_category_tid=[field_kultunaut_event_category-tid]';
  $handler->display->display_options['fields']['field_kultunaut_event_category']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_kultunaut_event_url] ';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['path'] = '[field_kultunaut_event_url]';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
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
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_kultunaut_event_date']['id'] = 'field_kultunaut_event_date';
  $handler->display->display_options['fields']['field_kultunaut_event_date']['table'] = 'field_data_field_kultunaut_event_date';
  $handler->display->display_options['fields']['field_kultunaut_event_date']['field'] = 'field_kultunaut_event_date';
  $handler->display->display_options['fields']['field_kultunaut_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_date']['alter']['path'] = '[field_kultunaut_event_url]';
  $handler->display->display_options['fields']['field_kultunaut_event_date']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_kultunaut_event_date']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_kultunaut_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_kultunaut_event_date']['element_default_classes'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_kultunaut_event_time']['id'] = 'field_kultunaut_event_time';
  $handler->display->display_options['fields']['field_kultunaut_event_time']['table'] = 'field_data_field_kultunaut_event_time';
  $handler->display->display_options['fields']['field_kultunaut_event_time']['field'] = 'field_kultunaut_event_time';
  $handler->display->display_options['fields']['field_kultunaut_event_time']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_time']['alter']['text'] = ', [field_kultunaut_event_time]';
  $handler->display->display_options['fields']['field_kultunaut_event_time']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_kultunaut_event_time']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_kultunaut_event_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_time']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_kultunaut_event_time']['element_default_classes'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_kultunaut_event_location']['id'] = 'field_kultunaut_event_location';
  $handler->display->display_options['fields']['field_kultunaut_event_location']['table'] = 'field_data_field_kultunaut_event_location';
  $handler->display->display_options['fields']['field_kultunaut_event_location']['field'] = 'field_kultunaut_event_location';
  $handler->display->display_options['fields']['field_kultunaut_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_kultunaut_event_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kultunaut_event_location']['alter']['path'] = '[field_kultunaut_event_url]';
  $handler->display->display_options['fields']['field_kultunaut_event_location']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_kultunaut_event_location']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_kultunaut_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kultunaut_event_location']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_kultunaut_event_location']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<article role="article">
 <header>
   <div class="date">
     [field_kultunaut_event_start_date]
   </div>
   <div class="category">
     [field_kultunaut_event_category] 
   </div>
   <h1>[title]</h1>
 </header>
  <p>
   [body]
  </p>
  <footer>
   <p>
     [field_kultunaut_event_date] [field_kultunaut_event_time] [field_kultunaut_event_location]
   </p>
  </footer>
</article>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  /* Filter criterion: Content: End Date (field_kultunaut_event_end_date) */
  $handler->display->display_options['filters']['field_kultunaut_event_end_date_value']['id'] = 'field_kultunaut_event_end_date_value';
  $handler->display->display_options['filters']['field_kultunaut_event_end_date_value']['table'] = 'field_data_field_kultunaut_event_end_date';
  $handler->display->display_options['filters']['field_kultunaut_event_end_date_value']['field'] = 'field_kultunaut_event_end_date_value';
  $handler->display->display_options['filters']['field_kultunaut_event_end_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_kultunaut_event_end_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Category (field_kultunaut_event_category) */
  $handler->display->display_options['filters']['field_kultunaut_event_category_tid']['id'] = 'field_kultunaut_event_category_tid';
  $handler->display->display_options['filters']['field_kultunaut_event_category_tid']['table'] = 'field_data_field_kultunaut_event_category';
  $handler->display->display_options['filters']['field_kultunaut_event_category_tid']['field'] = 'field_kultunaut_event_category_tid';
  $handler->display->display_options['filters']['field_kultunaut_event_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_kultunaut_event_category_tid']['expose']['operator_id'] = 'field_kultunaut_event_category_tid_op';
  $handler->display->display_options['filters']['field_kultunaut_event_category_tid']['expose']['operator'] = 'field_kultunaut_event_category_tid_op';
  $handler->display->display_options['filters']['field_kultunaut_event_category_tid']['expose']['identifier'] = 'field_kultunaut_event_category_tid';
  $handler->display->display_options['filters']['field_kultunaut_event_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  $handler->display->display_options['filters']['field_kultunaut_event_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_kultunaut_event_category_tid']['vocabulary'] = 'os2web_kultunaut_categories';
  $translatables['events'] = array(
    t('Master'),
    t('Kommende arrangementer'),
    t('See all'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('No results'),
    t('term from field_kultunaut_event_type'),
    t(', [field_kultunaut_event_time]'),
    t('All'),
    t('Published'),
    t('Events block'),
    t('more'),
    t('<article role="article">
 <header>
   <div class="date">
     [field_kultunaut_event_start_date]
   </div>
   <div class="category">
     [field_kultunaut_event_category] 
   </div>
   <h1>[title]</h1>
 </header>
  <p>
   [body]
  </p>
  <footer>
   <p>
     [field_kultunaut_event_date] [field_kultunaut_event_time]<br>[field_kultunaut_event_location]
   </p>
  </footer>
</article>'),
    t('View panes'),
    t('Events page block'),
    t('Arrangementer'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
  );
  $export['events'] = $view;

  return $export;
}
