<?php
/**
 * @file
 * panel_header_mini_panel.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function panel_header_mini_panel_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'header_mini_panel';
  $mini->category = 'Header and Footer';
  $mini->admin_title = 'Header mini panel';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'header';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'navigation' => NULL,
      'search' => NULL,
      'system' => NULL,
    ),
    'center' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '70a07e9b-1e30-42e6-80b7-f17d779252cc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5ad56556-2ea9-4e51-816b-a443538814b2';
    $pane->panel = 'header';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
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
    $pane->uuid = '5ad56556-2ea9-4e51-816b-a443538814b2';
    $display->content['new-5ad56556-2ea9-4e51-816b-a443538814b2'] = $pane;
    $display->panels['header'][0] = 'new-5ad56556-2ea9-4e51-816b-a443538814b2';
    $pane = new stdClass();
    $pane->pid = 'new-6074916a-f226-41a4-9bdb-bed563a2d951';
    $pane->panel = 'navigation';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-header-menu';
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
    $pane->uuid = '6074916a-f226-41a4-9bdb-bed563a2d951';
    $display->content['new-6074916a-f226-41a4-9bdb-bed563a2d951'] = $pane;
    $display->panels['navigation'][0] = 'new-6074916a-f226-41a4-9bdb-bed563a2d951';
    $pane = new stdClass();
    $pane->pid = 'new-4148a86f-53ff-4ae8-abfd-86f6732dfb2f';
    $pane->panel = 'navigation';
    $pane->type = 'page_primary_links';
    $pane->subtype = 'page_primary_links';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->uuid = '4148a86f-53ff-4ae8-abfd-86f6732dfb2f';
    $display->content['new-4148a86f-53ff-4ae8-abfd-86f6732dfb2f'] = $pane;
    $display->panels['navigation'][1] = 'new-4148a86f-53ff-4ae8-abfd-86f6732dfb2f';
    $pane = new stdClass();
    $pane->pid = 'new-5dc39dd0-291a-4ab4-8003-7d0c26d30d8c';
    $pane->panel = 'search';
    $pane->type = 'block';
    $pane->subtype = 'apachesolr_panels-search_form';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5dc39dd0-291a-4ab4-8003-7d0c26d30d8c';
    $display->content['new-5dc39dd0-291a-4ab4-8003-7d0c26d30d8c'] = $pane;
    $display->panels['search'][0] = 'new-5dc39dd0-291a-4ab4-8003-7d0c26d30d8c';
    $pane = new stdClass();
    $pane->pid = 'new-4a11b4c9-605a-4f47-9fc4-d4f0fdf682e1';
    $pane->panel = 'system';
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
    $pane->uuid = '4a11b4c9-605a-4f47-9fc4-d4f0fdf682e1';
    $display->content['new-4a11b4c9-605a-4f47-9fc4-d4f0fdf682e1'] = $pane;
    $display->panels['system'][0] = 'new-4a11b4c9-605a-4f47-9fc4-d4f0fdf682e1';
    $pane = new stdClass();
    $pane->pid = 'new-1291cb35-95f8-4ff8-a7bb-10fb9373b9c6';
    $pane->panel = 'system';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
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
    $pane->uuid = '1291cb35-95f8-4ff8-a7bb-10fb9373b9c6';
    $display->content['new-1291cb35-95f8-4ff8-a7bb-10fb9373b9c6'] = $pane;
    $display->panels['system'][1] = 'new-1291cb35-95f8-4ff8-a7bb-10fb9373b9c6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5ad56556-2ea9-4e51-816b-a443538814b2';
  $mini->display = $display;
  $export['header_mini_panel'] = $mini;

  return $export;
}
