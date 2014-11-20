<?php

/**
 * @file
 * Definition of the 'colored' panel style.
 */

// Plugin definition
$plugin = array(
  'title' => t('Colored'),
  'description' => t('Presents the panes or panels with a custom background'),
  'render pane' => 'config_pane_styles_colored_render_pane',
  'pane settings form' => 'config_pane_styles_colored_settings_form',
);

/**
 * Render callback for a single pane.
 */
function theme_config_pane_styles_colored_render_pane($vars) {
  $content = $vars['content'];
  $background = '';

  if (!empty($vars['settings']['background']['background_toggle']) && $vars['settings']['background']['background_toggle']) {
    // Mix background color & opacity to RGBA.
    if (!empty($vars['settings']['background']['background_color'])) {
      // Set transparent background for child element.
      $rgba = _color_unpack($vars['settings']['background']['background_color']);
      $rgba[] = ((int) $vars['settings']['background']['opacity']['value']) / 100;
      $rgba = implode(', ', $rgba);
    }

    // Get background image.
    if (!empty($vars['settings']['background']['background_image']['fid'])) {
      // Set transparent background for child element.
      $image = file_load($vars['settings']['background']['background_image']);
    }

    // Make default background transparent
    $background = 'transparent';
  }

  $background_color = !empty($rgba) ? 'background-color: rgba(' . $rgba . ');' : '';
  $background_image = !empty($image) ? 'background-image: url(' . file_create_url($image->uri) . ');' : '';

  // Color scheme & background color wrapper.
  $output = "<div class='$background' style='$background_color'>" . $content->content . "</div>";

  // Background image wrapper.
  $output = "<div class='fon-slider' style='$background_image'>" . $output . "</div>";

  return $output;
}

/**
 * Settings form callback.
 */
function config_pane_styles_colored_settings_form($style_settings) {
  $form = array();

  $form['background'] = array(
    '#type' => 'fieldset',
    '#title' => t('Background settings'),
    '#collapsible' => TRUE,
  );

  $form['background']['background_toggle'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable background'),
    '#default_value' => (isset($style_settings['background']['background_toggle'])) ? $style_settings['background']['background_toggle'] : '',
  );

  $form['background']['background_image'] = array(
    '#type' => 'media',
    '#title' => t('Background image'),
    '#description' => t('Choose background image'),
    '#default_value' => (isset($style_settings['background']['background_image'])) ? $style_settings['background']['background_image'] : '',
    '#media_options' => array(
      'global' => array(
        'file_extensions' => 'jpg jpeg png',
      ),
    ),
    '#states' => array(
      'visible' => array(
        '#edit-settings-background-background-toggle' => array('checked' => TRUE),
      ),
    ),
  );

  $form['background']['background_color'] = array(
    '#type' => 'jquery_colorpicker',
    '#title' => t('Background color'),
    '#description' => t('Choose background color'),
    '#default_value' => (isset($style_settings['background']['background_color'])) ? $style_settings['background']['background_color'] : '',
    '#states' => array(
      'visible' => array(
        '#edit-settings-background-background-toggle' => array('checked' => TRUE),
      ),
    ),
  );

  $form['background']['opacity'] = array(
    '#type' => 'jslider',
    '#title' => t('Background opacity'),
    '#description' => t('Adjust background opacity, %'),
    '#min' => 0,
    '#max' => 100,
    '#default_value' => (isset($style_settings['background']['opacity'])) ? $style_settings['background']['opacity'] : 100,
    '#display_inputs' => FALSE,
    '#display_values' => TRUE,
    '#slider_length' => '500px',
    '#states' => array(
      'visible' => array(
        '#edit-settings-background-background-toggle' => array('checked' => TRUE),
      ),
    ),
  );

  return $form;
}
