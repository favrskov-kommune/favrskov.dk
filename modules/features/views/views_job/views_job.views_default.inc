<?php
/**
 * @file
 * views_job.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_job_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'job';
  $view->description = 'Relates to job content type.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Job';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Job importer search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'job' => 'job',
  );

  /* Display: Job listing by table */
  $handler = $view->new_display('panel_pane', 'Job listing by table', 'job_listing_by_table');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Alle ledige stillinger i Favrskov Kommune';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_job_place_of_work' => 'field_job_place_of_work',
    'field_job_start_date' => 'field_job_start_date',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_job_place_of_work' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_job_start_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Headline';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Place of work */
  $handler->display->display_options['fields']['field_job_place_of_work']['id'] = 'field_job_place_of_work';
  $handler->display->display_options['fields']['field_job_place_of_work']['table'] = 'field_data_field_job_place_of_work';
  $handler->display->display_options['fields']['field_job_place_of_work']['field'] = 'field_job_place_of_work';
  $handler->display->display_options['fields']['field_job_place_of_work']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Start date */
  $handler->display->display_options['fields']['field_job_start_date']['id'] = 'field_job_start_date';
  $handler->display->display_options['fields']['field_job_start_date']['table'] = 'field_data_field_job_start_date';
  $handler->display->display_options['fields']['field_job_start_date']['field'] = 'field_job_start_date';
  $handler->display->display_options['fields']['field_job_start_date']['label'] = 'Startdato';
  $handler->display->display_options['fields']['field_job_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job_start_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Job listing by list */
  $handler = $view->new_display('panel_pane', 'Job listing by list', 'job_listing_by_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Alle ledige stillinger i Favrskov Kommune';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Headline';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Place of work */
  $handler->display->display_options['fields']['field_job_place_of_work']['id'] = 'field_job_place_of_work';
  $handler->display->display_options['fields']['field_job_place_of_work']['table'] = 'field_data_field_job_place_of_work';
  $handler->display->display_options['fields']['field_job_place_of_work']['field'] = 'field_job_place_of_work';
  $handler->display->display_options['fields']['field_job_place_of_work']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Start date */
  $handler->display->display_options['fields']['field_job_start_date']['id'] = 'field_job_start_date';
  $handler->display->display_options['fields']['field_job_start_date']['table'] = 'field_data_field_job_start_date';
  $handler->display->display_options['fields']['field_job_start_date']['field'] = 'field_job_start_date';
  $handler->display->display_options['fields']['field_job_start_date']['label'] = 'Startdato';
  $handler->display->display_options['fields']['field_job_start_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Job importer search */
  $handler = $view->new_display('page', 'Job importer search', 'job_importer_filter');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'job_html';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_job_apply_link' => 'field_job_apply_link',
    'field_job_id' => 'field_job_id',
    'field_job_place_of_work' => 'field_job_place_of_work',
    'field_job_start_date' => 'field_job_start_date',
    'field_job_headline' => 'field_job_headline',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_job_apply_link' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_job_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_job_place_of_work' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_job_start_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_job_headline' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Description */
  $handler->display->display_options['fields']['field_job_description']['id'] = 'field_job_description';
  $handler->display->display_options['fields']['field_job_description']['table'] = 'field_data_field_job_description';
  $handler->display->display_options['fields']['field_job_description']['field'] = 'field_job_description';
  $handler->display->display_options['fields']['field_job_description']['label'] = 'Beskrivelse';
  $handler->display->display_options['fields']['field_job_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_job_description']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['field_job_description']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '400',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'trim_options' => array(
      'text' => 0,
    ),
    'trim_preserve_tags' => '',
  );
  /* Felt: Indhold: Place of work */
  $handler->display->display_options['fields']['field_job_place_of_work']['id'] = 'field_job_place_of_work';
  $handler->display->display_options['fields']['field_job_place_of_work']['table'] = 'field_data_field_job_place_of_work';
  $handler->display->display_options['fields']['field_job_place_of_work']['field'] = 'field_job_place_of_work';
  $handler->display->display_options['fields']['field_job_place_of_work']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job_place_of_work']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'job' => 'job',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Overskrift */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Overskrift';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
  );
  /* Filterkriterie: Indhold: Description (field_job_description) */
  $handler->display->display_options['filters']['field_job_description_value']['id'] = 'field_job_description_value';
  $handler->display->display_options['filters']['field_job_description_value']['table'] = 'field_data_field_job_description';
  $handler->display->display_options['filters']['field_job_description_value']['field'] = 'field_job_description_value';
  $handler->display->display_options['filters']['field_job_description_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_job_description_value']['group'] = 1;
  $handler->display->display_options['filters']['field_job_description_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_job_description_value']['expose']['operator_id'] = 'field_job_description_value_op';
  $handler->display->display_options['filters']['field_job_description_value']['expose']['label'] = 'Beskrivelse';
  $handler->display->display_options['filters']['field_job_description_value']['expose']['operator'] = 'field_job_description_value_op';
  $handler->display->display_options['filters']['field_job_description_value']['expose']['identifier'] = 'field_job_description_value';
  $handler->display->display_options['filters']['field_job_description_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
  );
  /* Filterkriterie: Indhold: Place of work (field_job_place_of_work) */
  $handler->display->display_options['filters']['field_job_place_of_work_value']['id'] = 'field_job_place_of_work_value';
  $handler->display->display_options['filters']['field_job_place_of_work_value']['table'] = 'field_data_field_job_place_of_work';
  $handler->display->display_options['filters']['field_job_place_of_work_value']['field'] = 'field_job_place_of_work_value';
  $handler->display->display_options['filters']['field_job_place_of_work_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_job_place_of_work_value']['group'] = 1;
  $handler->display->display_options['filters']['field_job_place_of_work_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_job_place_of_work_value']['expose']['operator_id'] = 'field_job_place_of_work_value_op';
  $handler->display->display_options['filters']['field_job_place_of_work_value']['expose']['label'] = 'Place of work';
  $handler->display->display_options['filters']['field_job_place_of_work_value']['expose']['operator'] = 'field_job_place_of_work_value_op';
  $handler->display->display_options['filters']['field_job_place_of_work_value']['expose']['identifier'] = 'field_job_place_of_work_value';
  $handler->display->display_options['filters']['field_job_place_of_work_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
  );
  $handler->display->display_options['path'] = 'admin/content/job-importer-filter';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Job importer search';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['job'] = array(
    t('Master'),
    t('Job importer search'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Job listing by table'),
    t('Alle ledige stillinger i Favrskov Kommune'),
    t('Headline'),
    t('Place of work'),
    t('Startdato'),
    t('View panes'),
    t('Job listing by list'),
    t('Vælg et filter og klik på Anvend for at se resultater'),
    t('Overskrift'),
    t('Beskrivelse'),
  );
  $export['job'] = $view;

  return $export;
}
