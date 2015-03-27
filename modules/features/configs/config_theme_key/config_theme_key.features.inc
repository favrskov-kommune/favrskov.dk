<?php
/**
 * @file
 * config_theme_key.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function config_theme_key_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "elysia_cron" && $api == "default_elysia_cron_rules") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_themekey_features_rule_chain().
 */
function config_theme_key_themekey_features_rule_chain() {
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
      'value' => 'node/%/%',
      'theme' => 'seven',
      'enabled' => 1,
      'wildcards' => array(),
      'module' => 'config_theme_key',
    ),
    'string' => '"drupal:path = node/%/% >>> seven"',
    'childs' => array(),
  ),
  1 => array(
    'rule' => array(
      'property' => 'user:role',
      'operator' => '=',
      'value' => 'anonymous user',
      'theme' => 'favrskovtheme',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'config_theme_key',
    ),
    'string' => '"user:role = anonymous user >>> favrskovtheme"',
    'childs' => array(),
  ),
  2 => array(
    'rule' => array(
      'property' => 'system:query_param',
      'operator' => '*',
      'value' => 'theme=favrskovtheme',
      'theme' => 'favrskovtheme',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'config_theme_key',
    ),
    'string' => '"system:query_param * theme=favrskovtheme >>> favrskovtheme"',
    'childs' => array(),
  ),
  3 => array(
    'rule' => array(
      'property' => 'drupal:path_is_admin',
      'operator' => '=',
      'value' => 'true',
      'theme' => 'seven',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'config_theme_key',
    ),
    'string' => '"drupal:path_is_admin = true >>> seven"',
    'childs' => array(),
  ),
);

return $rules;
}
