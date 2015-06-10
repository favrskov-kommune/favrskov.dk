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
    $pane->pid = 'new-12624599-3dc5-49a3-9e3f-993c67f1d403';
    $pane->panel = 'node-content';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '12624599-3dc5-49a3-9e3f-993c67f1d403';
    $display->content['new-12624599-3dc5-49a3-9e3f-993c67f1d403'] = $pane;
    $display->panels['node-content'][0] = 'new-12624599-3dc5-49a3-9e3f-993c67f1d403';
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
