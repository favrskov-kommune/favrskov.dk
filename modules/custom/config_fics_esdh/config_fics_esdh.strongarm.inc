<?php
/**
 * @file
 * config_fics_esdh.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function config_fics_esdh_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2web_fics_esdh_approved_committees';
  $strongarm->value = '48,53,56,66,68,69,70,71,72,73,74,75,76,77,78,83,85,86,87,88,89,90,91,92,93,94,96,97';
  $export['os2web_fics_esdh_approved_committees'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2web_fics_esdh_cp_destination_path';
  $strongarm->value = 'fics://publ_imported';
  $export['os2web_fics_esdh_cp_destination_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2web_fics_esdh_cp_path';
  $strongarm->value = 'fics://PUBL';
  $export['os2web_fics_esdh_cp_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2web_fics_esdh_mm_path';
  $strongarm->value = 'fics://DAG';
  $export['os2web_fics_esdh_mm_path'] = $strongarm;

  return $export;
}
