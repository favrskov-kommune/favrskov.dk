<?php
/**
 * @file
 * config_taxon.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function config_taxon_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxon_taxonomy_button_text';
  $strongarm->value = 'Classify with Taxon';
  $export['taxon_taxonomy_button_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxon_taxonomy_button_text_wait';
  $strongarm->value = 'Classifying ...';
  $export['taxon_taxonomy_button_text_wait'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxon_taxonomy_ckeditor_field';
  $strongarm->value = 'edit-body-und-0-value';
  $export['taxon_taxonomy_ckeditor_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxon_taxonomy_field_name';
  $strongarm->value = '#edit-field-taxonomy-kle-und';
  $export['taxon_taxonomy_field_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxon_taxonomy_lookup_file';
  $strongarm->value = 'main_lookup.json';
  $export['taxon_taxonomy_lookup_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxon_taxonomy_not_selected_image';
  $strongarm->value = '/profiles/favrskov/modules/custom/taxon_taxonomy/images/not_selected.png';
  $export['taxon_taxonomy_not_selected_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxon_taxonomy_number_results_returned';
  $strongarm->value = '5';
  $export['taxon_taxonomy_number_results_returned'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxon_taxonomy_selected_image';
  $strongarm->value = '/profiles/favrskov/modules/custom/taxon_taxonomy/images/selected.png';
  $export['taxon_taxonomy_selected_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxon_taxonomy_taxon_url';
  $strongarm->value = 'http://taxon.favrskov.dk/web-service/taxon-ws.php';
  $export['taxon_taxonomy_taxon_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxon_taxonomy_wait_image';
  $strongarm->value = '/profiles/favrskov/modules/custom/taxon_taxonomy/images/wait.gif';
  $export['taxon_taxonomy_wait_image'] = $strongarm;

  return $export;
}
