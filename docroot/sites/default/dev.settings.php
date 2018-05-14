<?php

/**
 * @file
 * The DEV settings.php
 */

// Database config.
$databases = array (
  'default' => array (
    'default' => array (
      'database' => 'favrskov',
      'username' => 'drupal',
      'password' => 'drupal',
      'host' => 'mariadb',
      'port' => '',
      'driver' => 'mysql',
      'prefix' => '',
    ),
  ),
);


// Stage File Proxy config - to get images from prod.
$conf["stage_file_proxy_origin"] = "https://www.favrskov.dk";

// Change mail system with the test one to prevent sending not wanted emails.
$conf["mail_system"] = array(
  "default-system" => "TestingMailSystem",
  "webform" => "TestingMailSystem",
);

// Disable core search index.
$conf['search_cron_limit'] = '0';

// Cache override.
$conf['memcache_servers'] = array(
  'memcached:11211' => 'default',
);
$conf['varnish_version'] = 4;
$conf['varnish_control_terminal'] = 'varnish:6082';
$conf['varnish_control_key'] = 'secret';

// Overrides solr url variable used to set solr endpoint.
$conf['apachesolr_environment']['solr']['url'] = 'http://solr:8983/solr/core1';

// Cache configuration.
$conf['cache'] = 0;
$conf['page_compression'] = 0;
$conf['preprocess_css'] = 0;
$conf['preprocess_js'] = 0;
$conf['securepages_enable'] = 0;

// Common settings for all installations.
require 'cache.settings.php';
require 'common.settings.php';
