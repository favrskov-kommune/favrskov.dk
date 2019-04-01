<?php

/**
 * @file
 * panel_job_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panel_job_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__job_page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 15;
  $handler->conf = array(
    'title' => 'Job page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'job_page',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'job' => 'job',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'nodepage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'node-content' => NULL,
      'node-sidebar' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6b42a61b-080e-452f-935c-b08cc2f75a26';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__job_page';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d68f4d11-3edb-4619-a097-5fe7400fd8f9';
  $pane->panel = 'footer';
  $pane->type = 'panels_mini';
  $pane->subtype = 'footer_mini_panel';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = 'd68f4d11-3edb-4619-a097-5fe7400fd8f9';
  $display->content['new-d68f4d11-3edb-4619-a097-5fe7400fd8f9'] = $pane;
  $display->panels['footer'][0] = 'new-d68f4d11-3edb-4619-a097-5fe7400fd8f9';
  $pane = new stdClass();
  $pane->pid = 'new-c2328f4a-5147-4359-b665-b25fc81ee60a';
  $pane->panel = 'header';
  $pane->type = 'panels_mini';
  $pane->subtype = 'header_mini_panel';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = 'c2328f4a-5147-4359-b665-b25fc81ee60a';
  $display->content['new-c2328f4a-5147-4359-b665-b25fc81ee60a'] = $pane;
  $display->panels['header'][0] = 'new-c2328f4a-5147-4359-b665-b25fc81ee60a';
  $pane = new stdClass();
  $pane->pid = 'new-aa4b81d7-9675-4400-8a68-722952d4838c';
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
  $pane->uuid = 'aa4b81d7-9675-4400-8a68-722952d4838c';
  $display->content['new-aa4b81d7-9675-4400-8a68-722952d4838c'] = $pane;
  $display->panels['node-content'][0] = 'new-aa4b81d7-9675-4400-8a68-722952d4838c';
  $pane = new stdClass();
  $pane->pid = 'new-56f4e19d-5595-4429-b83b-fe9b9694c8eb';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_job_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'trim_length' => '300',
      'trim_type' => 'chars',
      'trim_suffix' => '...',
      'trim_link' => '0',
      'more_link' => '0',
      'more_text' => 'Read more',
      'trim_options' => array(
        'text' => 0,
      ),
      'trim_preserve_tags' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '56f4e19d-5595-4429-b83b-fe9b9694c8eb';
  $display->content['new-56f4e19d-5595-4429-b83b-fe9b9694c8eb'] = $pane;
  $display->panels['node-content'][1] = 'new-56f4e19d-5595-4429-b83b-fe9b9694c8eb';
  $pane = new stdClass();
  $pane->pid = 'new-d0aa55af-ea04-40af-8a8a-28430eaadf56';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_job_destination_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd0aa55af-ea04-40af-8a8a-28430eaadf56';
  $display->content['new-d0aa55af-ea04-40af-8a8a-28430eaadf56'] = $pane;
  $display->panels['node-content'][2] = 'new-d0aa55af-ea04-40af-8a8a-28430eaadf56';
  $pane = new stdClass();
  $pane->pid = 'new-0318b37f-5a48-4382-9efd-eafdd8899719';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_job_category';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '0318b37f-5a48-4382-9efd-eafdd8899719';
  $display->content['new-0318b37f-5a48-4382-9efd-eafdd8899719'] = $pane;
  $display->panels['node-content'][3] = 'new-0318b37f-5a48-4382-9efd-eafdd8899719';
  $pane = new stdClass();
  $pane->pid = 'new-b0a7c599-fbff-4705-9e32-4a910a39490d';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_job_deadline';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'update_date',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
      'show_remaining_days' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'b0a7c599-fbff-4705-9e32-4a910a39490d';
  $display->content['new-b0a7c599-fbff-4705-9e32-4a910a39490d'] = $pane;
  $display->panels['node-content'][4] = 'new-b0a7c599-fbff-4705-9e32-4a910a39490d';
  $pane = new stdClass();
  $pane->pid = 'new-e78ee8e1-9d80-459d-a812-f735208bbd1f';
  $pane->panel = 'node-sidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Custom share',
    'title' => '',
    'body' => '<a class="print_data" href="#">Udskriv</a>',
    'format' => 'video_html',
    'substitute' => 1,
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
  $pane->uuid = 'e78ee8e1-9d80-459d-a812-f735208bbd1f';
  $display->content['new-e78ee8e1-9d80-459d-a812-f735208bbd1f'] = $pane;
  $display->panels['node-sidebar'][0] = 'new-e78ee8e1-9d80-459d-a812-f735208bbd1f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__job_page'] = $handler;

  return $export;
}
