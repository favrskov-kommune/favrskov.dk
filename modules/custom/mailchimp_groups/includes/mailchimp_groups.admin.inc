<?php

/**
 * @file
 * mailchimp_groups module admin settings.
 */

/**
 * Administrative settings form.
 */
function mailchimp_groups_settings_form() {
  $form['mailchimp_groups_list_id'] = array(
    '#type' => 'textfield',
    '#title' => t('List ID'),
    '#required' => TRUE,
    '#default_value' => variable_get('mailchimp_groups_list_id', ''),
    '#description' => t('List id to use.'),
  );

  $vocabulary = taxonomy_get_vocabularies();
  $vocabularies = array();
  $vocabularies_settings = array();
  foreach ($vocabulary as $item) {
    $key = $item->vid;
    $value = $item->name;
    $vocabularies[$key] = $value;

    $vocabularies_settings['mailchimp_groups_taxonomy_parent_grouping_id_' . $key] = array(
      '#type' => 'textfield',
      '#title' => t('MailChimp parent Interest Group ID. Taxonomy ' . $value),
      '#description' => t('Parent Interest Group id. Leave empty to create groupings form first level terms.'),
      '#default_value' => variable_get('mailchimp_groups_taxonomy_parent_grouping_id_' . $key, ''),
      '#element_validate' => array('element_validate_number'),
      '#states' => array(
        'visible' => array(
          '#edit-mailchimp-groups-taxonomy-vocabularies-' . $key => array('checked' => TRUE),
        ),
      ),
    );

    $vocabularies_settings['mailchimp_groups_taxonomy_description_' . $key] = array(
      '#type' => 'textfield',
      '#title' => t('Interest Group Description. Taxonomy ' . $value),
      '#description' => t('Description of Interest Group'),
      '#default_value' => variable_get('mailchimp_groups_taxonomy_description_' . $key, ''),
      '#states' => array(
        'visible' => array(
          '#edit-mailchimp-groups-taxonomy-vocabularies-' . $key => array('checked' => TRUE),
        ),
      ),
    );
  }

  $form['mailchimp_groups_taxonomy_vocabularies'] = array(
    '#type'             => 'checkboxes',
    '#title'            => t('Taxonomy Vocabularies'),
    '#position'         => 'left',
    '#options'          => $vocabularies,
    '#default_value'    => variable_get('mailchimp_groups_taxonomy_vocabularies', ''),
    '#description'      => t('Check the vocabularies to be used for MaiChimp Groups sync.'),
  );

  $form += $vocabularies_settings;

  return system_settings_form($form);
}