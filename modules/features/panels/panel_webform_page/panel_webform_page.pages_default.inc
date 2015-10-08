<?php
/**
 * @file
 * panel_webform_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panel_webform_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_9';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'Webform page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
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
              'webform' => 'webform',
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
  $display->uuid = '0624f85a-48c5-4f3b-839d-46837b2467b9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e4cd574f-5ea4-480f-a7ad-d1f663bfaa15';
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
    $pane->uuid = 'e4cd574f-5ea4-480f-a7ad-d1f663bfaa15';
    $display->content['new-e4cd574f-5ea4-480f-a7ad-d1f663bfaa15'] = $pane;
    $display->panels['footer'][0] = 'new-e4cd574f-5ea4-480f-a7ad-d1f663bfaa15';
    $pane = new stdClass();
    $pane->pid = 'new-5f0e0ee7-e8b0-4d0b-a7f1-d3c373d606d6';
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
    $pane->uuid = '5f0e0ee7-e8b0-4d0b-a7f1-d3c373d606d6';
    $display->content['new-5f0e0ee7-e8b0-4d0b-a7f1-d3c373d606d6'] = $pane;
    $display->panels['header'][0] = 'new-5f0e0ee7-e8b0-4d0b-a7f1-d3c373d606d6';
    $pane = new stdClass();
    $pane->pid = 'new-38b18804-b752-488f-b6a4-23c9479d5b61';
    $pane->panel = 'header';
    $pane->type = 'page_actions';
    $pane->subtype = 'page_actions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '38b18804-b752-488f-b6a4-23c9479d5b61';
    $display->content['new-38b18804-b752-488f-b6a4-23c9479d5b61'] = $pane;
    $display->panels['header'][1] = 'new-38b18804-b752-488f-b6a4-23c9479d5b61';
    $pane = new stdClass();
    $pane->pid = 'new-248b3583-7117-489c-a6b2-f0e0b506274f';
    $pane->panel = 'node-content';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '248b3583-7117-489c-a6b2-f0e0b506274f';
    $display->content['new-248b3583-7117-489c-a6b2-f0e0b506274f'] = $pane;
    $display->panels['node-content'][0] = 'new-248b3583-7117-489c-a6b2-f0e0b506274f';
    $pane = new stdClass();
    $pane->pid = 'new-9d8085ac-1f33-4a06-940d-1336231b07fd';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9d8085ac-1f33-4a06-940d-1336231b07fd';
    $display->content['new-9d8085ac-1f33-4a06-940d-1336231b07fd'] = $pane;
    $display->panels['node-content'][1] = 'new-9d8085ac-1f33-4a06-940d-1336231b07fd';
    $pane = new stdClass();
    $pane->pid = 'new-31a3e8df-d6af-464a-989b-c4504c743017';
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
    $pane->uuid = '31a3e8df-d6af-464a-989b-c4504c743017';
    $display->content['new-31a3e8df-d6af-464a-989b-c4504c743017'] = $pane;
    $display->panels['node-content'][2] = 'new-31a3e8df-d6af-464a-989b-c4504c743017';
    $pane = new stdClass();
    $pane->pid = 'new-fefd0a64-d582-4b1f-89a9-b4eec4087060';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'fefd0a64-d582-4b1f-89a9-b4eec4087060';
    $display->content['new-fefd0a64-d582-4b1f-89a9-b4eec4087060'] = $pane;
    $display->panels['node-content'][3] = 'new-fefd0a64-d582-4b1f-89a9-b4eec4087060';
    $pane = new stdClass();
    $pane->pid = 'new-8eebfbfb-5b0d-4c4f-9e15-e78a91381aa5';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '8eebfbfb-5b0d-4c4f-9e15-e78a91381aa5';
    $display->content['new-8eebfbfb-5b0d-4c4f-9e15-e78a91381aa5'] = $pane;
    $display->panels['node-content'][4] = 'new-8eebfbfb-5b0d-4c4f-9e15-e78a91381aa5';
    $pane = new stdClass();
    $pane->pid = 'new-4c0189af-4baa-4131-94df-d4305e1bdf52';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '4c0189af-4baa-4131-94df-d4305e1bdf52';
    $display->content['new-4c0189af-4baa-4131-94df-d4305e1bdf52'] = $pane;
    $display->panels['node-content'][5] = 'new-4c0189af-4baa-4131-94df-d4305e1bdf52';
    $pane = new stdClass();
    $pane->pid = 'new-0a3f5f2a-c913-42bb-80be-99a0b85d512b';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '0a3f5f2a-c913-42bb-80be-99a0b85d512b';
    $display->content['new-0a3f5f2a-c913-42bb-80be-99a0b85d512b'] = $pane;
    $display->panels['node-content'][6] = 'new-0a3f5f2a-c913-42bb-80be-99a0b85d512b';
    $pane = new stdClass();
    $pane->pid = 'new-6fc5b292-cb0e-4fbc-9279-32f28f8b17d5';
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '6fc5b292-cb0e-4fbc-9279-32f28f8b17d5';
    $display->content['new-6fc5b292-cb0e-4fbc-9279-32f28f8b17d5'] = $pane;
    $display->panels['node-content'][7] = 'new-6fc5b292-cb0e-4fbc-9279-32f28f8b17d5';
    $pane = new stdClass();
    $pane->pid = 'new-a9a819d0-ed22-446b-aee2-64031ff3525d';
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
    $pane->uuid = 'a9a819d0-ed22-446b-aee2-64031ff3525d';
    $display->content['new-a9a819d0-ed22-446b-aee2-64031ff3525d'] = $pane;
    $display->panels['node-content'][8] = 'new-a9a819d0-ed22-446b-aee2-64031ff3525d';
    $pane = new stdClass();
    $pane->pid = 'new-e97d99a8-32bd-4f8d-b8c9-623c2dcdc0e2';
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'e97d99a8-32bd-4f8d-b8c9-623c2dcdc0e2';
    $display->content['new-e97d99a8-32bd-4f8d-b8c9-623c2dcdc0e2'] = $pane;
    $display->panels['node-content'][9] = 'new-e97d99a8-32bd-4f8d-b8c9-623c2dcdc0e2';
    $pane = new stdClass();
    $pane->pid = 'new-0e057fdc-bf7d-457a-95c0-072c9d110844';
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
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '0e057fdc-bf7d-457a-95c0-072c9d110844';
    $display->content['new-0e057fdc-bf7d-457a-95c0-072c9d110844'] = $pane;
    $display->panels['node-content'][10] = 'new-0e057fdc-bf7d-457a-95c0-072c9d110844';
    $pane = new stdClass();
    $pane->pid = 'new-49090360-a5ab-41b8-9284-ae60dc37b087';
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
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '49090360-a5ab-41b8-9284-ae60dc37b087';
    $display->content['new-49090360-a5ab-41b8-9284-ae60dc37b087'] = $pane;
    $display->panels['node-content'][11] = 'new-49090360-a5ab-41b8-9284-ae60dc37b087';
    $pane = new stdClass();
    $pane->pid = 'new-0bbd732f-12df-474d-b212-73817ec2baad';
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
      'override_title_text' => t('See also'),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '0bbd732f-12df-474d-b212-73817ec2baad';
    $display->content['new-0bbd732f-12df-474d-b212-73817ec2baad'] = $pane;
    $display->panels['node-content'][12] = 'new-0bbd732f-12df-474d-b212-73817ec2baad';
    $pane = new stdClass();
    $pane->pid = 'new-a573b019-0571-480b-a048-bf7240f2504e';
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
        'node_reference_view_mode' => 'full',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Contacts',
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
    $pane->uuid = 'a573b019-0571-480b-a048-bf7240f2504e';
    $display->content['new-a573b019-0571-480b-a048-bf7240f2504e'] = $pane;
    $display->panels['node-content'][13] = 'new-a573b019-0571-480b-a048-bf7240f2504e';
    $pane = new stdClass();
    $pane->pid = 'new-3f38be7f-5099-43c4-83dd-773cc55700c5';
    $pane->panel = 'node-content';
    $pane->type = 'node_updated';
    $pane->subtype = 'node_updated';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'update_date',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => t('Last updated'),
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = '3f38be7f-5099-43c4-83dd-773cc55700c5';
    $display->content['new-3f38be7f-5099-43c4-83dd-773cc55700c5'] = $pane;
    $display->panels['node-content'][14] = 'new-3f38be7f-5099-43c4-83dd-773cc55700c5';
    $pane = new stdClass();
    $pane->pid = 'new-c60e2f96-9e29-46f5-932d-c7ae17238664';
    $pane->panel = 'node-content';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:webform';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = 'c60e2f96-9e29-46f5-932d-c7ae17238664';
    $display->content['new-c60e2f96-9e29-46f5-932d-c7ae17238664'] = $pane;
    $display->panels['node-content'][15] = 'new-c60e2f96-9e29-46f5-932d-c7ae17238664';
    $pane = new stdClass();
    $pane->pid = 'new-cf5acf8b-224c-44cc-8e33-5381bb386340';
    $pane->panel = 'node-sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Custom share',
      'title' => '',
      'body' => '<!-- <a class="toggle-share" href="#">' . t('Share') . '</a>
<div class="addthis_toolbox addthis_default_style addthis_32x32_style">
<a class="addthis_button_facebook"></a>
<a class="addthis_button_google_plusone_share"></a>
<a class="addthis_button_twitter"></a>
</div> -->
<a class="print_data" href="#">' . t('Print') . '</a>',
      'format' => 'video_html',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cf5acf8b-224c-44cc-8e33-5381bb386340';
    $display->content['new-cf5acf8b-224c-44cc-8e33-5381bb386340'] = $pane;
    $display->panels['node-sidebar'][0] = 'new-cf5acf8b-224c-44cc-8e33-5381bb386340';
    $pane = new stdClass();
    $pane->pid = 'new-b0f5e18c-6323-4d06-87dc-f3697824782e';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b0f5e18c-6323-4d06-87dc-f3697824782e';
    $display->content['new-b0f5e18c-6323-4d06-87dc-f3697824782e'] = $pane;
    $display->panels['node-sidebar'][1] = 'new-b0f5e18c-6323-4d06-87dc-f3697824782e';
    $pane = new stdClass();
    $pane->pid = 'new-72b19980-aba1-4abf-92de-86946a355cc0';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '72b19980-aba1-4abf-92de-86946a355cc0';
    $display->content['new-72b19980-aba1-4abf-92de-86946a355cc0'] = $pane;
    $display->panels['node-sidebar'][2] = 'new-72b19980-aba1-4abf-92de-86946a355cc0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5f0e0ee7-e8b0-4d0b-a7f1-d3c373d606d6';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_9'] = $handler;

  return $export;
}
