<?php
/**
 * @file
 * config_domain_theme.domains.inc
 */

/**
 * Implements hook_domain_theme_default_themes().
 */
function config_domain_theme_domain_theme_default_themes() {
  $domain_themes = array();
  $domain_themes['wipe-domain-tables'] = 'wipe-domain-tables';
  $domain_themes['designguiden_favrskov_dk'] = array();
  $domain_themes['favrskov_dk'] = array();
  $domain_themes['naturportalen_favrskov_dk'] = array();

  return $domain_themes;
}
