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
    $pane->pid = 'new-253ec7f0-cde7-4f69-bf3d-962045f4c28f';
    $pane->panel = 'node-content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_job_place_of_work';
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
    $pane->uuid = '253ec7f0-cde7-4f69-bf3d-962045f4c28f';
    $display->content['new-253ec7f0-cde7-4f69-bf3d-962045f4c28f'] = $pane;
    $display->panels['node-content'][1] = 'new-253ec7f0-cde7-4f69-bf3d-962045f4c28f';
    $pane = new stdClass();
    $pane->pid = 'new-20ef641e-391e-4af9-97cb-a8c695f35a61';
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
    $pane->uuid = '20ef641e-391e-4af9-97cb-a8c695f35a61';
    $display->content['new-20ef641e-391e-4af9-97cb-a8c695f35a61'] = $pane;
    $display->panels['node-content'][2] = 'new-20ef641e-391e-4af9-97cb-a8c695f35a61';
    $pane = new stdClass();
    $pane->pid = 'new-5e693b40-dd95-40e2-8f67-14911bf37a73';
    $pane->panel = 'node-content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_job_apply_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5e693b40-dd95-40e2-8f67-14911bf37a73';
    $display->content['new-5e693b40-dd95-40e2-8f67-14911bf37a73'] = $pane;
    $display->panels['node-content'][3] = 'new-5e693b40-dd95-40e2-8f67-14911bf37a73';
    $pane = new stdClass();
    $pane->pid = 'new-fbd0c19f-9b95-4617-8536-e9e9024d69fa';
    $pane->panel = 'node-content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_job_id';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'fbd0c19f-9b95-4617-8536-e9e9024d69fa';
    $display->content['new-fbd0c19f-9b95-4617-8536-e9e9024d69fa'] = $pane;
    $display->panels['node-content'][4] = 'new-fbd0c19f-9b95-4617-8536-e9e9024d69fa';
    $pane = new stdClass();
    $pane->pid = 'new-96dce3db-1df0-4105-8008-2b2fd537f5e0';
    $pane->panel = 'node-content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_job_start_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '96dce3db-1df0-4105-8008-2b2fd537f5e0';
    $display->content['new-96dce3db-1df0-4105-8008-2b2fd537f5e0'] = $pane;
    $display->panels['node-content'][5] = 'new-96dce3db-1df0-4105-8008-2b2fd537f5e0';
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
      'body' => '<a class="print_data" href="#">Udskriv</a>
<script type="text/javascript">var addthis_config = {"data_track_addressbar":false};</script>
<script type="text/javascript" src="//s7.addthis.com/js/300/addthis_widget.js#pubid=ra-520e4c8a1550db4c"></script>',
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
