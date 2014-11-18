<?php
/**
 * @file
 * config_background_image.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function config_background_image_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dynamic_background_css';
  $strongarm->value = array(
    'selector' => 'body',
    'css' => '',
  );
  $export['dynamic_background_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dynamic_background_image_behaviour';
  $strongarm->value = array(
    'random' => 0,
  );
  $export['dynamic_background_image_behaviour'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dynamic_background_image_style';
  $strongarm->value = array(
    'style' => '0',
    'thumbnail_style' => 'thumbnail',
  );
  $export['dynamic_background_image_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dynamic_background_node';
  $strongarm->value = array(
    'settings' => array(
      'content_types' => array(
        'article' => 'article',
        'frontpage' => 'frontpage',
        'news' => 'news',
        'bannerlink' => 0,
        'banner_element' => 0,
        'factbox' => 0,
        'faq' => 0,
        'phone_book' => 0,
        'self_service' => 0,
        'slider_element' => 0,
        'subjectpage' => 0,
        'video_element' => 0,
        'webform' => 0,
        'shared' => 0,
        'borger_dk_article' => 0,
        'os2web_case_publishing_case' => 0,
        'os2web_case_publishing_document' => 0,
        'os2web_hr_manager_job' => 0,
        'os2web_meetings_bullet' => 0,
        'os2web_meetings_bullet_attach' => 0,
        'os2web_meetings_meeting' => 0,
        'newsletter' => 0,
        'standard_accordion' => 0,
      ),
    ),
    'upload' => array(
      'no_of_images' => '1',
    ),
  );
  $export['dynamic_background_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dynamic_background_node_css';
  $strongarm->value = array(
    'selector' => 'body',
    'css' => '',
  );
  $export['dynamic_background_node_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dynamic_background_node_image_behaviour';
  $strongarm->value = array(
    'random' => 0,
  );
  $export['dynamic_background_node_image_behaviour'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dynamic_background_node_image_style';
  $strongarm->value = array(
    'style' => '0',
    'thumbnail_style' => 'thumbnail',
  );
  $export['dynamic_background_node_image_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dynamic_background_setting';
  $strongarm->value = array(
    'num_of_pictures' => 'unlimited',
    'path' => 'background',
    'extensions' => 'jpg jpeg png',
  );
  $export['dynamic_background_setting'] = $strongarm;

  return $export;
}
