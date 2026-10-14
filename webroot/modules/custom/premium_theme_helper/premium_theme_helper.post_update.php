<?php

/**
 * @file
 * Post-update functions for the Premium theme helper module.
 */

use Drupal\Core\Utility\UpdateException;
use Drupal\symfony_mailer\Entity\MailerTransport;
use Drupal\user\Entity\Role;

/**
 * Replace File Delete UI with core file deletion, retaining role permissions.
 */
function premium_theme_helper_post_update_replace_file_delete_ui(&$sandbox = NULL) {
  if (\Drupal::moduleHandler()->moduleExists('file_delete_ui')) {
    // Drupal core provides file deletion and this permission from version 10.1.
    $roles = array_filter(Role::loadMultiple(), static fn (Role $role) => $role->hasPermission('delete any file'));
    $role_ids = array_keys($roles);
    \Drupal::service('module_installer')->uninstall(['file_delete_ui']);

    // Uninstall removes permissions declared by the module. Restore the core
    // equivalent on the affected roles after reloading their current settings.
    foreach (Role::loadMultiple($role_ids) as $role) {
      $role->grantPermission('delete any file')->save();
    }
  }

  return t('File Delete UI has been uninstalled; core file deletion permissions have been retained.');
}

/**
 * Use Claro for Layout Builder modals before upgrading to Drupal 11.
 */
function premium_theme_helper_post_update_use_claro_for_layout_builder_modal(&$sandbox = NULL) {
  \Drupal::configFactory()->getEditable('layout_builder_modal.settings')
    ->set('theme_display', 'claro')
    ->save();

  return t('Layout Builder modals now use Claro.');
}

/**
 * Switch mail delivery to Symfony Mailer before removing SwiftMailer code.
 */
function premium_theme_helper_post_update_replace_swiftmailer(&$sandbox = NULL) {
  if (!\Drupal::moduleHandler()->moduleExists('symfony_mailer')) {
    // Installing outside configuration import preserves the SwiftMailer SMTP
    // settings through Symfony Mailer's install hook.
    \Drupal::service('module_installer')->install(['symfony_mailer']);
  }

  $config_factory = \Drupal::configFactory();
  $transport_id = $config_factory->get('symfony_mailer.settings')->get('default_transport');
  if (!$transport_id || !MailerTransport::load($transport_id)) {
    throw new UpdateException('Configure a Symfony Mailer transport before removing SwiftMailer.');
  }

  // Symfony Mailer also handles legacy hook_mail() calls. Clear references to
  // the old mail plugins before uninstalling their module.
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

  if (\Drupal::moduleHandler()->moduleExists('swiftmailer')) {
    \Drupal::service('module_installer')->uninstall(['swiftmailer']);
  }

  return t('Mail delivery now uses Symfony Mailer; SwiftMailer has been uninstalled.');
}
