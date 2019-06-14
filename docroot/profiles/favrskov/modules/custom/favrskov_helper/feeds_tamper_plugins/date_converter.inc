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

  $current_local = locale_get_default();
  setlocale(LC_ALL,"da_DK");
  $date = DateTime::createFromFormat("d. M Y", $field);
  $field = $date->getTimestamp();
  // Restore default local.
  setlocale(LC_ALL, $current_local);

}

