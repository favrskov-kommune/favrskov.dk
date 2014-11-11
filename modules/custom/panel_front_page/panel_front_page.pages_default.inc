<?php
/**
 * @file
 * panel_front_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panel_front_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Front page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'frontpage' => 'frontpage',
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
  $display->layout = 'frontpage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'header' => NULL,
      'region-two' => NULL,
      'region-three' => NULL,
      'region-four' => NULL,
      'region-five' => NULL,
      'region-six' => NULL,
      'region-seven' => NULL,
      'region-eight' => NULL,
    ),
    'header' => array(
      'style' => 'naked',
    ),
    'region-two' => array(
      'style' => 'naked',
    ),
    'region-three' => array(
      'style' => '-1',
    ),
    'region-eight' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '069fbe66-570d-4ebb-9401-573898deb0f8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dc67e306-f877-4a49-a865-ff82674047ca';
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
    $pane->uuid = 'dc67e306-f877-4a49-a865-ff82674047ca';
    $display->content['new-dc67e306-f877-4a49-a865-ff82674047ca'] = $pane;
    $display->panels['header'][0] = 'new-dc67e306-f877-4a49-a865-ff82674047ca';
    $pane = new stdClass();
    $pane->pid = 'new-9bb76392-9d27-4c31-b296-b4b6210a7f30';
    $pane->panel = 'region-eight';
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
    $pane->uuid = '9bb76392-9d27-4c31-b296-b4b6210a7f30';
    $display->content['new-9bb76392-9d27-4c31-b296-b4b6210a7f30'] = $pane;
    $display->panels['region-eight'][0] = 'new-9bb76392-9d27-4c31-b296-b4b6210a7f30';
    $pane = new stdClass();
    $pane->pid = 'new-3034dad9-db50-4e1b-8f5d-b1d197809acd';
    $pane->panel = 'region-five';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 1,
      'items_per_page' => '3',
      'offset' => '0',
      'path' => '',
      'arguments' => array(
        'name' => '',
      ),
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
    $pane->uuid = '3034dad9-db50-4e1b-8f5d-b1d197809acd';
    $display->content['new-3034dad9-db50-4e1b-8f5d-b1d197809acd'] = $pane;
    $display->panels['region-five'][0] = 'new-3034dad9-db50-4e1b-8f5d-b1d197809acd';
    $pane = new stdClass();
    $pane->pid = 'new-7a1bc983-58ee-4556-bcf2-b952292cc739';
    $pane->panel = 'region-four';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '4',
      'offset' => '0',
      'path' => 'nyheder',
      'arguments' => array(
        'name' => '',
      ),
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
    $pane->uuid = '7a1bc983-58ee-4556-bcf2-b952292cc739';
    $display->content['new-7a1bc983-58ee-4556-bcf2-b952292cc739'] = $pane;
    $display->panels['region-four'][0] = 'new-7a1bc983-58ee-4556-bcf2-b952292cc739';
    $pane = new stdClass();
    $pane->pid = 'new-4e8e7efe-3e56-4456-bc0e-0e3423daa7ba';
    $pane->panel = 'region-seven';
    $pane->type = 'views_panes';
    $pane->subtype = 'banners-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '3',
      'offset' => '0',
      'arguments' => array(
        'name' => 'front_page_banners_block',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4e8e7efe-3e56-4456-bc0e-0e3423daa7ba';
    $display->content['new-4e8e7efe-3e56-4456-bc0e-0e3423daa7ba'] = $pane;
    $display->panels['region-seven'][0] = 'new-4e8e7efe-3e56-4456-bc0e-0e3423daa7ba';
    $pane = new stdClass();
    $pane->pid = 'new-c5500c14-fea8-4b9d-9dde-286ef3db4ded';
    $pane->panel = 'region-six';
    $pane->type = 'views_panes';
    $pane->subtype = 'locations-locations_block_pane';
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
    $pane->uuid = 'c5500c14-fea8-4b9d-9dde-286ef3db4ded';
    $display->content['new-c5500c14-fea8-4b9d-9dde-286ef3db4ded'] = $pane;
    $display->panels['region-six'][0] = 'new-c5500c14-fea8-4b9d-9dde-286ef3db4ded';
    $pane = new stdClass();
    $pane->pid = 'new-8816e239-2d34-4ee4-a3ca-d93b35498664';
    $pane->panel = 'region-three';
    $pane->type = 'views_panes';
    $pane->subtype = 'slider-slider_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '0',
      'offset' => '0',
      'exposed' => array(
        'name' => 'front_page_slider',
        'sort_by' => 'position',
        'sort_order' => 'ASC',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8816e239-2d34-4ee4-a3ca-d93b35498664';
    $display->content['new-8816e239-2d34-4ee4-a3ca-d93b35498664'] = $pane;
    $display->panels['region-three'][0] = 'new-8816e239-2d34-4ee4-a3ca-d93b35498664';
    $pane = new stdClass();
    $pane->pid = 'new-c950b1c0-158d-4889-a9a5-330c47591f38';
    $pane->panel = 'region-three';
    $pane->type = 'views_panes';
    $pane->subtype = 'slider-slider_nav';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '0',
      'offset' => '0',
      'exposed' => array(
        'name' => 'front_page_slider',
        'sort_by' => 'position',
        'sort_order' => 'ASC',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c950b1c0-158d-4889-a9a5-330c47591f38';
    $display->content['new-c950b1c0-158d-4889-a9a5-330c47591f38'] = $pane;
    $display->panels['region-three'][1] = 'new-c950b1c0-158d-4889-a9a5-330c47591f38';
    $pane = new stdClass();
    $pane->pid = 'new-b2dcdcb0-75c1-458e-97bd-f8414cc95109';
    $pane->panel = 'region-two';
    $pane->type = 'views_panes';
    $pane->subtype = 'subject_grid-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'name' => '',
      ),
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
    $pane->uuid = 'b2dcdcb0-75c1-458e-97bd-f8414cc95109';
    $display->content['new-b2dcdcb0-75c1-458e-97bd-f8414cc95109'] = $pane;
    $display->panels['region-two'][0] = 'new-b2dcdcb0-75c1-458e-97bd-f8414cc95109';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-dc67e306-f877-4a49-a865-ff82674047ca';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}
