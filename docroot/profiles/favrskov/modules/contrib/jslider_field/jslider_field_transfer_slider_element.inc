<?php

/**
 * Implements hook_theme().
 */
function _jslider_field_theme_transfer_slider() {
  $data['transfer_slider'] = array(
    'render element' => 'element',
    'file' => 'jslider_field_transfer_slider_element.inc',
  );
  return $data;
}

/**
 * Implements hook_element_info().
 */
function _jslider_field_element_info_transfer_slider() {
  $types['transfer_slider'] =  array(
    '#input'            => TRUE,
    '#process'          => array('transfer_slider_process'),
    '#element_validate' => array('transfer_slider_validate'),
    '#left'             => t('Left'),
    '#right'            => t('Right'),
    '#theme'            => array('transfer_slider'),
    '#left_value'       => 0,
    '#right_value'      => 100,
    '#size'             => 5,
  );
  return $types;
}

/**
 * Processes transfer slider: add textfields
 * @param unknown_type $element
 */
function transfer_slider_process($element) {
  $element['#tree'] = TRUE;

  // Generate left input for slider
  $element['left'] = array(
    '#prefix'           => '<div class="transfer-slider container-inline">',
    '#type'             => 'textfield',
    '#field_prefix'     => $element['#left'],
    '#default_value'    => $element['#left_value'],
    '#element_validate' => array('jslider_field_validate_integer'),
    '#size'             => $element['#size'],
    '#attributes'       => array('class' => array('transfer-slider-left-field')),
  );

  // Create markup for slider container
  $element['container']['#markup'] = '<div class="transfer-slider-container"></div>';

  // Generate right input for slider
  $element['right'] = array(
    '#type'             => 'textfield',
    '#field_suffix'     => $element['#right'],
    '#default_value'    => $element['#right_value'],
    '#element_validate' => array('jslider_field_validate_integer'),
    '#size'             => $element['#size'],
    '#attributes'       => array('class' => array('transfer-slider-right-field')),
    '#suffix'           => '</div>',
  );

  return $element;
}

/**
 * Validates transfer_slider
 *
 * @param array $element
 * @param array $form_state
 */
function transfer_slider_validate($element, &$form_state) {
  $sum = $element['#left_value'] + $element['#right_value'];
  if (($element['#value']['left'] + $element['#value']['right']) != $sum) {
    form_error($element, t("The sum of left and right values doesn't check with original."));
  }
}

/**
 * Theme output of transfer_slider
 *
 * @param array $element
 */
function theme_transfer_slider($vars) {
  // Add jQuery UI Slider
  drupal_add_library('system', 'ui.slider');

  // Add css and js for slider form element
  $path = drupal_get_path('module', 'jslider_field');
  drupal_add_js($path . '/jslider_field_transfer_slider.js');
  drupal_add_css($path . '/jslider_field_transfer_slider.css');
}

/**
 * @param $form
 * @param $form_state
 */
function _jslider_field_form_field_ui_field_edit_form_alter_jslider(&$form, &$form_state) {
  if ($form['#field']['type'] == 'number_integer' && $form['#instance']['widget']['type'] == 'jslider') {
    $form['instance']['settings']['min']['#required'] = TRUE;
    $form['instance']['settings']['max']['#required'] = TRUE;
  }
}