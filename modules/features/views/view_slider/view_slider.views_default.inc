<?php
/**
 * @file
 * view_slider.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function view_slider_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'gallery';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'bxslider';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'front_page_slider' => 'front_page_slider',
    'front_page_banners_block' => 0,
  );
  /* Relationship: Field: Image (field_image:fid) */
  $handler->display->display_options['relationships']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['relationships']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['relationships']['field_image_fid']['field'] = 'field_image_fid';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_external_link']['id'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['table'] = 'field_data_field_external_link';
  $handler->display->display_options['fields']['field_external_link']['field'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_external_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_external_link']['click_sort_column'] = 'url';
  /* Field: Content: Image alt text */
  $handler->display->display_options['fields']['field_image_alt_text']['id'] = 'field_image_alt_text';
  $handler->display->display_options['fields']['field_image_alt_text']['table'] = 'field_data_field_image_alt_text';
  $handler->display->display_options['fields']['field_image_alt_text']['field'] = 'field_image_alt_text';
  $handler->display->display_options['fields']['field_image_alt_text']['label'] = '';
  $handler->display->display_options['fields']['field_image_alt_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_alt_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_alt_text']['element_default_classes'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_external_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['path'] = '[field_external_link]';
  $handler->display->display_options['fields']['field_description']['element_type'] = '0';
  $handler->display->display_options['fields']['field_description']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_description']['element_default_classes'] = FALSE;
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_image_fid';
  $handler->display->display_options['fields']['uri']['label'] = '';
  $handler->display->display_options['fields']['uri']['element_type'] = '0';
  $handler->display->display_options['fields']['uri']['element_label_type'] = '0';
  $handler->display->display_options['fields']['uri']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uri']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['uri']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['sorts']['position']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['position']['expose']['label'] = 'Position';
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
    'slider_element' => 'slider_element',
  );
  /* Filter criterion: Nodequeue: Queue machine name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'nodequeue_queue';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Queue machine name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  $handler->display->display_options['filters']['name']['group_info']['label'] = 'Queue machine name';
  $handler->display->display_options['filters']['name']['group_info']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['name']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: Slider block */
  $handler = $view->new_display('panel_pane', 'Slider block', 'slider_block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'swiper-slide';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'swiper-wrapper';
  $handler->display->display_options['style_options']['wrapper_class'] = 'swiper-container swiper-content';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_external_link']['id'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['table'] = 'field_data_field_external_link';
  $handler->display->display_options['fields']['field_external_link']['field'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_external_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_link']['type'] = 'link_plain';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_external_link_1']['id'] = 'field_external_link_1';
  $handler->display->display_options['fields']['field_external_link_1']['table'] = 'field_data_field_external_link';
  $handler->display->display_options['fields']['field_external_link_1']['field'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_external_link_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_external_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_link_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_external_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_link_1']['type'] = 'link_target';
  /* Field: Content: Image alt text */
  $handler->display->display_options['fields']['field_image_alt_text']['id'] = 'field_image_alt_text';
  $handler->display->display_options['fields']['field_image_alt_text']['table'] = 'field_data_field_image_alt_text';
  $handler->display->display_options['fields']['field_image_alt_text']['field'] = 'field_image_alt_text';
  $handler->display->display_options['fields']['field_image_alt_text']['label'] = '';
  $handler->display->display_options['fields']['field_image_alt_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_alt_text']['element_default_classes'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_external_link]';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'picture_group' => 'slider',
    'fallback_image_style' => 'slidercustom_user_full_1x',
    'image_link' => '',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Slider navigation */
  $handler = $view->new_display('panel_pane', 'Slider navigation', 'slider_nav');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'content slide-controls';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'swiper-slide';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'swiper-wrapper';
  $handler->display->display_options['style_options']['wrapper_class'] = 'swiper-container swiper-container swiper-nav slider-nav-container';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_external_link']['id'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['table'] = 'field_data_field_external_link';
  $handler->display->display_options['fields']['field_external_link']['field'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_external_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_external_link']['click_sort_column'] = 'url';
  /* Field: Content: Image alt text */
  $handler->display->display_options['fields']['field_image_alt_text']['id'] = 'field_image_alt_text';
  $handler->display->display_options['fields']['field_image_alt_text']['table'] = 'field_data_field_image_alt_text';
  $handler->display->display_options['fields']['field_image_alt_text']['field'] = 'field_image_alt_text';
  $handler->display->display_options['fields']['field_image_alt_text']['label'] = '';
  $handler->display->display_options['fields']['field_image_alt_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_alt_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_alt_text']['element_default_classes'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'slider_thumb',
    'image_link' => '',
  );
  /* Field: Content: Slider menu text */
  $handler->display->display_options['fields']['field_link_text']['id'] = 'field_link_text';
  $handler->display->display_options['fields']['field_link_text']['table'] = 'field_data_field_link_text';
  $handler->display->display_options['fields']['field_link_text']['field'] = 'field_link_text';
  $handler->display->display_options['fields']['field_link_text']['label'] = '';
  $handler->display->display_options['fields']['field_link_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_text']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_link_text']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_link_text']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_link_text']['element_type'] = '0';
  $handler->display->display_options['fields']['field_link_text']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_link_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_text']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_link_text']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="inner" title="[field_image_alt_text]">
<div class="image">
<span class="overlay"></span>
[field_image]
</div>
<div class="description"><p>[field_link_text]</p></div>
</div>
';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_external_link]';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Slider with Navigation */
  $handler = $view->new_display('panel_pane', 'Slider with Navigation', 'slider_with_nav');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'swiper-slide';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'swiper-nav-wrapper';
  $handler->display->display_options['style_options']['wrapper_class'] = 'swiper-nav-container';
  $handler->display->display_options['style_options']['switcher'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_external_link']['id'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['table'] = 'field_data_field_external_link';
  $handler->display->display_options['fields']['field_external_link']['field'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_external_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_link']['type'] = 'link_plain';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_external_link_1']['id'] = 'field_external_link_1';
  $handler->display->display_options['fields']['field_external_link_1']['table'] = 'field_data_field_external_link';
  $handler->display->display_options['fields']['field_external_link_1']['field'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_external_link_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_external_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_link_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_external_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_link_1']['type'] = 'link_target';
  /* Field: Content: Image alt text */
  $handler->display->display_options['fields']['field_image_alt_text']['id'] = 'field_image_alt_text';
  $handler->display->display_options['fields']['field_image_alt_text']['table'] = 'field_data_field_image_alt_text';
  $handler->display->display_options['fields']['field_image_alt_text']['field'] = 'field_image_alt_text';
  $handler->display->display_options['fields']['field_image_alt_text']['label'] = '';
  $handler->display->display_options['fields']['field_image_alt_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_alt_text']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_external_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['path'] = '[field_external_link]';
  $handler->display->display_options['fields']['field_description']['element_type'] = '0';
  $handler->display->display_options['fields']['field_description']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_description']['element_default_classes'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_external_link]';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'picture_group' => 'slider',
    'fallback_image_style' => 'slidercustom_user_full_1x',
    'image_link' => '',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['slider'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('queue'),
    t('image from field_image'),
    t('Position'),
    t('Queue machine name'),
    t('Slider block'),
    t('View panes'),
    t('Slider navigation'),
    t('<div class="inner" title="[field_image_alt_text]">
<div class="image">
<span class="overlay"></span>
[field_image]
</div>
<div class="description"><p>[field_link_text]</p></div>
</div>
'),
    t('Slider with Navigation'),
  );
  $export['slider'] = $view;

  return $export;
}
