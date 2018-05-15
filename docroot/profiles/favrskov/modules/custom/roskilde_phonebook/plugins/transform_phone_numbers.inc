<?php

/**
 * @file
 * Transforming internal phone numbers with 4 digits to external
 * numbers with 8 digits.
 */

$plugin = array(
  'form' => 'roskilde_phonebook_transform_phone_numbers_form',
  'callback' => 'roskilde_phonebook_transform_phone_numbers_callback',
  'name' => 'Prepend digits to phone number',
  'multi' => 'loop',
  'category' => 'Roskilde Phone book',
);

/**
 * Plugin form.
 */
function roskilde_phonebook_transform_phone_numbers_form($importer, $element_key, $settings) {
  $form = array();
  $form['prepend'] = array(
    '#type' => 'textfield',
    '#title' => t('Digits to prepend'),
    '#default_value' => isset($settings['prepend']) ? $settings['prepend'] : '',
    '#description' => t('The digits to prepend the original phone number if the length is 4 digits.'),
  );
  return $form;
}

/**
 * Plugin callback.
 */
function roskilde_phonebook_transform_phone_numbers_callback($result, $item_key, $element_key, &$field, $settings) {
  if (!empty($field) && strlen($field) == 4) {
    $field = $settings['prepend'] . $field;
  }
}
