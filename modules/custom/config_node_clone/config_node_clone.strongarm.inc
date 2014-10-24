<?php
/**
 * @file
 * config_node_clone.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function config_node_clone_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = 1;
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_menu_links';
  $strongarm->value = '0';
  $export['clone_menu_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_method';
  $strongarm->value = 'prepopulate';
  $export['clone_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_nodes_without_confirm';
  $strongarm->value = '0';
  $export['clone_nodes_without_confirm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_omitted';
  $strongarm->value = array(
    'article' => 'article',
    'banner_element' => 'banner_element',
    'bannerlink' => 'bannerlink',
    'blog' => 'blog',
    'borger_dk_article' => 'borger_dk_article',
    'os2web_case_publishing_case' => 'os2web_case_publishing_case',
    'os2web_case_publishing_document' => 'os2web_case_publishing_document',
    'subjectpage' => 'subjectpage',
    'factbox' => 'factbox',
    'frontpage' => 'frontpage',
    'location' => 'location',
    'os2web_meetings_bullet' => 'os2web_meetings_bullet',
    'os2web_meetings_bullet_attach' => 'os2web_meetings_bullet_attach',
    'os2web_meetings_meeting' => 'os2web_meetings_meeting',
    'news' => 'news',
    'os2web_kultunaut_event' => 'os2web_kultunaut_event',
    'os2web_kultunaut_import' => 'os2web_kultunaut_import',
    'os2web_social_directory' => 'os2web_social_directory',
    'os2web_hr_manager_job' => 'os2web_hr_manager_job',
    'self_service' => 'self_service',
    'shared' => 'shared',
    'slider_element' => 'slider_element',
    'faq' => 'faq',
    'phone_book' => 'phone_book',
    'video_element' => 'video_element',
    'webform' => 0,
  );
  $export['clone_omitted'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_article';
  $strongarm->value = 0;
  $export['clone_reset_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_bannerlink';
  $strongarm->value = 0;
  $export['clone_reset_bannerlink'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_banner_element';
  $strongarm->value = 0;
  $export['clone_reset_banner_element'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_blog';
  $strongarm->value = 0;
  $export['clone_reset_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_borger_dk_article';
  $strongarm->value = 0;
  $export['clone_reset_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_factbox';
  $strongarm->value = 0;
  $export['clone_reset_factbox'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_faq';
  $strongarm->value = 0;
  $export['clone_reset_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_frontpage';
  $strongarm->value = 0;
  $export['clone_reset_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_location';
  $strongarm->value = 0;
  $export['clone_reset_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_news';
  $strongarm->value = 0;
  $export['clone_reset_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_os2web_case_publishing_case';
  $strongarm->value = 0;
  $export['clone_reset_os2web_case_publishing_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_os2web_case_publishing_document';
  $strongarm->value = 0;
  $export['clone_reset_os2web_case_publishing_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_os2web_hr_manager_job';
  $strongarm->value = 0;
  $export['clone_reset_os2web_hr_manager_job'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_os2web_kultunaut_event';
  $strongarm->value = 0;
  $export['clone_reset_os2web_kultunaut_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_os2web_kultunaut_import';
  $strongarm->value = 0;
  $export['clone_reset_os2web_kultunaut_import'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_os2web_meetings_bullet';
  $strongarm->value = 0;
  $export['clone_reset_os2web_meetings_bullet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_os2web_meetings_bullet_attach';
  $strongarm->value = 0;
  $export['clone_reset_os2web_meetings_bullet_attach'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_os2web_meetings_meeting';
  $strongarm->value = 0;
  $export['clone_reset_os2web_meetings_meeting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_os2web_social_directory';
  $strongarm->value = 0;
  $export['clone_reset_os2web_social_directory'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_phone_book';
  $strongarm->value = 0;
  $export['clone_reset_phone_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_self_service';
  $strongarm->value = 0;
  $export['clone_reset_self_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_shared';
  $strongarm->value = 0;
  $export['clone_reset_shared'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_slider_element';
  $strongarm->value = 0;
  $export['clone_reset_slider_element'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_subjectpage';
  $strongarm->value = 0;
  $export['clone_reset_subjectpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_video_element';
  $strongarm->value = 0;
  $export['clone_reset_video_element'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_webform';
  $strongarm->value = 0;
  $export['clone_reset_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_use_node_type_name';
  $strongarm->value = 0;
  $export['clone_use_node_type_name'] = $strongarm;

  return $export;
}
