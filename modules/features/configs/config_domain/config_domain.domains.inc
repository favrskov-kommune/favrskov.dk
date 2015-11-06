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
  $domains['cykelkommune_favrskov_dk'] = array(
    'subdomain' => 'cykelkommune.favrskov.dk',
    'sitename' => 'Cykelkommune',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 3,
    'is_default' => 0,
    'machine_name' => 'cykelkommune_favrskov_dk',
  );
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
  $domains['oplev_favrskov_dk'] = array(
    'subdomain' => 'oplev.favrskov.dk',
    'sitename' => 'Oplev',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 1,
    'is_default' => 0,
    'machine_name' => 'oplev_favrskov_dk',
  );

  return $domains;
}
