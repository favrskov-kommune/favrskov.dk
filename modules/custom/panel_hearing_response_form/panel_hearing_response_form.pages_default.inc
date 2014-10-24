<?php
/**
 * @file
 * panel_hearing_response_form.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panel_hearing_response_form_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_17';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -23;
  $handler->conf = array(
    'title' => t('Hearing response form'),
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
              'hearing' => 'hearing',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/*/response',
          ),
          'context' => 'empty',
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
  $display->uuid = '7e0d2131-9eaa-4acb-a2da-7fe25f07890a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4093f9eb-ebb4-4f8b-96b2-13d4d8769190';
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
    $pane->uuid = '4093f9eb-ebb4-4f8b-96b2-13d4d8769190';
    $display->content['new-4093f9eb-ebb4-4f8b-96b2-13d4d8769190'] = $pane;
    $display->panels['footer'][0] = 'new-4093f9eb-ebb4-4f8b-96b2-13d4d8769190';
    $pane = new stdClass();
    $pane->pid = 'new-f3ab3daf-92af-46db-8a0a-c1a10216fa9e';
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
    $pane->uuid = 'f3ab3daf-92af-46db-8a0a-c1a10216fa9e';
    $display->content['new-f3ab3daf-92af-46db-8a0a-c1a10216fa9e'] = $pane;
    $display->panels['header'][0] = 'new-f3ab3daf-92af-46db-8a0a-c1a10216fa9e';
    $pane = new stdClass();
    $pane->pid = 'new-a6b222e2-b70d-4720-8915-7e60950215e9';
    $pane->panel = 'header';
    $pane->type = 'page_actions';
    $pane->subtype = 'page_actions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a6b222e2-b70d-4720-8915-7e60950215e9';
    $display->content['new-a6b222e2-b70d-4720-8915-7e60950215e9'] = $pane;
    $display->panels['header'][1] = 'new-a6b222e2-b70d-4720-8915-7e60950215e9';
    $pane = new stdClass();
    $pane->pid = 'new-2517accc-0ae1-482d-8bfd-606f3c1f2aec';
    $pane->panel = 'node-content';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2517accc-0ae1-482d-8bfd-606f3c1f2aec';
    $display->content['new-2517accc-0ae1-482d-8bfd-606f3c1f2aec'] = $pane;
    $display->panels['node-content'][0] = 'new-2517accc-0ae1-482d-8bfd-606f3c1f2aec';
    $pane = new stdClass();
    $pane->pid = 'new-0183d408-2a87-4ff2-8f8b-c63c4462d64a';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0183d408-2a87-4ff2-8f8b-c63c4462d64a';
    $display->content['new-0183d408-2a87-4ff2-8f8b-c63c4462d64a'] = $pane;
    $display->panels['node-content'][1] = 'new-0183d408-2a87-4ff2-8f8b-c63c4462d64a';
    $pane = new stdClass();
    $pane->pid = 'new-7149fd29-85c3-4f46-8933-13109a6ec056';
    $pane->panel = 'node-content';
    $pane->type = 'go_back_link';
    $pane->subtype = 'go_back_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'link' => 'node/[arg:1]',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7149fd29-85c3-4f46-8933-13109a6ec056';
    $display->content['new-7149fd29-85c3-4f46-8933-13109a6ec056'] = $pane;
    $display->panels['node-content'][2] = 'new-7149fd29-85c3-4f46-8933-13109a6ec056';
    $pane = new stdClass();
    $pane->pid = 'new-6a1e421e-6bbc-4ec4-b376-3d1b40c9c5ba';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '6a1e421e-6bbc-4ec4-b376-3d1b40c9c5ba';
    $display->content['new-6a1e421e-6bbc-4ec4-b376-3d1b40c9c5ba'] = $pane;
    $display->panels['node-content'][3] = 'new-6a1e421e-6bbc-4ec4-b376-3d1b40c9c5ba';
    $pane = new stdClass();
    $pane->pid = 'new-1802efee-b556-47ba-a585-e10462f3e517';
    $pane->panel = 'node-content';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:webform';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Show Webform if Hearing is active',
            'php' => '$start_date = $contexts[\'argument_entity_id:node_1\']->data->field_hearing_start_date[LANGUAGE_NONE][0][\'value\'];
  $end_date = $contexts[\'argument_entity_id:node_1\']->data->field_hearing_end_date[LANGUAGE_NONE][0][\'value\'];
  if ((time() >= strtotime($start_date)) && (time() <= strtotime($end_date))) {
    return TRUE;
  }
  else {
    return FALSE;
  }',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '1802efee-b556-47ba-a585-e10462f3e517';
    $display->content['new-1802efee-b556-47ba-a585-e10462f3e517'] = $pane;
    $display->panels['node-content'][4] = 'new-1802efee-b556-47ba-a585-e10462f3e517';
    $pane = new stdClass();
    $pane->pid = 'new-32873719-d225-4973-b7c8-543db3ba22cb';
    $pane->panel = 'node-sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Custom share',
      'title' => '',
      'body' => '<a class="toggle-share" href="#">' . t('Share') .'</a>
<div class="addthis_toolbox addthis_default_style addthis_32x32_style">
<a class="addthis_button_facebook"></a>
<a class="addthis_button_google_plusone_share"></a>
<a class="addthis_button_twitter"></a>
</div>
<a class="print_data" href="#">' . t('Print') . '</a>
<a class="subscribe" href="/subscribe">' . t('Subscribe') . '</a>
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
    $pane->uuid = '32873719-d225-4973-b7c8-543db3ba22cb';
    $display->content['new-32873719-d225-4973-b7c8-543db3ba22cb'] = $pane;
    $display->panels['node-sidebar'][0] = 'new-32873719-d225-4973-b7c8-543db3ba22cb';
    $pane = new stdClass();
    $pane->pid = 'new-480a1f32-19b1-4101-a1ce-0f75607eb2f4';
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
    $pane->uuid = '480a1f32-19b1-4101-a1ce-0f75607eb2f4';
    $display->content['new-480a1f32-19b1-4101-a1ce-0f75607eb2f4'] = $pane;
    $display->panels['node-sidebar'][1] = 'new-480a1f32-19b1-4101-a1ce-0f75607eb2f4';
    $pane = new stdClass();
    $pane->pid = 'new-626bd8db-f3ff-4be7-94ac-c6f98069716c';
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
    $pane->uuid = '626bd8db-f3ff-4be7-94ac-c6f98069716c';
    $display->content['new-626bd8db-f3ff-4be7-94ac-c6f98069716c'] = $pane;
    $display->panels['node-sidebar'][2] = 'new-626bd8db-f3ff-4be7-94ac-c6f98069716c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f3ab3daf-92af-46db-8a0a-c1a10216fa9e';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_17'] = $handler;

  return $export;
}
