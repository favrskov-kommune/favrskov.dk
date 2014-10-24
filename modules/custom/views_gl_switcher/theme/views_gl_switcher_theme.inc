<?php

/**
 * @file
 * Preprocessors function to add switcher.
 */

/**
 * Display the view as an HTML list element
 * If switcher enabled provide necessary classes
 */
function template_preprocess_views_view_gl_switcher(&$vars) {
  template_preprocess_views_view_list($vars);
  $handler = $vars['view']->style_plugin;

  if (!empty($handler->options['switcher'])) {
    // Add switcher js and css
    $display_switch_settings = array('list_type' => $handler->options['type']);
    drupal_add_js(drupal_get_path('module', 'views_gl_switcher') . '/js/views_gl_switcher.js');
    drupal_add_js(array('viewsGLSwitcher' => $display_switch_settings), 'setting');

    drupal_add_css(drupal_get_path('module', 'views_gl_switcher') . '/css/views_gl_switcher.css', array('type' => 'file'));

    // Add necessary classes
    if ($handler->options['class']) {
      $class = explode(' ', $handler->options['class']);
      $class = array_map('views_clean_css_identifier', $class);
    }

    $class[] = 'display';
    $class[] = 'grid';
    $class[] = 'clearfix';
    $vars['class'] = implode(' ', $class);

    $vars['list_type_prefix'] = '<' . $handler->options['type'] . ' class="' . $vars['class'] . '">';
  }

  // Add variable for template
  $vars['switcher'] = $handler->options['switcher'];
}