<?php
/**
 * @file
 * panel_article_below_body_mini_panel.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function panel_article_below_body_mini_panel_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'article_below_body_mini_panel';
  $mini->category = '';
  $mini->admin_title = 'Article below body mini panel';
  $mini->admin_description = 'Used to insert lists and other panes after the node body field.';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-baebef943fc654fccd6e0b9b7012c660';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/206',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'job-listing',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'hr_manager_job_custom_panes-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/206',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '25',
      'offset' => '0',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'job-listing',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['middle'][1] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-b5b8804054cc3812d633bac03d9390dc';
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
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['middle'][2] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'hearings-hearings_list_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['middle'][3] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_meetings_light-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/1947',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '20',
      'offset' => '0',
      'arguments' => array(
        'field_os2web_meetings_committee_tid' => '819+1764+1765',
      ),
      'override_title' => 1,
      'override_title_text' => 'Dagsordener og referater fra udvalget',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'job-listing meeting-list',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['middle'][4] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_meetings_light-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/3897',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '20',
      'offset' => '0',
      'arguments' => array(
        'field_os2web_meetings_committee_tid' => '1640',
      ),
      'override_title' => 1,
      'override_title_text' => 'Dagsordener og referater fra udvalget',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'job-listing meeting-list',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['middle'][5] = 'new-6';
    $pane = new stdClass();
    $pane->pid = 'new-7';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_meetings_light-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/1956',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '20',
      'offset' => '0',
      'arguments' => array(
        'field_os2web_meetings_committee_tid' => '823+1758+1759',
      ),
      'override_title' => 1,
      'override_title_text' => 'Dagsordener og referater fra udvalget',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'job-listing meeting-list',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $display->content['new-7'] = $pane;
    $display->panels['middle'][6] = 'new-7';
    $pane = new stdClass();
    $pane->pid = 'new-8';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_meetings_light-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/1948',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '20',
      'offset' => '0',
      'arguments' => array(
        'field_os2web_meetings_committee_tid' => '1645+1756+1757',
      ),
      'override_title' => 1,
      'override_title_text' => 'Dagsordener og referater fra udvalget',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'job-listing meeting-list',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $display->content['new-8'] = $pane;
    $display->panels['middle'][7] = 'new-8';
    $pane = new stdClass();
    $pane->pid = 'new-9';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_meetings_light-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/3883',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '20',
      'offset' => '0',
      'arguments' => array(
        'field_os2web_meetings_committee_tid' => '1653',
      ),
      'override_title' => 1,
      'override_title_text' => 'Dagsordener og referater fra udvalget',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'job-listing meeting-list',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $display->content['new-9'] = $pane;
    $display->panels['middle'][8] = 'new-9';
    $pane = new stdClass();
    $pane->pid = 'new-10';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_meetings_light-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/1946',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '20',
      'offset' => '0',
      'arguments' => array(
        'field_os2web_meetings_committee_tid' => '1643+1660+1751',
      ),
      'override_title' => 1,
      'override_title_text' => 'Dagsordener og referater fra udvalget',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'job-listing meeting-list',
    );
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $display->content['new-10'] = $pane;
    $display->panels['middle'][9] = 'new-10';
    $pane = new stdClass();
    $pane->pid = 'new-11';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_meetings_light-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/3877',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '20',
      'offset' => '0',
      'arguments' => array(
        'field_os2web_meetings_committee_tid' => '1654+1644+1762+2369',
      ),
      'override_title' => 1,
      'override_title_text' => 'Dagsordener og referater fra udvalget',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'job-listing meeting-list',
    );
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $display->content['new-11'] = $pane;
    $display->panels['middle'][10] = 'new-11';
    $pane = new stdClass();
    $pane->pid = 'new-12';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_meetings_light-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/3878',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '20',
      'offset' => '0',
      'arguments' => array(
        'field_os2web_meetings_committee_tid' => '1655+1644+1762+2367',
      ),
      'override_title' => 1,
      'override_title_text' => 'Dagsordener og referater fra udvalget',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'job-listing meeting-list',
    );
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $display->content['new-12'] = $pane;
    $display->panels['middle'][11] = 'new-12';
    $pane = new stdClass();
    $pane->pid = 'new-13';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_meetings_light-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/3879',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '20',
      'offset' => '0',
      'arguments' => array(
        'field_os2web_meetings_committee_tid' => '1656+1761',
      ),
      'override_title' => 1,
      'override_title_text' => 'Dagsordener og referater fra udvalget',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'job-listing meeting-list',
    );
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $display->content['new-13'] = $pane;
    $display->panels['middle'][12] = 'new-13';
    $pane = new stdClass();
    $pane->pid = 'new-14';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_meetings_light-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/3880',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '20',
      'offset' => '0',
      'arguments' => array(
        'field_os2web_meetings_committee_tid' => '1657',
      ),
      'override_title' => 1,
      'override_title_text' => 'Dagsordener og referater fra udvalget',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'job-listing meeting-list',
    );
    $pane->extras = array();
    $pane->position = 13;
    $pane->locks = array();
    $display->content['new-14'] = $pane;
    $display->panels['middle'][13] = 'new-14';
    $pane = new stdClass();
    $pane->pid = 'new-15';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_meetings_light-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/3933',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '20',
      'offset' => '0',
      'arguments' => array(
        'field_os2web_meetings_committee_tid' => '1747+1748+1760',
      ),
      'override_title' => 1,
      'override_title_text' => 'Dagsordener og referater fra udvalget',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'job-listing meeting-list',
    );
    $pane->extras = array();
    $pane->position = 14;
    $pane->locks = array();
    $display->content['new-15'] = $pane;
    $display->panels['middle'][14] = 'new-15';
    $pane = new stdClass();
    $pane->pid = 'new-16';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_meetings_light-panel_pane_5';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/1946',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '20',
      'offset' => '0',
      'arguments' => array(
        'field_os2web_meetings_committee_tid' => '1660+1751',
      ),
      'override_title' => 1,
      'override_title_text' => 'Dagsordener og referater fra udvalget',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'job-listing meeting-list',
    );
    $pane->extras = array();
    $pane->position = 15;
    $pane->locks = array();
    $display->content['new-16'] = $pane;
    $display->panels['middle'][15] = 'new-16';
    $pane = new stdClass();
    $pane->pid = 'new-17';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_meetings_light-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/1944',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'items_per_page' => '25',
      'override_title' => 1,
      'override_title_text' => 'Kommende møder',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 16;
    $pane->locks = array();
    $display->content['new-17'] = $pane;
    $display->panels['middle'][16] = 'new-17';
    $pane = new stdClass();
    $pane->pid = 'new-18';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_meetings_light-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/1944',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'items_per_page' => '10',
      'override_title' => 1,
      'override_title_text' => 'Seneste referater',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 17;
    $pane->locks = array();
    $display->content['new-18'] = $pane;
    $display->panels['middle'][17] = 'new-18';
    $pane = new stdClass();
    $pane->pid = 'new-19';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_meetings_light-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/1944',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '20',
      'offset' => '0',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'job-listing meetings-listing',
    );
    $pane->extras = array();
    $pane->position = 18;
    $pane->locks = array();
    $display->content['new-19'] = $pane;
    $display->panels['middle'][18] = 'new-19';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['article_below_body_mini_panel'] = $mini;

  return $export;
}
