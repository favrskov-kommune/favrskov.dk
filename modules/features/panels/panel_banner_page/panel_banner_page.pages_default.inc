<?php
/**
 * @file
 * panel_banner_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panel_banner_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_banner_page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 11;
  $handler->conf = array(
    'title' => 'Banner element page',
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
              'banner_element' => 'banner_element',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
              1 => 3,
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
  $display->uuid = '5ab0e240-e621-4a94-8010-4ac24a5979d7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-edd7e7aa-db53-4e3f-b527-ee05790d288f';
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
    $pane->uuid = 'edd7e7aa-db53-4e3f-b527-ee05790d288f';
    $display->content['new-edd7e7aa-db53-4e3f-b527-ee05790d288f'] = $pane;
    $display->panels['footer'][0] = 'new-edd7e7aa-db53-4e3f-b527-ee05790d288f';
    $pane = new stdClass();
    $pane->pid = 'new-0dbffbe6-5c41-4236-a804-a1477bd53bc2';
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
    $pane->uuid = '0dbffbe6-5c41-4236-a804-a1477bd53bc2';
    $display->content['new-0dbffbe6-5c41-4236-a804-a1477bd53bc2'] = $pane;
    $display->panels['header'][0] = 'new-0dbffbe6-5c41-4236-a804-a1477bd53bc2';
    $pane = new stdClass();
    $pane->pid = 'new-8657d65e-8606-48f7-b4ba-b6d4e2368bc9';
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
    $pane->uuid = '8657d65e-8606-48f7-b4ba-b6d4e2368bc9';
    $display->content['new-8657d65e-8606-48f7-b4ba-b6d4e2368bc9'] = $pane;
    $display->panels['node-content'][0] = 'new-8657d65e-8606-48f7-b4ba-b6d4e2368bc9';
    $pane = new stdClass();
    $pane->pid = 'new-ca3ad94a-1e1e-4779-9881-475821473df7';
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
    $pane->uuid = 'ca3ad94a-1e1e-4779-9881-475821473df7';
    $display->content['new-ca3ad94a-1e1e-4779-9881-475821473df7'] = $pane;
    $display->panels['node-content'][1] = 'new-ca3ad94a-1e1e-4779-9881-475821473df7';
    $pane = new stdClass();
    $pane->pid = 'new-d4096748-50d7-4544-83b0-8445cb41d3e2';
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
    $pane->uuid = 'd4096748-50d7-4544-83b0-8445cb41d3e2';
    $display->content['new-d4096748-50d7-4544-83b0-8445cb41d3e2'] = $pane;
    $display->panels['node-content'][2] = 'new-d4096748-50d7-4544-83b0-8445cb41d3e2';
    $pane = new stdClass();
    $pane->pid = 'new-16d42848-3f13-4484-85d4-8f67d7c8d4ed';
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
    $pane->uuid = '16d42848-3f13-4484-85d4-8f67d7c8d4ed';
    $display->content['new-16d42848-3f13-4484-85d4-8f67d7c8d4ed'] = $pane;
    $display->panels['node-content'][3] = 'new-16d42848-3f13-4484-85d4-8f67d7c8d4ed';
    $pane = new stdClass();
    $pane->pid = 'new-5ddd0654-6202-4891-b3a6-88e63a2ce3e1';
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
    $pane->uuid = '5ddd0654-6202-4891-b3a6-88e63a2ce3e1';
    $display->content['new-5ddd0654-6202-4891-b3a6-88e63a2ce3e1'] = $pane;
    $display->panels['node-sidebar'][0] = 'new-5ddd0654-6202-4891-b3a6-88e63a2ce3e1';
    $pane = new stdClass();
    $pane->pid = 'new-f0f283ea-c0cd-4354-8e31-354c3b148800';
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
    $pane->uuid = 'f0f283ea-c0cd-4354-8e31-354c3b148800';
    $display->content['new-f0f283ea-c0cd-4354-8e31-354c3b148800'] = $pane;
    $display->panels['node-sidebar'][1] = 'new-f0f283ea-c0cd-4354-8e31-354c3b148800';
    $pane = new stdClass();
    $pane->pid = 'new-3e307ed3-ec11-4911-bf89-debd8aeb1769';
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
    $pane->uuid = '3e307ed3-ec11-4911-bf89-debd8aeb1769';
    $display->content['new-3e307ed3-ec11-4911-bf89-debd8aeb1769'] = $pane;
    $display->panels['node-sidebar'][2] = 'new-3e307ed3-ec11-4911-bf89-debd8aeb1769';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0dbffbe6-5c41-4236-a804-a1477bd53bc2';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_banner_page'] = $handler;

  return $export;
}
