<?php

/**
 * @file
 * panel_article_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panel_article_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Article page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Token',
        'keyword' => 'token',
        'name' => 'token',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:article:field_one_column_layout',
          'settings' => array(
            'field_one_column_layout' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_one_column_layout_value' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
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
  $display->uuid = 'eee3508f-e0c8-44cf-8c63-651d498378aa';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-190ad7c4-eb64-4303-b439-4d3a8edb90a5';
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
  $pane->uuid = '190ad7c4-eb64-4303-b439-4d3a8edb90a5';
  $display->content['new-190ad7c4-eb64-4303-b439-4d3a8edb90a5'] = $pane;
  $display->panels['footer'][0] = 'new-190ad7c4-eb64-4303-b439-4d3a8edb90a5';
  $pane = new stdClass();
  $pane->pid = 'new-04a597a3-9d5f-4199-88d7-fdcde87decf0';
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
    'style' => 'naked',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '04a597a3-9d5f-4199-88d7-fdcde87decf0';
  $display->content['new-04a597a3-9d5f-4199-88d7-fdcde87decf0'] = $pane;
  $display->panels['header'][0] = 'new-04a597a3-9d5f-4199-88d7-fdcde87decf0';
  $pane = new stdClass();
  $pane->pid = 'new-0af193b0-02a9-4211-ae6b-94f7f2cd42e2';
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
  $pane->uuid = '0af193b0-02a9-4211-ae6b-94f7f2cd42e2';
  $display->content['new-0af193b0-02a9-4211-ae6b-94f7f2cd42e2'] = $pane;
  $display->panels['node-content'][0] = 'new-0af193b0-02a9-4211-ae6b-94f7f2cd42e2';
  $pane = new stdClass();
  $pane->pid = 'new-0e93cb63-960a-48e4-9f16-5a08c8f65096';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0e93cb63-960a-48e4-9f16-5a08c8f65096';
  $display->content['new-0e93cb63-960a-48e4-9f16-5a08c8f65096'] = $pane;
  $display->panels['node-content'][1] = 'new-0e93cb63-960a-48e4-9f16-5a08c8f65096';
  $pane = new stdClass();
  $pane->pid = 'new-dc462ddf-a1f5-4ec5-8470-91348b248ff3';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_author';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'dc462ddf-a1f5-4ec5-8470-91348b248ff3';
  $display->content['new-dc462ddf-a1f5-4ec5-8470-91348b248ff3'] = $pane;
  $display->panels['node-content'][2] = 'new-dc462ddf-a1f5-4ec5-8470-91348b248ff3';
  $pane = new stdClass();
  $pane->pid = 'new-5874d82c-d391-4cca-a5ba-cc1b9215bbbc';
  $pane->panel = 'node-content';
  $pane->type = 'views_panes';
  $pane->subtype = 'subject_subpages-subpage_slider';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'panel_article_page_node_revision_state',
        'settings' => NULL,
        'context' => array(
          0 => 'argument_entity_id:node_1',
        ),
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '',
    ),
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
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
  $pane->uuid = '5874d82c-d391-4cca-a5ba-cc1b9215bbbc';
  $display->content['new-5874d82c-d391-4cca-a5ba-cc1b9215bbbc'] = $pane;
  $display->panels['node-content'][3] = 'new-5874d82c-d391-4cca-a5ba-cc1b9215bbbc';
  $pane = new stdClass();
  $pane->pid = 'new-b26120a8-8f0e-4c47-9ec3-79652da62acc';
  $pane->panel = 'node-content';
  $pane->type = 'views_panes';
  $pane->subtype = 'view_revisions-subpage_slider_revisions';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'panel_article_page_node_revision_state',
        'settings' => NULL,
        'context' => array(
          0 => 'argument_entity_id:node_1',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'b26120a8-8f0e-4c47-9ec3-79652da62acc';
  $display->content['new-b26120a8-8f0e-4c47-9ec3-79652da62acc'] = $pane;
  $display->panels['node-content'][4] = 'new-b26120a8-8f0e-4c47-9ec3-79652da62acc';
  $pane = new stdClass();
  $pane->pid = 'new-221729e8-f1c9-4e5e-b8aa-e93ea114a3c4';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_video';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '221729e8-f1c9-4e5e-b8aa-e93ea114a3c4';
  $display->content['new-221729e8-f1c9-4e5e-b8aa-e93ea114a3c4'] = $pane;
  $display->panels['node-content'][5] = 'new-221729e8-f1c9-4e5e-b8aa-e93ea114a3c4';
  $pane = new stdClass();
  $pane->pid = 'new-5630111c-e47b-406f-905c-ad066623efa2';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_video_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '5630111c-e47b-406f-905c-ad066623efa2';
  $display->content['new-5630111c-e47b-406f-905c-ad066623efa2'] = $pane;
  $display->panels['node-content'][6] = 'new-5630111c-e47b-406f-905c-ad066623efa2';
  $pane = new stdClass();
  $pane->pid = 'new-824af2b8-6e6d-4d15-b047-c6a7b930c47e';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_teaser';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '824af2b8-6e6d-4d15-b047-c6a7b930c47e';
  $display->content['new-824af2b8-6e6d-4d15-b047-c6a7b930c47e'] = $pane;
  $display->panels['node-content'][7] = 'new-824af2b8-6e6d-4d15-b047-c6a7b930c47e';
  $pane = new stdClass();
  $pane->pid = 'new-5ec305bc-fd6c-48be-923c-dd24fe465125';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '5ec305bc-fd6c-48be-923c-dd24fe465125';
  $display->content['new-5ec305bc-fd6c-48be-923c-dd24fe465125'] = $pane;
  $display->panels['node-content'][8] = 'new-5ec305bc-fd6c-48be-923c-dd24fe465125';
  $pane = new stdClass();
  $pane->pid = 'new-e0cd2457-d29e-4644-8825-1ffe23e11849';
  $pane->panel = 'node-content';
  $pane->type = 'views_panes';
  $pane->subtype = 'job-job_listing_by_table';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:article:field_job_list',
        'settings' => array(
          'field_job_list' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_job_list_value' => array(
            0 => 1,
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'e0cd2457-d29e-4644-8825-1ffe23e11849';
  $display->content['new-e0cd2457-d29e-4644-8825-1ffe23e11849'] = $pane;
  $display->panels['node-content'][9] = 'new-e0cd2457-d29e-4644-8825-1ffe23e11849';
  $pane = new stdClass();
  $pane->pid = 'new-46d41ad7-20cf-4f40-a9b2-8d76db46bbfe';
  $pane->panel = 'node-content';
  $pane->type = 'views_panes';
  $pane->subtype = 'volunteer_jobs-volunteer_jobs_table';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:article:field_volunteer_jobs_list',
        'settings' => array(
          'field_volunteer_jobs_list' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_volunteer_jobs_list_value' => array(
            0 => 1,
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '46d41ad7-20cf-4f40-a9b2-8d76db46bbfe';
  $display->content['new-46d41ad7-20cf-4f40-a9b2-8d76db46bbfe'] = $pane;
  $display->panels['node-content'][10] = 'new-46d41ad7-20cf-4f40-a9b2-8d76db46bbfe';
  $pane = new stdClass();
  $pane->pid = 'new-5408dc7a-2670-446c-93f5-8101540ffdda';
  $pane->panel = 'node-content';
  $pane->type = 'views_panes';
  $pane->subtype = 'volunteer_jobs-volunteer_jobs_list';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:article:field_volunteer_jobs_list',
        'settings' => array(
          'field_volunteer_jobs_list' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_volunteer_jobs_list_value' => array(
            0 => 1,
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '5408dc7a-2670-446c-93f5-8101540ffdda';
  $display->content['new-5408dc7a-2670-446c-93f5-8101540ffdda'] = $pane;
  $display->panels['node-content'][11] = 'new-5408dc7a-2670-446c-93f5-8101540ffdda';
  $pane = new stdClass();
  $pane->pid = 'new-e38c83f7-4dde-44e7-abd1-91a4c56f69fb';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_table';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'e38c83f7-4dde-44e7-abd1-91a4c56f69fb';
  $display->content['new-e38c83f7-4dde-44e7-abd1-91a4c56f69fb'] = $pane;
  $display->panels['node-content'][12] = 'new-e38c83f7-4dde-44e7-abd1-91a4c56f69fb';
  $pane = new stdClass();
  $pane->pid = 'new-1a7f3b1b-e599-468b-868d-5c68060c9b6a';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_self_service';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'node_reference_node',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'node_reference_view_mode' => 'full',
    ),
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
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = '1a7f3b1b-e599-468b-868d-5c68060c9b6a';
  $display->content['new-1a7f3b1b-e599-468b-868d-5c68060c9b6a'] = $pane;
  $display->panels['node-content'][13] = 'new-1a7f3b1b-e599-468b-868d-5c68060c9b6a';
  $pane = new stdClass();
  $pane->pid = 'new-b9ca8c19-1bdf-442c-8871-fe9abd280104';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_bannerlink';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'node_reference_node',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'node_reference_view_mode' => 'full',
    ),
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
  $pane->position = 14;
  $pane->locks = array();
  $pane->uuid = 'b9ca8c19-1bdf-442c-8871-fe9abd280104';
  $display->content['new-b9ca8c19-1bdf-442c-8871-fe9abd280104'] = $pane;
  $display->panels['node-content'][14] = 'new-b9ca8c19-1bdf-442c-8871-fe9abd280104';
  $pane = new stdClass();
  $pane->pid = 'new-dd881805-720f-4e18-8973-fdca42331343';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_faq_ref';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'node_reference_node',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'node_reference_view_mode' => 'full',
    ),
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
  $pane->position = 15;
  $pane->locks = array();
  $pane->uuid = 'dd881805-720f-4e18-8973-fdca42331343';
  $display->content['new-dd881805-720f-4e18-8973-fdca42331343'] = $pane;
  $display->panels['node-content'][15] = 'new-dd881805-720f-4e18-8973-fdca42331343';
  $pane = new stdClass();
  $pane->pid = 'new-238093c0-612c-4895-8437-97fc1aa67219';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_borgerdk';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'node_reference_node',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'node_reference_view_mode' => 'full',
    ),
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
  $pane->position = 16;
  $pane->locks = array();
  $pane->uuid = '238093c0-612c-4895-8437-97fc1aa67219';
  $display->content['new-238093c0-612c-4895-8437-97fc1aa67219'] = $pane;
  $display->panels['node-content'][16] = 'new-238093c0-612c-4895-8437-97fc1aa67219';
  $pane = new stdClass();
  $pane->pid = 'new-e728c985-3cb9-47ea-8e65-fc6a5b42708b';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_related_boxes';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'node_reference_node',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'node_reference_view_mode' => 'full',
    ),
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
  $pane->position = 17;
  $pane->locks = array();
  $pane->uuid = 'e728c985-3cb9-47ea-8e65-fc6a5b42708b';
  $display->content['new-e728c985-3cb9-47ea-8e65-fc6a5b42708b'] = $pane;
  $display->panels['node-content'][17] = 'new-e728c985-3cb9-47ea-8e65-fc6a5b42708b';
  $pane = new stdClass();
  $pane->pid = 'new-248f529c-c951-499d-8a17-169b18d9fdd4';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_publications';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'field_collection_fields',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'full',
    ),
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
  $pane->position = 18;
  $pane->locks = array();
  $pane->uuid = '248f529c-c951-499d-8a17-169b18d9fdd4';
  $display->content['new-248f529c-c951-499d-8a17-169b18d9fdd4'] = $pane;
  $display->panels['node-content'][18] = 'new-248f529c-c951-499d-8a17-169b18d9fdd4';
  $pane = new stdClass();
  $pane->pid = 'new-1d1279ac-1430-4929-a947-b21fa5fe1af0';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_related_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'node_reference_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Se også',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 19;
  $pane->locks = array();
  $pane->uuid = '1d1279ac-1430-4929-a947-b21fa5fe1af0';
  $display->content['new-1d1279ac-1430-4929-a947-b21fa5fe1af0'] = $pane;
  $display->panels['node-content'][19] = 'new-1d1279ac-1430-4929-a947-b21fa5fe1af0';
  $pane = new stdClass();
  $pane->pid = 'new-4481b4c8-e758-4231-9126-224e5fb9ca8b';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_contact_information';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'node_reference_node',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'node_reference_view_mode' => 'node_embed',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Kontakt',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 20;
  $pane->locks = array();
  $pane->uuid = '4481b4c8-e758-4231-9126-224e5fb9ca8b';
  $display->content['new-4481b4c8-e758-4231-9126-224e5fb9ca8b'] = $pane;
  $display->panels['node-content'][20] = 'new-4481b4c8-e758-4231-9126-224e5fb9ca8b';
  $pane = new stdClass();
  $pane->pid = 'new-01db4ecb-1619-4e7e-bef5-23d9dad2d96d';
  $pane->panel = 'node-content';
  $pane->type = 'node_updated';
  $pane->subtype = 'node_updated';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'format' => 'update_date',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Senest opdateret',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 21;
  $pane->locks = array();
  $pane->uuid = '01db4ecb-1619-4e7e-bef5-23d9dad2d96d';
  $display->content['new-01db4ecb-1619-4e7e-bef5-23d9dad2d96d'] = $pane;
  $display->panels['node-content'][21] = 'new-01db4ecb-1619-4e7e-bef5-23d9dad2d96d';
  $pane = new stdClass();
  $pane->pid = 'new-a46d5cd0-2552-4f83-b4ed-e85723313309';
  $pane->panel = 'node-content';
  $pane->type = 'token';
  $pane->subtype = 'node:author';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 0,
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
  $pane->position = 22;
  $pane->locks = array();
  $pane->uuid = 'a46d5cd0-2552-4f83-b4ed-e85723313309';
  $display->content['new-a46d5cd0-2552-4f83-b4ed-e85723313309'] = $pane;
  $display->panels['node-content'][22] = 'new-a46d5cd0-2552-4f83-b4ed-e85723313309';
  $pane = new stdClass();
  $pane->pid = 'new-57e548c9-e76c-4d1e-a294-63e8f665c380';
  $pane->panel = 'node-content';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 5,
            2 => 6,
            3 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Path to node',
    'title' => '',
    'body' => '<p><a href="http://%token:site:url-brief/node/%node:nid" style="line-height: 1.6em;">http://%token:site:url-brief/node/%node:nid</a></p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 23;
  $pane->locks = array();
  $pane->uuid = '57e548c9-e76c-4d1e-a294-63e8f665c380';
  $display->content['new-57e548c9-e76c-4d1e-a294-63e8f665c380'] = $pane;
  $display->panels['node-content'][23] = 'new-57e548c9-e76c-4d1e-a294-63e8f665c380';
  $pane = new stdClass();
  $pane->pid = 'new-cfba6f87-88e9-4794-a001-601b3f233189';
  $pane->panel = 'node-sidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Custom share',
    'title' => '',
    'body' => '<a class="print_data" href="#">Udskriv</a>',
    'format' => 'video_html',
    'substitute' => 1,
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
  $pane->uuid = 'cfba6f87-88e9-4794-a001-601b3f233189';
  $display->content['new-cfba6f87-88e9-4794-a001-601b3f233189'] = $pane;
  $display->panels['node-sidebar'][0] = 'new-cfba6f87-88e9-4794-a001-601b3f233189';
  $pane = new stdClass();
  $pane->pid = 'new-c2ad44a3-9155-4f21-b312-cc34a00a73cd';
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
            'favrskov_dk' => 'favrskov_dk',
            'oplev_favrskov_dk' => 0,
            'designguiden_favrskov_dk' => 0,
            'cykelkommune_favrskov_dk' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'menu_name' => 'main-menu',
    'parent_mlid' => '0',
    'parent' => 'main-menu:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '3',
    'follow' => 0,
    'depth' => '0',
    'expanded' => 0,
    'sort' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'depth_relative' => 0,
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c2ad44a3-9155-4f21-b312-cc34a00a73cd';
  $display->content['new-c2ad44a3-9155-4f21-b312-cc34a00a73cd'] = $pane;
  $display->panels['node-sidebar'][1] = 'new-c2ad44a3-9155-4f21-b312-cc34a00a73cd';
  $pane = new stdClass();
  $pane->pid = 'new-96c04f75-133e-481d-9049-ee0c4022d2f1';
  $pane->panel = 'node-sidebar';
  $pane->type = 'menu_tree';
  $pane->subtype = '840a5c39fa8fab01a2631a5de85c2079';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'domain',
        'settings' => array(
          'domain_site' => 0,
          'domains' => array(
            'designguiden_favrskov_dk' => 'designguiden_favrskov_dk',
            'favrskov_dk' => 0,
            'oplev_favrskov_dk' => 0,
            'cykelkommune_favrskov_dk' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'menu_name' => '840a5c39fa8fab01a2631a5de85c2079',
    'parent_mlid' => 0,
    'parent' => '840a5c39fa8fab01a2631a5de85c2079:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '3',
    'follow' => 0,
    'depth' => '3',
    'expanded' => 0,
    'sort' => 1,
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '96c04f75-133e-481d-9049-ee0c4022d2f1';
  $display->content['new-96c04f75-133e-481d-9049-ee0c4022d2f1'] = $pane;
  $display->panels['node-sidebar'][2] = 'new-96c04f75-133e-481d-9049-ee0c4022d2f1';
  $pane = new stdClass();
  $pane->pid = 'new-d77e3a0e-cb02-428a-b31d-e79e2bbf2b84';
  $pane->panel = 'node-sidebar';
  $pane->type = 'menu_tree';
  $pane->subtype = 'e06751ae02a79d750126985886141c7b';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'domain',
        'settings' => array(
          'domain_site' => 0,
          'domains' => array(
            'cykelkommune_favrskov_dk' => 'cykelkommune_favrskov_dk',
            'favrskov_dk' => 0,
            'oplev_favrskov_dk' => 0,
            'designguiden_favrskov_dk' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'menu_name' => 'e06751ae02a79d750126985886141c7b',
    'parent_mlid' => 0,
    'parent' => 'e06751ae02a79d750126985886141c7b:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '3',
    'follow' => 0,
    'depth' => '3',
    'expanded' => 0,
    'sort' => 1,
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'd77e3a0e-cb02-428a-b31d-e79e2bbf2b84';
  $display->content['new-d77e3a0e-cb02-428a-b31d-e79e2bbf2b84'] = $pane;
  $display->panels['node-sidebar'][3] = 'new-d77e3a0e-cb02-428a-b31d-e79e2bbf2b84';
  $pane = new stdClass();
  $pane->pid = 'new-e740127e-d3a5-4c18-968a-7a9f5a26d4e9';
  $pane->panel = 'node-sidebar';
  $pane->type = 'menu_tree';
  $pane->subtype = 'e8ad7c3466506a0a1ebe3d063d5837b6';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'domain',
        'settings' => array(
          'domain_site' => 0,
          'domains' => array(
            'oplev_favrskov_dk' => 'oplev_favrskov_dk',
            'favrskov_dk' => 0,
            'designguiden_favrskov_dk' => 0,
            'cykelkommune_favrskov_dk' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'menu_name' => 'e8ad7c3466506a0a1ebe3d063d5837b6',
    'parent_mlid' => 0,
    'parent' => 'e8ad7c3466506a0a1ebe3d063d5837b6:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '2',
    'follow' => 0,
    'depth' => '3',
    'expanded' => 0,
    'sort' => 1,
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'e740127e-d3a5-4c18-968a-7a9f5a26d4e9';
  $display->content['new-e740127e-d3a5-4c18-968a-7a9f5a26d4e9'] = $pane;
  $display->panels['node-sidebar'][4] = 'new-e740127e-d3a5-4c18-968a-7a9f5a26d4e9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-04a597a3-9d5f-4199-88d7-fdcde87decf0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_article_one_column';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 10;
  $handler->conf = array(
    'title' => 'Article page One column',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Token',
        'keyword' => 'token',
        'name' => 'token',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:article:field_one_column_layout',
          'settings' => array(
            'field_one_column_layout' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_one_column_layout_value' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
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
  $display->layout = 'nodefullpage';
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
      'first-bottom-reg' => NULL,
      'second-bottom-reg' => NULL,
      'third-bottom-reg' => NULL,
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
  $display->uuid = '14eb340f-d364-4747-a04e-7a6a174734e6';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_article_one_column';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4513846c-1728-4389-a673-9f01009aaab1';
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
  $pane->uuid = '4513846c-1728-4389-a673-9f01009aaab1';
  $display->content['new-4513846c-1728-4389-a673-9f01009aaab1'] = $pane;
  $display->panels['footer'][0] = 'new-4513846c-1728-4389-a673-9f01009aaab1';
  $pane = new stdClass();
  $pane->pid = 'new-6b926813-9e73-4718-9a8c-d51ac4b32e30';
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
  $pane->uuid = '6b926813-9e73-4718-9a8c-d51ac4b32e30';
  $display->content['new-6b926813-9e73-4718-9a8c-d51ac4b32e30'] = $pane;
  $display->panels['header'][0] = 'new-6b926813-9e73-4718-9a8c-d51ac4b32e30';
  $pane = new stdClass();
  $pane->pid = 'new-f47dd3f9-b324-48bf-afc6-9f7b2d89f6e0';
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
  $pane->uuid = 'f47dd3f9-b324-48bf-afc6-9f7b2d89f6e0';
  $display->content['new-f47dd3f9-b324-48bf-afc6-9f7b2d89f6e0'] = $pane;
  $display->panels['node-content'][0] = 'new-f47dd3f9-b324-48bf-afc6-9f7b2d89f6e0';
  $pane = new stdClass();
  $pane->pid = 'new-01295f5a-787f-4374-b172-327085ce4aca';
  $pane->panel = 'node-content';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Custom share',
    'title' => '',
    'body' => '',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '01295f5a-787f-4374-b172-327085ce4aca';
  $display->content['new-01295f5a-787f-4374-b172-327085ce4aca'] = $pane;
  $display->panels['node-content'][1] = 'new-01295f5a-787f-4374-b172-327085ce4aca';
  $pane = new stdClass();
  $pane->pid = 'new-6d7acec0-2457-4b64-9b33-80b92bb4c6e7';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '6d7acec0-2457-4b64-9b33-80b92bb4c6e7';
  $display->content['new-6d7acec0-2457-4b64-9b33-80b92bb4c6e7'] = $pane;
  $display->panels['node-content'][2] = 'new-6d7acec0-2457-4b64-9b33-80b92bb4c6e7';
  $pane = new stdClass();
  $pane->pid = 'new-5fe6fe6b-d251-4807-84f7-646de34995af';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_author';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '5fe6fe6b-d251-4807-84f7-646de34995af';
  $display->content['new-5fe6fe6b-d251-4807-84f7-646de34995af'] = $pane;
  $display->panels['node-content'][3] = 'new-5fe6fe6b-d251-4807-84f7-646de34995af';
  $pane = new stdClass();
  $pane->pid = 'new-3eebecfa-2e40-4cad-b0ab-cd0663182c8d';
  $pane->panel = 'node-content';
  $pane->type = 'views_panes';
  $pane->subtype = 'subject_subpages-subpage_slider';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '',
    ),
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'naked',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '3eebecfa-2e40-4cad-b0ab-cd0663182c8d';
  $display->content['new-3eebecfa-2e40-4cad-b0ab-cd0663182c8d'] = $pane;
  $display->panels['node-content'][4] = 'new-3eebecfa-2e40-4cad-b0ab-cd0663182c8d';
  $pane = new stdClass();
  $pane->pid = 'new-54f13f91-baaa-40d9-8315-32e6268ddb1b';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_video';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '54f13f91-baaa-40d9-8315-32e6268ddb1b';
  $display->content['new-54f13f91-baaa-40d9-8315-32e6268ddb1b'] = $pane;
  $display->panels['node-content'][5] = 'new-54f13f91-baaa-40d9-8315-32e6268ddb1b';
  $pane = new stdClass();
  $pane->pid = 'new-c5ae3639-5c17-4973-9f25-dc0c7c1b51c0';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_video_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'c5ae3639-5c17-4973-9f25-dc0c7c1b51c0';
  $display->content['new-c5ae3639-5c17-4973-9f25-dc0c7c1b51c0'] = $pane;
  $display->panels['node-content'][6] = 'new-c5ae3639-5c17-4973-9f25-dc0c7c1b51c0';
  $pane = new stdClass();
  $pane->pid = 'new-45a0d83a-efa8-4b7e-be0a-33dc25a1ad69';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_teaser';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '45a0d83a-efa8-4b7e-be0a-33dc25a1ad69';
  $display->content['new-45a0d83a-efa8-4b7e-be0a-33dc25a1ad69'] = $pane;
  $display->panels['node-content'][7] = 'new-45a0d83a-efa8-4b7e-be0a-33dc25a1ad69';
  $pane = new stdClass();
  $pane->pid = 'new-147acc17-b6be-42fc-9036-39830025f15f';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '147acc17-b6be-42fc-9036-39830025f15f';
  $display->content['new-147acc17-b6be-42fc-9036-39830025f15f'] = $pane;
  $display->panels['node-content'][8] = 'new-147acc17-b6be-42fc-9036-39830025f15f';
  $pane = new stdClass();
  $pane->pid = 'new-927754f4-7609-4d2f-8e02-2c6cd3abdb8d';
  $pane->panel = 'node-content';
  $pane->type = 'views_panes';
  $pane->subtype = 'job-job_listing_by_table';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:article:field_job_list',
        'settings' => array(
          'field_job_list' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_job_list_value' => array(
            0 => 1,
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '927754f4-7609-4d2f-8e02-2c6cd3abdb8d';
  $display->content['new-927754f4-7609-4d2f-8e02-2c6cd3abdb8d'] = $pane;
  $display->panels['node-content'][9] = 'new-927754f4-7609-4d2f-8e02-2c6cd3abdb8d';
  $pane = new stdClass();
  $pane->pid = 'new-8b9c19b2-61fa-4458-8b45-ebe54234ec45';
  $pane->panel = 'node-content';
  $pane->type = 'views_panes';
  $pane->subtype = 'job-job_listing_by_list';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:article:field_job_list',
        'settings' => array(
          'field_job_list' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_job_list_value' => array(
            0 => 1,
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '8b9c19b2-61fa-4458-8b45-ebe54234ec45';
  $display->content['new-8b9c19b2-61fa-4458-8b45-ebe54234ec45'] = $pane;
  $display->panels['node-content'][10] = 'new-8b9c19b2-61fa-4458-8b45-ebe54234ec45';
  $pane = new stdClass();
  $pane->pid = 'new-fd17bed9-0eda-4cf7-bf1a-f5529fec2a15';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_self_service';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'node_reference_node',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'node_reference_view_mode' => 'full',
    ),
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
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = 'fd17bed9-0eda-4cf7-bf1a-f5529fec2a15';
  $display->content['new-fd17bed9-0eda-4cf7-bf1a-f5529fec2a15'] = $pane;
  $display->panels['node-content'][11] = 'new-fd17bed9-0eda-4cf7-bf1a-f5529fec2a15';
  $pane = new stdClass();
  $pane->pid = 'new-deeab3f2-02b7-4820-b747-b627ef19fae8';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_bannerlink';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'node_reference_node',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'node_reference_view_mode' => 'full',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'deeab3f2-02b7-4820-b747-b627ef19fae8';
  $display->content['new-deeab3f2-02b7-4820-b747-b627ef19fae8'] = $pane;
  $display->panels['node-content'][12] = 'new-deeab3f2-02b7-4820-b747-b627ef19fae8';
  $pane = new stdClass();
  $pane->pid = 'new-bb4aceda-6f67-418d-ae0c-9179ca5dfc6e';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_faq_ref';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'node_reference_node',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'node_reference_view_mode' => 'full',
    ),
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
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = 'bb4aceda-6f67-418d-ae0c-9179ca5dfc6e';
  $display->content['new-bb4aceda-6f67-418d-ae0c-9179ca5dfc6e'] = $pane;
  $display->panels['node-content'][13] = 'new-bb4aceda-6f67-418d-ae0c-9179ca5dfc6e';
  $pane = new stdClass();
  $pane->pid = 'new-7ad9deca-fb21-4ae7-a406-38e6844ff7e4';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_borgerdk';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'node_reference_node',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'node_reference_view_mode' => 'full',
    ),
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
  $pane->position = 14;
  $pane->locks = array();
  $pane->uuid = '7ad9deca-fb21-4ae7-a406-38e6844ff7e4';
  $display->content['new-7ad9deca-fb21-4ae7-a406-38e6844ff7e4'] = $pane;
  $display->panels['node-content'][14] = 'new-7ad9deca-fb21-4ae7-a406-38e6844ff7e4';
  $pane = new stdClass();
  $pane->pid = 'new-e739c29d-9b5a-4921-8b3d-8037b2fd2d84';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_related_boxes';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'node_reference_node',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'node_reference_view_mode' => 'full',
    ),
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
  $pane->position = 15;
  $pane->locks = array();
  $pane->uuid = 'e739c29d-9b5a-4921-8b3d-8037b2fd2d84';
  $display->content['new-e739c29d-9b5a-4921-8b3d-8037b2fd2d84'] = $pane;
  $display->panels['node-content'][15] = 'new-e739c29d-9b5a-4921-8b3d-8037b2fd2d84';
  $pane = new stdClass();
  $pane->pid = 'new-15ea07d5-ebad-422f-ba92-99e5e1f3b0ec';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_publications';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'field_collection_fields',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'full',
    ),
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
  $pane->position = 16;
  $pane->locks = array();
  $pane->uuid = '15ea07d5-ebad-422f-ba92-99e5e1f3b0ec';
  $display->content['new-15ea07d5-ebad-422f-ba92-99e5e1f3b0ec'] = $pane;
  $display->panels['node-content'][16] = 'new-15ea07d5-ebad-422f-ba92-99e5e1f3b0ec';
  $pane = new stdClass();
  $pane->pid = 'new-7cb3ff91-b9b4-4cc6-aea6-990ae72623f8';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_related_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'node_reference_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'See also',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 17;
  $pane->locks = array();
  $pane->uuid = '7cb3ff91-b9b4-4cc6-aea6-990ae72623f8';
  $display->content['new-7cb3ff91-b9b4-4cc6-aea6-990ae72623f8'] = $pane;
  $display->panels['node-content'][17] = 'new-7cb3ff91-b9b4-4cc6-aea6-990ae72623f8';
  $pane = new stdClass();
  $pane->pid = 'new-b84ce279-d100-467d-9b40-81154892b4c7';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_contact_information';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'node_reference_node',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'node_reference_view_mode' => 'full',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Contacts',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 18;
  $pane->locks = array();
  $pane->uuid = 'b84ce279-d100-467d-9b40-81154892b4c7';
  $display->content['new-b84ce279-d100-467d-9b40-81154892b4c7'] = $pane;
  $display->panels['node-content'][18] = 'new-b84ce279-d100-467d-9b40-81154892b4c7';
  $pane = new stdClass();
  $pane->pid = 'new-acd5647f-63e9-4961-beaf-c314d13f05e5';
  $pane->panel = 'node-content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'field_collection_fields',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'view_mode' => 'full',
    ),
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
  $pane->position = 19;
  $pane->locks = array();
  $pane->uuid = 'acd5647f-63e9-4961-beaf-c314d13f05e5';
  $display->content['new-acd5647f-63e9-4961-beaf-c314d13f05e5'] = $pane;
  $display->panels['node-content'][19] = 'new-acd5647f-63e9-4961-beaf-c314d13f05e5';
  $pane = new stdClass();
  $pane->pid = 'new-17743410-16e0-4974-b175-9edea87f1743';
  $pane->panel = 'node-content';
  $pane->type = 'node_updated';
  $pane->subtype = 'node_updated';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Hide',
          'php' => 'return (!empty($contexts[\'argument_entity_id:node_1\']->data->field_hide_node_update_date[LANGUAGE_NONE][0][\'value\'])) ? false : true;',
        ),
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->position = 20;
  $pane->locks = array();
  $pane->uuid = '17743410-16e0-4974-b175-9edea87f1743';
  $display->content['new-17743410-16e0-4974-b175-9edea87f1743'] = $pane;
  $display->panels['node-content'][20] = 'new-17743410-16e0-4974-b175-9edea87f1743';
  $pane = new stdClass();
  $pane->pid = 'new-ace70267-0968-467c-bc1b-7cae95530b4e';
  $pane->panel = 'node-content';
  $pane->type = 'token';
  $pane->subtype = 'node:author';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
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
  $pane->position = 21;
  $pane->locks = array();
  $pane->uuid = 'ace70267-0968-467c-bc1b-7cae95530b4e';
  $display->content['new-ace70267-0968-467c-bc1b-7cae95530b4e'] = $pane;
  $display->panels['node-content'][21] = 'new-ace70267-0968-467c-bc1b-7cae95530b4e';
  $pane = new stdClass();
  $pane->pid = 'new-9be59df8-06d8-4f54-9788-22326f2adfae';
  $pane->panel = 'node-content';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 5,
            2 => 6,
            3 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Path to node',
    'title' => '',
    'body' => '<p><a href="http://%token:site:url-brief/node/%node:nid" style="line-height: 1.6em;">http://%token:site:url-brief/node/%node:nid</a></p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 22;
  $pane->locks = array();
  $pane->uuid = '9be59df8-06d8-4f54-9788-22326f2adfae';
  $display->content['new-9be59df8-06d8-4f54-9788-22326f2adfae'] = $pane;
  $display->panels['node-content'][22] = 'new-9be59df8-06d8-4f54-9788-22326f2adfae';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4513846c-1728-4389-a673-9f01009aaab1';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_article_one_column'] = $handler;

  return $export;
}
