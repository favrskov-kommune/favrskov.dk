<?php

/**
 * @file
 * Defines a new views display type that is allowed to use images from dynamic
 * background.
 */

/**
 * Implements hook_views_plugins().
 *
 * This hook is used to define a new display type that supports dynamic
 * background image selection.
 */
function dynamic_background_views_views_plugins() {
  return array(
    'display' => array(
      'dynamic_background' => array(
        'title' => t('Page (dynamic background)'),
        'help' => t('Display the view as a page, with a URL and the option to select a background image.'),
        'handler' => 'views_plugin_display_page_db',
        'theme' => 'views_view',
        'path' => drupal_get_path('module', 'dynamic_background_views') . '/views/plugins/',
        'uses hook menu' => TRUE,
        'use ajax' => TRUE,
        'use pager' => TRUE,
        'accept attachments' => TRUE,
        'admin' => t('Dynamic background'),
      ),
    )
  );
}