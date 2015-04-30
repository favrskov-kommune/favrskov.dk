<?php
/**
 * @file
 * views_administration_content_referenced_by.features.inc
 */

/**
 * Implements hook_views_api().
 */
function views_administration_content_referenced_by_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_themekey_features_rule_chain().
 */
function views_administration_content_referenced_by_themekey_features_rule_chain() {
if (!defined('THEMEKEY_PAGECACHE_UNSUPPORTED')) {
    define('THEMEKEY_PAGECACHE_UNSUPPORTED', 0);
    define('THEMEKEY_PAGECACHE_SUPPORTED', 1);
    define('THEMEKEY_PAGECACHE_TIMEBASED', 2);
  }
$rules = array(
  0 => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'node/%/faq-referenced-by',
      'theme' => 'seven',
      'enabled' => 1,
      'wildcards' => array(),
      'module' => 'views_administration_content_referenced_by',
    ),
    'string' => '"drupal:path = node/%/faq-referenced-by >>> seven"',
    'childs' => array(),
  ),
  1 => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'node/%/factbox-referenced-by',
      'theme' => 'seven',
      'enabled' => 1,
      'wildcards' => array(),
      'module' => 'views_administration_content_referenced_by',
    ),
    'string' => '"drupal:path = node/%/factbox-referenced-by >>> seven"',
    'childs' => array(),
  ),
  2 => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'node/%/selfservice-referenced-by',
      'theme' => 'seven',
      'enabled' => 1,
      'wildcards' => array(),
      'module' => 'views_administration_content_referenced_by',
    ),
    'string' => '"drupal:path = node/%/selfservice-referenced-by >>> seven"',
    'childs' => array(),
  ),
  3 => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'node/%/bannerlink-referenced-by',
      'theme' => 'seven',
      'enabled' => 1,
      'wildcards' => array(),
      'module' => 'views_administration_content_referenced_by',
    ),
    'string' => '"drupal:path = node/%/bannerlink-referenced-by >>> seven"',
    'childs' => array(),
  ),
  4 => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'node/%/phonebook-referenced-by',
      'theme' => 'seven',
      'enabled' => 1,
      'wildcards' => array(),
      'module' => 'views_administration_content_referenced_by',
    ),
    'string' => '"drupal:path = node/%/phonebook-referenced-by >>> seven"',
    'childs' => array(),
  ),
  5 => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'node/%/borgerdk-referenced-by',
      'theme' => 'seven',
      'enabled' => 1,
      'wildcards' => array(),
      'module' => 'views_administration_content_referenced_by',
    ),
    'string' => '"drupal:path = node/%/borgerdk-referenced-by >>> seven"',
    'childs' => array(),
  ),
);

return $rules;
}
