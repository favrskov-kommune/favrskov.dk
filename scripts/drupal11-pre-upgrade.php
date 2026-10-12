<?php

/**
 * @file
 * Prepare an existing Drupal 10 database before installing Drupal 11 code.
 *
 * Run with: drush php:script scripts/drupal11-pre-upgrade.php
 */

use Drupal\symfony_mailer\Entity\MailerTransport;
use Drupal\user\Entity\Role;

$module_handler = \Drupal::moduleHandler();
$config_factory = \Drupal::configFactory();

if ($module_handler->moduleExists('swiftmailer')) {
  if (!$module_handler->moduleExists('symfony_mailer')) {
    // The install hook imports the existing SwiftMailer SMTP transport.
    \Drupal::service('module_installer')->install(['symfony_mailer']);
  }

  $transport_id = $config_factory->get('symfony_mailer.settings')->get('default_transport');
  if (!$transport_id || !MailerTransport::load($transport_id)) {
    throw new \RuntimeException('Configure a Symfony Mailer transport before removing SwiftMailer.');
  }

  // Symfony Mailer handles both its own builders and legacy hook_mail() calls.
  // Remove stale plugin IDs before uninstalling the old mail module.
  $config_factory->getEditable('mailsystem.settings')
    ->set('defaults.sender', 'php_mail')
    ->set('defaults.formatter', 'php_mail')
    ->clear('modules.swiftmailer')
    ->save();

  foreach ($config_factory->listAll('symfony_mailer.mailer_policy.') as $name) {
    $policy = $config_factory->getEditable($name);
    if ($policy->get('configuration.mailer_wrap_and_convert')) {
      $policy->set('configuration.mailer_wrap_and_convert.swiftmailer', FALSE)->save();
    }
  }

  \Drupal::service('module_installer')->uninstall(['swiftmailer']);
  print "Removed SwiftMailer; preserved the Symfony Mailer transport.\n";
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
