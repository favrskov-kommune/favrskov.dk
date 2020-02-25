<?php

/**
 * @file
 * Administrative configuration.
 */

/**
 * {@inheritdoc}
 *
 * @see basic_auth_menu()
 *
 * @internal
 */
function basic_auth_configuration_form(array $form, array &$form_state) {
  $form_state += ['#items' => basic_auth_get_entries()];

  // Base structure for a button with AJAX callback.
  $ajax_button = [
    '#type' => 'button',
    '#limit_validation_errors' => [],
    '#ajax' => [
      'callback' => 'basic_auth_configuration_form_add_new_entry',
      'wrapper' => __FUNCTION__,
    ],
  ];

  // Add wrapper to put reloaded form into it.
  $form['#prefix'] = '<div id="' . __FUNCTION__ . '">';
  $form['#suffix'] = '</div>';

  $form['description'] = [
    '#type' => 'item',
    '#description' => t('WARNING! Original callback function and arguments, for checking an access, will be overridden for a route with enabled basic HTTP authentication. But do not panic, the original check for access will be done in case, if user have passed basic HTTP authentication.'),
  ];

  $form['items'] = [
    '#tree' => TRUE,
    '#type' => 'vertical_tabs',
  ];

  foreach ($form_state['#items'] as $i => $value) {
    // With any "empty" value we can remove the item.
    if (empty($value)) {
      unset($form['items'][$i]);
    }
    else {
      // Base name for HTML inputs.
      $name = "items[$i]";

      // Set predefined values if we have a deal with new item.
      if (is_bool($value)) {
        $value = (object) [
          'id' => 0,
          'enabled' => TRUE,
          'password' => '',
        ];
      }

      $item = [
        '#type' => 'fieldset',
        '#title' => t('Item #@i', ['@i' => $i + 1]),
      ];

      $item['id'] = [
        '#type' => 'hidden',
        '#value' => $value->id,
      ];

      $item['enabled'] = [
        '#type' => 'checkbox',
        '#title' => t('Enable'),
        '#selector' => ':input[name*="' . $name . '[enabled]"]',
        '#description' => t('You can leave configuration untouchable but authentication will be disabled.'),
        '#default_value' => $value->enabled,
      ];

      foreach ([
        'path' => [
          '#title' => t('Path to restrict'),
        ],
        'username' => [
          '#title' => t('Username'),
        ],
        'password' => [
          '#type' => 'password',
          '#title' => t('Password'),
          '#attributes' => [
            'value' => $value->password,
          ],
        ],
        'remove' => $ajax_button + [
          // This value MUST BE UNIQUE for every row. Otherwise we always will
          // have the button from last row in $form_state['triggering_element'].
          '#name' => $name . '[remove]',
          '#value' => t('Remove'),
        ],
      ] as $field => $data) {
        $item[$field] = $data + [
          '#type' => 'textfield',
          '#default_value' => isset($value->{$field}) ? $value->{$field} : '',
          '#states' => [
            'disabled' => [$item['enabled']['#selector'] => ['checked' => FALSE]],
            'required' => [$item['enabled']['#selector'] => ['checked' => TRUE]],
          ],
        ];
      }

      $form['items'][$i] = $item;
    }
  }

  if (empty(element_children($form['items'])) && empty($form_state['#remove'])) {
    $form['items'][] = [
      '#markup' => t('You have no added items.'),
    ];
  }
  else {
    $form['actions']['save'] = [
      '#type' => 'submit',
      '#value' => t('Save'),
    ];
  }

  $form['new_item'] = $ajax_button + [
    '#value' => t('Add new item'),
  ];

  $form['#attached']['js'][] = drupal_get_path('module', 'basic_auth') . '/js/basic_auth.admin.js';

  return $form;
}

/**
 * {@inheritdoc}
 *
 * @see basic_auth_configuration_form()
 *
 * @internal
 */
function basic_auth_configuration_form_validate(array &$form, array &$form_state) {
  if (!empty($form_state['values']['items'])) {
    $items =& $form_state['values']['items'];
    unset($items['items__active_tab']);

    foreach ($items as $i => $item) {
      if (empty($item['enabled'])) {
        continue;
      }

      $options = [
        '@i' => $i + 1,
      ];

      if (empty($item['path'])) {
        form_error($form['items'][$i]['path'], t('#@i: Path is required for enabled items.', $options));
        break;
      }

      if (!basic_auth_path_is_valid($item['path'])) {
        $options['%path'] = $item['path'];

        form_error($form['items'][$i]['path'], t('#@i: The %path path is not registered in system.', $options));
        break;
      }

      if (empty($item['username'])) {
        form_error($form['items'][$i]['username'], t('#@i: Username is required.', $options));
        break;
      }

      if (empty($item['password'])) {
        form_error($form['items'][$i]['password'], t('#@i: Password is required.', $options));
        break;
      }
    }
  }
}

/**
 * {@inheritdoc}
 *
 * @see basic_auth_configuration_form()
 *
 * @internal
 */
function basic_auth_configuration_form_submit(array $form, array &$form_state) {
  if (!empty($form_state['#remove'])) {
    db_delete('basic_auth')
      ->condition('id', $form_state['#remove'])
      ->execute();
  }

  foreach ($form_state['values']['items'] as $item) {
    drupal_write_record('basic_auth', $item, empty($item['id']) ? [] : ['id']);
  }

  menu_rebuild();
}

/**
 * {@inheritdoc}
 *
 * @see basic_auth_configuration_form()
 *
 * @internal
 */
function basic_auth_configuration_form_add_new_entry(array $form, array &$form_state) {
  // @example name="items[12][remove]"
  // @example name="new_item"
  $parents = $form_state['triggering_element']['#parents'];

  switch (array_pop($parents)) {
    case 'remove':
      $item = drupal_array_get_nested_value($form_state['values'], $parents);

      // Collect items for removing.
      if (!empty($item['id'])) {
        $form_state['#remove'][] = $item['id'];
      }

      // Remove an item from the page.
      $form_state['#items'][end($parents)] = FALSE;
      break;

    case 'new_item':
      $form_state['#items'][] = TRUE;
      break;
  }

  return drupal_rebuild_form($form['#form_id'], $form_state, $form);
}
