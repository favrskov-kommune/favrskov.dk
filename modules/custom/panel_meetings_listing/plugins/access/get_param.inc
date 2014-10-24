<?php
/**
 * @file
 * Plugin to provide access control based upon a get parameter.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t("Get param: Exists"),
  'description' => t('Control access by the  get parameter.'),
  'callback' => 'panel_meetings_listing_get_param',
  'settings form' => 'panel_meetings_listing_get_param_settings',
  'settings form submit' => 'panel_meetings_listing_get_param_settings_submit',
  'summary' => 'panel_meetings_listing_get_param_summary',
);

/**
 * Settings form for the  access plugin.
 */
function panel_meetings_listing_get_param_settings($form, &$form_state, $conf) {

  $form['settings']['name'] = array(
    '#title' => t('Get parameter name'),
    '#type' => 'textfield',
    '#default_value' => $conf['name'],
    '#required' => TRUE,
  );

  return $form;
}

/**
 * Submit function for the access plugins settings.
 *
 */
function panel_meetings_listing_get_param_settings_submit($form, $form_state) {
  $form_state['conf']['name'] = $form_state['values']['settings']['name'];
}

/**
 * Check for access.
 */
function panel_meetings_listing_get_param($conf, $context) {
  if (!isset($conf['name'])) {
    return FALSE;
  }
  $name = filter_xss($conf['name']);

  return isset($_GET[$name]);
}

/**
 * Provide a summary description based upon the checked terms.
 */
function panel_meetings_listing_get_param_summary($conf, $context) {

  return t('Get parameter "@name" exists', array(
    '@name' => $conf['name'],
  ));
}