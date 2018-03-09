<?php

/**
 * @file
 * Cache backend.
 */

// Memcached.
$conf['memcache_extension'] = 'memcached';
$conf['cache_backends'] = !empty($conf['cache_backends']) ? $conf['cache_backends'] : array();
$conf['cache_backends'][] = 'profiles/favrskov/modules/contrib/memcache/memcache.inc';
$conf['lock_inc'] = 'profiles/favrskov/modules/contrib/memcache/memcache-lock.inc';
$conf['memcache_stampede_protection'] = TRUE;
$conf['cache_default_class'] = 'MemCacheDrupal';
$conf['cache_class_cache_form'] = 'DrupalDatabaseCache';
$conf['memcache_servers'] = array(
  '127.0.0.1:11211' => 'default',
);
$conf['memcache_key_prefix'] = $databases["default"]["default"]["database"];

// Varnish.
$conf['cache_backends'][] = 'profiles/favrskov/modules/contrib/varnish/varnish.cache.inc';
$conf['cache_class_cache_page'] = 'VarnishCache';
