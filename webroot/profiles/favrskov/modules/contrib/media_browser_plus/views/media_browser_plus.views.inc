<?php

/**
 * @file
 * Provide Views data and handlers for media.module.
 */

/**
 * Implements hook_form_FORM_ID_alter() for views_exposed_form().
 *
 * Convert the media_browser_plus uri filter for filtering by file scheme into
 * a select.
 *
 * @see file_filters()
 */
function media_browser_plus_form_views_exposed_form_alter(&$form, &$form_state) {
  if ($form_state['view']->name == 'media_browser_plus' && isset($form['uri'])) {
    $visible_steam_wrappers = file_get_stream_wrappers(STREAM_WRAPPERS_VISIBLE);
    $options = array();
    foreach ($visible_steam_wrappers as $scheme => $information) {
      $options[$scheme] = check_plain($information['name']);
    }
    if (count($visible_steam_wrappers) > 1) {
      $form['uri'] = array(
        '#options' => array('' => '- ' . t('Any') . ' -') + $options,
        '#type' => 'select',
        '#default_value' => $form['uri']['#default_value'],
      );
    }
    else {
      // If there's only one stream wrapper hide the filter.
      unset($form['#info']['filter-uri']);
      $form['uri'] = array(
        '#type' => 'hidden',
        '#default_value' => '',
      );
    }
  }
}

/**
 * Implements hook_views_plugins().
 *
 * Generate a list of which base-tables to enabled the plugins for.
 */
function media_browser_plus_views_plugins() {
  $plugins = array();

  $path = drupal_get_path('module', 'media_browser_plus') . '/views';

  // Always allow the actual file-table.
  $base = array('file_managed');
  if (module_exists('search_api')) {
    // If the Search API module exists, also allow indices of the file-entity
    // that has the fid field indexed.
    $indices = search_api_index_load_multiple(NULL);
    foreach ($indices as $machine_name => $index) {
      if ($index->item_type == 'file' && isset($index->options['fields']['fid'])) {
        $base[] = 'search_api_index_' . $machine_name;
      }
    }
  }

  // Style plugin.
  $plugins['style']['media_browser_plus'] = array(
    'title' => t('Media browser plus'),
    'help' => t('Displays rows as an HTML list including the folder management.'),
    'handler' => 'media_browser_plus_views_plugin_style_media_browser',
    'theme' => 'media_browser_plus_views_view_media_browser',
    'theme path' => $path,
    'base' => $base,
    'uses row plugin' => TRUE,
    'uses row class' => FALSE,
    'uses options' => TRUE,
    'uses fields' => TRUE,
    'type' => 'normal',
    'help topic' => 'style-media-browser',
  );
  return $plugins;
}

/**
 * Implements hook_views_data_alter().
 */
function media_browser_plus_views_data_alter(&$data) {
  $data['file_managed']['media_browser_plus_preview'] = array(
    'title' => t('Preview'),
    'group' => t('Media browser plus'),
    'help' => t('Preview of a file item as used in the media browsers.'),
    'real field' => 'fid',
    'field' => array(
      'handler' => 'media_browser_plus_views_handler_field_preview',
      'click sortable' => FALSE,
    ),
  );
  $data['file_managed']['media_browser_plus_preview_vbo'] = array(
    'title' => t('Preview with operations'),
    'group' => t('Media browser plus'),
    'help' => t('Preview of a file item as used in the media browsers.'),
    'real field' => 'fid',
    'field' => array(
      'handler' => 'media_browser_plus_views_handler_field_preview_vbo',
      'click sortable' => FALSE,
    ),
  );

  $data['file_managed']['media_browser_plus_views_handler_area_actions'] = array(
    'title' => t('Actions'),
    'group' => t('Media browser plus'),
    'help' => t('Area with different file related actions.'),
    'area' => array(
      'handler' => 'media_browser_plus_views_handler_area_actions',
    ),
  );
  $data['file_managed']['media_browser_plus_views_handler_area_basket'] = array(
    'title' => t('Basket'),
    'group' => t('Media browser plus'),
    'help' => t('Area to collect and download files.'),
    'area' => array(
      'handler' => 'media_browser_plus_views_handler_area_basket',
    ),
  );
  $data['file_managed']['media_browser_plus_views_handler_area_navigation'] = array(
    'title' => t('Navigation'),
    'group' => t('Media browser plus'),
    'help' => t('Area to navigate using the folder structure.'),
    'table' => 'field_data_field_folder',
    'area' => array(
      'handler' => 'media_browser_plus_views_handler_area_navigation',
    ),
  );
}

