<?php
/**
 * @file
 * config_domain.domains.inc
 */

/**
 * Implements hook_domain_default_domains().
 */
function config_domain_domain_default_domains() {
  $domains = array();
  $domains['wipe-domain-tables'] = 'wipe-domain-tables';
  $domains['designguiden_favrskov_dk'] = array(
    'subdomain' => 'designguiden.favrskov.dk',
    'sitename' => 'Designguiden',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 2,
    'is_default' => 0,
    'machine_name' => 'designguiden_favrskov_dk',
  );
  $domains['favrskov_dk'] = array(
    'subdomain' => 'favrskov.dk',
    'sitename' => 'Favrskov Kommune',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => -1,
    'is_default' => 1,
    'machine_name' => 'favrskov_dk',
  );
  $domains['naturportalen_favrskov_dk'] = array(
    'subdomain' => 'naturportalen.favrskov.dk',
    'sitename' => 'Naturportalen',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 1,
    'is_default' => 0,
    'machine_name' => 'naturportalen_favrskov_dk',
  );

  return $domains;
}
