<?php

namespace Deployer;

$recipe = 'deployer/recipe/base.php';
if (!is_file($recipe) || !is_readable($recipe)) {
  echo "No deployer setup was found.\r\n";
  exit;
}

$config_file = 'deployer/config.yml';
if (!is_file($config_file) || !is_readable($config_file)) {
  echo "Could not find configuration file.\r\nIf this is a new project, you can create one by copying example.config.yml.\r\nIf this is not a new project, you might find a config file in 1password\r\n";
  exit;
}

// Include recipes
require 'deployer/recipe/base.php';

// Load config file
inventory($config_file);
