<?php
/**
 * @file
 * os2web_kultunaut.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function os2web_kultunaut_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'os2web_kultunaut-xpathparser_8-explode';
  $feeds_tamper->importer = 'os2web_kultunaut';
  $feeds_tamper->source = 'xpathparser:8';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ':',
    'limit' => '',
    'real_separator' => ':',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = t('Explode');
  $export['os2web_kultunaut-xpathparser_8-explode'] = $feeds_tamper;

  return $export;
}
