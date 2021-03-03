<?php

/**
 * @file
 * Theme registry and preprocess functions for the default templates.
 */

/**
 * Implements hook_theme().
 */
function cludo_search_theme() {

  $registry = array();
  $ca_template_dir = drupal_get_path('module', 'cludo_search') . '/theme';

  // Full search form on results pages.
  $registry['cludo_search_search_form'] = array(
    'arguments' => array('form' => NULL),
    'render element' => 'form',
    'template' => 'cludo-search-search-form',
    'path' => $ca_template_dir,
  );

  // Block search form.
  $registry['cludo_search_block_form'] = array(
    'render element' => 'form',
    'template' => 'cludo-search-block-form',
    'path' => $ca_template_dir,
  );

  // Results page (top level template for the rest).
  $registry['cludo_search_results'] = array(
    'variables' => array(
      'search_query_data' => NULL,
      'response_data' => NULL,
      'synonyms_label' => t('You might also try:'),
    ),
    'template' => 'cludo-search-results',
    'path' => $ca_template_dir,
  );

  // Single result within the results page.
  $registry['cludo_search_result'] = array(
    'variables' => array('result_data' => NULL),
    'template' => 'cludo-search-result',
    'path' => $ca_template_dir,
  );

  return $registry;
}

/**
 * Preprocess block search form.
 */
function template_preprocess_cludo_search_block_form(&$vars) {

  $vars['block_search_form'] = array();
  $hidden = array();

  // Vars named after form keys so themers can print each element independently.
  foreach (element_children($vars['form']) as $key) {

    // Token = FALSE on search form means '#type' wont be there
    // put the option check here while we wait and see if the tooken-to-false
    // solution for Varnish caching issue actually solves the problem in the
    // wild.
    $type = array_key_exists('#type', $vars['form'][$key]) ? $vars['form'][$key]['#type'] : '';
    if ($type == 'hidden' || $type == 'token') {
      $hidden[] = drupal_render($vars['form'][$key]);
    }
    else {
      $vars['block_search_form'][$key] = drupal_render($vars['form'][$key]);
    }
  }

  // No theming value on hidden elements, so collapse them.
  $vars['block_search_form']['hidden'] = implode($hidden);

  // Collect the whole shebang so the complete form can be rendered with one
  // var.
  $vars['block_search_form_complete'] = implode($vars['block_search_form']);
}

/**
 * Preprocess the full search form.
 */
function template_preprocess_cludo_search_search_form(&$vars) {

  $vars['search_form'] = array();
  $hidden = array();

  // Vars named after form keys so themers can print each element independently.
  foreach (element_children($vars['form']) as $key) {

    // Token = FALSE on search form means '#type' wont be there
    // put the option check here while we wait and see if the tooken-to-false
    // solution for Varnish caching issue actually solves the problem in the
    // wild.
    $type = array_key_exists('#type', $vars['form'][$key]) ? $vars['form'][$key]['#type'] : '';
    if ($type == 'hidden' || $type == 'token') {
      $hidden[] = drupal_render($vars['form'][$key]);
    }
    else {
      $vars['search_form'][$key] = drupal_render($vars['form'][$key]);
    }
  }

  // No theming value on hidden elements, so collapse them.
  $vars['search_form']['hidden'] = implode($hidden);

  // Collect the whole shebang so the complete form can be rendered with one
  // var.
  $vars['search_form_complete'] = implode($vars['search_form']);
}

/**
 * Preprocess a single search result.
 */
function template_preprocess_cludo_search_result(&$vars) {

  // If the result has a mime type value, generate file icon image
  // that themes can optionally display
  // below includes patch: cludo_search-file_icon_alt-2598486-1.patch.
  if ($vars['mime']['type'] != '') {
    $file = new stdClass();
    $file->filemime = $vars['mime']['type'];
    $vars['mime']['icon'] = theme('file_icon', array(
      'file' => $file,
      'icon_directory' => variable_get('file_icon_directory', drupal_get_path('module', 'file') . '/icons'),
      'alt' => $vars['mime']['type'],
    ));
  }

  // Sanitise snippet and title.
  // Allow boldface through for keywork highlighting.
  $vars['snippet'] = filter_xss($vars['snippet'], array('b', 'strong'));
  $vars['title'] = filter_xss($vars['title'], array('b', 'strong'));

  // Sanitize crawl date.
  $vars['crawl_date'] = check_plain($vars['crawl_date']);

  // Add a cludo-search-levelx class if we're sub-levels.
  if ((int) $vars['level'] > 1) {
    $vars['classes_array'][] = 'cludo-search-level' . $vars['level'];
  }
}
