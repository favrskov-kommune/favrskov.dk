<?php
/**
 * @file
 * panel_news_page.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function panel_news_page_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'custom_share_used_on_news_pages';
  $content->admin_title = 'Custom share used on news pages';
  $content->admin_description = 'Custom share facebook, google plus, twitter';
  $content->category = 'HTML blocks';
  $content->settings = array(
    'admin_title' => 'Custom share used on news pages',
    'title' => '',
    'body' => '<a class="print_data" href="#">'. t('Print'). '</a>',
    'format' => 'video_html',
    'substitute' => 1,
  );
  $export['custom_share_used_on_news_pages'] = $content;

  return $export;
}
