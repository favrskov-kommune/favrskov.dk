<?php
/**
 * @file
 * config_borger_dk.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function config_borger_dk_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_borger_dk_article';
  $strongarm->value = 'edit-display';
  $export['additional_settings__active_tab_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_exclude_node_enable_borger_dk_article';
  $strongarm->value = 0;
  $export['apachesolr_exclude_node_enable_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'borger_dk_articles_borger_dk_menus_import';
  $strongarm->value = 0;
  $export['borger_dk_articles_borger_dk_menus_import'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'borger_dk_articles_nightly_menu_sync';
  $strongarm->value = '0';
  $export['borger_dk_articles_nightly_menu_sync'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'borger_dk_article_titles_search_auto_submit';
  $strongarm->value = 0;
  $export['borger_dk_article_titles_search_auto_submit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'borger_dk_article_titles_sync';
  $strongarm->value = 1;
  $export['borger_dk_article_titles_sync'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'borger_dk_nightly_article_sync';
  $strongarm->value = '5';
  $export['borger_dk_nightly_article_sync'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_borger_dk_article';
  $strongarm->value = 0;
  $export['comment_anonymous_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_borger_dk_article';
  $strongarm->value = '1';
  $export['comment_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_borger_dk_article';
  $strongarm->value = 1;
  $export['comment_default_mode_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_borger_dk_article';
  $strongarm->value = '50';
  $export['comment_default_per_page_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_borger_dk_article';
  $strongarm->value = 1;
  $export['comment_form_location_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_borger_dk_article';
  $strongarm->value = '1';
  $export['comment_preview_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_borger_dk_article';
  $strongarm->value = 1;
  $export['comment_subject_field_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_borger_dk_article';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_borger_dk_article';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_borger_dk_article';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2web_borger_dk_articles_display';
  $strongarm->value = array(
    'body' => 'body',
    'field_os2web_byline' => 'field_os2web_byline',
    'field_os2web_legislation' => 'field_os2web_legislation',
    'title' => 0,
    'field_os2web_borger_dk_url' => 0,
    'field_os2web_header' => 0,
    'field_os2web_page_title' => 0,
    'field_os2web_post_text' => 0,
    'field_os2web_pre_text' => 0,
    'field_os2web_recommended' => 0,
    'field_os2web_selfservice' => 0,
    'field_os2web_shortlist' => 0,
    'cntrmd_borger_dk_article' => 0,
  );
  $export['os2web_borger_dk_articles_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2web_borger_dk_articles_editable';
  $strongarm->value = array(
    'title' => 0,
    'body' => 0,
    'field_os2web_byline' => 0,
    'field_os2web_header' => 0,
    'field_os2web_legislation' => 0,
    'field_os2web_page_title' => 0,
    'field_os2web_post_text' => 0,
    'field_os2web_pre_text' => 0,
    'field_os2web_recommended' => 0,
    'field_os2web_selfservice' => 0,
    'field_os2web_shortlist' => 0,
    'cntrmd_borger_dk_article' => 0,
  );
  $export['os2web_borger_dk_articles_editable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2web_borger_dk_articles_last_update';
  $strongarm->value = 1425355202;
  $export['os2web_borger_dk_articles_last_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2web_borger_dk_webservice';
  $strongarm->value = 'https://www.borger.dk/_vti_bin/borger/ArticleExport.svc?wsdl';
  $export['os2web_borger_dk_webservice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2web_borger_dk_webservice_request_counter';
  $strongarm->value = 0;
  $export['os2web_borger_dk_webservice_request_counter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2web_borger_dk_webservice_request_limit';
  $strongarm->value = '100';
  $export['os2web_borger_dk_webservice_request_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2web_borger_dk_webservice_time_counter';
  $strongarm->value = 1425394803;
  $export['os2web_borger_dk_webservice_time_counter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2web_borger_dk_webservice_time_limit';
  $strongarm->value = '60';
  $export['os2web_borger_dk_webservice_time_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_borger_dk_article';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_borger_dk_article';
  $strongarm->value = 1;
  $export['print_display_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_comment_borger_dk_article';
  $strongarm->value = 0;
  $export['print_display_comment_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_urllist_borger_dk_article';
  $strongarm->value = 1;
  $export['print_display_urllist_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_borger_dk_article';
  $strongarm->value = 0;
  $export['scheduler_publish_enable_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_borger_dk_article';
  $strongarm->value = 0;
  $export['scheduler_publish_required_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_borger_dk_article';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_borger_dk_article';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_borger_dk_article';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_borger_dk_article';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_borger_dk_article';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_borger_dk_article'] = $strongarm;

  return $export;
}
