<?php

/**
 * @file
 * Implimentation of hook_form_system_theme_settings_alter()
 *
 * To use replace "adaptivetheme_subtheme" with your themeName and uncomment by
 * deleting the comment line to enable.
 *
 * @param $form : Nested array of form elements that comprise the form.
 * @param $form_state : A keyed array containing the current state of the form.
 */
/* -- Delete this line to enable.
function adaptivetheme_subtheme_form_system_theme_settings_alter(&$form, &$form_state)  {
  // Your knarly custom theme settings go here...
}
// */

function favrskovtheme_form_system_theme_settings_alter(&$form, &$form_state) {

  $form['favrskovtheme_settings'] = array(
    '#type' => 'vertical_tabs',
    '#weight' => -10,
  );

  /**
   * Header settings.
   */
  $form['favrskovtheme_settings']['favrskovtheme_header_footer'] = array(
    '#type' => 'fieldset',
    '#title' => t('Header and Footer Settings'),
  );

  // RGB to hex
  $default_color = theme_get_setting('favrskovtheme_header_background') ? _color_pack(theme_get_setting('favrskovtheme_header_background')) : '586464';
  $default_color = trim($default_color, '#');

  $form['favrskovtheme_settings']['favrskovtheme_header_footer']['favrskovtheme_header_background'] = array(
    '#type' => 'jquery_colorpicker',
    '#title' => t('Header Background color'),
    '#description' => t('Adjust header background color'),
    '#default_value' => $default_color,
  );

  // Decimal to %
  $default_opacity = theme_get_setting('favrskovtheme_header_opacity') ? (float) theme_get_setting('favrskovtheme_header_opacity') : 1;
  $default_opacity *= 100;

  $form['favrskovtheme_settings']['favrskovtheme_header_footer']['favrskovtheme_header_opacity'] = array(
    '#type' => 'jslider',
    '#title' => t('Header Opacity'),
    '#description' => t('Adjust header opacity, %'),
    '#min' => 0,
    '#max' => 100,
    '#default_value' => $default_opacity,
    '#display_inputs' => FALSE,
    '#display_values' => TRUE,
    '#slider_length' => '500px'
  );

  $form['favrskovtheme_settings']['favrskovtheme_header_footer']['favrskovtheme_header_links'] = array(
    '#type' => 'select',
    '#title' => t('Header color scheme'),
    '#description' => t('Adjust header links color'),
    '#options' => array(
      '' => t('None'),
      'header-red-scheme' => t('Red'),
      'header-dark-blue-scheme' => t('Dark blue'),
      'header-dark-scheme' => t('Dark grey'),
      'header-grey-scheme' => t('Grey'),
      'header-white-scheme' => t('White'),
      'header-yellow-scheme' => t('Yellow'),
      'header-violet-scheme' => t('Violet'),
      'header-pink-scheme' => t('Pink'),
      'header-fern-green-scheme' => t('Fern Green'),
      'header-salat-green-scheme' => t('Salat green'),
      'header-orange-scheme' => t('Orange'),
    ),
    '#default_value' => theme_get_setting('favrskovtheme_header_links'),
  );

  $form['favrskovtheme_settings']['favrskovtheme_header_footer']['favrskovtheme_footer_background'] = array(
    '#type' => 'jquery_colorpicker',
    '#title' => t('Foter Background color'),
    '#description' => t('Adjust header background color'),
    '#default_value' => theme_get_setting('favrskovtheme_footer_background') ? theme_get_setting('favrskovtheme_footer_background') : '586464',
  );

  /**
   * Multisite settings.
   */
  $form['favrskovtheme_settings']['favrskovtheme_multisite'] = array(
    '#type' => 'fieldset',
    '#title' => t('Multisite Settings'),
  );

  $form['favrskovtheme_settings']['favrskovtheme_multisite']['favrskovtheme_multisite_links'] = array(
    '#type' => 'select',
    '#title' => t('Links color'),
    '#description' => t('Adjust links color'),
    '#options' => array(
      '' => t('Default'),
      'violet' => t('Violet'),
      'dark-grey' => t('Dark grey'),
      'grey' => t('Grey'),
      'yellow' => t('Yellow'),
      'blue' => t('Blue'),
      'pink' => t('Pink'),
      'salat-green' => t('Salat green')
    ),
    '#default_value' => theme_get_setting('favrskovtheme_multisite_links')
  );

  if (!empty($form['#submit'])) {
    array_unshift($form['#submit'], 'favrskovtheme_form_system_theme_settings_submit');
  } else {
    $form['#submit'][] = 'favrskovtheme_form_system_theme_settings_submit';
  }
}

function favrskovtheme_form_system_theme_settings_submit(&$form, &$form_state) {
  // Save as RGB
  $color = _color_unpack($form_state['values']['favrskovtheme_header_background']);
  $form_state['values']['favrskovtheme_header_background'] = $color;

  // Save as decimal
  $opacity = (int) $form_state['values']['favrskovtheme_header_opacity']['value'];
  $opacity /= 100;
  $form_state['values']['favrskovtheme_header_opacity'] = $opacity;
}
