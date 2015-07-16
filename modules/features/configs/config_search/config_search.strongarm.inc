<?php
/**
 * @file
 * config_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function config_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_attachments_entity_bundle_indexing_article';
  $strongarm->value = 'none';
  $export['apachesolr_attachments_entity_bundle_indexing_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_attachments_entity_bundle_indexing_document';
  $strongarm->value = 'none';
  $export['apachesolr_attachments_entity_bundle_indexing_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_attachments_entity_bundle_indexing_news';
  $strongarm->value = 'none';
  $export['apachesolr_attachments_entity_bundle_indexing_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_attachments_entity_bundle_indexing_os2web_meetings_bullet';
  $strongarm->value = 'seperate';
  $export['apachesolr_attachments_entity_bundle_indexing_os2web_meetings_bullet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_attachments_entity_bundle_indexing_os2web_meetings_bullet_attach';
  $strongarm->value = 'seperate';
  $export['apachesolr_attachments_entity_bundle_indexing_os2web_meetings_bullet_attach'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_attachments_entity_bundle_indexing_os2web_meetings_meeting';
  $strongarm->value = 'seperate';
  $export['apachesolr_attachments_entity_bundle_indexing_os2web_meetings_meeting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_attachments_excluded_extensions';
  $strongarm->value = 'aif art avi bmp gif ico jpg mov mp3 mp4 mpg oga ogv png psd ra ram rgb tif wmv';
  $export['apachesolr_attachments_excluded_extensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_attachments_excluded_mime';
  $strongarm->value = array(
    'audio/x-aiff' => 1,
    'image/x-jg' => 1,
    'video/x-msvideo' => 1,
    'image/x-ms-bmp' => 1,
    'image/gif' => 1,
    'image/vnd.microsoft.icon' => 1,
    'image/jpeg' => 1,
    'video/quicktime' => 1,
    'audio/mpeg' => 1,
    'video/mp4' => 1,
    'video/mpeg' => 1,
    'audio/ogg' => 1,
    'video/ogg' => 1,
    'image/png' => 1,
    'image/x-photoshop' => 1,
    'audio/x-realaudio' => 1,
    'audio/x-pn-realaudio' => 1,
    'image/x-rgb' => 1,
    'image/tiff' => 1,
    'video/x-ms-wmv' => 1,
  );
  $export['apachesolr_attachments_excluded_mime'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_attachments_extract_using';
  $strongarm->value = 'solr';
  $export['apachesolr_attachments_extract_using'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_autocomplete_counts';
  $strongarm->value = 0;
  $export['apachesolr_autocomplete_counts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_autocomplete_suggest_keywords';
  $strongarm->value = 1;
  $export['apachesolr_autocomplete_suggest_keywords'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_autocomplete_suggest_spellcheck';
  $strongarm->value = 1;
  $export['apachesolr_autocomplete_suggest_spellcheck'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_autocomplete_widget';
  $strongarm->value = 'custom';
  $export['apachesolr_autocomplete_widget'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_cron_limit';
  $strongarm->value = '50';
  $export['apachesolr_cron_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_default_environment';
  $strongarm->value = 'solr';
  $export['apachesolr_default_environment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_failure';
  $strongarm->value = 'apachesolr:show_error';
  $export['apachesolr_failure'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_index_user';
  $strongarm->value = '1';
  $export['apachesolr_index_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_search_mlt_blocks';
  $strongarm->value = array(
    'mlt-001' => array(
      'name' => 'More like this',
      'num_results' => '5',
      'mlt_fl' => array(
        'label' => 'label',
        'taxonomy_names' => 'taxonomy_names',
      ),
      'mlt_env_id' => 'solr',
      'mlt_mintf' => '1',
      'mlt_mindf' => '1',
      'mlt_minwl' => '3',
      'mlt_maxwl' => '15',
      'mlt_maxqt' => '20',
      'mlt_type_filters' => array(),
      'mlt_custom_filters' => '',
      'delta' => 'mlt-001',
    ),
  );
  $export['apachesolr_search_mlt_blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_service_class';
  $strongarm->value = 'DrupalApacheSolrMultilingualService';
  $export['apachesolr_service_class'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_set_nodeapi_messages';
  $strongarm->value = '1';
  $export['apachesolr_set_nodeapi_messages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_site_hash';
  $strongarm->value = 'ol9o33';
  $export['apachesolr_site_hash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_sort_sort_bundle';
  $strongarm->value = 0;
  $export['apachesolr_sort_sort_bundle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_sort_sort_ds_created';
  $strongarm->value = 1;
  $export['apachesolr_sort_sort_ds_created'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_sort_sort_score';
  $strongarm->value = 1;
  $export['apachesolr_sort_sort_score'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_sort_sort_sort_label';
  $strongarm->value = 1;
  $export['apachesolr_sort_sort_sort_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_sort_sort_sort_name';
  $strongarm->value = 0;
  $export['apachesolr_sort_sort_sort_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_sort_sort_weight_bundle';
  $strongarm->value = '0';
  $export['apachesolr_sort_sort_weight_bundle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_sort_sort_weight_ds_created';
  $strongarm->value = '0';
  $export['apachesolr_sort_sort_weight_ds_created'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_sort_sort_weight_score';
  $strongarm->value = '0';
  $export['apachesolr_sort_sort_weight_score'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_sort_sort_weight_sort_label';
  $strongarm->value = '0';
  $export['apachesolr_sort_sort_weight_sort_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_sort_sort_weight_sort_name';
  $strongarm->value = '0';
  $export['apachesolr_sort_sort_weight_sort_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'variable_realm_list_language';
  $strongarm->value = array(
    0 => 'apachesolr_confgen_textfiles_stopwords_txt',
    1 => 'apachesolr_confgen_textfiles_protwords_txt',
    2 => 'apachesolr_confgen_textfiles_synonyms_txt',
    3 => 'apachesolr_confgen_textfiles_compoundwords_txt',
    4 => 'apachesolr_confgen_textfiles_mapping_isolatin1accent_txt',
    5 => 'apachesolr_multilingual_stemmer_language',
    6 => 'apachesolr_multilingual_splitOnCaseChange_index',
    7 => 'apachesolr_multilingual_splitOnCaseChange_query',
    8 => 'apachesolr_multilingual_splitOnCaseChange_spell',
    9 => 'apachesolr_multilingual_splitOnNumerics_index',
    10 => 'apachesolr_multilingual_splitOnNumerics_query',
    11 => 'apachesolr_multilingual_splitOnNumerics_spell',
    12 => 'apachesolr_multilingual_stemEnglishPossessive_index',
    13 => 'apachesolr_multilingual_stemEnglishPossessive_query',
    14 => 'apachesolr_multilingual_stemEnglishPossessive_spell',
    15 => 'apachesolr_multilingual_generateWordParts_index',
    16 => 'apachesolr_multilingual_generateWordParts_query',
    17 => 'apachesolr_multilingual_generateWordParts_spell',
    18 => 'apachesolr_multilingual_generateNumberParts_index',
    19 => 'apachesolr_multilingual_generateNumberParts_query',
    20 => 'apachesolr_multilingual_generateNumberParts_spell',
    21 => 'apachesolr_multilingual_catenateWords_index',
    22 => 'apachesolr_multilingual_catenateWords_query',
    23 => 'apachesolr_multilingual_catenateWords_spell',
    24 => 'apachesolr_multilingual_catenateNumbers_index',
    25 => 'apachesolr_multilingual_catenateNumbers_query',
    26 => 'apachesolr_multilingual_catenateNumbers_spell',
    27 => 'apachesolr_multilingual_catenateAll_index',
    28 => 'apachesolr_multilingual_catenateAll_query',
    29 => 'apachesolr_multilingual_catenateAll_spell',
    30 => 'apachesolr_multilingual_preserveOriginal_index',
    31 => 'apachesolr_multilingual_preserveOriginal_query',
    32 => 'apachesolr_multilingual_preserveOriginal_spell',
    33 => 'apachesolr_multilingual_min_index',
    34 => 'apachesolr_multilingual_min_query',
    35 => 'apachesolr_multilingual_max_index',
    36 => 'apachesolr_multilingual_max_query',
    37 => 'apachesolr_multilingual_ignoreCase_stopwords',
    38 => 'apachesolr_multilingual_ignoreCase_stopwords_spell',
    39 => 'apachesolr_multilingual_ignoreCase_synonyms',
    40 => 'apachesolr_multilingual_lengthMin_spell',
    41 => 'apachesolr_multilingual_lengthMax_spell',
    42 => 'apachesolr_multilingual_minWordSize',
    43 => 'apachesolr_multilingual_minWordSize_spell',
    44 => 'apachesolr_multilingual_minSubwordSize',
    45 => 'apachesolr_multilingual_minSubwordSize_spell',
    46 => 'apachesolr_multilingual_maxSubwordSize',
    47 => 'apachesolr_multilingual_maxSubwordSize_spell',
    48 => 'apachesolr_multilingual_onlyLongestMatch',
    49 => 'apachesolr_multilingual_onlyLongestMatch_spell',
    51 => 'apachesolr_multilingual_lowerCase_spell',
    50 => 'apachesolr_multilingual_lowerCase',
    52 => 'apachesolr_multilingual_lowerCase_edge_n2_kw_text',
    53 => 'apachesolr_multilingual_lowerCase_text_ws',
  );
  $export['variable_realm_list_language'] = $strongarm;

  return $export;
}
