<?php

/**
 * @file
 * Admin callbacks for the Cludo module.
 */

/**
 * Implements hook_admin_settings() for display admin settings page.
 *
 * @ingroup forms
 * @see cludo_search.helpers.inc
 * @see cludo_search_admin_settings_validate()
 * @see cludo_search_admin_settings_submit()
 */
function cludo_search_admin_settings($form) {

  // Grab current settings.
  $settings = _cludo_search_get_settings();

  // Connection information.
  $form['connection_info'] = array(
    '#title' => t('Connection Information'),
    '#type' => 'fieldset',
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['connection_info']['customerId'] = array(
    '#type' => 'textfield',
    '#title' => t('Customer ID'),
    '#description' => t('Cludo Search customerId value.'),
    '#default_value' => $settings['customerId'],
    '#required' => TRUE,
  );

  $form['connection_info']['engineId'] = array(
    '#type' => 'textfield',
    '#title' => t('Engine ID'),
    '#description' => t('Cludo Search engineId value.'),
    '#default_value' => $settings['engineId'],
    '#required' => TRUE,
  );

  $form['connection_info']['search_page'] = array(
    '#type' => 'textfield',
    '#title' => t('Search page path'),
    '#description' => t('Cludo search page.'),
    '#default_value' => $settings['search_page'],
    '#required' => TRUE,
  );

  $form['additional_customisations'] = array(
    '#title' => t('Additional Customisations'),
    '#type' => 'fieldset',
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['additional_customisations']['disable_autocomplete'] = array(
    '#type' => 'checkbox',
    '#title' => t('Disable Autocomplete'),
    '#description' => t('This will disable autocomplete on the search form'),
    '#default_value' => $settings['disable_autocomplete'],
  );

  $form['additional_customisations']['hide_results_count'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide Results Count'),
    '#description' => t('This will hide the number of results from displaying.'),
    '#default_value' => $settings['hide_results_count'],
  );

  $form['additional_customisations']['hide_did_you_mean'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide the "Did you mean..." suggestions'),
    '#description' => t('This will stop the suggestions from showing'),
    '#default_value' => $settings['hide_did_you_mean'],
  );

  $form['additional_customisations']['hide_search_filters'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide search filters (Overlay Implementation only)'),
    '#description' => t('Hides the search filters.'),
    '#default_value' => $settings['hide_search_filters'],
  );

  $form['#submit'][] = 'cludo_search_admin_settings_submit';

  return system_settings_form($form);
}

/**
 * Implements hook_admin_settings_submit().
 */
function cludo_search_admin_settings_submit($form, &$form_state) {

  $field_keys = _cludo_search_get_field_keys();

  // Save settings.
  foreach ($field_keys as $field) {
    variable_set('cludo_search_' . $field, trim($form_state['values'][$field]));
  }

  // Refresh settings getter.
  $settings = _cludo_search_get_settings(TRUE);

  // Make the 'search_title' setting change take effect right away.
  menu_rebuild();
}
