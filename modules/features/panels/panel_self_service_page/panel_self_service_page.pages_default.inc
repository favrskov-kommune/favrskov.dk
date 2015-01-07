<?php
/**
 * @file
 * panel_self_service_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panel_self_service_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_self_service_page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 12;
  $handler->conf = array(
    'title' => 'Self Service page',
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
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'self_service' => 'self_service',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 5,
              2 => 4,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'nodepage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'header' => NULL,
      'node-content' => NULL,
      'node-sidebar' => NULL,
      'footer' => NULL,
    ),
    'node-content' => array(
      'style' => 'naked',
    ),
    'node-sidebar' => array(
      'style' => 'naked',
    ),
    'header' => array(
      'style' => 'naked',
    ),
    'footer' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1c8fb051-d952-44f0-a1a1-5039cbe04039';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4bb4bc08-3232-4cca-925f-a0ef6127cdc1';
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
    $pane->uuid = '4bb4bc08-3232-4cca-925f-a0ef6127cdc1';
    $display->content['new-4bb4bc08-3232-4cca-925f-a0ef6127cdc1'] = $pane;
    $display->panels['footer'][0] = 'new-4bb4bc08-3232-4cca-925f-a0ef6127cdc1';
    $pane = new stdClass();
    $pane->pid = 'new-54bbc6f5-54db-429a-a55f-47a281d8c7d4';
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
    $pane->uuid = '54bbc6f5-54db-429a-a55f-47a281d8c7d4';
    $display->content['new-54bbc6f5-54db-429a-a55f-47a281d8c7d4'] = $pane;
    $display->panels['header'][0] = 'new-54bbc6f5-54db-429a-a55f-47a281d8c7d4';
    $pane = new stdClass();
    $pane->pid = 'new-d2413bb1-3703-413c-9998-459fc76dfefb';
    $pane->panel = 'node-content';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
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
    $pane->uuid = 'd2413bb1-3703-413c-9998-459fc76dfefb';
    $display->content['new-d2413bb1-3703-413c-9998-459fc76dfefb'] = $pane;
    $display->panels['node-content'][0] = 'new-d2413bb1-3703-413c-9998-459fc76dfefb';
    $pane = new stdClass();
    $pane->pid = 'new-5992bc0b-51b1-499f-b0de-0fae2bc7eee1';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5992bc0b-51b1-499f-b0de-0fae2bc7eee1';
    $display->content['new-5992bc0b-51b1-499f-b0de-0fae2bc7eee1'] = $pane;
    $display->panels['node-content'][1] = 'new-5992bc0b-51b1-499f-b0de-0fae2bc7eee1';
    $pane = new stdClass();
    $pane->pid = 'new-c2d76ce0-05f3-4199-b22c-40a2a9a41c0e';
    $pane->panel = 'node-content';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'node-faq-content',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c2d76ce0-05f3-4199-b22c-40a2a9a41c0e';
    $display->content['new-c2d76ce0-05f3-4199-b22c-40a2a9a41c0e'] = $pane;
    $display->panels['node-content'][2] = 'new-c2d76ce0-05f3-4199-b22c-40a2a9a41c0e';
    $pane = new stdClass();
    $pane->pid = 'new-ff4268b3-2139-4327-a8b4-70c3aaa96131';
    $pane->panel = 'node-content';
    $pane->type = 'node_updated';
    $pane->subtype = 'node_updated';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'update_date',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => t('Last updated'),
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ff4268b3-2139-4327-a8b4-70c3aaa96131';
    $display->content['new-ff4268b3-2139-4327-a8b4-70c3aaa96131'] = $pane;
    $display->panels['node-content'][3] = 'new-ff4268b3-2139-4327-a8b4-70c3aaa96131';
    $pane = new stdClass();
    $pane->pid = 'new-b41ac4c4-1e5e-4d66-8402-f9b752879780';
    $pane->panel = 'node-sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Custom share',
      'title' => '',
      'body' => '<a class="toggle-share" href="#">' . t('Share') . '</a>
<div class="addthis_toolbox addthis_default_style addthis_32x32_style">
<a class="addthis_button_facebook"></a>
<a class="addthis_button_google_plusone_share"></a>
<a class="addthis_button_twitter"></a>
</div>
<a class="print_data" href="#">' . t('Print') . '</a>
<script type="text/javascript">var addthis_config = {"data_track_addressbar":false};</script>
<script type="text/javascript" src="//s7.addthis.com/js/300/addthis_widget.js#pubid=ra-520e4c8a1550db4c"></script>',
      'format' => 'video_html',
      'substitute' => TRUE,
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
    $pane->uuid = 'b41ac4c4-1e5e-4d66-8402-f9b752879780';
    $display->content['new-b41ac4c4-1e5e-4d66-8402-f9b752879780'] = $pane;
    $display->panels['node-sidebar'][0] = 'new-b41ac4c4-1e5e-4d66-8402-f9b752879780';
    $pane = new stdClass();
    $pane->pid = 'new-08bb730e-0224-4d9a-a45f-f94a463a3b05';
    $pane->panel = 'node-sidebar';
    $pane->type = 'block';
    $pane->subtype = 'domain_menu_block-main_menu';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'domain',
          'settings' => array(
            'domain_site' => 0,
            'domains' => array(
              'roskilde_stag_propeople_com_ua' => 'roskilde_stag_propeople_com_ua',
              'musicon_dk' => 0,
              'elitekommune_roskilde_dk' => 0,
              'kulturstr_g_dk' => 0,
              'kunstforeningen_roskilde_dk' => 0,
              'skolereform_roskilde_dk' => 0,
              'scr_roskilde_dk' => 0,
            ),
          ),
          'not' => TRUE,
        ),
      ),
    );
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
    $pane->uuid = '08bb730e-0224-4d9a-a45f-f94a463a3b05';
    $display->content['new-08bb730e-0224-4d9a-a45f-f94a463a3b05'] = $pane;
    $display->panels['node-sidebar'][1] = 'new-08bb730e-0224-4d9a-a45f-f94a463a3b05';
    $pane = new stdClass();
    $pane->pid = 'new-001786e6-de7c-4987-9360-e1e5245767cc';
    $pane->panel = 'node-sidebar';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'domain',
          'settings' => array(
            'domain_site' => 0,
            'domains' => array(
              'roskilde_stag_propeople_com_ua' => 'roskilde_stag_propeople_com_ua',
              'musicon_dk' => 0,
              'elitekommune_roskilde_dk' => 0,
              'kulturstr_g_dk' => 0,
              'kunstforeningen_roskilde_dk' => 0,
              'skolereform_roskilde_dk' => 0,
              'scr_roskilde_dk' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '3',
      'follow' => 0,
      'depth' => '2',
      'expanded' => 0,
      'sort' => 0,
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '001786e6-de7c-4987-9360-e1e5245767cc';
    $display->content['new-001786e6-de7c-4987-9360-e1e5245767cc'] = $pane;
    $display->panels['node-sidebar'][2] = 'new-001786e6-de7c-4987-9360-e1e5245767cc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-54bbc6f5-54db-429a-a55f-47a281d8c7d4';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_self_service_page'] = $handler;

  return $export;
}
