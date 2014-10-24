<?php
/**
 * @file
 * panels_phonebook.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function panels_phonebook_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'phonebook_employee_listing';
  $page->task = 'page';
  $page->admin_title = 'Medarbejdere';
  $page->admin_description = '';
  $page->path = 'telefonbog/medarbejdere';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'telefonbog/medarbejdere',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_phonebook_employee_listing_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'phonebook_employee_listing';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'job-listing',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'robots' => array(
          'value' => array(
            'noindex' => 'noindex',
            'index' => 0,
            'follow' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
          ),
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'tablelist';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'blogs-list' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
      'top-full-section' => NULL,
      'table-list' => NULL,
      'middle-full-section' => NULL,
      'bottom-full-section' => NULL,
    ),
    'header' => array(
      'style' => 'naked',
    ),
    'top-full-section' => array(
      'style' => 'naked',
    ),
    'table-list' => array(
      'style' => 'naked',
    ),
    'middle-full-section' => array(
      'style' => 'naked',
    ),
    'bottom-full-section' => array(
      'style' => 'naked',
    ),
    'footer' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Medarbejdere';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
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
    $display->content['new-1'] = $pane;
    $display->panels['footer'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
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
    $display->content['new-2'] = $pane;
    $display->panels['header'][0] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'middle-full-section';
    $pane->type = 'views_panes';
    $pane->subtype = 'banners-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'offset' => '0',
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
    $display->content['new-3'] = $pane;
    $display->panels['middle-full-section'][0] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'table-list';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['table-list'][0] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'table-list';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-phonebook-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
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
    $display->content['new-5'] = $pane;
    $display->panels['table-list'][1] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'table-list';
    $pane->type = 'views_panes';
    $pane->subtype = 'phonebook-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '25',
      'offset' => '0',
      'override_title' => 1,
      'override_title_text' => '',
      'exposed' => array(
        'field_phone_book_department_tid' => 'All',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['table-list'][2] = 'new-6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['phonebook_employee_listing'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'phonebook_type_child_houses';
  $page->task = 'page';
  $page->admin_title = 'Børnehuse';
  $page->admin_description = '';
  $page->path = 'telefonbog/lister/boernehuse';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'telefonbog/lister/boernehuse',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_phonebook_type_child_houses_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'phonebook_type_child_houses';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'job-listing',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'robots' => array(
          'value' => array(
            'noindex' => 'noindex',
            'index' => 0,
            'follow' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
          ),
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'tablelist';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'blogs-list' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
      'top-full-section' => NULL,
      'table-list' => NULL,
      'middle-full-section' => NULL,
      'bottom-full-section' => NULL,
    ),
    'header' => array(
      'style' => 'naked',
    ),
    'top-full-section' => array(
      'style' => 'naked',
    ),
    'table-list' => array(
      'style' => 'naked',
    ),
    'middle-full-section' => array(
      'style' => 'naked',
    ),
    'bottom-full-section' => array(
      'style' => 'naked',
    ),
    'footer' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Børnehuse';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7';
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
    $display->content['new-7'] = $pane;
    $display->panels['footer'][0] = 'new-7';
    $pane = new stdClass();
    $pane->pid = 'new-8';
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
    $display->content['new-8'] = $pane;
    $display->panels['header'][0] = 'new-8';
    $pane = new stdClass();
    $pane->pid = 'new-9';
    $pane->panel = 'middle-full-section';
    $pane->type = 'views_panes';
    $pane->subtype = 'banners-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'offset' => '0',
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
    $display->content['new-9'] = $pane;
    $display->panels['middle-full-section'][0] = 'new-9';
    $pane = new stdClass();
    $pane->pid = 'new-10';
    $pane->panel = 'table-list';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-10'] = $pane;
    $display->panels['table-list'][0] = 'new-10';
    $pane = new stdClass();
    $pane->pid = 'new-11';
    $pane->panel = 'table-list';
    $pane->type = 'views_panes';
    $pane->subtype = 'phonebook-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '150',
      'offset' => '0',
      'override_title' => 1,
      'override_title_text' => '',
      'arguments' => array(
        'field_phone_book_type_tid' => '1708',
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
    $display->content['new-11'] = $pane;
    $display->panels['table-list'][1] = 'new-11';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['phonebook_type_child_houses'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'phonebook_type_clubs';
  $page->task = 'page';
  $page->admin_title = 'Klubber';
  $page->admin_description = '';
  $page->path = 'telefonbog/lister/klubber';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'telefonbog/lister/klubber',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_phonebook_type_clubs_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'phonebook_type_clubs';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'job-listing',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'robots' => array(
          'value' => array(
            'noindex' => 'noindex',
            'index' => 0,
            'follow' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
          ),
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'tablelist';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'blogs-list' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
      'top-full-section' => NULL,
      'table-list' => NULL,
      'middle-full-section' => NULL,
      'bottom-full-section' => NULL,
    ),
    'header' => array(
      'style' => 'naked',
    ),
    'top-full-section' => array(
      'style' => 'naked',
    ),
    'table-list' => array(
      'style' => 'naked',
    ),
    'middle-full-section' => array(
      'style' => 'naked',
    ),
    'bottom-full-section' => array(
      'style' => 'naked',
    ),
    'footer' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Klubber';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-12';
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
    $display->content['new-12'] = $pane;
    $display->panels['footer'][0] = 'new-12';
    $pane = new stdClass();
    $pane->pid = 'new-13';
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
    $display->content['new-13'] = $pane;
    $display->panels['header'][0] = 'new-13';
    $pane = new stdClass();
    $pane->pid = 'new-14';
    $pane->panel = 'middle-full-section';
    $pane->type = 'views_panes';
    $pane->subtype = 'banners-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'offset' => '0',
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
    $display->content['new-14'] = $pane;
    $display->panels['middle-full-section'][0] = 'new-14';
    $pane = new stdClass();
    $pane->pid = 'new-15';
    $pane->panel = 'table-list';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-15'] = $pane;
    $display->panels['table-list'][0] = 'new-15';
    $pane = new stdClass();
    $pane->pid = 'new-16';
    $pane->panel = 'table-list';
    $pane->type = 'views_panes';
    $pane->subtype = 'phonebook-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '150',
      'offset' => '0',
      'override_title' => 1,
      'override_title_text' => '',
      'arguments' => array(
        'field_phone_book_type_tid' => '1716',
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
    $display->content['new-16'] = $pane;
    $display->panels['table-list'][1] = 'new-16';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['phonebook_type_clubs'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'phonebook_type_day_care';
  $page->task = 'page';
  $page->admin_title = 'Børnehaver';
  $page->admin_description = '';
  $page->path = 'telefonbog/lister/boernehaver';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'telefonbog/lister/boernehaver',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_phonebook_type_day_care_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'phonebook_type_day_care';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'job-listing',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'robots' => array(
          'value' => array(
            'noindex' => 'noindex',
            'index' => 0,
            'follow' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
          ),
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'tablelist';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'blogs-list' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
      'top-full-section' => NULL,
      'table-list' => NULL,
      'middle-full-section' => NULL,
      'bottom-full-section' => NULL,
    ),
    'header' => array(
      'style' => 'naked',
    ),
    'top-full-section' => array(
      'style' => 'naked',
    ),
    'table-list' => array(
      'style' => 'naked',
    ),
    'middle-full-section' => array(
      'style' => 'naked',
    ),
    'bottom-full-section' => array(
      'style' => 'naked',
    ),
    'footer' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Børnehaver';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-17';
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
    $display->content['new-17'] = $pane;
    $display->panels['footer'][0] = 'new-17';
    $pane = new stdClass();
    $pane->pid = 'new-18';
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
    $display->content['new-18'] = $pane;
    $display->panels['header'][0] = 'new-18';
    $pane = new stdClass();
    $pane->pid = 'new-19';
    $pane->panel = 'middle-full-section';
    $pane->type = 'views_panes';
    $pane->subtype = 'banners-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'offset' => '0',
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
    $display->content['new-19'] = $pane;
    $display->panels['middle-full-section'][0] = 'new-19';
    $pane = new stdClass();
    $pane->pid = 'new-20';
    $pane->panel = 'table-list';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-20'] = $pane;
    $display->panels['table-list'][0] = 'new-20';
    $pane = new stdClass();
    $pane->pid = 'new-21';
    $pane->panel = 'table-list';
    $pane->type = 'views_panes';
    $pane->subtype = 'phonebook-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '150',
      'offset' => '0',
      'override_title' => 1,
      'override_title_text' => '',
      'arguments' => array(
        'field_phone_book_type_tid' => '1707',
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
    $display->content['new-21'] = $pane;
    $display->panels['table-list'][1] = 'new-21';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['phonebook_type_day_care'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'phonebook_type_dental_clinics';
  $page->task = 'page';
  $page->admin_title = 'Tandklinikker';
  $page->admin_description = '';
  $page->path = 'telefonbog/lister/tandklinikker';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'telefonbog/lister/tandklinikker',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_phonebook_type_dental_clinics_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'phonebook_type_dental_clinics';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'job-listing',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'robots' => array(
          'value' => array(
            'noindex' => 'noindex',
            'index' => 0,
            'follow' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
          ),
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'tablelist';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'blogs-list' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
      'top-full-section' => NULL,
      'table-list' => NULL,
      'middle-full-section' => NULL,
      'bottom-full-section' => NULL,
    ),
    'header' => array(
      'style' => 'naked',
    ),
    'top-full-section' => array(
      'style' => 'naked',
    ),
    'table-list' => array(
      'style' => 'naked',
    ),
    'middle-full-section' => array(
      'style' => 'naked',
    ),
    'bottom-full-section' => array(
      'style' => 'naked',
    ),
    'footer' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Tandklinikker';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-22';
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
    $display->content['new-22'] = $pane;
    $display->panels['footer'][0] = 'new-22';
    $pane = new stdClass();
    $pane->pid = 'new-23';
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
    $display->content['new-23'] = $pane;
    $display->panels['header'][0] = 'new-23';
    $pane = new stdClass();
    $pane->pid = 'new-24';
    $pane->panel = 'middle-full-section';
    $pane->type = 'views_panes';
    $pane->subtype = 'banners-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'offset' => '0',
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
    $display->content['new-24'] = $pane;
    $display->panels['middle-full-section'][0] = 'new-24';
    $pane = new stdClass();
    $pane->pid = 'new-25';
    $pane->panel = 'table-list';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-25'] = $pane;
    $display->panels['table-list'][0] = 'new-25';
    $pane = new stdClass();
    $pane->pid = 'new-26';
    $pane->panel = 'table-list';
    $pane->type = 'views_panes';
    $pane->subtype = 'phonebook-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '150',
      'offset' => '0',
      'override_title' => 1,
      'override_title_text' => '',
      'arguments' => array(
        'field_phone_book_type_tid' => '1722',
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
    $display->content['new-26'] = $pane;
    $display->panels['table-list'][1] = 'new-26';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['phonebook_type_dental_clinics'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'phonebook_type_mentally_disabled';
  $page->task = 'page';
  $page->admin_title = 'Udviklingshæmmede';
  $page->admin_description = '';
  $page->path = 'telefonbog/lister/udviklingshaemmede';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'telefonbog/lister/udviklingshaemmede',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_phonebook_type_mentally_disabled_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'phonebook_type_mentally_disabled';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'job-listing',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'robots' => array(
          'value' => array(
            'noindex' => 'noindex',
            'index' => 0,
            'follow' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
          ),
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'tablelist';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'blogs-list' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
      'top-full-section' => NULL,
      'table-list' => NULL,
      'middle-full-section' => NULL,
      'bottom-full-section' => NULL,
    ),
    'header' => array(
      'style' => 'naked',
    ),
    'top-full-section' => array(
      'style' => 'naked',
    ),
    'table-list' => array(
      'style' => 'naked',
    ),
    'middle-full-section' => array(
      'style' => 'naked',
    ),
    'bottom-full-section' => array(
      'style' => 'naked',
    ),
    'footer' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Udviklingshæmmede';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-27';
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
    $display->content['new-27'] = $pane;
    $display->panels['footer'][0] = 'new-27';
    $pane = new stdClass();
    $pane->pid = 'new-28';
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
    $display->content['new-28'] = $pane;
    $display->panels['header'][0] = 'new-28';
    $pane = new stdClass();
    $pane->pid = 'new-29';
    $pane->panel = 'middle-full-section';
    $pane->type = 'views_panes';
    $pane->subtype = 'banners-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'offset' => '0',
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
    $display->content['new-29'] = $pane;
    $display->panels['middle-full-section'][0] = 'new-29';
    $pane = new stdClass();
    $pane->pid = 'new-30';
    $pane->panel = 'table-list';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-30'] = $pane;
    $display->panels['table-list'][0] = 'new-30';
    $pane = new stdClass();
    $pane->pid = 'new-31';
    $pane->panel = 'table-list';
    $pane->type = 'views_panes';
    $pane->subtype = 'phonebook-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '150',
      'offset' => '0',
      'override_title' => 1,
      'override_title_text' => '',
      'arguments' => array(
        'field_phone_book_type_tid' => '1709',
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
    $display->content['new-31'] = $pane;
    $display->panels['table-list'][1] = 'new-31';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['phonebook_type_mentally_disabled'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'phonebook_type_nursery';
  $page->task = 'page';
  $page->admin_title = 'Vuggestuer';
  $page->admin_description = '';
  $page->path = 'telefonbog/lister/vuggestuer';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'telefonbog/lister/vuggestuer',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_phonebook_type_nursery_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'phonebook_type_nursery';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'job-listing',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'robots' => array(
          'value' => array(
            'noindex' => 'noindex',
            'index' => 0,
            'follow' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
          ),
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'tablelist';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'blogs-list' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
      'top-full-section' => NULL,
      'table-list' => NULL,
      'middle-full-section' => NULL,
      'bottom-full-section' => NULL,
    ),
    'header' => array(
      'style' => 'naked',
    ),
    'top-full-section' => array(
      'style' => 'naked',
    ),
    'table-list' => array(
      'style' => 'naked',
    ),
    'middle-full-section' => array(
      'style' => 'naked',
    ),
    'bottom-full-section' => array(
      'style' => 'naked',
    ),
    'footer' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Vuggestuer';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-32';
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
    $display->content['new-32'] = $pane;
    $display->panels['footer'][0] = 'new-32';
    $pane = new stdClass();
    $pane->pid = 'new-33';
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
    $display->content['new-33'] = $pane;
    $display->panels['header'][0] = 'new-33';
    $pane = new stdClass();
    $pane->pid = 'new-34';
    $pane->panel = 'middle-full-section';
    $pane->type = 'views_panes';
    $pane->subtype = 'banners-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'offset' => '0',
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
    $display->content['new-34'] = $pane;
    $display->panels['middle-full-section'][0] = 'new-34';
    $pane = new stdClass();
    $pane->pid = 'new-35';
    $pane->panel = 'table-list';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-35'] = $pane;
    $display->panels['table-list'][0] = 'new-35';
    $pane = new stdClass();
    $pane->pid = 'new-36';
    $pane->panel = 'table-list';
    $pane->type = 'views_panes';
    $pane->subtype = 'phonebook-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '150',
      'offset' => '0',
      'override_title' => 1,
      'override_title_text' => '',
      'arguments' => array(
        'field_phone_book_type_tid' => '1710',
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
    $display->content['new-36'] = $pane;
    $display->panels['table-list'][1] = 'new-36';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['phonebook_type_nursery'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'phonebook_type_nursing_homes';
  $page->task = 'page';
  $page->admin_title = 'Plejehjem';
  $page->admin_description = '';
  $page->path = 'telefonbog/lister/plejehjem';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'telefonbog/lister/plejehjem',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_phonebook_type_nursing_homes_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'phonebook_type_nursing_homes';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'job-listing',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'robots' => array(
          'value' => array(
            'noindex' => 'noindex',
            'index' => 0,
            'follow' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
          ),
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'tablelist';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'blogs-list' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
      'top-full-section' => NULL,
      'table-list' => NULL,
      'middle-full-section' => NULL,
      'bottom-full-section' => NULL,
    ),
    'header' => array(
      'style' => 'naked',
    ),
    'top-full-section' => array(
      'style' => 'naked',
    ),
    'table-list' => array(
      'style' => 'naked',
    ),
    'middle-full-section' => array(
      'style' => 'naked',
    ),
    'bottom-full-section' => array(
      'style' => 'naked',
    ),
    'footer' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Plejehjem';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-37';
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
    $display->content['new-37'] = $pane;
    $display->panels['footer'][0] = 'new-37';
    $pane = new stdClass();
    $pane->pid = 'new-38';
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
    $display->content['new-38'] = $pane;
    $display->panels['header'][0] = 'new-38';
    $pane = new stdClass();
    $pane->pid = 'new-39';
    $pane->panel = 'middle-full-section';
    $pane->type = 'views_panes';
    $pane->subtype = 'banners-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'offset' => '0',
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
    $display->content['new-39'] = $pane;
    $display->panels['middle-full-section'][0] = 'new-39';
    $pane = new stdClass();
    $pane->pid = 'new-40';
    $pane->panel = 'table-list';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-40'] = $pane;
    $display->panels['table-list'][0] = 'new-40';
    $pane = new stdClass();
    $pane->pid = 'new-41';
    $pane->panel = 'table-list';
    $pane->type = 'views_panes';
    $pane->subtype = 'phonebook-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '150',
      'offset' => '0',
      'override_title' => 1,
      'override_title_text' => '',
      'arguments' => array(
        'field_phone_book_type_tid' => '1720',
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
    $display->content['new-41'] = $pane;
    $display->panels['table-list'][1] = 'new-41';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['phonebook_type_nursing_homes'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'phonebook_type_schools';
  $page->task = 'page';
  $page->admin_title = 'Skoler';
  $page->admin_description = '';
  $page->path = 'telefonbog/lister/skoler';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'telefonbog/lister/skoler',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_phonebook_type_schools_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'phonebook_type_schools';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'job-listing',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'robots' => array(
          'value' => array(
            'noindex' => 'noindex',
            'index' => 0,
            'follow' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
          ),
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'tablelist';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'blogs-list' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
      'top-full-section' => NULL,
      'table-list' => NULL,
      'middle-full-section' => NULL,
      'bottom-full-section' => NULL,
    ),
    'header' => array(
      'style' => 'naked',
    ),
    'top-full-section' => array(
      'style' => 'naked',
    ),
    'table-list' => array(
      'style' => 'naked',
    ),
    'middle-full-section' => array(
      'style' => 'naked',
    ),
    'bottom-full-section' => array(
      'style' => 'naked',
    ),
    'footer' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Skoler';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-42';
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
    $display->content['new-42'] = $pane;
    $display->panels['footer'][0] = 'new-42';
    $pane = new stdClass();
    $pane->pid = 'new-43';
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
    $display->content['new-43'] = $pane;
    $display->panels['header'][0] = 'new-43';
    $pane = new stdClass();
    $pane->pid = 'new-44';
    $pane->panel = 'middle-full-section';
    $pane->type = 'views_panes';
    $pane->subtype = 'banners-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'offset' => '0',
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
    $display->content['new-44'] = $pane;
    $display->panels['middle-full-section'][0] = 'new-44';
    $pane = new stdClass();
    $pane->pid = 'new-45';
    $pane->panel = 'table-list';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-45'] = $pane;
    $display->panels['table-list'][0] = 'new-45';
    $pane = new stdClass();
    $pane->pid = 'new-46';
    $pane->panel = 'table-list';
    $pane->type = 'views_panes';
    $pane->subtype = 'phonebook-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '150',
      'offset' => '0',
      'override_title' => 1,
      'override_title_text' => '',
      'arguments' => array(
        'field_phone_book_type_tid' => '1692',
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
    $display->content['new-46'] = $pane;
    $display->panels['table-list'][1] = 'new-46';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['phonebook_type_schools'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'phonebook_type_sfo';
  $page->task = 'page';
  $page->admin_title = 'SFO’er og fritidshjem';
  $page->admin_description = '';
  $page->path = 'telefonbog/lister/sfo';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'telefonbog/lister/sfo',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_phonebook_type_sfo_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'phonebook_type_sfo';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'job-listing',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'robots' => array(
          'value' => array(
            'noindex' => 'noindex',
            'index' => 0,
            'follow' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
          ),
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'tablelist';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'blogs-list' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
      'top-full-section' => NULL,
      'table-list' => NULL,
      'middle-full-section' => NULL,
      'bottom-full-section' => NULL,
    ),
    'header' => array(
      'style' => 'naked',
    ),
    'top-full-section' => array(
      'style' => 'naked',
    ),
    'table-list' => array(
      'style' => 'naked',
    ),
    'middle-full-section' => array(
      'style' => 'naked',
    ),
    'bottom-full-section' => array(
      'style' => 'naked',
    ),
    'footer' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'SFO’er og fritidshjem';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-47';
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
    $display->content['new-47'] = $pane;
    $display->panels['footer'][0] = 'new-47';
    $pane = new stdClass();
    $pane->pid = 'new-48';
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
    $display->content['new-48'] = $pane;
    $display->panels['header'][0] = 'new-48';
    $pane = new stdClass();
    $pane->pid = 'new-49';
    $pane->panel = 'middle-full-section';
    $pane->type = 'views_panes';
    $pane->subtype = 'banners-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'offset' => '0',
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
    $display->content['new-49'] = $pane;
    $display->panels['middle-full-section'][0] = 'new-49';
    $pane = new stdClass();
    $pane->pid = 'new-50';
    $pane->panel = 'table-list';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-50'] = $pane;
    $display->panels['table-list'][0] = 'new-50';
    $pane = new stdClass();
    $pane->pid = 'new-51';
    $pane->panel = 'table-list';
    $pane->type = 'views_panes';
    $pane->subtype = 'phonebook-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '150',
      'offset' => '0',
      'override_title' => 1,
      'override_title_text' => '',
      'arguments' => array(
        'field_phone_book_type_tid' => '1712',
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
    $display->content['new-51'] = $pane;
    $display->panels['table-list'][1] = 'new-51';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['phonebook_type_sfo'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'phonebook_type_special_institutions';
  $page->task = 'page';
  $page->admin_title = 'Specialinstitutioner';
  $page->admin_description = '';
  $page->path = 'telefonbog/lister/specialinstitutioner';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'telefonbog/lister/specialinstitutioner',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_phonebook_type_special_institutions_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'phonebook_type_special_institutions';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'job-listing',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'robots' => array(
          'value' => array(
            'noindex' => 'noindex',
            'index' => 0,
            'follow' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
          ),
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'tablelist';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'blogs-list' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
      'top-full-section' => NULL,
      'table-list' => NULL,
      'middle-full-section' => NULL,
      'bottom-full-section' => NULL,
    ),
    'header' => array(
      'style' => 'naked',
    ),
    'top-full-section' => array(
      'style' => 'naked',
    ),
    'table-list' => array(
      'style' => 'naked',
    ),
    'middle-full-section' => array(
      'style' => 'naked',
    ),
    'bottom-full-section' => array(
      'style' => 'naked',
    ),
    'footer' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Udviklingshæmmede';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-52';
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
    $display->content['new-52'] = $pane;
    $display->panels['footer'][0] = 'new-52';
    $pane = new stdClass();
    $pane->pid = 'new-53';
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
    $display->content['new-53'] = $pane;
    $display->panels['header'][0] = 'new-53';
    $pane = new stdClass();
    $pane->pid = 'new-54';
    $pane->panel = 'middle-full-section';
    $pane->type = 'views_panes';
    $pane->subtype = 'banners-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'offset' => '0',
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
    $display->content['new-54'] = $pane;
    $display->panels['middle-full-section'][0] = 'new-54';
    $pane = new stdClass();
    $pane->pid = 'new-55';
    $pane->panel = 'table-list';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-55'] = $pane;
    $display->panels['table-list'][0] = 'new-55';
    $pane = new stdClass();
    $pane->pid = 'new-56';
    $pane->panel = 'table-list';
    $pane->type = 'views_panes';
    $pane->subtype = 'phonebook-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '150',
      'offset' => '0',
      'override_title' => 1,
      'override_title_text' => '',
      'arguments' => array(
        'field_phone_book_type_tid' => '1721',
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
    $display->content['new-56'] = $pane;
    $display->panels['table-list'][1] = 'new-56';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['phonebook_type_special_institutions'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'phonebook_type_swimming_pools';
  $page->task = 'page';
  $page->admin_title = 'Svømmehaller';
  $page->admin_description = '';
  $page->path = 'telefonbog/lister/svoemmehaller';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'telefonbog/lister/svoemmehaller',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_phonebook_type_swimming_pools_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'phonebook_type_swimming_pools';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'job-listing',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'robots' => array(
          'value' => array(
            'noindex' => 'noindex',
            'index' => 0,
            'follow' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
          ),
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'tablelist';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'blogs-list' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
      'top-full-section' => NULL,
      'table-list' => NULL,
      'middle-full-section' => NULL,
      'bottom-full-section' => NULL,
    ),
    'header' => array(
      'style' => 'naked',
    ),
    'top-full-section' => array(
      'style' => 'naked',
    ),
    'table-list' => array(
      'style' => 'naked',
    ),
    'middle-full-section' => array(
      'style' => 'naked',
    ),
    'bottom-full-section' => array(
      'style' => 'naked',
    ),
    'footer' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Svømmehaller';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-57';
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
    $display->content['new-57'] = $pane;
    $display->panels['footer'][0] = 'new-57';
    $pane = new stdClass();
    $pane->pid = 'new-58';
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
    $display->content['new-58'] = $pane;
    $display->panels['header'][0] = 'new-58';
    $pane = new stdClass();
    $pane->pid = 'new-59';
    $pane->panel = 'middle-full-section';
    $pane->type = 'views_panes';
    $pane->subtype = 'banners-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'offset' => '0',
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
    $display->content['new-59'] = $pane;
    $display->panels['middle-full-section'][0] = 'new-59';
    $pane = new stdClass();
    $pane->pid = 'new-60';
    $pane->panel = 'table-list';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-60'] = $pane;
    $display->panels['table-list'][0] = 'new-60';
    $pane = new stdClass();
    $pane->pid = 'new-61';
    $pane->panel = 'table-list';
    $pane->type = 'views_panes';
    $pane->subtype = 'phonebook-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '150',
      'offset' => '0',
      'override_title' => 1,
      'override_title_text' => '',
      'arguments' => array(
        'field_phone_book_type_tid' => '1719',
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
    $display->content['new-61'] = $pane;
    $display->panels['table-list'][1] = 'new-61';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['phonebook_type_swimming_pools'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'phoneboon_employee_listing';
  $page->task = 'page';
  $page->admin_title = 'Medarbejdere';
  $page->admin_description = '';
  $page->path = 'telefonbog/medarbejdere';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_phoneboon_employee_listing_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'phoneboon_employee_listing';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'job-listing',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'robots' => array(
          'value' => array(
            'noindex' => 'noindex',
            'index' => 0,
            'follow' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
          ),
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'tablelist';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'blogs-list' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
      'top-full-section' => NULL,
      'table-list' => NULL,
      'middle-full-section' => NULL,
      'bottom-full-section' => NULL,
    ),
    'header' => array(
      'style' => 'naked',
    ),
    'top-full-section' => array(
      'style' => 'naked',
    ),
    'table-list' => array(
      'style' => 'naked',
    ),
    'middle-full-section' => array(
      'style' => 'naked',
    ),
    'bottom-full-section' => array(
      'style' => 'naked',
    ),
    'footer' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Medarbejdere';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-62';
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
    $display->content['new-62'] = $pane;
    $display->panels['footer'][0] = 'new-62';
    $pane = new stdClass();
    $pane->pid = 'new-63';
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
    $display->content['new-63'] = $pane;
    $display->panels['header'][0] = 'new-63';
    $pane = new stdClass();
    $pane->pid = 'new-64';
    $pane->panel = 'middle-full-section';
    $pane->type = 'views_panes';
    $pane->subtype = 'banners-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'offset' => '0',
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
    $display->content['new-64'] = $pane;
    $display->panels['middle-full-section'][0] = 'new-64';
    $pane = new stdClass();
    $pane->pid = 'new-65';
    $pane->panel = 'table-list';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-65'] = $pane;
    $display->panels['table-list'][0] = 'new-65';
    $pane = new stdClass();
    $pane->pid = 'new-66';
    $pane->panel = 'table-list';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-phonebook-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
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
    $display->content['new-66'] = $pane;
    $display->panels['table-list'][1] = 'new-66';
    $pane = new stdClass();
    $pane->pid = 'new-67';
    $pane->panel = 'table-list';
    $pane->type = 'views_panes';
    $pane->subtype = 'phonebook-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '25',
      'offset' => '0',
      'override_title' => 1,
      'override_title_text' => '',
      'exposed' => array(
        'field_phone_book_department_tid' => 'All',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-67'] = $pane;
    $display->panels['table-list'][2] = 'new-67';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['phoneboon_employee_listing'] = $page;

  return $pages;

}
