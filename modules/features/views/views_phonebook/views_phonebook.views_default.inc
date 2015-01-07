<?php
/**
 * @file
 * views_phonebook.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_phonebook_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'phonebook';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Phonebook';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
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
  $handler->display->display_options['pager']['options']['advance']['content_class'] = 'table>tbody';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_phone_book_firstname' => 'field_phone_book_firstname',
    'field_phone_book_lastname' => 'field_phone_book_lastname',
    'field_phone_book_email' => 'field_phone_book_email',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone_book_firstname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone_book_lastname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone_book_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sorteringskriterie: Indhold: Overskrift */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'phone_book' => 'phone_book',
  );
  /* Filterkriterie: Indhold: Firstname (field_phone_book_firstname) */
  $handler->display->display_options['filters']['field_phone_book_firstname_value']['id'] = 'field_phone_book_firstname_value';
  $handler->display->display_options['filters']['field_phone_book_firstname_value']['table'] = 'field_data_field_phone_book_firstname';
  $handler->display->display_options['filters']['field_phone_book_firstname_value']['field'] = 'field_phone_book_firstname_value';
  /* Filterkriterie: Indhold: Lastname (field_phone_book_lastname) */
  $handler->display->display_options['filters']['field_phone_book_lastname_value']['id'] = 'field_phone_book_lastname_value';
  $handler->display->display_options['filters']['field_phone_book_lastname_value']['table'] = 'field_data_field_phone_book_lastname';
  $handler->display->display_options['filters']['field_phone_book_lastname_value']['field'] = 'field_phone_book_lastname_value';

  /* Display: Alphabetic employee listing */
  $handler = $view->new_display('panel_pane', 'Alphabetic employee listing', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medarbejdere';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Firstname */
  $handler->display->display_options['fields']['field_phone_book_firstname']['id'] = 'field_phone_book_firstname';
  $handler->display->display_options['fields']['field_phone_book_firstname']['table'] = 'field_data_field_phone_book_firstname';
  $handler->display->display_options['fields']['field_phone_book_firstname']['field'] = 'field_phone_book_firstname';
  $handler->display->display_options['fields']['field_phone_book_firstname']['label'] = 'Fornavn';
  $handler->display->display_options['fields']['field_phone_book_firstname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_phone_book_firstname']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_phone_book_firstname']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Lastname */
  $handler->display->display_options['fields']['field_phone_book_lastname']['id'] = 'field_phone_book_lastname';
  $handler->display->display_options['fields']['field_phone_book_lastname']['table'] = 'field_data_field_phone_book_lastname';
  $handler->display->display_options['fields']['field_phone_book_lastname']['field'] = 'field_phone_book_lastname';
  $handler->display->display_options['fields']['field_phone_book_lastname']['label'] = 'Efternavn';
  $handler->display->display_options['fields']['field_phone_book_lastname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_phone_book_lastname']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_phone_book_lastname']['element_label_colon'] = FALSE;
  /* Felt: Indhold: E-mail */
  $handler->display->display_options['fields']['field_phone_book_email']['id'] = 'field_phone_book_email';
  $handler->display->display_options['fields']['field_phone_book_email']['table'] = 'field_data_field_phone_book_email';
  $handler->display->display_options['fields']['field_phone_book_email']['field'] = 'field_phone_book_email';
  $handler->display->display_options['fields']['field_phone_book_email']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_phone_book_email']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_phone_book_email']['element_label_colon'] = FALSE;
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
    'phone_book' => 'phone_book',
  );
  /* Filterkriterie: Indhold: Firstname (field_phone_book_firstname) */
  $handler->display->display_options['filters']['field_phone_book_firstname_value']['id'] = 'field_phone_book_firstname_value';
  $handler->display->display_options['filters']['field_phone_book_firstname_value']['table'] = 'field_data_field_phone_book_firstname';
  $handler->display->display_options['filters']['field_phone_book_firstname_value']['field'] = 'field_phone_book_firstname_value';
  $handler->display->display_options['filters']['field_phone_book_firstname_value']['operator'] = '!=';
  /* Filterkriterie: Indhold: Lastname (field_phone_book_lastname) */
  $handler->display->display_options['filters']['field_phone_book_lastname_value']['id'] = 'field_phone_book_lastname_value';
  $handler->display->display_options['filters']['field_phone_book_lastname_value']['table'] = 'field_data_field_phone_book_lastname';
  $handler->display->display_options['filters']['field_phone_book_lastname_value']['field'] = 'field_phone_book_lastname_value';
  $handler->display->display_options['filters']['field_phone_book_lastname_value']['operator'] = '!=';
  /* Filterkriterie: Indhold: Department (field_phone_book_department) */
  $handler->display->display_options['filters']['field_phone_book_department_tid']['id'] = 'field_phone_book_department_tid';
  $handler->display->display_options['filters']['field_phone_book_department_tid']['table'] = 'field_data_field_phone_book_department';
  $handler->display->display_options['filters']['field_phone_book_department_tid']['field'] = 'field_phone_book_department_tid';
  $handler->display->display_options['filters']['field_phone_book_department_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_phone_book_department_tid']['expose']['operator_id'] = 'field_phone_book_department_tid_op';
  $handler->display->display_options['filters']['field_phone_book_department_tid']['expose']['label'] = 'Afdeling';
  $handler->display->display_options['filters']['field_phone_book_department_tid']['expose']['operator'] = 'field_phone_book_department_tid_op';
  $handler->display->display_options['filters']['field_phone_book_department_tid']['expose']['identifier'] = 'field_phone_book_department_tid';
  $handler->display->display_options['filters']['field_phone_book_department_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_phone_book_department_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_phone_book_department_tid']['vocabulary'] = 'phonebook_department';
  /* Filterkriterie: Indhold: Overskrift */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Søg i navn';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['pane_category']['weight'] = '0';
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

  /* Display: Institution listing filtered by type */
  $handler = $view->new_display('panel_pane', 'Institution listing filtered by type', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Institutioner';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Opførsel ved ingen resultater: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Ingen resultater fundet';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Hjemmeside */
  $handler->display->display_options['fields']['field_phone_book_website']['id'] = 'field_phone_book_website';
  $handler->display->display_options['fields']['field_phone_book_website']['table'] = 'field_data_field_phone_book_website';
  $handler->display->display_options['fields']['field_phone_book_website']['field'] = 'field_phone_book_website';
  $handler->display->display_options['fields']['field_phone_book_website']['label'] = '';
  $handler->display->display_options['fields']['field_phone_book_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone_book_website']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_phone_book_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone_book_website']['empty'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_phone_book_website']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_phone_book_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_phone_book_website']['type'] = 'link_plain';
  /* Felt: Indhold: Lastname */
  $handler->display->display_options['fields']['field_phone_book_lastname']['id'] = 'field_phone_book_lastname';
  $handler->display->display_options['fields']['field_phone_book_lastname']['table'] = 'field_data_field_phone_book_lastname';
  $handler->display->display_options['fields']['field_phone_book_lastname']['field'] = 'field_phone_book_lastname';
  $handler->display->display_options['fields']['field_phone_book_lastname']['label'] = 'Navn';
  $handler->display->display_options['fields']['field_phone_book_lastname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_phone_book_lastname']['alter']['path'] = '[field_phone_book_website]';
  $handler->display->display_options['fields']['field_phone_book_lastname']['alter']['alt'] = '[field_phone_book_lastname] ';
  $handler->display->display_options['fields']['field_phone_book_lastname']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_phone_book_lastname']['element_label_colon'] = FALSE;
  /* Felt: Indhold: E-mail */
  $handler->display->display_options['fields']['field_phone_book_email']['id'] = 'field_phone_book_email';
  $handler->display->display_options['fields']['field_phone_book_email']['table'] = 'field_data_field_phone_book_email';
  $handler->display->display_options['fields']['field_phone_book_email']['field'] = 'field_phone_book_email';
  $handler->display->display_options['fields']['field_phone_book_email']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_phone_book_email']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_phone_book_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Type (field_phone_book_type) */
  $handler->display->display_options['arguments']['field_phone_book_type_tid']['id'] = 'field_phone_book_type_tid';
  $handler->display->display_options['arguments']['field_phone_book_type_tid']['table'] = 'field_data_field_phone_book_type';
  $handler->display->display_options['arguments']['field_phone_book_type_tid']['field'] = 'field_phone_book_type_tid';
  $handler->display->display_options['arguments']['field_phone_book_type_tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_phone_book_type_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_phone_book_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_phone_book_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_phone_book_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_phone_book_type_tid']['summary_options']['items_per_page'] = '25';
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
    'phone_book' => 'phone_book',
  );
  /* Filterkriterie: Indhold: Lastname (field_phone_book_lastname) */
  $handler->display->display_options['filters']['field_phone_book_lastname_value']['id'] = 'field_phone_book_lastname_value';
  $handler->display->display_options['filters']['field_phone_book_lastname_value']['table'] = 'field_data_field_phone_book_lastname';
  $handler->display->display_options['filters']['field_phone_book_lastname_value']['field'] = 'field_phone_book_lastname_value';
  $handler->display->display_options['filters']['field_phone_book_lastname_value']['operator'] = '!=';
  $handler->display->display_options['pane_category']['weight'] = '0';
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
    'field_phone_book_type_tid' => array(
      'type' => 'user',
      'context' => 'entity:user.field_administrative_title',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Phone book: Type (term ID)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['phonebook'] = array(
    t('Master'),
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
    t('Alphabetic employee listing'),
    t('Medarbejdere'),
    t('Fornavn'),
    t('Efternavn'),
    t('E-mail'),
    t('Afdeling'),
    t('Søg i navn'),
    t('View panes'),
    t('Institution listing filtered by type'),
    t('Institutioner'),
    t('Ingen resultater fundet'),
    t('node/[nid]'),
    t('Navn'),
    t('[field_phone_book_lastname] '),
    t('Alle'),
  );
  $export['phonebook'] = $view;

  return $export;
}
