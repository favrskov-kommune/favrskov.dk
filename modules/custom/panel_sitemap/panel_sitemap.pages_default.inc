<?php
/**
 * @file
 * panel_sitemap.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function panel_sitemap_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'sitemap_page';
  $page->task = 'page';
  $page->admin_title = 'Sitemap page';
  $page->admin_description = '';
  $page->path = 'sitemap';
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
  $handler->name = 'page_sitemap_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'sitemap_page';
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
  $display->layout = 'nodepage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'single-region' => NULL,
      'header' => NULL,
      'node-content' => NULL,
      'node-sidebar' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5a28c0de-03a6-4de5-a5de-86daea5dfb85';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-01e8714f-3dda-4ed6-9b63-f567163c5f03';
    $pane->panel = 'footer';
    $pane->type = 'panels_mini';
    $pane->subtype = 'footer_mini_panel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '01e8714f-3dda-4ed6-9b63-f567163c5f03';
    $display->content['new-01e8714f-3dda-4ed6-9b63-f567163c5f03'] = $pane;
    $display->panels['footer'][0] = 'new-01e8714f-3dda-4ed6-9b63-f567163c5f03';
    $pane = new stdClass();
    $pane->pid = 'new-9a8b3298-6c85-4237-b756-e343150cabfe';
    $pane->panel = 'header';
    $pane->type = 'panels_mini';
    $pane->subtype = 'header_mini_panel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '9a8b3298-6c85-4237-b756-e343150cabfe';
    $display->content['new-9a8b3298-6c85-4237-b756-e343150cabfe'] = $pane;
    $display->panels['header'][0] = 'new-9a8b3298-6c85-4237-b756-e343150cabfe';
    $pane = new stdClass();
    $pane->pid = 'new-1e83c5f5-0d1a-4703-8f20-a8a62bd8e406';
    $pane->panel = 'node-content';
    $pane->type = 'block';
    $pane->subtype = 'panel_sitemap-sitemap';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '1e83c5f5-0d1a-4703-8f20-a8a62bd8e406';
    $display->content['new-1e83c5f5-0d1a-4703-8f20-a8a62bd8e406'] = $pane;
    $display->panels['node-content'][0] = 'new-1e83c5f5-0d1a-4703-8f20-a8a62bd8e406';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['sitemap_page'] = $page;

  return $pages;

}
