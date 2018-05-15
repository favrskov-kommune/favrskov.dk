<?php

/**
 * @file
 * Content type plugin that contains "Footer site logo" pane.
 * Aimed to reduce duplicated ids attributes in markup.
 */

/**
 * Implements hook_ctools_content_types().
 */
function panel_footer_mini_panel_footer_logo_ctools_content_types() {
  return array(
    'title' => t('Footer site logo'),
    'single' => TRUE,
    'description' => t('Add site logo as content without id attribute in markup.'),
    'category' => t('ProPeople'),
    'render callback' => 'panel_footer_mini_panel_footer_logo_content_type_render',
  );
}

/**
 * Output function for the 'footer_logo' content type.
 *
 * Changed attributes array from
 * array('rel' => 'home', 'id' => 'logo', 'title' => t('Home'))
 * to "array('rel' => 'home', 'title' => t('Home'))".
 */
function panel_footer_mini_panel_footer_logo_content_type_render($subtype, $conf, $panel_args) {
  $logo = theme_get_setting('logo');
  $block = new stdClass();

  if (!empty($logo)) {
    $image = '<img src="' . $logo . '" alt="' . t('Home') . '" />';
    $block->content = l($image, '', array('html' => TRUE, 'attributes' => array('rel' => 'home', 'title' => t('Home'))));
  }

  return $block;
}
