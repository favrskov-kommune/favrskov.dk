<?php
/**
 * @file
 * view_video.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function view_video_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'video';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Video';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'videos-view';
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
    'field_video_category_tid' => array(
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
  $handler->display->display_options['pager']['options']['advance']['content_class'] = '.view-content ul';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['style_options']['switcher'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_embed_video']['id'] = 'field_embed_video';
  $handler->display->display_options['fields']['field_embed_video']['table'] = 'field_data_field_embed_video';
  $handler->display->display_options['fields']['field_embed_video']['field'] = 'field_embed_video';
  $handler->display->display_options['fields']['field_embed_video']['label'] = '';
  $handler->display->display_options['fields']['field_embed_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_embed_video']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_embed_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_embed_video']['type'] = 'video_embed_field_thumbnail';
  $handler->display->display_options['fields']['field_embed_video']['settings'] = array(
    'image_style' => 'videocustom_user_tablet_1x',
    'image_link' => 'node',
  );
  /* Field: Content: Video category */
  $handler->display->display_options['fields']['field_video_category']['id'] = 'field_video_category';
  $handler->display->display_options['fields']['field_video_category']['table'] = 'field_data_field_video_category';
  $handler->display->display_options['fields']['field_video_category']['field'] = 'field_video_category';
  $handler->display->display_options['fields']['field_video_category']['label'] = '';
  $handler->display->display_options['fields']['field_video_category']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_video_category']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_video_category']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_video_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Video description */
  $handler->display->display_options['fields']['field_video_description']['id'] = 'field_video_description';
  $handler->display->display_options['fields']['field_video_description']['table'] = 'field_data_field_video_description';
  $handler->display->display_options['fields']['field_video_description']['field'] = 'field_video_description';
  $handler->display->display_options['fields']['field_video_description']['label'] = '';
  $handler->display->display_options['fields']['field_video_description']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_video_description']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_video_description']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_video_description']['element_type'] = '0';
  $handler->display->display_options['fields']['field_video_description']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_video_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_description']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_video_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video_description']['type'] = 'text_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_label_type'] = '0';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'news_date';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
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
    'video_element' => 'video_element',
  );
  /* Filter criterion: Content: Video category (field_video_category) */
  $handler->display->display_options['filters']['field_video_category_tid']['id'] = 'field_video_category_tid';
  $handler->display->display_options['filters']['field_video_category_tid']['table'] = 'field_data_field_video_category';
  $handler->display->display_options['filters']['field_video_category_tid']['field'] = 'field_video_category_tid';
  $handler->display->display_options['filters']['field_video_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_video_category_tid']['expose']['operator_id'] = 'field_video_category_tid_op';
  $handler->display->display_options['filters']['field_video_category_tid']['expose']['operator'] = 'field_video_category_tid_op';
  $handler->display->display_options['filters']['field_video_category_tid']['expose']['identifier'] = 'field_video_category_tid';
  $handler->display->display_options['filters']['field_video_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_video_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_video_category_tid']['vocabulary'] = 'video_category';

  /* Display: Video list */
  $handler = $view->new_display('panel_pane', 'Video list', 'video_list');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Video pane */
  $handler = $view->new_display('panel_pane', 'Video pane', 'video_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = t('Featured videos');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'video-items';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['style_options']['switcher'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'front_page_banners_block' => 0,
    'front_page_slider' => 0,
    'front_page_video_block' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['path']['alter']['link_class'] = 'video-link';
  $handler->display->display_options['fields']['path']['element_type'] = 'span';
  $handler->display->display_options['fields']['path']['element_label_type'] = '0';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_embed_video']['id'] = 'field_embed_video';
  $handler->display->display_options['fields']['field_embed_video']['table'] = 'field_data_field_embed_video';
  $handler->display->display_options['fields']['field_embed_video']['field'] = 'field_embed_video';
  $handler->display->display_options['fields']['field_embed_video']['label'] = '';
  $handler->display->display_options['fields']['field_embed_video']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_embed_video']['alter']['text'] = '<span class="icon-play"></span>
[field_embed_video]';
  $handler->display->display_options['fields']['field_embed_video']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_embed_video']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_embed_video']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_embed_video']['element_class'] = 'video-thumb';
  $handler->display->display_options['fields']['field_embed_video']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_embed_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_embed_video']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_embed_video']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_embed_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_embed_video']['type'] = 'video_embed_field_thumbnail';
  $handler->display->display_options['fields']['field_embed_video']['settings'] = array(
    'image_style' => 'videocustom_user_tablet_1x',
    'image_link' => 'node',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Nodequeue: Queue machine name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'nodequeue_queue';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['arguments']['name']['default_action'] = 'empty';
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
    'video_element' => 'video_element',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Nodequeue: Queue machine name',
    ),
  );
  $translatables['video'] = array(
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
    t('No results'),
    t('All'),
    t('Video list'),
    t('View panes'),
    t('Video pane'),
    t('Featured videos'),
    t('queue'),
    t('<span class="icon-play"></span>
[field_embed_video]'),
  );
  $export['video'] = $view;

  return $export;
}
