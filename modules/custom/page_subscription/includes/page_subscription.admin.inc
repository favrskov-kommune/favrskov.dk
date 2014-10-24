<?php

/**
 * @file
 * page_subscription module admin settings.
 */

/**
 * Administrative settings form.
 */
function page_subscription_settings_form() {
  $form['page_subscription_list_id'] = array(
    '#type' => 'textfield',
    '#title' => t('List ID'),
    '#required' => TRUE,
    '#default_value' => variable_get('page_subscription_list_id', ''),
    '#description' => t('List id to use.'),
  );

  $form['page_subscription_template_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Template ID'),
    '#required' => TRUE,
    '#default_value' => variable_get('page_subscription_template_id', ''),
    '#description' => t('Template id to use.'),
  );

  $form['page_subscription_jobs_subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Jobs E-mail subject'),
    '#required' => TRUE,
    '#default_value' => variable_get('page_subscription_jobs_subject', ''),
  );

  $form['page_subscription_jobs_intro'] = array(
    '#type' => 'textarea',
    '#title' => t('Jobs E-mail body intro text'),
    '#required' => TRUE,
    '#default_value' => variable_get('page_subscription_jobs_intro', ''),
  );

  $form['page_subscription_meetings_subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Meetings E-mail subject'),
    '#required' => TRUE,
    '#default_value' => variable_get('page_subscription_meetings_subject', ''),
  );

  $form['page_subscription_meetings_intro'] = array(
    '#type' => 'textarea',
    '#title' => t('Meetings E-mail body intro text'),
    '#required' => TRUE,
    '#default_value' => variable_get('page_subscription_meetings_intro', ''),
  );

  $form['page_subscription_hearings_subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Hearings E-mail subject'),
    '#required' => TRUE,
    '#default_value' => variable_get('page_subscription_hearings_subject', ''),
  );

  $form['page_subscription_hearings_intro'] = array(
    '#type' => 'textarea',
    '#title' => t('Hearings E-mail body intro text'),
    '#required' => TRUE,
    '#default_value' => variable_get('page_subscription_hearings_intro', ''),
  );

  return system_settings_form($form);
}