<?php

/**
 * @file
 * The PRODUCTION settings.php
 */

// Database config.
$databases = array (
  'default' => array (
    'default' => array (
      'database' => 'favrskov',
      'username' => 'favrskov',
      'password' => '2t8rSUAZ7tvQ',
      'host' => 'localhost',
      'port' => '',
      'driver' => 'mysql',
      'prefix' => '',
    ),
  ),
);

$base_url = 'https://'.$_SERVER['HTTP_HOST'];

// Disable core search index.
$conf['search_cron_limit'] = 0;
$conf['apachesolr_cron_limit'] = 25;

// Common settings for all installations - Always after require cache.settings.php!
require('cache.settings.php');
require('common.settings.php');

// Set HTTPS to TRUE.
$conf['https'] = TRUE;

$conf['simplesamlphp_auth_installdir'] = '/var/www/vsites/favrskov_site/simplesamlphp-1.13.2';
