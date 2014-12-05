<?php
/**
 * @file
 * config_comments.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function config_comments_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ajax_comments_node_types';
  $strongarm->value = array(
    'news' => 'news',
    'article' => 'article',
    'banner_element' => 0,
    'bannerlink' => 0,
    'borger_dk_article' => 0,
    'os2web_case_publishing_case' => 0,
    'os2web_case_publishing_document' => 0,
    'faq' => 0,
    'factbox' => 0,
    'frontpage' => 0,
    'location' => 0,
    'os2web_meetings_bullet' => 0,
    'os2web_meetings_bullet_attach' => 0,
    'os2web_meetings_meeting' => 0,
    'os2web_hr_manager_job' => 0,
    'phone_book' => 0,
    'self_service' => 0,
    'shared' => 0,
    'slider_element' => 0,
    'subjectpage' => 0,
    'video_element' => 0,
    'webform' => 0,
  );
  $export['ajax_comments_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_notify_node_types';
  $strongarm->value = array(
    'article' => 0,
    'banner_element' => 0,
    'bannerlink' => 0,
    'borger_dk_article' => 0,
    'faq' => 0,
    'factbox' => 0,
    'frontpage' => 0,
    'news' => 0,
    'phone_book' => 0,
    'self_service' => 0,
    'shared' => 0,
    'slider_element' => 0,
    'subjectpage' => 0,
    'video_element' => 0,
    'webform' => 0,
  );
  $export['comment_notify_node_types'] = $strongarm;

  return $export;
}
