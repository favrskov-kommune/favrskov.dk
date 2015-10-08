<?php
/**
 * @file
 * panel_news_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panel_news_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_7';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 7;
  $handler->conf = array(
    'title' => 'News page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'news' => 'news',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'nodepage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'header' => NULL,
      'node-content' => NULL,
      'node-sidebar' => NULL,
      'footer' => NULL,
    ),
    'node-content' => array(
      'style' => 'naked',
    ),
    'node-sidebar' => array(
      'style' => 'naked',
    ),
    'header' => array(
      'style' => 'naked',
    ),
    'footer' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '12ebe568-e03e-40ec-a1d1-c3c23c4f813c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-54996a24-f536-4986-b4ea-cbde26b354a3';
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
    $pane->uuid = '54996a24-f536-4986-b4ea-cbde26b354a3';
    $display->content['new-54996a24-f536-4986-b4ea-cbde26b354a3'] = $pane;
    $display->panels['footer'][0] = 'new-54996a24-f536-4986-b4ea-cbde26b354a3';
    $pane = new stdClass();
    $pane->pid = 'new-146585c1-fcea-478b-aea3-203acc992ac1';
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
    $pane->uuid = '146585c1-fcea-478b-aea3-203acc992ac1';
    $display->content['new-146585c1-fcea-478b-aea3-203acc992ac1'] = $pane;
    $display->panels['header'][0] = 'new-146585c1-fcea-478b-aea3-203acc992ac1';
    $pane = new stdClass();
    $pane->pid = 'new-6792fcd4-da34-425d-86ac-9fee3dad1221';
    $pane->panel = 'node-content';
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6792fcd4-da34-425d-86ac-9fee3dad1221';
    $display->content['new-6792fcd4-da34-425d-86ac-9fee3dad1221'] = $pane;
    $display->panels['node-content'][0] = 'new-6792fcd4-da34-425d-86ac-9fee3dad1221';
    $pane = new stdClass();
    $pane->pid = 'new-2d03a010-e4a4-4e11-9212-a58031f71ef5';
    $pane->panel = 'node-content';
    $pane->type = 'go_back_link';
    $pane->subtype = 'go_back_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'link' => 'nyheder',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2d03a010-e4a4-4e11-9212-a58031f71ef5';
    $display->content['new-2d03a010-e4a4-4e11-9212-a58031f71ef5'] = $pane;
    $display->panels['node-content'][1] = 'new-2d03a010-e4a4-4e11-9212-a58031f71ef5';
    $pane = new stdClass();
    $pane->pid = 'new-622d08af-6749-4cf6-bd58-fbf7d6d90872';
    $pane->panel = 'node-content';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '622d08af-6749-4cf6-bd58-fbf7d6d90872';
    $display->content['new-622d08af-6749-4cf6-bd58-fbf7d6d90872'] = $pane;
    $display->panels['node-content'][2] = 'new-622d08af-6749-4cf6-bd58-fbf7d6d90872';
    $pane = new stdClass();
    $pane->pid = 'new-d36cc521-e1c1-45d3-888a-78327d5edc7f';
    $pane->panel = 'node-content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd36cc521-e1c1-45d3-888a-78327d5edc7f';
    $display->content['new-d36cc521-e1c1-45d3-888a-78327d5edc7f'] = $pane;
    $display->panels['node-content'][3] = 'new-d36cc521-e1c1-45d3-888a-78327d5edc7f';
    $pane = new stdClass();
    $pane->pid = 'new-198f84b5-c37b-4516-9380-8edd7a7866ae';
    $pane->panel = 'node-content';
    $pane->type = 'views_panes';
    $pane->subtype = 'subject_subpages-subpage_slider';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '',
      ),
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '198f84b5-c37b-4516-9380-8edd7a7866ae';
    $display->content['new-198f84b5-c37b-4516-9380-8edd7a7866ae'] = $pane;
    $display->panels['node-content'][4] = 'new-198f84b5-c37b-4516-9380-8edd7a7866ae';
    $pane = new stdClass();
    $pane->pid = 'new-7bdc3cac-63f8-45c0-9456-6a39dfe906b5';
    $pane->panel = 'node-content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_video';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '7bdc3cac-63f8-45c0-9456-6a39dfe906b5';
    $display->content['new-7bdc3cac-63f8-45c0-9456-6a39dfe906b5'] = $pane;
    $display->panels['node-content'][5] = 'new-7bdc3cac-63f8-45c0-9456-6a39dfe906b5';
    $pane = new stdClass();
    $pane->pid = 'new-407a64c4-3f8f-48ff-b72e-eed6220f228b';
    $pane->panel = 'node-content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_video_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '407a64c4-3f8f-48ff-b72e-eed6220f228b';
    $display->content['new-407a64c4-3f8f-48ff-b72e-eed6220f228b'] = $pane;
    $display->panels['node-content'][6] = 'new-407a64c4-3f8f-48ff-b72e-eed6220f228b';
    $pane = new stdClass();
    $pane->pid = 'new-32718540-4df7-4255-a2ce-14b44c888de8';
    $pane->panel = 'node-content';
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
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '32718540-4df7-4255-a2ce-14b44c888de8';
    $display->content['new-32718540-4df7-4255-a2ce-14b44c888de8'] = $pane;
    $display->panels['node-content'][7] = 'new-32718540-4df7-4255-a2ce-14b44c888de8';
    $pane = new stdClass();
    $pane->pid = 'new-80e9d48d-4fa7-4d47-b1db-7015e0eb4255';
    $pane->panel = 'node-content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '80e9d48d-4fa7-4d47-b1db-7015e0eb4255';
    $display->content['new-80e9d48d-4fa7-4d47-b1db-7015e0eb4255'] = $pane;
    $display->panels['node-content'][8] = 'new-80e9d48d-4fa7-4d47-b1db-7015e0eb4255';
    $pane = new stdClass();
    $pane->pid = 'new-a0cab71c-88a1-4fbb-9d7d-bf913cbd09a7';
    $pane->panel = 'node-content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_table';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'a0cab71c-88a1-4fbb-9d7d-bf913cbd09a7';
    $display->content['new-a0cab71c-88a1-4fbb-9d7d-bf913cbd09a7'] = $pane;
    $display->panels['node-content'][9] = 'new-a0cab71c-88a1-4fbb-9d7d-bf913cbd09a7';
    $pane = new stdClass();
    $pane->pid = 'new-0989455a-941d-454c-a32c-837bf205ae4d';
    $pane->panel = 'node-content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_self_service';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'node_reference_node',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'node_reference_view_mode' => 'full',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '0989455a-941d-454c-a32c-837bf205ae4d';
    $display->content['new-0989455a-941d-454c-a32c-837bf205ae4d'] = $pane;
    $display->panels['node-content'][10] = 'new-0989455a-941d-454c-a32c-837bf205ae4d';
    $pane = new stdClass();
    $pane->pid = 'new-593e5580-0a8f-4139-80e0-5b17c3291dd2';
    $pane->panel = 'node-content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_bannerlink';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'node_reference_node',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'node_reference_view_mode' => 'full',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '593e5580-0a8f-4139-80e0-5b17c3291dd2';
    $display->content['new-593e5580-0a8f-4139-80e0-5b17c3291dd2'] = $pane;
    $display->panels['node-content'][11] = 'new-593e5580-0a8f-4139-80e0-5b17c3291dd2';
    $pane = new stdClass();
    $pane->pid = 'new-4d2994af-3703-4306-9500-a7d75e17af07';
    $pane->panel = 'node-content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_borgerdk';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'node_reference_node',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'node_reference_view_mode' => 'full',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '4d2994af-3703-4306-9500-a7d75e17af07';
    $display->content['new-4d2994af-3703-4306-9500-a7d75e17af07'] = $pane;
    $display->panels['node-content'][12] = 'new-4d2994af-3703-4306-9500-a7d75e17af07';
    $pane = new stdClass();
    $pane->pid = 'new-ada41564-3ad0-4c8b-b75b-1c3f851191af';
    $pane->panel = 'node-content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'node_reference_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Se også',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = 'ada41564-3ad0-4c8b-b75b-1c3f851191af';
    $display->content['new-ada41564-3ad0-4c8b-b75b-1c3f851191af'] = $pane;
    $display->panels['node-content'][13] = 'new-ada41564-3ad0-4c8b-b75b-1c3f851191af';
    $pane = new stdClass();
    $pane->pid = 'new-2781b709-fb48-40e1-bdbc-2b9d53207e5d';
    $pane->panel = 'node-content';
    $pane->type = 'views_panes';
    $pane->subtype = 'automatic_related_content-automatic_related_content_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '5',
      'offset' => '0',
      'context' => array(
        0 => 'argument_entity_id:node_1',
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
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = '2781b709-fb48-40e1-bdbc-2b9d53207e5d';
    $display->content['new-2781b709-fb48-40e1-bdbc-2b9d53207e5d'] = $pane;
    $display->panels['node-content'][14] = 'new-2781b709-fb48-40e1-bdbc-2b9d53207e5d';
    $pane = new stdClass();
    $pane->pid = 'new-f843ebda-56ba-4197-8460-ef9d58c06bcd';
    $pane->panel = 'node-content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_boxes';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'node_reference_node',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'node_reference_view_mode' => 'full',
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = 'f843ebda-56ba-4197-8460-ef9d58c06bcd';
    $display->content['new-f843ebda-56ba-4197-8460-ef9d58c06bcd'] = $pane;
    $display->panels['node-content'][15] = 'new-f843ebda-56ba-4197-8460-ef9d58c06bcd';
    $pane = new stdClass();
    $pane->pid = 'new-1e714cfb-51a8-4e65-b187-5d1445adf8f0';
    $pane->panel = 'node-content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_faq_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'node_reference_node',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'node_reference_view_mode' => 'full',
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 16;
    $pane->locks = array();
    $pane->uuid = '1e714cfb-51a8-4e65-b187-5d1445adf8f0';
    $display->content['new-1e714cfb-51a8-4e65-b187-5d1445adf8f0'] = $pane;
    $display->panels['node-content'][16] = 'new-1e714cfb-51a8-4e65-b187-5d1445adf8f0';
    $pane = new stdClass();
    $pane->pid = 'new-a0c977ac-ccd6-49e9-aea3-4cdf5fccbddd';
    $pane->panel = 'node-content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_contact_information';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'node_reference_node',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'node_reference_view_mode' => 'node_embed',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Kontakt',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 17;
    $pane->locks = array();
    $pane->uuid = 'a0c977ac-ccd6-49e9-aea3-4cdf5fccbddd';
    $display->content['new-a0c977ac-ccd6-49e9-aea3-4cdf5fccbddd'] = $pane;
    $display->panels['node-content'][17] = 'new-a0c977ac-ccd6-49e9-aea3-4cdf5fccbddd';
    $pane = new stdClass();
    $pane->pid = 'new-e82f8758-b0f3-415f-9d6b-9e766931d60a';
    $pane->panel = 'node-content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'news_date',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
        'show_repeat_rule' => 'show',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 18;
    $pane->locks = array();
    $pane->uuid = 'e82f8758-b0f3-415f-9d6b-9e766931d60a';
    $display->content['new-e82f8758-b0f3-415f-9d6b-9e766931d60a'] = $pane;
    $display->panels['node-content'][18] = 'new-e82f8758-b0f3-415f-9d6b-9e766931d60a';
    $pane = new stdClass();
    $pane->pid = 'new-7837d96b-72df-46e5-ae03-fc9a1ca82195';
    $pane->panel = 'node-content';
    $pane->type = 'node_updated';
    $pane->subtype = 'node_updated';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'news_date',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Senest opdateret:',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 19;
    $pane->locks = array();
    $pane->uuid = '7837d96b-72df-46e5-ae03-fc9a1ca82195';
    $display->content['new-7837d96b-72df-46e5-ae03-fc9a1ca82195'] = $pane;
    $display->panels['node-content'][19] = 'new-7837d96b-72df-46e5-ae03-fc9a1ca82195';
    $pane = new stdClass();
    $pane->pid = 'new-a870e0d2-410a-42b6-9465-ef82970b993d';
    $pane->panel = 'node-content';
    $pane->type = 'token';
    $pane->subtype = 'node:author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 20;
    $pane->locks = array();
    $pane->uuid = 'a870e0d2-410a-42b6-9465-ef82970b993d';
    $display->content['new-a870e0d2-410a-42b6-9465-ef82970b993d'] = $pane;
    $display->panels['node-content'][20] = 'new-a870e0d2-410a-42b6-9465-ef82970b993d';
    $pane = new stdClass();
    $pane->pid = 'new-80c508f4-8e0e-4976-8d90-8629a0041bdc';
    $pane->panel = 'node-content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 5,
              2 => 6,
              3 => 4,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    global $base_url;

    $pane->configuration = array(
      'admin_title' => 'Path to node',
      'title' => '',
      'body' => '<a href="/node/%node:nid">' . $base_url . '/node/%node:nid</a>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 21;
    $pane->locks = array();
    $pane->uuid = '80c508f4-8e0e-4976-8d90-8629a0041bdc';
    $display->content['new-80c508f4-8e0e-4976-8d90-8629a0041bdc'] = $pane;
    $display->panels['node-content'][21] = 'new-80c508f4-8e0e-4976-8d90-8629a0041bdc';
    $pane = new stdClass();
    $pane->pid = 'new-caaa6301-9c5d-4362-a444-7559c9f45981';
    $pane->panel = 'node-content';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '10',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 22;
    $pane->locks = array();
    $pane->uuid = 'caaa6301-9c5d-4362-a444-7559c9f45981';
    $display->content['new-caaa6301-9c5d-4362-a444-7559c9f45981'] = $pane;
    $display->panels['node-content'][22] = 'new-caaa6301-9c5d-4362-a444-7559c9f45981';
    $pane = new stdClass();
    $pane->pid = 'new-2d140adf-9e37-433a-a192-d3e7488b27f0';
    $pane->panel = 'node-content';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 23;
    $pane->locks = array();
    $pane->uuid = '2d140adf-9e37-433a-a192-d3e7488b27f0';
    $display->content['new-2d140adf-9e37-433a-a192-d3e7488b27f0'] = $pane;
    $display->panels['node-content'][23] = 'new-2d140adf-9e37-433a-a192-d3e7488b27f0';
    $pane = new stdClass();
    $pane->pid = 'new-2a0828de-58ba-41db-8173-3b17748fb82b';
    $pane->panel = 'node-sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Custom share',
      'title' => '',
      'body' => '<a class="print_data" href="#">'. t('Print') . '</a>',
      'format' => 'video_html',
      'substitute' => TRUE,
      'name' => 'custom_share_used_on_news_pages',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'node-share',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2a0828de-58ba-41db-8173-3b17748fb82b';
    $display->content['new-2a0828de-58ba-41db-8173-3b17748fb82b'] = $pane;
    $display->panels['node-sidebar'][0] = 'new-2a0828de-58ba-41db-8173-3b17748fb82b';
    $pane = new stdClass();
    $pane->pid = 'new-a29a5731-78fb-489f-9e6b-96b7dd1b2c15';
    $pane->panel = 'node-sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'See all link',
      'title' => '',
      'body' => '<a href="/nyheder">Se alle</a>',
      'format' => 'job_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'see-all-link',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a29a5731-78fb-489f-9e6b-96b7dd1b2c15';
    $display->content['new-a29a5731-78fb-489f-9e6b-96b7dd1b2c15'] = $pane;
    $display->panels['node-sidebar'][1] = 'new-a29a5731-78fb-489f-9e6b-96b7dd1b2c15';
    $pane = new stdClass();
    $pane->pid = 'new-91f88d98-30e4-4748-be61-522c30312146';
    $pane->panel = 'node-sidebar';
    $pane->type = 'block';
    $pane->subtype = 'domain_menu_block-main_menu';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'domain',
          'settings' => array(
            'domain_site' => 0,
            'domains' => array(
              'roskilde_stag_propeople_com_ua' => 'roskilde_stag_propeople_com_ua',
              'musicon_dk' => 0,
              'elitekommune_roskilde_dk' => 0,
              'kulturstr_g_dk' => 0,
              'kunstforeningen_roskilde_dk' => 0,
              'skolereform_roskilde_dk' => 0,
              'scr_roskilde_dk' => 0,
            ),
          ),
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '91f88d98-30e4-4748-be61-522c30312146';
    $display->content['new-91f88d98-30e4-4748-be61-522c30312146'] = $pane;
    $display->panels['node-sidebar'][2] = 'new-91f88d98-30e4-4748-be61-522c30312146';
    $pane = new stdClass();
    $pane->pid = 'new-4fc0af5f-9f5f-42e8-b366-e85ead1904fe';
    $pane->panel = 'node-sidebar';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'domain',
          'settings' => array(
            'domain_site' => 0,
            'domains' => array(
              'roskilde_stag_propeople_com_ua' => 'roskilde_stag_propeople_com_ua',
              'musicon_dk' => 0,
              'elitekommune_roskilde_dk' => 0,
              'kulturstr_g_dk' => 0,
              'kunstforeningen_roskilde_dk' => 0,
              'skolereform_roskilde_dk' => 0,
              'scr_roskilde_dk' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '3',
      'follow' => 0,
      'depth' => '2',
      'expanded' => 0,
      'sort' => 1,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4fc0af5f-9f5f-42e8-b366-e85ead1904fe';
    $display->content['new-4fc0af5f-9f5f-42e8-b366-e85ead1904fe'] = $pane;
    $display->panels['node-sidebar'][3] = 'new-4fc0af5f-9f5f-42e8-b366-e85ead1904fe';
    $pane = new stdClass();
    $pane->pid = 'new-44450e30-56ab-49df-be75-247d6aece9fa';
    $pane->panel = 'node-sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-news_year_filter';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '44450e30-56ab-49df-be75-247d6aece9fa';
    $display->content['new-44450e30-56ab-49df-be75-247d6aece9fa'] = $pane;
    $display->panels['node-sidebar'][4] = 'new-44450e30-56ab-49df-be75-247d6aece9fa';
    $pane = new stdClass();
    $pane->pid = 'new-0d19f398-12cc-4709-ae0f-b59f4386410d';
    $pane->panel = 'node-sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'blogs_filters-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'type' => 'news',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '0d19f398-12cc-4709-ae0f-b59f4386410d';
    $display->content['new-0d19f398-12cc-4709-ae0f-b59f4386410d'] = $pane;
    $display->panels['node-sidebar'][5] = 'new-0d19f398-12cc-4709-ae0f-b59f4386410d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-146585c1-fcea-478b-aea3-203acc992ac1';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_7'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function panel_news_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news_page';
  $page->task = 'page';
  $page->admin_title = 'News page';
  $page->admin_description = '';
  $page->path = 'nyheder';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'news_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Category term',
        'keyword' => 'param_category',
        'name' => 'getparam',
        'param_name' => 'category',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'list';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'blogs-list' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
    ),
    'header' => array(
      'style' => 'naked',
    ),
    'blogs-list' => array(
      'style' => 'naked',
    ),
    'footer' => array(
      'style' => 'naked',
    ),
    'sidebar' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Nyheder';
  $display->uuid = '8b87abe9-c5ca-4c5e-9347-a0bffa1d59e1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e82d80d0-8016-4e57-a231-3c32eec0cae7';
    $pane->panel = 'blogs-list';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'panels_breadcrumbs_admin_title' => '',
      'panels_breadcrumbs_state' => 0,
      'panels_breadcrumbs_titles' => '',
      'panels_breadcrumbs_paths' => '',
      'panels_breadcrumbs_home' => 0,
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
    $pane->uuid = 'e82d80d0-8016-4e57-a231-3c32eec0cae7';
    $display->content['new-e82d80d0-8016-4e57-a231-3c32eec0cae7'] = $pane;
    $display->panels['blogs-list'][0] = 'new-e82d80d0-8016-4e57-a231-3c32eec0cae7';
    $pane = new stdClass();
    $pane->pid = 'new-61d26a9a-41f6-4d2d-bce9-9a69503ba255';
    $pane->panel = 'blogs-list';
    $pane->type = 'go_back_link';
    $pane->subtype = 'go_back_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'link' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '61d26a9a-41f6-4d2d-bce9-9a69503ba255';
    $display->content['new-61d26a9a-41f6-4d2d-bce9-9a69503ba255'] = $pane;
    $display->panels['blogs-list'][1] = 'new-61d26a9a-41f6-4d2d-bce9-9a69503ba255';
    $pane = new stdClass();
    $pane->pid = 'new-4fad5aa6-c160-44fa-bcd1-385f854d9e9d';
    $pane->panel = 'blogs-list';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4fad5aa6-c160-44fa-bcd1-385f854d9e9d';
    $display->content['new-4fad5aa6-c160-44fa-bcd1-385f854d9e9d'] = $pane;
    $display->panels['blogs-list'][2] = 'new-4fad5aa6-c160-44fa-bcd1-385f854d9e9d';
    $pane = new stdClass();
    $pane->pid = 'new-72051709-fe73-46f3-86ea-a02e727bbcd3';
    $pane->panel = 'blogs-list';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-news_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'term_node_tid_depth' => '%param_category:value',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '72051709-fe73-46f3-86ea-a02e727bbcd3';
    $display->content['new-72051709-fe73-46f3-86ea-a02e727bbcd3'] = $pane;
    $display->panels['blogs-list'][3] = 'new-72051709-fe73-46f3-86ea-a02e727bbcd3';
    $pane = new stdClass();
    $pane->pid = 'new-12183214-15e9-4739-811e-d6f4a38d8110';
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
    $pane->uuid = '12183214-15e9-4739-811e-d6f4a38d8110';
    $display->content['new-12183214-15e9-4739-811e-d6f4a38d8110'] = $pane;
    $display->panels['footer'][0] = 'new-12183214-15e9-4739-811e-d6f4a38d8110';
    $pane = new stdClass();
    $pane->pid = 'new-b0428d03-d942-4c1d-8d7d-a6f3ab064f91';
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
    $pane->uuid = 'b0428d03-d942-4c1d-8d7d-a6f3ab064f91';
    $display->content['new-b0428d03-d942-4c1d-8d7d-a6f3ab064f91'] = $pane;
    $display->panels['header'][0] = 'new-b0428d03-d942-4c1d-8d7d-a6f3ab064f91';
    $pane = new stdClass();
    $pane->pid = 'new-869a1580-1d10-487b-9dec-3ddb728e594f';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Social links',
      'title' => '',
      'body' => '<ul class="social-links">
	<li class="icon-facebook facebook"><a class="ext" href="http://www.facebook.com/roskildekommune" target="_blank">Facebook</a></li>
	<li class="icon-twitter twitter"><a class="ext" href="https://twitter.com/roskildekommune" target="_blank">Twitter</a></li>
	<li class="icon-youtube youtube"><a class="ext" href="http://www.youtube.com/roskildekommune" target="_blank">Youtube</a></li>
</ul>',
      'format' => 'video_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '869a1580-1d10-487b-9dec-3ddb728e594f';
    $display->content['new-869a1580-1d10-487b-9dec-3ddb728e594f'] = $pane;
    $display->panels['sidebar'][0] = 'new-869a1580-1d10-487b-9dec-3ddb728e594f';
    $pane = new stdClass();
    $pane->pid = 'new-1861b429-0dd7-438f-8e02-d55f2a95f8f6';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href="/nyheder">Se alle</a>',
      'format' => 'job_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'see-all-link',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1861b429-0dd7-438f-8e02-d55f2a95f8f6';
    $display->content['new-1861b429-0dd7-438f-8e02-d55f2a95f8f6'] = $pane;
    $display->panels['sidebar'][1] = 'new-1861b429-0dd7-438f-8e02-d55f2a95f8f6';
    $pane = new stdClass();
    $pane->pid = 'new-bb44e1c1-1b5f-42d9-87f3-d21123fca960';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom_share_used_on_news_pages';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'job_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'node-share',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'bb44e1c1-1b5f-42d9-87f3-d21123fca960';
    $display->content['new-bb44e1c1-1b5f-42d9-87f3-d21123fca960'] = $pane;
    $display->panels['sidebar'][2] = 'new-bb44e1c1-1b5f-42d9-87f3-d21123fca960';
    $pane = new stdClass();
    $pane->pid = 'new-4ed4211d-8391-4c30-90cb-ce827399f3e3';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-news_year_filter';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4ed4211d-8391-4c30-90cb-ce827399f3e3';
    $display->content['new-4ed4211d-8391-4c30-90cb-ce827399f3e3'] = $pane;
    $display->panels['sidebar'][3] = 'new-4ed4211d-8391-4c30-90cb-ce827399f3e3';
    $pane = new stdClass();
    $pane->pid = 'new-5cb73593-62eb-43cb-a5d8-276fe2b90e98';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'blogs_filters-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'type' => 'news',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '5cb73593-62eb-43cb-a5d8-276fe2b90e98';
    $display->content['new-5cb73593-62eb-43cb-a5d8-276fe2b90e98'] = $pane;
    $display->panels['sidebar'][4] = 'new-5cb73593-62eb-43cb-a5d8-276fe2b90e98';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b0428d03-d942-4c1d-8d7d-a6f3ab064f91';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news_page'] = $page;

  return $pages;

}
