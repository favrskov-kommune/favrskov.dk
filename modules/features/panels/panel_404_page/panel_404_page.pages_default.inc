<?php
/**
 * @file
 * panel_404_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function panel_404_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'page_404';
  $page->task = 'page';
  $page->admin_title = 'Page 404';
  $page->admin_description = '';
  $page->path = 'page-404';
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
  $handler->name = 'page_page_404_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'page_404';
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
      'header' => NULL,
      'region-two' => NULL,
      'region-three' => NULL,
      'region-four' => NULL,
      'region-five' => NULL,
      'region-six' => NULL,
      'region-seven' => NULL,
      'region-eight' => NULL,
      'single-region' => NULL,
      'first-region' => NULL,
      'second-region' => NULL,
      'third-region' => NULL,
    ),
    'first-region' => array(
      'style' => 'naked',
    ),
    'second-region' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9467bba7-72fc-45d5-8fc2-e56ba0131961';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-340947a8-b85f-4342-b84b-c194d0f492f6';
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
    $pane->uuid = '340947a8-b85f-4342-b84b-c194d0f492f6';
    $display->content['new-340947a8-b85f-4342-b84b-c194d0f492f6'] = $pane;
    $display->panels['first-region'][0] = 'new-340947a8-b85f-4342-b84b-c194d0f492f6';
    $pane = new stdClass();
    $pane->pid = 'new-cdfde144-e1b3-4957-9653-e188255f125b';
    $pane->panel = 'second-region';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '404 page message',
      'title' => '',
      'body' => '<div class="page-content">
<div class="message-part">
    <div class="big-msg">
      <h1><span class="small">' . t("Page not found") . '</span></h1>
    </div>
    <div class="description">
      <h2>' . t("We're sorry, but the system could not find what you demand. It may be that the page is not found, the page is moved or the link is mistyped.") .
      t("Be aware of the search function at the top right, which might help you find what you are looking for.") .
      t("Clicking <a href='/'>here</a>, you will come to the front page.") . '</h2>
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
    $pane->uuid = 'cdfde144-e1b3-4957-9653-e188255f125b';
    $display->content['new-cdfde144-e1b3-4957-9653-e188255f125b'] = $pane;
    $display->panels['second-region'][0] = 'new-cdfde144-e1b3-4957-9653-e188255f125b';
    $pane = new stdClass();
    $pane->pid = 'new-d4bd7ab6-1d68-47a4-9277-6b523a53b449';
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
    $pane->uuid = 'd4bd7ab6-1d68-47a4-9277-6b523a53b449';
    $display->content['new-d4bd7ab6-1d68-47a4-9277-6b523a53b449'] = $pane;
    $display->panels['third-region'][0] = 'new-d4bd7ab6-1d68-47a4-9277-6b523a53b449';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-cdfde144-e1b3-4957-9653-e188255f125b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['page_404'] = $page;

  return $pages;

}
