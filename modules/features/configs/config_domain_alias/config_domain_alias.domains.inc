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
  $domain_aliases['designguiden_favrskov_dk'] = array(
    'www.designguiden.favrskov.dk' => array(
      'pattern' => 'www.designguiden.favrskov.dk',
      'redirect' => 0,
      'machine_name' => 'designguiden_favrskov_dk',
    ),
  );
  $domain_aliases['favrskov_dk'] = array();

  return $domain_aliases;
}