/**
 * Display the view as a media browser.
 *
 * @see template_preprocess_media_views_view_media_browser()
 */
function template_preprocess_media_browser_plus_views_view_media_browser(&$vars) {
  module_load_include('inc', 'media', 'includes/media.browser');

  $view = $vars['view'];
  $display_handler = $vars['view']->display_handler;

  // If this is a media browser display add some more JS.
  // Re-uses vast parts of template_preprocess_media_views_view_media_browser().
  if ($display_handler instanceof media_views_plugin_display_media_browser) {
    $fids = array();
    foreach ($view->result as $index => $result) {
      $fids[$index] = $result->fid;
    }
    $files = file_load_multiple($fids);
    foreach ($files as $file) {
      // Add url/preview to the file object.
      media_browser_build_media_item($file);
    }

    // Add the files to JS so that they are accessible inside the browser.
    drupal_add_js(array('media' => array('files' => array_values($files))), 'setting');

    // Add the browser parameters to the settings and that this display exists.
    drupal_add_js(array(
      'media' => array(
        'browser' => array(
          'params' => media_get_browser_params(),
          'views' => array(
            $vars['view']->name => array(
              $vars['view']->current_display,
            ),
          ),
        ),
      ),
    ), 'setting');

    // Add media browser javascript and CSS.
    drupal_add_js(drupal_get_path('module', 'media') . '/js/plugins/media.views.js');
  }

  // Add classes and wrappers from the style plugin.
  $handler = $vars['view']->style_plugin;

  $class = explode(' ', $handler->options['class']);
  $class = array_map('drupal_clean_css_identifier', $class);

  $wrapper_class = explode(' ', $handler->options['wrapper_class']);
  $wrapper_class = array_map('drupal_clean_css_identifier', $wrapper_class);

  $vars['class'] = implode(' ', $class);
  $vars['wrapper_class'] = implode(' ', $wrapper_class);
  $vars['wrapper_prefix'] = '<div class="' . implode(' ', $wrapper_class) . '">';
  $vars['wrapper_suffix'] = '</div>';
  $vars['list_type_prefix'] = '<' . $handler->options['type'] . ' id="media-browser-library-list" class="' . implode(' ', $class) . '">';
  $vars['list_type_suffix'] = '</' . $handler->options['type'] . '>';

  // Run theming variables through a standard Views preprocess function.
  template_preprocess_views_view_unformatted($vars);

  // Now add our own stuff - based on the set options.
  // Add the js / css library.
  drupal_add_library('media_browser_plus', 'media_browser_plus');

  // Add more information for the JS integration.
  $vars['options']['view_id'] = $view->name;
  $vars['options']['view_display_id'] = $view->current_display;

  // Add settings for the js library.
  drupal_add_js(array(
    'mbp' => array(
      'views' => array(
        $view->name . ':' . $view->current_display => $vars['options'],
      ),
    )),
    'setting'
  );

  // Special handling of the navigation. We abuse a area handler to add and
  // configure the navigation - that way it's very flexible.
  // Check if a navigation handler is configured.
  $vars['folders'] = NULL;
  foreach (array('header', 'footer') as $area) {
    foreach ($display_handler->handlers[$area] as $handler) {
      if ($handler instanceof media_browser_plus_views_handler_area_navigation) {
        $vars['folders'] = $handler->render_custom();
        break(2);
      }
    }
  }
}

/**
 * Implements hook_views_invalidate_cache().
 */
function media_browser_plus_views_invalidate_cache() {
  cache_clear_all('media:browser:plus:plugin', 'cache', TRUE);
  drupal_static_reset('media_browser_plus_get_browser_plugin_info');
}
