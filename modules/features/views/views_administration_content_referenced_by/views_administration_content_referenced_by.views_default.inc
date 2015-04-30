<?php
/**
 * @file
 * views_administration_content_referenced_by.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_administration_content_referenced_by_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'administration_content_referenced_by';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Administration: Content referenced by';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Referenced by';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'status' => 'status',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
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
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Pages listed on this page has referenced to the piece of content in context. This does not include manually added links in WYSIWYG-editors and other text fields.';
  $handler->display->display_options['header']['area']['format'] = 'job_html';
  /* Forbindelse: Indhold: Forfatter */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Forfatter';
  /* Felt: Indhold: Udgivet */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Felt: Indhold: Opdateringsdato */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Opdateret';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'd/m-Y H:i:s';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'short_date';
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Indhold: Overskrift */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Udgivet';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );

  /* Display: FAQ */
  $handler = $view->new_display('page', 'FAQ', 'faq');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Spørgsmål og svar (field_faq_ref) */
  $handler->display->display_options['arguments']['field_faq_ref_nid']['id'] = 'field_faq_ref_nid';
  $handler->display->display_options['arguments']['field_faq_ref_nid']['table'] = 'field_data_field_faq_ref';
  $handler->display->display_options['arguments']['field_faq_ref_nid']['field'] = 'field_faq_ref_nid';
  $handler->display->display_options['arguments']['field_faq_ref_nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_faq_ref_nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_faq_ref_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_faq_ref_nid']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['field_faq_ref_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_faq_ref_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_faq_ref_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_faq_ref_nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_faq_ref_nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_faq_ref_nid']['validate_options']['types'] = array(
    'faq' => 'faq',
  );
  $handler->display->display_options['path'] = 'node/%/faq-referenced-by';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Referenced by';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Fact boxes */
  $handler = $view->new_display('page', 'Fact boxes', 'fact_boxes');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Relaterede bokse (field_related_boxes) */
  $handler->display->display_options['arguments']['field_related_boxes_nid']['id'] = 'field_related_boxes_nid';
  $handler->display->display_options['arguments']['field_related_boxes_nid']['table'] = 'field_data_field_related_boxes';
  $handler->display->display_options['arguments']['field_related_boxes_nid']['field'] = 'field_related_boxes_nid';
  $handler->display->display_options['arguments']['field_related_boxes_nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_related_boxes_nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_related_boxes_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_related_boxes_nid']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['field_related_boxes_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_related_boxes_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_related_boxes_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_related_boxes_nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_related_boxes_nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_related_boxes_nid']['validate_options']['types'] = array(
    'factbox' => 'factbox',
  );
  $handler->display->display_options['path'] = 'node/%/factbox-referenced-by';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Referenced by';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Self service */
  $handler = $view->new_display('page', 'Self service', 'self_service');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Selvbetjening (field_self_service) */
  $handler->display->display_options['arguments']['field_self_service_nid']['id'] = 'field_self_service_nid';
  $handler->display->display_options['arguments']['field_self_service_nid']['table'] = 'field_data_field_self_service';
  $handler->display->display_options['arguments']['field_self_service_nid']['field'] = 'field_self_service_nid';
  $handler->display->display_options['arguments']['field_self_service_nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_self_service_nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_self_service_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_self_service_nid']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['field_self_service_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_self_service_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_self_service_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_self_service_nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_self_service_nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_self_service_nid']['validate_options']['types'] = array(
    'self_service' => 'self_service',
  );
  $handler->display->display_options['path'] = 'node/%/selfservice-referenced-by';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Referenced by';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Banner link */
  $handler = $view->new_display('page', 'Banner link', 'banner_link');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Bannerlink (field_bannerlink) */
  $handler->display->display_options['arguments']['field_bannerlink_nid']['id'] = 'field_bannerlink_nid';
  $handler->display->display_options['arguments']['field_bannerlink_nid']['table'] = 'field_data_field_bannerlink';
  $handler->display->display_options['arguments']['field_bannerlink_nid']['field'] = 'field_bannerlink_nid';
  $handler->display->display_options['arguments']['field_bannerlink_nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_bannerlink_nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_bannerlink_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_bannerlink_nid']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['field_bannerlink_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_bannerlink_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_bannerlink_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_bannerlink_nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_bannerlink_nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_bannerlink_nid']['validate_options']['types'] = array(
    'bannerlink' => 'bannerlink',
  );
  $handler->display->display_options['path'] = 'node/%/bannerlink-referenced-by';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Referenced by';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Phonebook */
  $handler = $view->new_display('page', 'Phonebook', 'phonebook');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Kontaktinformation (field_contact_information) */
  $handler->display->display_options['arguments']['field_contact_information_nid']['id'] = 'field_contact_information_nid';
  $handler->display->display_options['arguments']['field_contact_information_nid']['table'] = 'field_data_field_contact_information';
  $handler->display->display_options['arguments']['field_contact_information_nid']['field'] = 'field_contact_information_nid';
  $handler->display->display_options['arguments']['field_contact_information_nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_contact_information_nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_contact_information_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_contact_information_nid']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['field_contact_information_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_contact_information_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_contact_information_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_contact_information_nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_contact_information_nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_contact_information_nid']['validate_options']['types'] = array(
    'phone_book' => 'phone_book',
  );
  $handler->display->display_options['path'] = 'node/%/phonebook-referenced-by';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Referenced by';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Borger.dk article */
  $handler = $view->new_display('page', 'Borger.dk article', 'borgerdk_article');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: BorgerDK (field_borgerdk) */
  $handler->display->display_options['arguments']['field_borgerdk_nid']['id'] = 'field_borgerdk_nid';
  $handler->display->display_options['arguments']['field_borgerdk_nid']['table'] = 'field_data_field_borgerdk';
  $handler->display->display_options['arguments']['field_borgerdk_nid']['field'] = 'field_borgerdk_nid';
  $handler->display->display_options['arguments']['field_borgerdk_nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_borgerdk_nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_borgerdk_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_borgerdk_nid']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['field_borgerdk_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_borgerdk_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_borgerdk_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_borgerdk_nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_borgerdk_nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_borgerdk_nid']['validate_options']['types'] = array(
    'borger_dk_article' => 'borger_dk_article',
  );
  $handler->display->display_options['path'] = 'node/%/borgerdk-referenced-by';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Referenced by';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['administration_content_referenced_by'] = array(
    t('Master'),
    t('Referenced by'),
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
    t('Pages listed on this page has referenced to the piece of content in context. This does not include manually added links in WYSIWYG-editors and other text fields.'),
    t('forfatter'),
    t('Overskrift'),
    t('Type'),
    t('Forfatter'),
    t('Udgivet'),
    t('Opdateret'),
    t('FAQ'),
    t('Alle'),
    t('Fact boxes'),
    t('Self service'),
    t('Banner link'),
    t('Phonebook'),
    t('Borger.dk article'),
  );
  $export['administration_content_referenced_by'] = $view;

  return $export;
}
