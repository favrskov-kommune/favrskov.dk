<?php
/**
 * @file
 * feeds_phone_book_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function feeds_phone_book_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'phone_book_import';
  $feeds_importer->config = array(
    'name' => 'Phone book import',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'feeds_fetcher_directory_fetcher',
      'config' => array(
        'recursive' => 0,
        'filemask' => '/.*\\.xml$/',
        'updated_files' => 1,
        'directory' => 'public://fics/TLF',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'Fornavn',
          'xpathparser:1' => 'Efternavn',
          'xpathparser:2' => 'Afdeling',
          'xpathparser:3' => 'Telefonnummer',
          'xpathparser:4' => 'KontaktID',
          'xpathparser:5' => 'Fax',
          'xpathparser:6' => 'Hovednummer',
          'xpathparser:7' => 'Mobilnummer',
          'xpathparser:8' => 'Titel',
          'xpathparser:11' => 'AdressePostnummer',
          'xpathparser:12' => 'AdresseBy',
          'xpathparser:13' => 'Note',
          'xpathparser:14' => 'Forvaltning',
          'xpathparser:16' => 'AdresseVej',
          'xpathparser:17' => 'AdresseNummer',
          'xpathparser:18' => 'Email',
          'xpathparser:19' => 'Funktion',
          'xpathparser:20' => 'wwwAdresse',
          'xpathparser:21' => 'Parti',
          'xpathparser:22' => 'Udvalg',
          'xpathparser:24' => 'Type',
          'xpathparser:23' => 'Hverv',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
          'xpathparser:14' => 0,
          'xpathparser:16' => 0,
          'xpathparser:17' => 0,
          'xpathparser:18' => 0,
          'xpathparser:19' => 0,
          'xpathparser:20' => 0,
          'xpathparser:21' => 0,
          'xpathparser:22' => 0,
          'xpathparser:24' => 0,
          'xpathparser:23' => 0,
        ),
        'context' => '//Adressebog/Card',
        'exp' => array(
          'errors' => 0,
          'tidy' => 0,
          'tidy_encoding' => 'UTF8',
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
            'xpathparser:16' => 0,
            'xpathparser:17' => 0,
            'xpathparser:18' => 0,
            'xpathparser:19' => 0,
            'xpathparser:20' => 0,
            'xpathparser:21' => 0,
            'xpathparser:22' => 0,
            'xpathparser:24' => 0,
            'xpathparser:23' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'field_phone_book_firstname',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_phone_book_lastname',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_phone_book_department',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_phone_book_phone',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'guid',
            'unique' => 1,
          ),
          5 => array(
            'source' => 'Blank source 1',
            'target' => 'title',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_phone_book_fax_number',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_phone_book_main_number',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_phone_book_cell_phone',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_phone_book_job_title',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_phone_book_address_sep:postal_code',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_phone_book_address_sep:locality',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_phone_book_stuff',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_phone_book_administration',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          14 => array(
            'source' => 'Blank source 2',
            'target' => 'field_phone_book_address',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Blank source 3',
            'target' => 'field_phone_book_address_sep:thoroughfare',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'xpathparser:16',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'xpathparser:17',
            'target' => 'Temporary target 2',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'Blank source 4',
            'target' => 'field_phone_book_address_sep:country',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'xpathparser:18',
            'target' => 'field_phone_book_email',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'xpathparser:19',
            'target' => 'field_phone_book_work_area',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'xpathparser:20',
            'target' => 'field_phone_book_website:url',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'xpathparser:21',
            'target' => 'field_phone_book_party',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          23 => array(
            'source' => 'xpathparser:22',
            'target' => 'field_phone_book_committee',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          24 => array(
            'source' => 'xpathparser:24',
            'target' => 'field_phone_book_type',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          25 => array(
            'source' => 'xpathparser:23',
            'target' => 'field_phone_book_job_task',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'phone_book',
        'update_non_existent' => 'delete',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['phone_book_import'] = $feeds_importer;

  return $export;
}
