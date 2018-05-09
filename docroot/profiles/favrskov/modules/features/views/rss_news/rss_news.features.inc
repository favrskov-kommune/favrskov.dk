<?php
/**
 * @file
 * rss_news.features.inc
 */

/**
 * Implements hook_views_api().
 */
function rss_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
