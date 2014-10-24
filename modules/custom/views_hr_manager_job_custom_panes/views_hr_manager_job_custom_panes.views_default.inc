<?php
/**
 * @file
 * views_hr_manager_job_custom_panes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_hr_manager_job_custom_panes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'hr_manager_job_custom_panes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'HR-Manager Job custom panes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Vacancies';
  $handler->display->display_options['css_class'] = 'job-list';
  $handler->display->display_options['use_ajax'] = TRUE;
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
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '25';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['pager']['options']['advance']['content_class'] = 'table>tbody';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_application_due' => 'field_application_due',
  );
  $handler->display->display_options['style_options']['default'] = 'field_application_due';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_application_due' => array(
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
  $handler->display->display_options['empty']['area']['content'] = 'Ingen resultater';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Stilling';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Application Due */
  $handler->display->display_options['fields']['field_application_due']['id'] = 'field_application_due';
  $handler->display->display_options['fields']['field_application_due']['table'] = 'field_data_field_application_due';
  $handler->display->display_options['fields']['field_application_due']['field'] = 'field_application_due';
  $handler->display->display_options['fields']['field_application_due']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_application_due']['settings'] = array(
    'format_type' => 'short_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_application_due']['field_api_classes'] = TRUE;
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
    'os2web_hr_manager_job' => 'os2web_hr_manager_job',
  );
  /* Filter criterion: Content: Application Due (field_application_due) */
  $handler->display->display_options['filters']['field_application_due_value']['id'] = 'field_application_due_value';
  $handler->display->display_options['filters']['field_application_due_value']['table'] = 'field_data_field_application_due';
  $handler->display->display_options['filters']['field_application_due_value']['field'] = 'field_application_due_value';
  $handler->display->display_options['filters']['field_application_due_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_application_due_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_application_due_value']['default_date'] = 'now';
  /* Filter criterion: Content: Position Category (field_position_category) (selective) */
  $handler->display->display_options['filters']['field_position_category_tid_selective']['id'] = 'field_position_category_tid_selective';
  $handler->display->display_options['filters']['field_position_category_tid_selective']['table'] = 'field_data_field_position_category';
  $handler->display->display_options['filters']['field_position_category_tid_selective']['field'] = 'field_position_category_tid_selective';
  $handler->display->display_options['filters']['field_position_category_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_position_category_tid_selective']['expose']['operator_id'] = 'field_position_category_tid_selective_op';
  $handler->display->display_options['filters']['field_position_category_tid_selective']['expose']['label'] = 'Kategori';
  $handler->display->display_options['filters']['field_position_category_tid_selective']['expose']['operator'] = 'field_position_category_tid_selective_op';
  $handler->display->display_options['filters']['field_position_category_tid_selective']['expose']['identifier'] = 'field_position_category_tid_selective';
  $handler->display->display_options['filters']['field_position_category_tid_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_position_category_tid_selective']['group_info']['label'] = 'Stilling Kategori (field_position_category) (selective)';
  $handler->display->display_options['filters']['field_position_category_tid_selective']['group_info']['identifier'] = 'field_position_category_tid_selective';
  $handler->display->display_options['filters']['field_position_category_tid_selective']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_position_category_tid_selective']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: Jobs List */
  $handler = $view->new_display('panel_pane', 'Jobs List', 'panel_pane_1');
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
  $translatables['hr_manager_job_custom_panes'] = array(
    t('Master'),
    t('Vacancies'),
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
    t('Ingen resultater'),
    t('Stilling'),
    t('Application Due'),
    t('Kategori'),
    t('Stilling Kategori (field_position_category) (selective)'),
    t('Jobs List'),
    t('more'),
    t('View panes'),
  );
  $export['hr_manager_job_custom_panes'] = $view;

  return $export;
}
