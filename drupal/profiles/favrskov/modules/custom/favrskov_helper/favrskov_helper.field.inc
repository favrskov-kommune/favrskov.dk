<?php

/**
 * @file
 * Field API integration for the favrskov_helper module.
 */

/**
 * Implements hook_field_formatter_info().
 */
function favrskov_helper_field_formatter_info() {
  $info['favrskov_file_download_link'] = [
    'label' => t('Favrskov Download link'),
    'description' => t('Displays a link that will force the browser to download the file.'),
    'field types' => ['file', 'image'],
    'settings' => [
      'text' => '[file:name]',
    ],
  ];
  $info['favrskov_banner_iframe'] = [
    'label' => t('Favrskov Banner Iframe'),
    'description' => t('Renders an Iframe with link to custom page, that has animates slide'),
    'field types' => ['file', 'image'],
  ];

  return $info;
}

/**
 * Implements hook_field_formatter_settings_form().
 */
function favrskov_helper_field_formatter_settings_form($field, $instance, $view_mode, $form, &$form_state) {
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];
  $element = [];

  if ($display['type'] == 'favrskov_file_download_link') {
    $element['text'] = [
      '#type' => 'textfield',
      '#title' => t('Link text'),
      '#description' => t('This field support tokens.'),
      '#default_value' => $settings['text'],
      '#required' => TRUE,
    ];
  }

  return $element;
}

/**
 * Implements hook_field_formatter_view().
 */
function favrskov_helper_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  $element = [];
  $settings = $display['settings'];

  switch ($display['type']) {
    case 'favrskov_file_download_link':
      foreach ($items as $delta => $item) {
        $file = (object) $item;
        $element[$delta] = [
          '#theme' => 'file_entity_favrskov_download_link',
          '#file' => $file,
          '#text' => $settings['text'],
        ];
      }
      break;
    case 'favrskov_banner_iframe':
      foreach ($items as $delta => $item) {
        $file = (object) $item;
        $element[$delta] = [
          '#theme' => 'file_entity_favrskov_banner_iframe',
          '#fid' => $file->fid,
        ];
      }
      break;
  }

  return $element;
}
