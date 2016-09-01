<?php
/**
 * @file
 * views_volunteer_jobs.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_volunteer_jobs_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'volunteer_jobs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Volunteer jobs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
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
  /* Field: Content: Apply url */
  $handler->display->display_options['fields']['field_volunteer_jobs_apply_url']['id'] = 'field_volunteer_jobs_apply_url';
  $handler->display->display_options['fields']['field_volunteer_jobs_apply_url']['table'] = 'field_data_field_volunteer_jobs_apply_url';
  $handler->display->display_options['fields']['field_volunteer_jobs_apply_url']['field'] = 'field_volunteer_jobs_apply_url';
  $handler->display->display_options['fields']['field_volunteer_jobs_apply_url']['label'] = '';
  $handler->display->display_options['fields']['field_volunteer_jobs_apply_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_volunteer_jobs_apply_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_volunteer_jobs_apply_url']['type'] = 'link_plain';
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_volunteer_jobs_institution']['id'] = 'field_volunteer_jobs_institution';
  $handler->display->display_options['fields']['field_volunteer_jobs_institution']['table'] = 'field_data_field_volunteer_jobs_institution';
  $handler->display->display_options['fields']['field_volunteer_jobs_institution']['field'] = 'field_volunteer_jobs_institution';
  $handler->display->display_options['fields']['field_volunteer_jobs_institution']['label'] = '';
  $handler->display->display_options['fields']['field_volunteer_jobs_institution']['element_label_colon'] = FALSE;
  /* Field: Content: Resume */
  $handler->display->display_options['fields']['field_volunteer_jobs_resume']['id'] = 'field_volunteer_jobs_resume';
  $handler->display->display_options['fields']['field_volunteer_jobs_resume']['table'] = 'field_data_field_volunteer_jobs_resume';
  $handler->display->display_options['fields']['field_volunteer_jobs_resume']['field'] = 'field_volunteer_jobs_resume';
  $handler->display->display_options['fields']['field_volunteer_jobs_resume']['label'] = '';
  $handler->display->display_options['fields']['field_volunteer_jobs_resume']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'volunteer_jobs' => 'volunteer_jobs',
  );

  /* Display: Volunteer jobs table */
  $handler = $view->new_display('panel_pane', 'Volunteer jobs table', 'volunteer_jobs_table');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_volunteer_jobs_resume' => 'field_volunteer_jobs_resume',
    'field_volunteer_jobs_institution' => 'field_volunteer_jobs_institution',
    'field_volunteer_jobs_apply_url' => 'field_volunteer_jobs_apply_url',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_volunteer_jobs_resume' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_volunteer_jobs_institution' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_volunteer_jobs_apply_url' => array(
      'sortable' => 0,
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Overskrift';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Resume */
  $handler->display->display_options['fields']['field_volunteer_jobs_resume']['id'] = 'field_volunteer_jobs_resume';
  $handler->display->display_options['fields']['field_volunteer_jobs_resume']['table'] = 'field_data_field_volunteer_jobs_resume';
  $handler->display->display_options['fields']['field_volunteer_jobs_resume']['field'] = 'field_volunteer_jobs_resume';
  $handler->display->display_options['fields']['field_volunteer_jobs_resume']['label'] = 'Beskrivelse';
  $handler->display->display_options['fields']['field_volunteer_jobs_resume']['element_label_colon'] = FALSE;
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_volunteer_jobs_institution']['id'] = 'field_volunteer_jobs_institution';
  $handler->display->display_options['fields']['field_volunteer_jobs_institution']['table'] = 'field_data_field_volunteer_jobs_institution';
  $handler->display->display_options['fields']['field_volunteer_jobs_institution']['field'] = 'field_volunteer_jobs_institution';
  $handler->display->display_options['fields']['field_volunteer_jobs_institution']['label'] = 'Organisation';
  $handler->display->display_options['fields']['field_volunteer_jobs_institution']['element_label_colon'] = FALSE;
  /* Field: Content: Apply url */
  $handler->display->display_options['fields']['field_volunteer_jobs_apply_url']['id'] = 'field_volunteer_jobs_apply_url';
  $handler->display->display_options['fields']['field_volunteer_jobs_apply_url']['table'] = 'field_data_field_volunteer_jobs_apply_url';
  $handler->display->display_options['fields']['field_volunteer_jobs_apply_url']['field'] = 'field_volunteer_jobs_apply_url';
  $handler->display->display_options['fields']['field_volunteer_jobs_apply_url']['label'] = '';
  $handler->display->display_options['fields']['field_volunteer_jobs_apply_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_volunteer_jobs_apply_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_volunteer_jobs_apply_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_volunteer_jobs_apply_url']['type'] = 'link_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteer_jobs' => 'volunteer_jobs',
  );

  /* Display: Volunteer jobs list */
  $handler = $view->new_display('panel_pane', 'Volunteer jobs list', 'volunteer_jobs_list');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Overskrift';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'title-value';
  $handler->display->display_options['fields']['title']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_label_class'] = 'title-label';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Resume */
  $handler->display->display_options['fields']['field_volunteer_jobs_resume']['id'] = 'field_volunteer_jobs_resume';
  $handler->display->display_options['fields']['field_volunteer_jobs_resume']['table'] = 'field_data_field_volunteer_jobs_resume';
  $handler->display->display_options['fields']['field_volunteer_jobs_resume']['field'] = 'field_volunteer_jobs_resume';
  $handler->display->display_options['fields']['field_volunteer_jobs_resume']['label'] = 'Beskrivelse';
  $handler->display->display_options['fields']['field_volunteer_jobs_resume']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_volunteer_jobs_resume']['element_class'] = 'resume-value';
  $handler->display->display_options['fields']['field_volunteer_jobs_resume']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_volunteer_jobs_resume']['element_label_class'] = 'resume-label';
  $handler->display->display_options['fields']['field_volunteer_jobs_resume']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_volunteer_jobs_resume']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['field_volunteer_jobs_resume']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '300',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'trim_options' => array(
      'text' => 'text',
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_volunteer_jobs_institution']['id'] = 'field_volunteer_jobs_institution';
  $handler->display->display_options['fields']['field_volunteer_jobs_institution']['table'] = 'field_data_field_volunteer_jobs_institution';
  $handler->display->display_options['fields']['field_volunteer_jobs_institution']['field'] = 'field_volunteer_jobs_institution';
  $handler->display->display_options['fields']['field_volunteer_jobs_institution']['label'] = 'Organisation';
  $handler->display->display_options['fields']['field_volunteer_jobs_institution']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_volunteer_jobs_institution']['element_class'] = 'organization-value';
  $handler->display->display_options['fields']['field_volunteer_jobs_institution']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_volunteer_jobs_institution']['element_label_class'] = 'organization-label';
  $handler->display->display_options['fields']['field_volunteer_jobs_institution']['element_default_classes'] = FALSE;
  /* Field: Content: Apply url */
  $handler->display->display_options['fields']['field_volunteer_jobs_apply_url']['id'] = 'field_volunteer_jobs_apply_url';
  $handler->display->display_options['fields']['field_volunteer_jobs_apply_url']['table'] = 'field_data_field_volunteer_jobs_apply_url';
  $handler->display->display_options['fields']['field_volunteer_jobs_apply_url']['field'] = 'field_volunteer_jobs_apply_url';
  $handler->display->display_options['fields']['field_volunteer_jobs_apply_url']['label'] = '';
  $handler->display->display_options['fields']['field_volunteer_jobs_apply_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_volunteer_jobs_apply_url']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_volunteer_jobs_apply_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_volunteer_jobs_apply_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_volunteer_jobs_apply_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_volunteer_jobs_apply_url']['type'] = 'link_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteer_jobs' => 'volunteer_jobs',
  );
  $translatables['volunteer_jobs'] = array(
    t('Master'),
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
    t('Volunteer jobs table'),
    t('Overskrift'),
    t('Beskrivelse'),
    t('Organisation'),
    t('View panes'),
    t('Volunteer jobs list'),
  );
  $export['volunteer_jobs'] = $view;

  return $export;
}
