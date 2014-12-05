<?php
/**
 * @file
 * config_content_reminder.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function config_content_reminder_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_reminder_bundles';
  $strongarm->value = array(
    'article' => 'article',
    'banner_element' => 'banner_element',
    'bannerlink' => 'bannerlink',
    'borger_dk_article' => 'borger_dk_article',
    'faq' => 'faq',
    'factbox' => 'factbox',
    'frontpage' => 'frontpage',
    'news' => 'news',
    'phone_book' => 'phone_book',
    'self_service' => 'self_service',
    'slider_element' => 'slider_element',
    'subjectpage' => 'subjectpage',
    'webform' => 'webform',
    'comment_node_article' => 0,
    'comment_node_bannerlink' => 0,
    'comment_node_faq' => 0,
    'comment_node_factbox' => 0,
    'comment_node_frontpage' => 0,
    'comment_node_news' => 0,
    'comment_node_phone_book' => 0,
    'comment_node_self_service' => 0,
    'comment_node_shared' => 0,
    'comment_node_subjectpage' => 0,
    'comment_node_webform' => 0,
    'field_publications' => 0,
    'field_faq' => 0,
    'field_opening_hours' => 0,
    'shared' => 0,
    'image' => 0,
    'video' => 0,
    'audio' => 0,
    'document' => 0,
    'media_folders' => 0,
    'media_tags' => 0,
    'kle' => 0,
    'local' => 0,
    'location' => 0,
    'subject_area' => 0,
    'hearing_category' => 0,
    'phonebook_administration' => 0,
    'phonebook_department' => 0,
    'video_category' => 0,
    'os2web_kultunaut_types' => 0,
    'phonebook_type' => 0,
    'phonebook_party' => 0,
    'phonebook_committee' => 0,
    'taxonomy_vocabulary' => 0,
    'user' => 0,
    'rules_config' => 0,
  );
  $export['content_reminder_bundles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_reminder_presets';
  $strongarm->value = 'today + 1 month|One month
today + 2 month|Two months
2011-12-12|December 12';
  $export['content_reminder_presets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_reminder_unusable';
  $strongarm->value = array(
    'comment_node_banner_element' => 0,
    'comment_node_borger_dk_article' => 0,
    'comment_node_slider_element' => 0,
    'os2web_hr_manager_job_position_categories' => 0,
    'os2web_kultunaut_categories' => 0,
    'os2web_social_directory_activity' => 0,
    'os2web_social_directory_association_type' => 0,
    'os2web_social_directory_audience' => 0,
    'os2web_social_directory_contact_person_role' => 0,
  );
  $export['content_reminder_unusable'] = $strongarm;

  return $export;
}
