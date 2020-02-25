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
 * Form plugin settings definition.
 */
function favrskov_helper_plugin_date_to_proper_format_form($importer, $element_key, $settings) {
  $date_types = system_get_date_formats();
  $options    = array();
  foreach($date_types as $type_name => $type_formats) {
    $options[$type_name] = drupal_ucfirst(str_replace('_', ' ', $type_name));
  }

  $form = array();
  $form['type'] = array(
    '#type' => 'select',
    '#options' => $options,
    '#title' => t('Available date types'),
    '#description' => t('Choose type you want to convert date.'),
    '#default_value' => 'medium',
    '#required' => TRUE,
  );

  return $form;
}

/**
 * Callback that will be called during import on field that plugin was attached.
 */
function favrskov_helper_plugin_date_to_proper_format_callback($result, $item_key, $element_key, &$field, $settings) {
  $field = strtotime(feeds_tamper_danish_month_to_english($field));
}

/**
 * Helper function to convert Danish abbreviated months to English
 */
function feeds_tamper_danish_month_to_english($str) {
  $str = str_replace('jan', 'January', $str);
  $str = str_replace('febr', 'February', $str);
  $str = str_replace('marts', 'March', $str);
  $str = str_replace('april', 'April', $str);
  $str = str_replace('maj', 'May', $str);
  $str = str_replace('juni', 'June', $str);
  $str = str_replace('juli', 'July', $str);
  $str = str_replace('aug', 'August', $str);
  $str = str_replace('sept', 'September', $str);
  $str = str_replace('okt', 'October', $str);
  $str = str_replace('nov', 'November', $str);
  $str = str_replace('dec', 'December', $str);

  return $str;
}

