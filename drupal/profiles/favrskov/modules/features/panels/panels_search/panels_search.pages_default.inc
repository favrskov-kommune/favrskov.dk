<?php
/**
 * @file
 * panels_search.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function panels_search_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search';
  $page->task = 'page';
  $page->admin_title = 'Search';
  $page->admin_description = '';
  $page->path = 'soegning/!query';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'query' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'search';
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
  $display->layout = 'search';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'results' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
    ),
    'results' => array(
      'style' => 'naked',
    ),
    'sidebar' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = t('Search');
  $display->uuid = '6af1a679-cb70-4392-be87-e25e96fe5a34';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_search_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-73afdd11-c1ff-466c-a389-0104ddfeca05';
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
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '73afdd11-c1ff-466c-a389-0104ddfeca05';
  $display->content['new-73afdd11-c1ff-466c-a389-0104ddfeca05'] = $pane;
  $display->panels['footer'][0] = 'new-73afdd11-c1ff-466c-a389-0104ddfeca05';
  $pane = new stdClass();
  $pane->pid = 'new-e789ad91-52b9-4969-9ed0-711f413da982';
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
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e789ad91-52b9-4969-9ed0-711f413da982';
  $display->content['new-e789ad91-52b9-4969-9ed0-711f413da982'] = $pane;
  $display->panels['header'][0] = 'new-e789ad91-52b9-4969-9ed0-711f413da982';
  $pane = new stdClass();
  $pane->pid = 'new-c0d90623-2763-4227-9b13-ef3df7aa801a';
  $pane->panel = 'results';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => '',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c0d90623-2763-4227-9b13-ef3df7aa801a';
  $display->content['new-c0d90623-2763-4227-9b13-ef3df7aa801a'] = $pane;
  $display->panels['results'][0] = 'new-c0d90623-2763-4227-9b13-ef3df7aa801a';
  $pane = new stdClass();
  $pane->pid = 'new-c3cfb0a3-40c3-4235-a0eb-9ca73ba55c09';
  $pane->panel = 'results';
  $pane->type = 'apachesolr_form';
  $pane->subtype = 'apachesolr_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'path_type' => 'same',
    'path' => '',
    'override_prompt' => 0,
    'prompt' => '',
    'show_keys' => 1,
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c3cfb0a3-40c3-4235-a0eb-9ca73ba55c09';
  $display->content['new-c3cfb0a3-40c3-4235-a0eb-9ca73ba55c09'] = $pane;
  $display->panels['results'][1] = 'new-c3cfb0a3-40c3-4235-a0eb-9ca73ba55c09';
  $pane = new stdClass();
  $pane->pid = 'new-b7637c63-4a65-463e-95b0-c35bef9bae10';
  $pane->panel = 'results';
  $pane->type = 'apachesolr_result';
  $pane->subtype = 'apachesolr_result';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'keys_action' => 'none',
    'keys' => '',
    'keys_required' => 0,
    'filters_action' => 'none',
    'filters' => '',
    'rows' => '10',
    'env_id' => '',
    'sort_action' => 'none',
    'sort' => '',
    'breadcrumb' => 0,
    'title_override' => 1,
    'title_override_text' => '',
    'empty_override' => 0,
    'empty_override_title' => '',
    'empty_override_text' => array(
      'value' => '',
      'format' => 'plain_text',
    ),
    'empty_override_format' => 'plain_text',
    'log' => 0,
    'substitute' => 0,
    'context' => 'argument_string_1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b7637c63-4a65-463e-95b0-c35bef9bae10';
  $display->content['new-b7637c63-4a65-463e-95b0-c35bef9bae10'] = $pane;
  $display->panels['results'][2] = 'new-b7637c63-4a65-463e-95b0-c35bef9bae10';
  $pane = new stdClass();
  $pane->pid = 'new-2f5af5c8-2ca0-4a6a-8c1e-f10bf51e35b0';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'apachesolr_stats-core_search';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Mest populære søgninger',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2f5af5c8-2ca0-4a6a-8c1e-f10bf51e35b0';
  $display->content['new-2f5af5c8-2ca0-4a6a-8c1e-f10bf51e35b0'] = $pane;
  $display->panels['sidebar'][0] = 'new-2f5af5c8-2ca0-4a6a-8c1e-f10bf51e35b0';
  $pane = new stdClass();
  $pane->pid = 'new-2d581aff-2337-453a-b266-81dbcc79e2ac';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'apachesolr_search-sort';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2d581aff-2337-453a-b266-81dbcc79e2ac';
  $display->content['new-2d581aff-2337-453a-b266-81dbcc79e2ac'] = $pane;
  $display->panels['sidebar'][1] = 'new-2d581aff-2337-453a-b266-81dbcc79e2ac';
  $pane = new stdClass();
  $pane->pid = 'new-a2b432c7-e2b1-4702-b9c0-ea932ef2ee70';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-GiIy4zr9Gu0ZSa0bumw1Y9qIIpIDf1wu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Filtrer efter Type',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a2b432c7-e2b1-4702-b9c0-ea932ef2ee70';
  $display->content['new-a2b432c7-e2b1-4702-b9c0-ea932ef2ee70'] = $pane;
  $display->panels['sidebar'][2] = 'new-a2b432c7-e2b1-4702-b9c0-ea932ef2ee70';
  $pane = new stdClass();
  $pane->pid = 'new-0e288e29-7d94-4a42-a5f4-232122942b32';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-nce4JsmtODsBLPYhbye82d12zFNFCFpq';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Filtrer efter Emne område',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '0e288e29-7d94-4a42-a5f4-232122942b32';
  $display->content['new-0e288e29-7d94-4a42-a5f4-232122942b32'] = $pane;
  $display->panels['sidebar'][3] = 'new-0e288e29-7d94-4a42-a5f4-232122942b32';
  $pane = new stdClass();
  $pane->pid = 'new-f732e048-8801-4bc7-babf-e5a3181aef71';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-MBP6pep41Hs9V0OwZmsmvG6kTRI8oWjn';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Filter by Location',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'f732e048-8801-4bc7-babf-e5a3181aef71';
  $display->content['new-f732e048-8801-4bc7-babf-e5a3181aef71'] = $pane;
  $display->panels['sidebar'][4] = 'new-f732e048-8801-4bc7-babf-e5a3181aef71';
  $pane = new stdClass();
  $pane->pid = 'new-42d85e57-174d-48e7-84a5-b10762d99baa';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-2ysafcuXZZ8oa9rQTeI0J0k4i1z7qR4N';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Filter by Committee',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '42d85e57-174d-48e7-84a5-b10762d99baa';
  $display->content['new-42d85e57-174d-48e7-84a5-b10762d99baa'] = $pane;
  $display->panels['sidebar'][5] = 'new-42d85e57-174d-48e7-84a5-b10762d99baa';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c3cfb0a3-40c3-4235-a0eb-9ca73ba55c09';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search'] = $page;

  return $pages;

}
