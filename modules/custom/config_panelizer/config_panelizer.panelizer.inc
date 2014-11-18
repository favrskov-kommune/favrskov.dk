<?php
/**
 * @file
 * config_panelizer.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function config_panelizer_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:frontpage:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'frontpage';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'frontpage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'region-two' => NULL,
      'region-three' => NULL,
      'region-four' => NULL,
      'region-five' => NULL,
      'region-six' => NULL,
      'region-seven' => NULL,
      'region-eight' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7c5c9446-8cdb-48a6-b61b-88169dcaa4b9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5e9c0320-0dab-47ed-b06c-68b28802fb16';
    $pane->panel = 'header';
    $pane->type = 'panels_mini';
    $pane->subtype = 'header_mini_panel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5e9c0320-0dab-47ed-b06c-68b28802fb16';
    $display->content['new-5e9c0320-0dab-47ed-b06c-68b28802fb16'] = $pane;
    $display->panels['header'][0] = 'new-5e9c0320-0dab-47ed-b06c-68b28802fb16';
    $pane = new stdClass();
    $pane->pid = 'new-a29d2063-c95e-458e-b9ff-38c259d550ad';
    $pane->panel = 'region-eight';
    $pane->type = 'panels_mini';
    $pane->subtype = 'footer_mini_panel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a29d2063-c95e-458e-b9ff-38c259d550ad';
    $display->content['new-a29d2063-c95e-458e-b9ff-38c259d550ad'] = $pane;
    $display->panels['region-eight'][0] = 'new-a29d2063-c95e-458e-b9ff-38c259d550ad';
    $pane = new stdClass();
    $pane->pid = 'new-9326c876-b61c-4490-b962-1fc3374d767a';
    $pane->panel = 'region-four';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '4',
      'offset' => '0',
      'path' => 'nyheder',
      'arguments' => array(
        'name' => '',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9326c876-b61c-4490-b962-1fc3374d767a';
    $display->content['new-9326c876-b61c-4490-b962-1fc3374d767a'] = $pane;
    $display->panels['region-four'][0] = 'new-9326c876-b61c-4490-b962-1fc3374d767a';
    $pane = new stdClass();
    $pane->pid = 'new-6ffe792c-1943-4213-a5d7-0d31715826c7';
    $pane->panel = 'region-seven';
    $pane->type = 'views_panes';
    $pane->subtype = 'banners-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '3',
      'offset' => '0',
      'arguments' => array(
        'name' => 'front_page_banners_block',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6ffe792c-1943-4213-a5d7-0d31715826c7';
    $display->content['new-6ffe792c-1943-4213-a5d7-0d31715826c7'] = $pane;
    $display->panels['region-seven'][0] = 'new-6ffe792c-1943-4213-a5d7-0d31715826c7';
    $pane = new stdClass();
    $pane->pid = 'new-d2ccb7d6-76ec-4c2c-870d-650c4a815426';
    $pane->panel = 'region-three';
    $pane->type = 'views_panes';
    $pane->subtype = 'slider-slider_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '0',
      'offset' => '0',
      'exposed' => array(
        'name' => 'front_page_slider',
        'sort_by' => 'position',
        'sort_order' => 'ASC',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd2ccb7d6-76ec-4c2c-870d-650c4a815426';
    $display->content['new-d2ccb7d6-76ec-4c2c-870d-650c4a815426'] = $pane;
    $display->panels['region-three'][0] = 'new-d2ccb7d6-76ec-4c2c-870d-650c4a815426';
    $pane = new stdClass();
    $pane->pid = 'new-921599e5-271d-41cb-afed-193e5addc165';
    $pane->panel = 'region-three';
    $pane->type = 'views_panes';
    $pane->subtype = 'slider-slider_nav';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '0',
      'offset' => '0',
      'exposed' => array(
        'name' => 'front_page_slider',
        'sort_by' => 'position',
        'sort_order' => 'ASC',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '921599e5-271d-41cb-afed-193e5addc165';
    $display->content['new-921599e5-271d-41cb-afed-193e5addc165'] = $pane;
    $display->panels['region-three'][1] = 'new-921599e5-271d-41cb-afed-193e5addc165';
    $pane = new stdClass();
    $pane->pid = 'new-cfa80fe6-700c-4953-8b72-bb881fdd87e7';
    $pane->panel = 'region-two';
    $pane->type = 'views_panes';
    $pane->subtype = 'subject_grid-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'name' => '',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cfa80fe6-700c-4953-8b72-bb881fdd87e7';
    $display->content['new-cfa80fe6-700c-4953-8b72-bb881fdd87e7'] = $pane;
    $display->panels['region-two'][0] = 'new-cfa80fe6-700c-4953-8b72-bb881fdd87e7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:frontpage:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:subjectpage:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'subjectpage';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'subjectpage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'popular' => NULL,
      'popular_img' => NULL,
      'test' => NULL,
      'teasers' => NULL,
      'news' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '44221b16-e73b-438a-b810-122b8efcc408';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e1ee700f-c8fb-4060-99c2-2578db8333db';
    $pane->panel = 'footer';
    $pane->type = 'panels_mini';
    $pane->subtype = 'footer_mini_panel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e1ee700f-c8fb-4060-99c2-2578db8333db';
    $display->content['new-e1ee700f-c8fb-4060-99c2-2578db8333db'] = $pane;
    $display->panels['footer'][0] = 'new-e1ee700f-c8fb-4060-99c2-2578db8333db';
    $pane = new stdClass();
    $pane->pid = 'new-ac74bca0-3c5c-418a-af74-85717e71232c';
    $pane->panel = 'header';
    $pane->type = 'panels_mini';
    $pane->subtype = 'header_mini_panel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ac74bca0-3c5c-418a-af74-85717e71232c';
    $display->content['new-ac74bca0-3c5c-418a-af74-85717e71232c'] = $pane;
    $display->panels['header'][0] = 'new-ac74bca0-3c5c-418a-af74-85717e71232c';
    $pane = new stdClass();
    $pane->pid = 'new-ac9dc2d6-f6df-4c7d-85bb-3120c55b7e26';
    $pane->panel = 'popular';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'panels_breadcrumbs_admin_title' => '',
      'panels_breadcrumbs_state' => 0,
      'panels_breadcrumbs_titles' => '',
      'panels_breadcrumbs_paths' => '',
      'panels_breadcrumbs_home' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ac9dc2d6-f6df-4c7d-85bb-3120c55b7e26';
    $display->content['new-ac9dc2d6-f6df-4c7d-85bb-3120c55b7e26'] = $pane;
    $display->panels['popular'][0] = 'new-ac9dc2d6-f6df-4c7d-85bb-3120c55b7e26';
    $pane = new stdClass();
    $pane->pid = 'new-0402dc84-7603-45dd-955d-5f65edd6dc76';
    $pane->panel = 'popular';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0402dc84-7603-45dd-955d-5f65edd6dc76';
    $display->content['new-0402dc84-7603-45dd-955d-5f65edd6dc76'] = $pane;
    $display->panels['popular'][1] = 'new-0402dc84-7603-45dd-955d-5f65edd6dc76';
    $pane = new stdClass();
    $pane->pid = 'new-0c11f33f-cd22-42ab-99d2-cf4a79a13319';
    $pane->panel = 'popular';
    $pane->type = 'views_panes';
    $pane->subtype = 'subject_subpages-popular_pages_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'name' => '%node:field_taxonomy_subject_area',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0c11f33f-cd22-42ab-99d2-cf4a79a13319';
    $display->content['new-0c11f33f-cd22-42ab-99d2-cf4a79a13319'] = $pane;
    $display->panels['popular'][2] = 'new-0c11f33f-cd22-42ab-99d2-cf4a79a13319';
    $pane = new stdClass();
    $pane->pid = 'new-f093b2ca-1011-47bb-bbb8-6c36a3f9eaf5';
    $pane->panel = 'popular_img';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_top_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'picture',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => '',
        'picture_group' => 'subject_image',
        'fallback_image_style' => 'subject_custom_user_full_1x',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f093b2ca-1011-47bb-bbb8-6c36a3f9eaf5';
    $display->content['new-f093b2ca-1011-47bb-bbb8-6c36a3f9eaf5'] = $pane;
    $display->panels['popular_img'][0] = 'new-f093b2ca-1011-47bb-bbb8-6c36a3f9eaf5';
    $pane = new stdClass();
    $pane->pid = 'new-3e8f460d-cad3-4be3-8b41-be5fefd60aaf';
    $pane->panel = 'teasers';
    $pane->type = 'views_panes';
    $pane->subtype = 'subject_subpages-subject_subpages_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'name' => '%node:field_taxonomy_subject_area',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3e8f460d-cad3-4be3-8b41-be5fefd60aaf';
    $display->content['new-3e8f460d-cad3-4be3-8b41-be5fefd60aaf'] = $pane;
    $display->panels['teasers'][0] = 'new-3e8f460d-cad3-4be3-8b41-be5fefd60aaf';
    $pane = new stdClass();
    $pane->pid = 'new-52afbb0b-6358-4692-9998-867479af7f51';
    $pane->panel = 'teasers';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '4',
      'offset' => '0',
      'path' => 'nyheder',
      'arguments' => array(
        'name' => '',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '52afbb0b-6358-4692-9998-867479af7f51';
    $display->content['new-52afbb0b-6358-4692-9998-867479af7f51'] = $pane;
    $display->panels['teasers'][1] = 'new-52afbb0b-6358-4692-9998-867479af7f51';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:subjectpage:default'] = $panelizer;

  return $export;
}
