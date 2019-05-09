<?php

/**
 * @file
 * Convert string to timestamp.
 */

$plugin = array(
  'form' => 'feeds_tamper_strtotime_form',
  'callback' => 'feeds_tamper_strtotime_callback',
  'name' => 'String to Unix timestamp',
  'multi' => 'loop',
  'category' => 'Date/time',
);

function feeds_tamper_strtotime_form($importer, $element_key, $settings) {
  $form = array();
  $form['html'] = array(
    '#markup' => t('This will take a string containing an English date format and convert it into a Unix Timestamp.'),
  );
  return $form;
}

function feeds_tamper_strtotime_callback($result, $item_key, $element_key, &$field, $settings, $source) {
  $field =  strtotime(feeds_tamper_danish_month_to_english($field));
}
function feeds_tamper_danish_month_to_english($str) {
  $str = str_replace('januar', 'January', $str);
  $str = str_replace('februar', 'February', $str);
  $str = str_replace('marts', 'March', $str);
  $str = str_replace('april', 'April', $str);
  $str = str_replace('maj', 'May', $str);
  $str = str_replace('juni', 'June', $str);
  $str = str_replace('juli', 'July', $str);
  $str = str_replace('august', 'August', $str);
  $str = str_replace('september', 'September', $str);
  $str = str_replace('oktober', 'October', $str);
  $str = str_replace('november', 'November', $str);
  $str = str_replace('december', 'December', $str);

  return $str;
}