<?php
/**
 * @file
 * feeds_social_directory_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function feeds_social_directory_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'os2web_social_directory_importer';
  $feeds_importer->config = array(
    'name' => 'OS2web Social Directory importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserHTML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => '//*[@class="TdTableShowAddressTLeftTName"]/h1',
          'xpathparser:1' => 'translate(normalize-space(td[1]/table[1]/tr[1]/td[1]/table[1]/tr[2]/td/table/tr[12]/td), \' \', \'\')',
          'xpathparser:2' => 'translate(normalize-space(td[1]/table[1]/tr[1]/td[1]/table[1]/tr[2]/td/table/tr[11]/descendant::a[@href]), \' \', \'\')',
          'xpathparser:3' => 'translate(normalize-space(td[1]/table[1]/tr[1]/td[1]/table[1]/tr[2]/td/table/tr[10]/descendant::a[@href]), \' \', \'\')',
          'xpathparser:4' => 'translate(normalize-space(td[1]/table[1]/tr[1]/td[1]/table[1]/tr[2]/td/table/tr[7]/td), \' \', \'\')',
          'xpathparser:5' => 'translate(normalize-space(td[1]/table[1]/tr[1]/td[1]/table[1]/tr[2]/td/table/tr[9]/td), \' \', \'\')',
          'xpathparser:6' => 'translate(normalize-space(td[1]/table[1]/tr[1]/td[1]/table[1]/tr[2]/td/table/tr[6]/td), \' \', \'\')',
          'xpathparser:7' => 'translate(normalize-space(td[1]/table[1]/tr[1]/td[1]/table[1]/tr[2]/td/table/tr[5]/td), \' \', \'\')',
          'xpathparser:8' => 'translate(normalize-space(td[1]/table[1]/tr[1]/td[1]/table[1]/tr[2]/td/table/tr[1]/td), \' \', \'\')',
          'xpathparser:9' => 'translate(normalize-space(td[1]/table[1]/tr[1]/td[1]/table[1]/tr[2]/td/table/tr[2]/td[2]), \' \', \'\')',
          'xpathparser:10' => 'translate(normalize-space(td[1]/table[1]/tr[1]/td[1]/table[1]/tr[2]/td/table/tr[3]/td), \' \', \'\')',
          'xpathparser:11' => 'translate(normalize-space(td[1]/table[1]/tr[1]/td[1]/table[1]/tr[2]/td/table/tr[4]/td[2]), \' \', \'\')',
          'xpathparser:12' => 'translate(normalize-space(td[1]/table[2]/tr[1]/td[1]/table[1]/tr/td/table/tr[1]/td), \' \', \'\')',
          'xpathparser:13' => 'translate(normalize-space(td[1]/table[2]/tr[1]/td[1]/table[1]/tr/td/table/tr[2]/td), \' \', \'\')',
          'xpathparser:14' => 'translate(normalize-space(td[1]/table[2]/tr[1]/td[1]/table[1]/tr/td/table/tr[3]/td), \' \', \'\')',
          'xpathparser:15' => 'translate(normalize-space(td[1]/table[1]/tr[1]/td[1]/table[1]/tr[2]/td/table/tr[8]/td), \' \', \'\')',
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
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
          'xpathparser:14' => 0,
          'xpathparser:15' => 0,
        ),
        'context' => '//*[contains(@id, \'ViewListData\')]/tr[2]',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'xpathparser:6' => 'xpathparser:6',
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
            'xpathparser:15' => 0,
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
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_os2web_sd_other_info',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_os2web_sd_website:url',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_os2web_sd_e_mail',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_os2web_sd_membership_fee',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_os2web_sd_phone',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_os2web_sd_aopening_hours',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_os2web_sd_teaser',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_os2web_sd_tax_activity',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          9 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_os2web_sd_activity_other',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_os2web_sd_tax_audience',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          11 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_os2web_sd_audience_other',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_os2web_sd_contact_person:field_os2web_name',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_os2web_sd_contact_person:field_os2web_sd_phone',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_os2web_sd_contact_person:field_os2web_sd_e_mail',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_os2web_sd_address',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 1,
        'bundle' => 'os2web_social_directory',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['os2web_social_directory_importer'] = $feeds_importer;

  return $export;
}
