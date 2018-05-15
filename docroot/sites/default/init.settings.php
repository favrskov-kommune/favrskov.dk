<?php

/**
 * @file
 * All settings required before env.settings.php file.
 */

/**
 * Define the different environments in the projects.
 */
define('PROD_ENV', 'prod');
define('DEV_ENV', 'dev');
define('STAGE_ENV', 'stage');
define('CI_ENV', 'ci');

// Available environments.
$available_env = array(
  PROD_ENV,
  DEV_ENV,
  STAGE_ENV,
  CI_ENV,
);
