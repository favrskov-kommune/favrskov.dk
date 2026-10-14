<?php

/**
 * @file
 * Prepare an existing Drupal 10 database before installing Drupal 11 code.
 *
 * Run with: drush php:script scripts/drupal11-pre-upgrade.php
 */

use Drupal\user\Entity\Role;

$config_factory = \Drupal::configFactory();

if (array_key_exists('swiftmailer', $config_factory->get('core.extension')->get('module') ?? [])) {
  throw new \RuntimeException('Deploy feature/FAVRDK-447 and complete its database updates and configuration import before preparing Drupal 11. SwiftMailer is still installed.');
}

if (\Drupal::moduleHandler()->moduleExists('file_delete_ui')) {
  // Core provides this permission and file operations from Drupal 10.1 onward.
  $roles = array_filter(Role::loadMultiple(), static fn (Role $role) => $role->hasPermission('delete any file'));
  \Drupal::service('module_installer')->uninstall(['file_delete_ui']);
  foreach ($roles as $role) {
    $role->grantPermission('delete any file')->save();
  }
  print "Removed File Delete UI; preserved core file deletion permissions.\n";
}

$config_factory->getEditable('layout_builder_modal.settings')
  ->set('theme_display', 'claro')
  ->save();

print "Drupal 11 prerequisites completed.\n";
