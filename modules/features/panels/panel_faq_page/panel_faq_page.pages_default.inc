<?php
/**
 * @file
 * panel_faq_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panel_faq_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_faq_page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 10;
  $handler->conf = array(
    'title' => 'FAQ page',
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
              'faq' => 'faq',
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
  $display->uuid = '04fec0b3-7a64-4c50-b600-eea2813f4fd3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a4d40e3e-aa23-4ea9-a33e-d7c71f39451c';
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
    $pane->uuid = 'a4d40e3e-aa23-4ea9-a33e-d7c71f39451c';
    $display->content['new-a4d40e3e-aa23-4ea9-a33e-d7c71f39451c'] = $pane;
    $display->panels['footer'][0] = 'new-a4d40e3e-aa23-4ea9-a33e-d7c71f39451c';
    $pane = new stdClass();
    $pane->pid = 'new-88300a28-8752-49ac-abdf-8b7aed50b9c8';
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
    $pane->uuid = '88300a28-8752-49ac-abdf-8b7aed50b9c8';
    $display->content['new-88300a28-8752-49ac-abdf-8b7aed50b9c8'] = $pane;
    $display->panels['header'][0] = 'new-88300a28-8752-49ac-abdf-8b7aed50b9c8';
    $pane = new stdClass();
    $pane->pid = 'new-54a713c4-875a-4c5a-84ce-5c4bbe83f70e';
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
    $pane->uuid = '54a713c4-875a-4c5a-84ce-5c4bbe83f70e';
    $display->content['new-54a713c4-875a-4c5a-84ce-5c4bbe83f70e'] = $pane;
    $display->panels['node-content'][0] = 'new-54a713c4-875a-4c5a-84ce-5c4bbe83f70e';
    $pane = new stdClass();
    $pane->pid = 'new-6eee1bfb-5346-4543-854a-7283b9eff392';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6eee1bfb-5346-4543-854a-7283b9eff392';
    $display->content['new-6eee1bfb-5346-4543-854a-7283b9eff392'] = $pane;
    $display->panels['node-content'][1] = 'new-6eee1bfb-5346-4543-854a-7283b9eff392';
    $pane = new stdClass();
    $pane->pid = 'new-c7ab9c88-065a-47c6-bba5-8692fa39a9a3';
    $pane->panel = 'node-content';
    $pane->type = 'node_updated';
    $pane->subtype = 'node_updated';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'update_date',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Last updated',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c7ab9c88-065a-47c6-bba5-8692fa39a9a3';
    $display->content['new-c7ab9c88-065a-47c6-bba5-8692fa39a9a3'] = $pane;
    $display->panels['node-content'][2] = 'new-c7ab9c88-065a-47c6-bba5-8692fa39a9a3';
    $pane = new stdClass();
    $pane->pid = 'new-b522358b-6cad-4e96-861a-c51c53bfd69d';
    $pane->panel = 'node-sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Custom share',
      'title' => '',
      'body' => '<!-- <a class="toggle-share" href="#">' . t('Share') . '</a>
<div class="addthis_toolbox addthis_default_style addthis_32x32_style">
<a class="addthis_button_facebook"></a>
<a class="addthis_button_google_plusone_share"></a>
<a class="addthis_button_twitter"></a>
</div> -->
<a class="print_data" href="#">' . t('Print') . '</a>',
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
    $pane->uuid = 'b522358b-6cad-4e96-861a-c51c53bfd69d';
    $display->content['new-b522358b-6cad-4e96-861a-c51c53bfd69d'] = $pane;
    $display->panels['node-sidebar'][0] = 'new-b522358b-6cad-4e96-861a-c51c53bfd69d';
    $pane = new stdClass();
    $pane->pid = 'new-05b5f3d0-cdf0-4902-9161-3ea22fb3409f';
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
    $pane->uuid = '05b5f3d0-cdf0-4902-9161-3ea22fb3409f';
    $display->content['new-05b5f3d0-cdf0-4902-9161-3ea22fb3409f'] = $pane;
    $display->panels['node-sidebar'][1] = 'new-05b5f3d0-cdf0-4902-9161-3ea22fb3409f';
    $pane = new stdClass();
    $pane->pid = 'new-5bb51aa3-00d3-4128-9975-c119e5915c41';
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
    $pane->uuid = '5bb51aa3-00d3-4128-9975-c119e5915c41';
    $display->content['new-5bb51aa3-00d3-4128-9975-c119e5915c41'] = $pane;
    $display->panels['node-sidebar'][2] = 'new-5bb51aa3-00d3-4128-9975-c119e5915c41';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-88300a28-8752-49ac-abdf-8b7aed50b9c8';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_faq_page'] = $handler;

  return $export;
}
