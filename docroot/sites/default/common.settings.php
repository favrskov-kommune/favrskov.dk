<?php

/**
 * @file
 * The common settings.
 */
 
// Handle SSL termination.
if (isset($_SERVER['HTTP_X_FORWARDED_PROTO']) && $_SERVER['HTTP_X_FORWARDED_PROTO'] == 'https') {
  $_SERVER['HTTPS'] = 'on';
}

// SALT
$drupal_hash_salt = 'lTn_2CG2Rzm7im-D50KpcejQx-mkvsV3JLmbUSDeZUE';

// Add the domain setup routine.
include_once DRUPAL_ROOT . '/profiles/favrskov/modules/contrib/domain/settings.inc';
