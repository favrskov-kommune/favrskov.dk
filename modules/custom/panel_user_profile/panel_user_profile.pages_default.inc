<?php
/**
 * @file
 * panel_user_profile.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panel_user_profile_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -99;
  $handler->conf = array(
    'title' => 'User profile page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'user-info',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
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
    'header' => array(
      'style' => 'naked',
    ),
    'node-content' => array(
      'style' => 'naked',
    ),
    'footer' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6d90a054-f0eb-4ae9-ad9d-dffb4f5bc1d1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-866c74af-cb52-4697-9b06-2a967bbe3ad6';
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
    $pane->uuid = '866c74af-cb52-4697-9b06-2a967bbe3ad6';
    $display->content['new-866c74af-cb52-4697-9b06-2a967bbe3ad6'] = $pane;
    $display->panels['footer'][0] = 'new-866c74af-cb52-4697-9b06-2a967bbe3ad6';
    $pane = new stdClass();
    $pane->pid = 'new-9b71dd7a-97da-4770-866d-06872f859db9';
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
    $pane->uuid = '9b71dd7a-97da-4770-866d-06872f859db9';
    $display->content['new-9b71dd7a-97da-4770-866d-06872f859db9'] = $pane;
    $display->panels['header'][0] = 'new-9b71dd7a-97da-4770-866d-06872f859db9';
    $pane = new stdClass();
    $pane->pid = 'new-9871db2e-d7aa-4f8a-a0d9-b4c0732466d5';
    $pane->panel = 'node-content';
    $pane->type = 'user_profile';
    $pane->subtype = 'user_profile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9871db2e-d7aa-4f8a-a0d9-b4c0732466d5';
    $display->content['new-9871db2e-d7aa-4f8a-a0d9-b4c0732466d5'] = $pane;
    $display->panels['node-content'][0] = 'new-9871db2e-d7aa-4f8a-a0d9-b4c0732466d5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context'] = $handler;

  return $export;
}
