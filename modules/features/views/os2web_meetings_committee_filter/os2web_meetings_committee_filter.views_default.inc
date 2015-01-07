<?php
/**
 * @file
 * os2web_meetings_committee_filter.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_meetings_committee_filter_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'os2web_meetings_committee_filter';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'OS2Web Meetings Committee filter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = t('Another committees');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['css_class'] = 'sidebar-filters';
  /* Relationship: Taxonomy term: Content using Committee */
  $handler->display->display_options['relationships']['reverse_field_os2web_meetings_committee_node']['id'] = 'reverse_field_os2web_meetings_committee_node';
  $handler->display->display_options['relationships']['reverse_field_os2web_meetings_committee_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_os2web_meetings_committee_node']['field'] = 'reverse_field_os2web_meetings_committee_node';
  $handler->display->display_options['relationships']['reverse_field_os2web_meetings_committee_node']['required'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Contextual filter: Taxonomy term: ID (field_os2web_meetings_commiteeid) */
  $handler->display->display_options['arguments']['field_os2web_meetings_commiteeid_value']['id'] = 'field_os2web_meetings_commiteeid_value';
  $handler->display->display_options['arguments']['field_os2web_meetings_commiteeid_value']['table'] = 'field_data_field_os2web_meetings_commiteeid';
  $handler->display->display_options['arguments']['field_os2web_meetings_commiteeid_value']['field'] = 'field_os2web_meetings_commiteeid_value';
  $handler->display->display_options['arguments']['field_os2web_meetings_commiteeid_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_os2web_meetings_commiteeid_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_os2web_meetings_commiteeid_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_os2web_meetings_commiteeid_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_os2web_meetings_commiteeid_value']['not'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'os2web_meetings_tax_committee' => 'os2web_meetings_tax_committee',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'field_os2web_meetings_commiteeid_value' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: ID',
    ),
  );
  $translatables['os2web_meetings_committee_filter'] = array(
    t('Master'),
    t('Another committees'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_os2web_meetings_committee'),
    t('All'),
    t('Content pane'),
    t('View panes'),
  );
  $export['os2web_meetings_committee_filter'] = $view;

  return $export;
}
