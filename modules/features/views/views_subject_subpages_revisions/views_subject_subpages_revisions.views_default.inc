<?php
/**
 * @file
 * views_subject_subpages_revisions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_subject_subpages_revisions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'view_revisions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node_revision';
  $view->human_name = 'view revisions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view revisions';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'swiper-slide';
  $handler->display->display_options['style_options']['class'] = 'swiper-wrapper';
  $handler->display->display_options['style_options']['wrapper_class'] = 'swiper-container';
  $handler->display->display_options['style_options']['switcher'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content revision: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* Relationship: Content (historical data): Image / thumbnail (field_image_thumbnail:fid) */
  $handler->display->display_options['relationships']['field_image_thumbnail_fid']['id'] = 'field_image_thumbnail_fid';
  $handler->display->display_options['relationships']['field_image_thumbnail_fid']['table'] = 'field_revision_field_image_thumbnail';
  $handler->display->display_options['relationships']['field_image_thumbnail_fid']['field'] = 'field_image_thumbnail_fid';
  /* Field: Content (historical data): Image / thumbnail */
  $handler->display->display_options['fields']['field_image_thumbnail-revision_id']['id'] = 'field_image_thumbnail-revision_id';
  $handler->display->display_options['fields']['field_image_thumbnail-revision_id']['table'] = 'field_revision_field_image_thumbnail';
  $handler->display->display_options['fields']['field_image_thumbnail-revision_id']['field'] = 'field_image_thumbnail-revision_id';
  $handler->display->display_options['fields']['field_image_thumbnail-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_image_thumbnail-revision_id']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image_thumbnail-revision_id']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image_thumbnail-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail-revision_id']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image_thumbnail-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail-revision_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_thumbnail-revision_id']['type'] = 'picture';
  $handler->display->display_options['fields']['field_image_thumbnail-revision_id']['settings'] = array(
    'picture_group' => 'blogs',
    'fallback_image_style' => 'blog_teaser',
    'image_link' => '',
    'colorbox' => 'blogs',
  );
  $handler->display->display_options['fields']['field_image_thumbnail-revision_id']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail-revision_id']['delta_offset'] = '0';
  /* Field: File: Description */
  $handler->display->display_options['fields']['field_file_image_description']['id'] = 'field_file_image_description';
  $handler->display->display_options['fields']['field_file_image_description']['table'] = 'field_data_field_file_image_description';
  $handler->display->display_options['fields']['field_file_image_description']['field'] = 'field_file_image_description';
  $handler->display->display_options['fields']['field_file_image_description']['relationship'] = 'field_image_thumbnail_fid';
  $handler->display->display_options['fields']['field_file_image_description']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_description']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['field_file_image_description']['settings'] = array(
    'trim_length' => '200',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'trim_options' => array(
      'text' => 'text',
    ),
  );
  /* Field: Content (historical data): Image description */
  $handler->display->display_options['fields']['field_image_description-revision_id']['id'] = 'field_image_description-revision_id';
  $handler->display->display_options['fields']['field_image_description-revision_id']['table'] = 'field_revision_field_image_description';
  $handler->display->display_options['fields']['field_image_description-revision_id']['field'] = 'field_image_description-revision_id';
  $handler->display->display_options['fields']['field_image_description-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_image_description-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_description-revision_id']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image_description-revision_id']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image_description-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_description-revision_id']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image_description-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_description-revision_id']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['field_image_description-revision_id']['settings'] = array(
    'trim_length' => '200',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'trim_options' => array(
      'text' => 'text',
    ),
  );
  /* Field: File: Photographer */
  $handler->display->display_options['fields']['field_file_image_photographer']['id'] = 'field_file_image_photographer';
  $handler->display->display_options['fields']['field_file_image_photographer']['table'] = 'field_data_field_file_image_photographer';
  $handler->display->display_options['fields']['field_file_image_photographer']['field'] = 'field_file_image_photographer';
  $handler->display->display_options['fields']['field_file_image_photographer']['relationship'] = 'field_image_thumbnail_fid';
  $handler->display->display_options['fields']['field_file_image_photographer']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_file_image_photographer']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_file_image_photographer']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_file_image_photographer']['element_wrapper_class'] = 'photographer';
  $handler->display->display_options['fields']['field_file_image_photographer']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_photographer']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_photographer']['empty_zero'] = TRUE;
  /* Field: Views If Empty: Views If Empty */
  $handler->display->display_options['fields']['views_ifempty']['id'] = 'views_ifempty';
  $handler->display->display_options['fields']['views_ifempty']['table'] = 'views_ifempty';
  $handler->display->display_options['fields']['views_ifempty']['field'] = 'views_ifempty';
  $handler->display->display_options['fields']['views_ifempty']['label'] = '';
  $handler->display->display_options['fields']['views_ifempty']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_ifempty']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['views_ifempty']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['views_ifempty']['emptyfield'] = 'field_image_description-revision_id';
  $handler->display->display_options['fields']['views_ifempty']['outputfield'] = 'field_file_image_description';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['arguments']['nid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['relationship'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Workbench Moderation: Current */
  $handler->display->display_options['filters']['current']['id'] = 'current';
  $handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['current']['field'] = 'current';
  $handler->display->display_options['filters']['current']['value'] = '1';
  /* Filter criterion: Workbench Moderation: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'draft' => 'draft',
    'needs_review' => 'needs_review',
  );

  /* Display: Subpage slider revisions */
  $handler = $view->new_display('panel_pane', 'Subpage slider revisions', 'subpage_slider_revisions');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.vid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content revision: Nid',
    ),
  );
  $translatables['view_revisions'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Get the actual content from a content revision.'),
    t('image from field_image_thumbnail'),
    t('Photographer'),
    t('All'),
    t('Subpage slider revisions'),
    t('View panes'),
  );
  $export['view_revisions'] = $view;

  return $export;
}
