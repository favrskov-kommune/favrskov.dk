<?php
/**
 * @file
 * panel_factbox_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panel_factbox_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_factbox_page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 14;
  $handler->conf = array(
    'title' => 'Factbox page',
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
              'factbox' => 'factbox',
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
  $display->uuid = 'a9954ae0-ec61-4113-b987-3f0e137b4115';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e99de3d9-f67b-40d9-9e4d-76d29d789a84';
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
    $pane->uuid = 'e99de3d9-f67b-40d9-9e4d-76d29d789a84';
    $display->content['new-e99de3d9-f67b-40d9-9e4d-76d29d789a84'] = $pane;
    $display->panels['footer'][0] = 'new-e99de3d9-f67b-40d9-9e4d-76d29d789a84';
    $pane = new stdClass();
    $pane->pid = 'new-4ab54de1-c3b7-4361-8cc6-58a69bd7ce13';
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
    $pane->uuid = '4ab54de1-c3b7-4361-8cc6-58a69bd7ce13';
    $display->content['new-4ab54de1-c3b7-4361-8cc6-58a69bd7ce13'] = $pane;
    $display->panels['header'][0] = 'new-4ab54de1-c3b7-4361-8cc6-58a69bd7ce13';
    $pane = new stdClass();
    $pane->pid = 'new-aa88a6c1-53c3-4a62-8eac-25b1d9faa520';
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
    $pane->uuid = 'aa88a6c1-53c3-4a62-8eac-25b1d9faa520';
    $display->content['new-aa88a6c1-53c3-4a62-8eac-25b1d9faa520'] = $pane;
    $display->panels['node-content'][0] = 'new-aa88a6c1-53c3-4a62-8eac-25b1d9faa520';
    $pane = new stdClass();
    $pane->pid = 'new-e8a95bd7-4c82-436c-bedd-a56520fa187f';
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
    $pane->uuid = 'e8a95bd7-4c82-436c-bedd-a56520fa187f';
    $display->content['new-e8a95bd7-4c82-436c-bedd-a56520fa187f'] = $pane;
    $display->panels['node-content'][1] = 'new-e8a95bd7-4c82-436c-bedd-a56520fa187f';
    $pane = new stdClass();
    $pane->pid = 'new-d06e61b8-0ab2-4a8e-8724-b033f0ca694a';
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
      'css_class' => 'factbox',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd06e61b8-0ab2-4a8e-8724-b033f0ca694a';
    $display->content['new-d06e61b8-0ab2-4a8e-8724-b033f0ca694a'] = $pane;
    $display->panels['node-content'][2] = 'new-d06e61b8-0ab2-4a8e-8724-b033f0ca694a';
    $pane = new stdClass();
    $pane->pid = 'new-88e740a2-a39d-4a55-bbe1-09ac61a41698';
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
    $pane->uuid = '88e740a2-a39d-4a55-bbe1-09ac61a41698';
    $display->content['new-88e740a2-a39d-4a55-bbe1-09ac61a41698'] = $pane;
    $display->panels['node-content'][3] = 'new-88e740a2-a39d-4a55-bbe1-09ac61a41698';
    $pane = new stdClass();
    $pane->pid = 'new-9f06a553-7012-4e17-97ee-d37cabb4a689';
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
    $pane->uuid = '9f06a553-7012-4e17-97ee-d37cabb4a689';
    $display->content['new-9f06a553-7012-4e17-97ee-d37cabb4a689'] = $pane;
    $display->panels['node-sidebar'][0] = 'new-9f06a553-7012-4e17-97ee-d37cabb4a689';
    $pane = new stdClass();
    $pane->pid = 'new-24c32e4a-7626-4c6a-beea-48fb71a9bb85';
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
    $pane->uuid = '24c32e4a-7626-4c6a-beea-48fb71a9bb85';
    $display->content['new-24c32e4a-7626-4c6a-beea-48fb71a9bb85'] = $pane;
    $display->panels['node-sidebar'][1] = 'new-24c32e4a-7626-4c6a-beea-48fb71a9bb85';
    $pane = new stdClass();
    $pane->pid = 'new-66996c15-0857-4e18-bd29-d871c6a57686';
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
      'sort' => 1,
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
    $pane->uuid = '66996c15-0857-4e18-bd29-d871c6a57686';
    $display->content['new-66996c15-0857-4e18-bd29-d871c6a57686'] = $pane;
    $display->panels['node-sidebar'][2] = 'new-66996c15-0857-4e18-bd29-d871c6a57686';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4ab54de1-c3b7-4361-8cc6-58a69bd7ce13';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_factbox_page'] = $handler;

  return $export;
}
