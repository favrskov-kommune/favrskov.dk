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
  $display->uuid = 'f0c243af-4a95-4745-9580-e62f705a2a2a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9eecb0d6-9be7-4e57-aac5-5faee99ac665';
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
    $pane->uuid = '9eecb0d6-9be7-4e57-aac5-5faee99ac665';
    $display->content['new-9eecb0d6-9be7-4e57-aac5-5faee99ac665'] = $pane;
    $display->panels['header'][0] = 'new-9eecb0d6-9be7-4e57-aac5-5faee99ac665';
    $pane = new stdClass();
    $pane->pid = 'new-e471a8d9-1b8b-4126-9d96-fb93d5c6d5a4';
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
    $pane->uuid = 'e471a8d9-1b8b-4126-9d96-fb93d5c6d5a4';
    $display->content['new-e471a8d9-1b8b-4126-9d96-fb93d5c6d5a4'] = $pane;
    $display->panels['region-eight'][0] = 'new-e471a8d9-1b8b-4126-9d96-fb93d5c6d5a4';
    $pane = new stdClass();
    $pane->pid = 'new-fdbb6b1b-3d8f-4e45-bc61-98800ef5e7f6';
    $pane->panel = 'region-five';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 1,
      'items_per_page' => '3',
      'offset' => '0',
      'path' => '',
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
    $pane->uuid = 'fdbb6b1b-3d8f-4e45-bc61-98800ef5e7f6';
    $display->content['new-fdbb6b1b-3d8f-4e45-bc61-98800ef5e7f6'] = $pane;
    $display->panels['region-five'][0] = 'new-fdbb6b1b-3d8f-4e45-bc61-98800ef5e7f6';
    $pane = new stdClass();
    $pane->pid = 'new-ee1deb3f-9512-49d5-a344-2b6ce4ad66f0';
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
    $pane->uuid = 'ee1deb3f-9512-49d5-a344-2b6ce4ad66f0';
    $display->content['new-ee1deb3f-9512-49d5-a344-2b6ce4ad66f0'] = $pane;
    $display->panels['region-four'][0] = 'new-ee1deb3f-9512-49d5-a344-2b6ce4ad66f0';
    $pane = new stdClass();
    $pane->pid = 'new-d521bc89-5b2a-4705-bcb6-4bdb11e4eaa1';
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
    $pane->uuid = 'd521bc89-5b2a-4705-bcb6-4bdb11e4eaa1';
    $display->content['new-d521bc89-5b2a-4705-bcb6-4bdb11e4eaa1'] = $pane;
    $display->panels['region-seven'][0] = 'new-d521bc89-5b2a-4705-bcb6-4bdb11e4eaa1';
    $pane = new stdClass();
    $pane->pid = 'new-e7a3e8be-648e-4f54-a486-7924ec4d8c38';
    $pane->panel = 'region-six';
    $pane->type = 'views_panes';
    $pane->subtype = 'locations-locations_block_pane';
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
    $pane->uuid = 'e7a3e8be-648e-4f54-a486-7924ec4d8c38';
    $display->content['new-e7a3e8be-648e-4f54-a486-7924ec4d8c38'] = $pane;
    $display->panels['region-six'][0] = 'new-e7a3e8be-648e-4f54-a486-7924ec4d8c38';
    $pane = new stdClass();
    $pane->pid = 'new-77674c6e-611d-42d0-8656-6e3466f67da2';
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
    $pane->uuid = '77674c6e-611d-42d0-8656-6e3466f67da2';
    $display->content['new-77674c6e-611d-42d0-8656-6e3466f67da2'] = $pane;
    $display->panels['region-three'][0] = 'new-77674c6e-611d-42d0-8656-6e3466f67da2';
    $pane = new stdClass();
    $pane->pid = 'new-cdee91f0-46d6-4e7c-a213-ee22e84d539d';
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
    $pane->uuid = 'cdee91f0-46d6-4e7c-a213-ee22e84d539d';
    $display->content['new-cdee91f0-46d6-4e7c-a213-ee22e84d539d'] = $pane;
    $display->panels['region-three'][1] = 'new-cdee91f0-46d6-4e7c-a213-ee22e84d539d';
    $pane = new stdClass();
    $pane->pid = 'new-755fac83-aa9a-48f3-a908-075b42cbb9f0';
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
    $pane->uuid = '755fac83-aa9a-48f3-a908-075b42cbb9f0';
    $display->content['new-755fac83-aa9a-48f3-a908-075b42cbb9f0'] = $pane;
    $display->panels['region-two'][0] = 'new-755fac83-aa9a-48f3-a908-075b42cbb9f0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:frontpage:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:location:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'location';
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
  $display->uuid = '6db6d8b6-197a-4268-a969-bc9af216abfb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8b15674a-798d-4bc1-a808-8c7c88258661';
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
    $pane->uuid = '8b15674a-798d-4bc1-a808-8c7c88258661';
    $display->content['new-8b15674a-798d-4bc1-a808-8c7c88258661'] = $pane;
    $display->panels['footer'][0] = 'new-8b15674a-798d-4bc1-a808-8c7c88258661';
    $pane = new stdClass();
    $pane->pid = 'new-2c42feb2-6307-429a-a094-5652e08fbc0d';
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
    $pane->uuid = '2c42feb2-6307-429a-a094-5652e08fbc0d';
    $display->content['new-2c42feb2-6307-429a-a094-5652e08fbc0d'] = $pane;
    $display->panels['header'][0] = 'new-2c42feb2-6307-429a-a094-5652e08fbc0d';
    $pane = new stdClass();
    $pane->pid = 'new-020a3e0a-496c-4848-a191-91f2daa7de44';
    $pane->panel = 'news';
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '020a3e0a-496c-4848-a191-91f2daa7de44';
    $display->content['new-020a3e0a-496c-4848-a191-91f2daa7de44'] = $pane;
    $display->panels['news'][0] = 'new-020a3e0a-496c-4848-a191-91f2daa7de44';
    $pane = new stdClass();
    $pane->pid = 'new-2ee3b7c2-46c3-485f-8513-f87cab8e53fd';
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
    $pane->uuid = '2ee3b7c2-46c3-485f-8513-f87cab8e53fd';
    $display->content['new-2ee3b7c2-46c3-485f-8513-f87cab8e53fd'] = $pane;
    $display->panels['popular'][0] = 'new-2ee3b7c2-46c3-485f-8513-f87cab8e53fd';
    $pane = new stdClass();
    $pane->pid = 'new-50240692-bdfd-4f15-b009-f2c9624e2e40';
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
    $pane->uuid = '50240692-bdfd-4f15-b009-f2c9624e2e40';
    $display->content['new-50240692-bdfd-4f15-b009-f2c9624e2e40'] = $pane;
    $display->panels['popular'][1] = 'new-50240692-bdfd-4f15-b009-f2c9624e2e40';
    $pane = new stdClass();
    $pane->pid = 'new-28275236-75c7-40db-8817-b888a449132b';
    $pane->panel = 'popular';
    $pane->type = 'views_panes';
    $pane->subtype = 'subject_subpages-popular_pages_location_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '28275236-75c7-40db-8817-b888a449132b';
    $display->content['new-28275236-75c7-40db-8817-b888a449132b'] = $pane;
    $display->panels['popular'][2] = 'new-28275236-75c7-40db-8817-b888a449132b';
    $pane = new stdClass();
    $pane->pid = 'new-cda4c7c0-e2fb-4cba-99e7-710d56c9c4ca';
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
      'override_title' => 1,
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
    $pane->uuid = 'cda4c7c0-e2fb-4cba-99e7-710d56c9c4ca';
    $display->content['new-cda4c7c0-e2fb-4cba-99e7-710d56c9c4ca'] = $pane;
    $display->panels['popular_img'][0] = 'new-cda4c7c0-e2fb-4cba-99e7-710d56c9c4ca';
    $pane = new stdClass();
    $pane->pid = 'new-4611d308-c390-4da9-b996-bab7d56b13d9';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4611d308-c390-4da9-b996-bab7d56b13d9';
    $display->content['new-4611d308-c390-4da9-b996-bab7d56b13d9'] = $pane;
    $display->panels['teasers'][0] = 'new-4611d308-c390-4da9-b996-bab7d56b13d9';
    $pane = new stdClass();
    $pane->pid = 'new-b61141ff-1aa6-4254-90e2-f0cfd66eb976';
    $pane->panel = 'teasers';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 1,
      'items_per_page' => '3',
      'offset' => '0',
      'path' => 'events',
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
    $pane->uuid = 'b61141ff-1aa6-4254-90e2-f0cfd66eb976';
    $display->content['new-b61141ff-1aa6-4254-90e2-f0cfd66eb976'] = $pane;
    $display->panels['teasers'][1] = 'new-b61141ff-1aa6-4254-90e2-f0cfd66eb976';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:location:default'] = $panelizer;

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
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'Taxonomy term from Node (on Node: Taxonomy, Subject Area [field_taxonomy_subject_area])',
      'keyword' => 'taxonomy_term',
      'name' => 'entity_from_field:field_taxonomy_subject_area-node-taxonomy_term',
      'delta' => '0',
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
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
      'image_content' => NULL,
      'wide_image' => NULL,
      'menu_items' => NULL,
      'news' => NULL,
      'footer' => NULL,
      'top_region' => NULL,
      'first_middle_region' => NULL,
      'second_middle_region' => NULL,
    ),
    'header' => array(
      'style' => 'naked',
    ),
    'news' => array(
      'style' => 'naked',
    ),
    'footer' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'b6d9dd41-b572-4732-ad63-53dd1e897f4d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c110a251-5af4-4951-b113-c479c5020bcc';
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
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c110a251-5af4-4951-b113-c479c5020bcc';
    $display->content['new-c110a251-5af4-4951-b113-c479c5020bcc'] = $pane;
    $display->panels['footer'][0] = 'new-c110a251-5af4-4951-b113-c479c5020bcc';
    $pane = new stdClass();
    $pane->pid = 'new-801a9831-3546-4e76-aab2-079d75a5f764';
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
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '801a9831-3546-4e76-aab2-079d75a5f764';
    $display->content['new-801a9831-3546-4e76-aab2-079d75a5f764'] = $pane;
    $display->panels['header'][0] = 'new-801a9831-3546-4e76-aab2-079d75a5f764';
    $pane = new stdClass();
    $pane->pid = 'new-733f5d52-8fe0-4ef0-acc2-df97e9fa0d7b';
    $pane->panel = 'image_content';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '733f5d52-8fe0-4ef0-acc2-df97e9fa0d7b';
    $display->content['new-733f5d52-8fe0-4ef0-acc2-df97e9fa0d7b'] = $pane;
    $display->panels['image_content'][0] = 'new-733f5d52-8fe0-4ef0-acc2-df97e9fa0d7b';
    $pane = new stdClass();
    $pane->pid = 'new-c05244bf-4a75-4e1d-bd64-d3f4dac4494b';
    $pane->panel = 'image_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_teaser';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c05244bf-4a75-4e1d-bd64-d3f4dac4494b';
    $display->content['new-c05244bf-4a75-4e1d-bd64-d3f4dac4494b'] = $pane;
    $display->panels['image_content'][1] = 'new-c05244bf-4a75-4e1d-bd64-d3f4dac4494b';
    $pane = new stdClass();
    $pane->pid = 'new-fc0954fb-c986-4ea5-a2e4-bec34f71dd24';
    $pane->panel = 'menu_items';
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
    $pane->uuid = 'fc0954fb-c986-4ea5-a2e4-bec34f71dd24';
    $display->content['new-fc0954fb-c986-4ea5-a2e4-bec34f71dd24'] = $pane;
    $display->panels['menu_items'][0] = 'new-fc0954fb-c986-4ea5-a2e4-bec34f71dd24';
    $pane = new stdClass();
    $pane->pid = 'new-1ae2657d-a5a4-42a5-aad4-22d8a689d7be';
    $pane->panel = 'news';
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
    $pane->uuid = '1ae2657d-a5a4-42a5-aad4-22d8a689d7be';
    $display->content['new-1ae2657d-a5a4-42a5-aad4-22d8a689d7be'] = $pane;
    $display->panels['news'][0] = 'new-1ae2657d-a5a4-42a5-aad4-22d8a689d7be';
    $pane = new stdClass();
    $pane->pid = 'new-f1689fa2-94da-41ee-a39e-59b821d7e030';
    $pane->panel = 'wide_image';
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
      'override_title' => 1,
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
    $pane->uuid = 'f1689fa2-94da-41ee-a39e-59b821d7e030';
    $display->content['new-f1689fa2-94da-41ee-a39e-59b821d7e030'] = $pane;
    $display->panels['wide_image'][0] = 'new-f1689fa2-94da-41ee-a39e-59b821d7e030';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:subjectpage:default'] = $panelizer;

  return $export;
}
