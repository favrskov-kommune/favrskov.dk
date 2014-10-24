<?php
/**
 * @file
 * feeds_phone_book_import.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function feeds_phone_book_import_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-blank_source_1-rewrite';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[xpathparser:0] [xpathparser:1]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['phone_book_import-blank_source_1-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-blank_source_1-trim';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['phone_book_import-blank_source_1-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-blank_source_2-rewrite';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'Blank source 2';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[xpathparser:16] [xpathparser:17]
[xpathparser:11] [xpathparser:12]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['phone_book_import-blank_source_2-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-blank_source_3-rewrite';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'Blank source 3';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[xpathparser:16] [xpathparser:17]',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Rewrite';
  $export['phone_book_import-blank_source_3-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-blank_source_3-trim';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'Blank source 3';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['phone_book_import-blank_source_3-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-blank_source_4-set_default_value';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'Blank source 4';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'DK',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['phone_book_import-blank_source_4-set_default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-xpathparser_0-trim';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'xpathparser:0';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['phone_book_import-xpathparser_0-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-xpathparser_1-trim';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'xpathparser:1';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['phone_book_import-xpathparser_1-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-xpathparser_12-trim';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'xpathparser:12';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['phone_book_import-xpathparser_12-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-xpathparser_13-trim';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'xpathparser:13';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['phone_book_import-xpathparser_13-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-xpathparser_16-trim';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'xpathparser:16';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['phone_book_import-xpathparser_16-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-xpathparser_17-trim';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'xpathparser:17';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['phone_book_import-xpathparser_17-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-xpathparser_18-trim';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'xpathparser:18';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['phone_book_import-xpathparser_18-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-xpathparser_19-trim';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'xpathparser:19';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['phone_book_import-xpathparser_19-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-xpathparser_2-explode';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'xpathparser:2';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['phone_book_import-xpathparser_2-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-xpathparser_2-trim';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'xpathparser:2';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['phone_book_import-xpathparser_2-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-xpathparser_20-trim';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'xpathparser:20';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['phone_book_import-xpathparser_20-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-xpathparser_22-explode';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'xpathparser:22';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['phone_book_import-xpathparser_22-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-xpathparser_22-trim';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'xpathparser:22';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['phone_book_import-xpathparser_22-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-xpathparser_24-explode';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'xpathparser:24';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['phone_book_import-xpathparser_24-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-xpathparser_24-trim';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'xpathparser:24';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['phone_book_import-xpathparser_24-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-xpathparser_3-prepend_digits_to_phone_number';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'xpathparser:3';
  $feeds_tamper->plugin_id = 'transform_phone_numbers';
  $feeds_tamper->settings = array(
    'prepend' => '4631',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Prepend digits to phone number';
  $export['phone_book_import-xpathparser_3-prepend_digits_to_phone_number'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-xpathparser_3-trim';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'xpathparser:3';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['phone_book_import-xpathparser_3-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-xpathparser_5-prepend_digits_to_phone_number';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'xpathparser:5';
  $feeds_tamper->plugin_id = 'transform_phone_numbers';
  $feeds_tamper->settings = array(
    'prepend' => '4631',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Prepend digits to phone number';
  $export['phone_book_import-xpathparser_5-prepend_digits_to_phone_number'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-xpathparser_5-trim';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'xpathparser:5';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['phone_book_import-xpathparser_5-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-xpathparser_6-prepend_digits_to_phone_number';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'transform_phone_numbers';
  $feeds_tamper->settings = array(
    'prepend' => '4631',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Prepend digits to phone number';
  $export['phone_book_import-xpathparser_6-prepend_digits_to_phone_number'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-xpathparser_6-trim';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['phone_book_import-xpathparser_6-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-xpathparser_7-prepend_digits_to_phone_number';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'xpathparser:7';
  $feeds_tamper->plugin_id = 'transform_phone_numbers';
  $feeds_tamper->settings = array(
    'prepend' => '4631',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Prepend digits to phone number';
  $export['phone_book_import-xpathparser_7-prepend_digits_to_phone_number'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-xpathparser_7-trim';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'xpathparser:7';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['phone_book_import-xpathparser_7-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_book_import-xpathparser_8-trim';
  $feeds_tamper->importer = 'phone_book_import';
  $feeds_tamper->source = 'xpathparser:8';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['phone_book_import-xpathparser_8-trim'] = $feeds_tamper;

  return $export;
}
