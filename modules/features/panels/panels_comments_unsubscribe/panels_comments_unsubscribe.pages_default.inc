<?php
/**
 * @file
 * panels_comments_unsubscribe.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function panels_comments_unsubscribe_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'disable_comment_subscription';
  $page->task = 'page';
  $page->admin_title = 'Disable comment subscription';
  $page->admin_description = '';
  $page->path = 'comment_notify/disable/!hash';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'hash' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_disable_comment_subscription_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'disable_comment_subscription';
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
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'nodes';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first-region' => NULL,
      'second-region' => NULL,
      'third-region' => NULL,
      'header' => NULL,
      'node-content' => NULL,
      'node-sidebar' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '55b0410c-35ff-4731-b4d4-c17fc76c9b8c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-42598510-7f5b-4a7d-9fee-2bd1449dc0f6';
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
    $pane->uuid = '42598510-7f5b-4a7d-9fee-2bd1449dc0f6';
    $display->content['new-42598510-7f5b-4a7d-9fee-2bd1449dc0f6'] = $pane;
    $display->panels['footer'][0] = 'new-42598510-7f5b-4a7d-9fee-2bd1449dc0f6';
    $pane = new stdClass();
    $pane->pid = 'new-eddeb87f-33df-4a5b-8d3f-d24a6328282d';
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
    $pane->uuid = 'eddeb87f-33df-4a5b-8d3f-d24a6328282d';
    $display->content['new-eddeb87f-33df-4a5b-8d3f-d24a6328282d'] = $pane;
    $display->panels['header'][0] = 'new-eddeb87f-33df-4a5b-8d3f-d24a6328282d';
    $pane = new stdClass();
    $pane->pid = 'new-05050dd9-c01d-4546-b2bf-d2d651798404';
    $pane->panel = 'node-content';
    $pane->type = 'comments_disable_subsription';
    $pane->subtype = 'comments_disable_subsription';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '05050dd9-c01d-4546-b2bf-d2d651798404';
    $display->content['new-05050dd9-c01d-4546-b2bf-d2d651798404'] = $pane;
    $display->panels['node-content'][0] = 'new-05050dd9-c01d-4546-b2bf-d2d651798404';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-eddeb87f-33df-4a5b-8d3f-d24a6328282d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['disable_comment_subscription'] = $page;

  return $pages;

}
