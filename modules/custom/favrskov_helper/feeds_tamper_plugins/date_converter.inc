<?php

/**
 * Tamper plugin definition.
 */
$plugin = array(
  'name'     => 'Convert date during export to format used on Favrskov site',
  'form'     => 'favrskov_helper_plugin_date_to_proper_format_form',
  'callback' => 'favrskov_helper_plugin_date_to_proper_format_callback',
);

/**
 * From plugin settings definition.
 */
function favrskov_helper_plugin_date_to_proper_format_form($importer, $element_key, $settings) {
  $formats = system_get_date_formats();

  $options = $states = array();
  foreach($formats as $format_name => $format_subtype) {
    if (count($format_subtype) > 1) {
      $states[$format_name] = $format_name;
    }
    $options[$format_name] = $format_name;
  }

  $form = array();
  $form['format'] = array(
    '#type'          => 'select',
    '#options'       => $options,
    '#title'         => t('Available date formats'),
    '#description'   => t('Choose format you want to convert date.'),
    '#default_value' => '',
    '#required'      => TRUE,
  );

//  $form['display'] = array(
//    '#type'       => 'select',
//    '#options'    => array(),
//    '#title'      => t('Format sequence'),
//    '#description' => t('Display.'),
//    '#default_value' => '',
//    '#states' => array(
//      'visible' => array(
//        'select[name="formats"]' => array('value' => 'cars'),
//      ),
//    ),
//  );

  return $form;
}

/**
 * Callback that will be called during import on field that plugin was attached.
 */
function favrskov_helper_plugin_date_to_proper_format_callback($result, $item_key, $element_key, &$field, $settings) {
  $date       = new DateTime($field);
  $timestamp  = $date->getTimestamp();

  $field = format_date($timestamp, $settings['format']);
}
