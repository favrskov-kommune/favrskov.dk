<?php
/**
 * @file
 * panel_403_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function panel_403_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'page_403';
  $page->task = 'page';
  $page->admin_title = 'Page 403';
  $page->admin_description = '';
  $page->path = 'page-403';
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
  $handler->name = 'page_page_403_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'page_403';
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
  $display->layout = 'errorspage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first-region' => NULL,
      'second-region' => NULL,
      'third-region' => NULL,
    ),
    'first-region' => array(
      'style' => 'naked',
    ),
    'third-region' => array(
      'style' => 'naked',
    ),
    'second-region' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b1bcdb55-ef72-4af7-af2f-dbed88f008e9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-511b3a9c-3f83-4b84-9c66-ff19ac522bba';
    $pane->panel = 'first-region';
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
    $pane->uuid = '511b3a9c-3f83-4b84-9c66-ff19ac522bba';
    $display->content['new-511b3a9c-3f83-4b84-9c66-ff19ac522bba'] = $pane;
    $display->panels['first-region'][0] = 'new-511b3a9c-3f83-4b84-9c66-ff19ac522bba';
    $pane = new stdClass();
    $pane->pid = 'new-6acf324e-a5c5-49e3-b076-ef6fce52969c';
    $pane->panel = 'second-region';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '403 page description',
      'title' => '',
      'body' => '<div class="page-content page-403">
<div class="message-part">
    <div class="big-msg">
      <h1 class="small">Du kan ikke få adgang til siden 403 fejl</h1>
    </div>
    <div class="description">
      <h2>Vi beklager, men du har desværre ikke adgang til den valgte side.Vær opmærksom på søgefunktionen øverst til højre, som måske kan hjælpe dig med at finde, hvad du søger.Hvis du klikker <a href=\'/\'>her</a>, kommer du til forsiden.</h2>
    </div>
</div>
</div>
',
      'format' => 'video_html',
      'substitute' => TRUE,
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
    $pane->uuid = '6acf324e-a5c5-49e3-b076-ef6fce52969c';
    $display->content['new-6acf324e-a5c5-49e3-b076-ef6fce52969c'] = $pane;
    $display->panels['second-region'][0] = 'new-6acf324e-a5c5-49e3-b076-ef6fce52969c';
    $pane = new stdClass();
    $pane->pid = 'new-746b8258-37d7-4211-94ee-255143085417';
    $pane->panel = 'third-region';
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
    $pane->uuid = '746b8258-37d7-4211-94ee-255143085417';
    $display->content['new-746b8258-37d7-4211-94ee-255143085417'] = $pane;
    $display->panels['third-region'][0] = 'new-746b8258-37d7-4211-94ee-255143085417';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['page_403'] = $page;

  return $pages;

}
