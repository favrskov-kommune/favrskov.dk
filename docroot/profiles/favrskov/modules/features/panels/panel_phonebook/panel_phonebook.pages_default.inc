<?php
/**
 * @file
 * panel_phonebook.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panel_phonebook_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_phone_book';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -21;
  $handler->conf = array(
    'title' => 'Phonebook page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'phone_book' => 'phone_book',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
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
    'header' => array(
      'style' => 'naked',
    ),
    'node-sidebar' => array(
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
  $display->uuid = '823356db-1c7f-4c62-b616-22dce240c680';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ddfe3e3b-ff3a-4bdd-9821-139c50f734af';
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
    $pane->uuid = 'ddfe3e3b-ff3a-4bdd-9821-139c50f734af';
    $display->content['new-ddfe3e3b-ff3a-4bdd-9821-139c50f734af'] = $pane;
    $display->panels['footer'][0] = 'new-ddfe3e3b-ff3a-4bdd-9821-139c50f734af';
    $pane = new stdClass();
    $pane->pid = 'new-bfcc6e5c-41cc-4f21-8feb-ca2b044901d0';
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
    $pane->uuid = 'bfcc6e5c-41cc-4f21-8feb-ca2b044901d0';
    $display->content['new-bfcc6e5c-41cc-4f21-8feb-ca2b044901d0'] = $pane;
    $display->panels['header'][0] = 'new-bfcc6e5c-41cc-4f21-8feb-ca2b044901d0';
    $pane = new stdClass();
    $pane->pid = 'new-a4647d31-7412-4657-a3d9-590c96fe499f';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a4647d31-7412-4657-a3d9-590c96fe499f';
    $display->content['new-a4647d31-7412-4657-a3d9-590c96fe499f'] = $pane;
    $display->panels['node-content'][0] = 'new-a4647d31-7412-4657-a3d9-590c96fe499f';
    $pane = new stdClass();
    $pane->pid = 'new-083d9d28-3fbd-4751-9b7e-504ea60d4ec3';
    $pane->panel = 'node-content';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
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
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'node-contacts',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '083d9d28-3fbd-4751-9b7e-504ea60d4ec3';
    $display->content['new-083d9d28-3fbd-4751-9b7e-504ea60d4ec3'] = $pane;
    $display->panels['node-content'][1] = 'new-083d9d28-3fbd-4751-9b7e-504ea60d4ec3';
    $pane = new stdClass();
    $pane->pid = 'new-dcf6ae44-65ae-4eaf-bcff-9465929ca5d9';
    $pane->panel = 'node-sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Custom share',
      'title' => '',
      'body' => '<a class="print_data" href="#">' . t('Print') . '</a>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'node-share',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dcf6ae44-65ae-4eaf-bcff-9465929ca5d9';
    $display->content['new-dcf6ae44-65ae-4eaf-bcff-9465929ca5d9'] = $pane;
    $display->panels['node-sidebar'][0] = 'new-dcf6ae44-65ae-4eaf-bcff-9465929ca5d9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-bfcc6e5c-41cc-4f21-8feb-ca2b044901d0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_phone_book'] = $handler;

  return $export;
}
