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
        'fallback_image_style' => 'subject_custom_user_full_1x',
        'picture_mapping' => 'subject_image',
        'lazyload' => 0,
        'lazyload_aspect_ratio' => 0,
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
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
