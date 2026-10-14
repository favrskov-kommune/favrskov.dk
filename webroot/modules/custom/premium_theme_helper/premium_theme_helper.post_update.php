<?php

/**
 * @file
 * Post-update functions for the Premium theme helper module.
 */

use Drupal\Core\Utility\UpdateException;
use Drupal\symfony_mailer\Entity\MailerTransport;

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
