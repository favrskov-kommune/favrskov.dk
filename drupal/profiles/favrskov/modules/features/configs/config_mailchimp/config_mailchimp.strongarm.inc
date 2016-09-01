<?php
/**
 * @file
 * config_mailchimp.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function config_mailchimp_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mailchimp_batch_limit';
  $strongarm->value = '100';
  $export['mailchimp_batch_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mailchimp_use_secure';
  $strongarm->value = 1;
  $export['mailchimp_use_secure'] = $strongarm;

  return $export;
}
