<?php

/**
 * @file
 * config_mailchimp module admin settings.
 */

/**
 * Return the MailChimp settings form.
 */
function config_mailchimp_settings_form($form, $form_state) {
  $form['mailchimp_from_email'] = array(
    '#type' => 'textfield',
    '#title' => t('From email'),
    '#required' => TRUE,
    '#default_value' => variable_get('mailchimp_from_email', ''),
    '#description' => t('The Email to send from.'),
  );

  $form['mailchimp_from_name'] = array(
    '#type' => 'textfield',
    '#title' => t('From name'),
    '#required' => TRUE,
    '#default_value' => variable_get('mailchimp_from_name', ''),
    '#description' => t('The Name to send from.'),
  );

  $form['mailchimp_list_id'] = array(
    '#type' => 'textfield',
    '#title' => t('List id'),
    '#required' => TRUE,
    '#default_value' => variable_get('mailchimp_list_id', ''),
    '#description' => t('List id to use.'),
  );

  $form['mailchimp_template_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Template id'),
    '#required' => TRUE,
    '#default_value' => variable_get('mailchimp_template_id', ''),
    '#description' => t('Template id to use.'),
  );

  return system_settings_form($form);
}