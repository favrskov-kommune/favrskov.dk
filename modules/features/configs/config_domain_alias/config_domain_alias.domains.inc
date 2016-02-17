<?php
/**
 * @file
 * config_domain_alias.domains.inc
 */

/**
 * Implements hook_domain_alias_default_aliases().
 */
function config_domain_alias_domain_alias_default_aliases() {
  $domain_aliases = array();
  $domain_aliases['wipe-domain-tables'] = 'wipe-domain-tables';
  $domain_aliases['cykelkommune_favrskov_dk'] = array(
    'www.cykelkommune.favrskov.dk' => array(
      'pattern' => 'www.cykelkommune.favrskov.dk',
      'redirect' => 0,
      'machine_name' => 'cykelkommune_favrskov_dk',
    ),
  );
  $domain_aliases['designguiden_favrskov_dk'] = array(
    'www.designguiden.favrskov.dk' => array(
      'pattern' => 'www.designguiden.favrskov.dk',
      'redirect' => 0,
      'machine_name' => 'designguiden_favrskov_dk',
    ),
  );
  $domain_aliases['favrskov_dk'] = array();
  $domain_aliases['oplev_favrskov_dk'] = array(
    'www.oplev.favrskov.dk' => array(
      'pattern' => 'www.oplev.favrskov.dk',
      'redirect' => 0,
      'machine_name' => 'oplev_favrskov_dk',
    ),
  );

  return $domain_aliases;
}
