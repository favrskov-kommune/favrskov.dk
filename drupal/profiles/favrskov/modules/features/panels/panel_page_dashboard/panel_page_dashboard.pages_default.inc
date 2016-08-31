<?php
/**
 * @file
 * panel_page_dashboard.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function panel_page_dashboard_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard';
  $page->task = 'page';
  $page->admin_title = 'Total Control administrative dashboard';
  $page->admin_description = '';
  $page->path = 'admin/dashboard';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'have total control',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Dashboard',
    'name' => 'management',
    'weight' => '-100',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Dashboard',
      'name' => 'management',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => TRUE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dashboard_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Admin Dashboard',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Dashboard';
  $display->uuid = 'f91018c1-54b4-42c2-acbd-e8df054fcb3c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-39ea77d2-ddff-4815-9ed7-e184f3fce550';
    $pane->panel = 'left';
    $pane->type = 'create';
    $pane->subtype = 'create';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(
        'article' => 'article',
        'bannerlink' => 'bannerlink',
        'banner_element' => 'banner_element',
        'factbox' => 'factbox',
        'faq' => 'faq',
        'frontpage' => 'frontpage',
        'news' => 'news',
        'phone_book' => 'phone_book',
        'self_service' => 'self_service',
        'slider_element' => 'slider_element',
        'subjectpage' => 'subjectpage',
        'webform' => 'webform',
        'borger_dk_article' => 'borger_dk_article',
        'job' => 0,
        'volunteer_jobs' => 0,
        'shared' => 0,
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '39ea77d2-ddff-4815-9ed7-e184f3fce550';
    $display->content['new-39ea77d2-ddff-4815-9ed7-e184f3fce550'] = $pane;
    $display->panels['left'][0] = 'new-39ea77d2-ddff-4815-9ed7-e184f3fce550';
    $pane = new stdClass();
    $pane->pid = 'new-5624c0e3-d7ec-4ce1-8974-630f61bcfcfe';
    $pane->panel = 'left';
    $pane->type = 'overview_content';
    $pane->subtype = 'overview_content';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 6,
              1 => 4,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'types' => array(
        'article' => 'article',
        'page' => 'page',
        'project' => 'project',
        'video' => 'video',
      ),
      'comments' => array(
        'article' => 'article',
        'page' => 0,
        'project' => 0,
        'video' => 0,
      ),
      'spam' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '5624c0e3-d7ec-4ce1-8974-630f61bcfcfe';
    $display->content['new-5624c0e3-d7ec-4ce1-8974-630f61bcfcfe'] = $pane;
    $display->panels['left'][1] = 'new-5624c0e3-d7ec-4ce1-8974-630f61bcfcfe';
    $pane = new stdClass();
    $pane->pid = 'new-19f65296-6093-440f-a7be-09f2e3653572';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'control_users_panes-pane_tc_new_users';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 6,
              1 => 4,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'items_per_page' => '10',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '19f65296-6093-440f-a7be-09f2e3653572';
    $display->content['new-19f65296-6093-440f-a7be-09f2e3653572'] = $pane;
    $display->panels['left'][2] = 'new-19f65296-6093-440f-a7be-09f2e3653572';
    $pane = new stdClass();
    $pane->pid = 'new-edb14c98-945a-472f-a4c6-61245e2ce311';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'control_content_panes-pane_tc_new';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '5',
      'override_title' => 0,
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
    $pane->uuid = 'edb14c98-945a-472f-a4c6-61245e2ce311';
    $display->content['new-edb14c98-945a-472f-a4c6-61245e2ce311'] = $pane;
    $display->panels['left'][3] = 'new-edb14c98-945a-472f-a4c6-61245e2ce311';
    $pane = new stdClass();
    $pane->pid = 'new-3f91af62-6b74-4d00-b5df-817256955f3e';
    $pane->panel = 'right';
    $pane->type = 'menus';
    $pane->subtype = 'menus';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 6,
              1 => 4,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'item1' => NULL,
      'item2' => NULL,
      'override_title' => 0,
      'override_title_text' => '',
      'menus' => array(
        'main-menu' => 'main-menu',
        'navigation' => 'navigation',
        'devel' => 0,
        'management' => 0,
        'user-menu' => 0,
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '3f91af62-6b74-4d00-b5df-817256955f3e';
    $display->content['new-3f91af62-6b74-4d00-b5df-817256955f3e'] = $pane;
    $display->panels['right'][0] = 'new-3f91af62-6b74-4d00-b5df-817256955f3e';
    $pane = new stdClass();
    $pane->pid = 'new-dcbbed98-27fc-43cb-a6e8-e2c9752e6a47';
    $pane->panel = 'right';
    $pane->type = 'node_types';
    $pane->subtype = 'node_types';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 6,
              1 => 4,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'types' => array(
        'article' => 'article',
        'page' => 'page',
        'project' => 'project',
        'video' => 'video',
      ),
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
    $pane->locks = '';
    $pane->uuid = 'dcbbed98-27fc-43cb-a6e8-e2c9752e6a47';
    $display->content['new-dcbbed98-27fc-43cb-a6e8-e2c9752e6a47'] = $pane;
    $display->panels['right'][1] = 'new-dcbbed98-27fc-43cb-a6e8-e2c9752e6a47';
    $pane = new stdClass();
    $pane->pid = 'new-279abadb-e87f-4aab-bf0c-ed2097fc87a8';
    $pane->panel = 'right';
    $pane->type = 'taxonomy';
    $pane->subtype = 'taxonomy';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 6,
              1 => 4,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'vids' => array(
        0 => '2',
        1 => '1',
      ),
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
    $pane->locks = '';
    $pane->uuid = '279abadb-e87f-4aab-bf0c-ed2097fc87a8';
    $display->content['new-279abadb-e87f-4aab-bf0c-ed2097fc87a8'] = $pane;
    $display->panels['right'][2] = 'new-279abadb-e87f-4aab-bf0c-ed2097fc87a8';
    $pane = new stdClass();
    $pane->pid = 'new-8acd244f-21c5-42cd-ad9b-e6f717715b4d';
    $pane->panel = 'right';
    $pane->type = 'panel_pages';
    $pane->subtype = 'panel_pages';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 6,
              1 => 4,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'item1' => NULL,
      'item2' => NULL,
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
    $pane->locks = '';
    $pane->uuid = '8acd244f-21c5-42cd-ad9b-e6f717715b4d';
    $display->content['new-8acd244f-21c5-42cd-ad9b-e6f717715b4d'] = $pane;
    $display->panels['right'][3] = 'new-8acd244f-21c5-42cd-ad9b-e6f717715b4d';
    $pane = new stdClass();
    $pane->pid = 'new-64e9cdc9-8fbe-4ac9-a173-6f4f63fdb572';
    $pane->panel = 'top';
    $pane->type = 'welcome';
    $pane->subtype = 'welcome';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 6,
              1 => 4,
            ),
          ),
          'context' => 'logged-in-user',
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
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '64e9cdc9-8fbe-4ac9-a173-6f4f63fdb572';
    $display->content['new-64e9cdc9-8fbe-4ac9-a173-6f4f63fdb572'] = $pane;
    $display->panels['top'][0] = 'new-64e9cdc9-8fbe-4ac9-a173-6f4f63fdb572';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard'] = $page;

  return $pages;

}
