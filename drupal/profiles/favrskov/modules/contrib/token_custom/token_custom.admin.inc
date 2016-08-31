<?php

/**
 * @file
 * Page callbacks and admin forms of the token_custom module.
 */

/**
 * Callback for the token_custom admin list page.
 *
 * @return string
 *   The type page HTML.
 */
function token_custom_type_list_page() {

  $variables = array();
  $types = token_custom_type_load_multiple();

  foreach ($types as $type) {
    $row = array(
      $type->name,
      $type->machine_name,
      $type->description,
    );

    // Do not show edit/delete links for the custom type.
    if ($type->machine_name != TOKEN_CUSTOM_DEFAULT_TYPE) {
      $path_base = 'admin/structure/token-custom/type/' . $type->machine_name . '/';
      $row[] = l(t('Edit'), $path_base . 'edit') . ' / ' . l(t('Delete'), $path_base . 'delete');
    }
    else {
      $row[] = '';
    }

    $variables['rows'][] = $row;
  }

  $variables['header'] = array(
    t('Name'),
    t('Machine name'),
    t('Description'), '');

  return theme('table', $variables);
}


/**
 * Callback for the token_custom token list page.
 *
 * @return string
 *   The token list page HTML.
 */
function token_custom_list_page() {
  // Load all out tokens.
  $tokens = token_custom_load_multiple();
  $token_admin = user_access('administer custom tokens');
  $token_info = token_info();
  $variables = array();

  // Build the table rows.
  foreach ($tokens as $token) {
    // Get demo value if token doesn't need external data.
    if (empty($token_info['types'][$token->type]['needs-data'])) {
      $value = token_replace('[' . $token->type . ':' . $token->machine_name . ']');
    }
    else {
      $value = t('Demo value not available');
    }

    $row = array(
      $token->name,
      $token->machine_name,
      $token->type,
      $token->description,
      $value,
    );

    // Add the edit/delete links if the user has the right permissions.
    if ($token_admin) {
      $row[] = l(t('Edit'), 'admin/structure/token-custom/' . $token->machine_name . '/edit')
             . ' / '
             . l(t('Delete'), 'admin/structure/token-custom/' . $token->machine_name . '/delete');
    }

    $variables['rows'][] = $row;
  }

  if (empty($variables['rows'])) {
    $variables['rows'][] = array(
      array(
        'data' => t('No custom tokens available.'),
        'colspan' => array($token_admin ? 6 : 5),
      ),
    );
  }

  $variables['header'] = array(
    t('Name'),
    t('Machine name'),
    t('Type'),
    t('Description'),
    t('Demo (if available)'),
  );

  // Add extra header cell if edit/delete links were printed.
  if ($token_admin) {
    $variables['header'][] = "";
  }

  return theme('table', $variables);
}


/**
 * The add/edit token form
 *
 * @param array $form
 *   The form array.
 * @param array $form_state
 *   The form state.
 * @param string $op
 *   Either 'add' or 'edit', according to the operation performed.
 * @param object $token
 *   If $op is 'edit', $token contains the loaded token to edit.
 *
 * @return array
 *   The token edit/add form.
 */
function token_custom_edit_form($form, &$form_state, $op, $token = NULL) {

  $form = array();

  $form_state['token_custom']['op'] = $op;
  $form_state['token_custom']['token'] = $token;

  $form['name'] = array(
    '#type'   => 'textfield',
    '#title' => t('Token name'),
    '#description' => t("The token's readable name"),
    '#default_value' => $token ? $token->name : NULL,
    '#maxlength' => 128,
    '#required' => TRUE,
  );

  $form['machine_name'] = array(
    '#type'       => 'machine_name',
    '#title'     => t('Token machine name'),
    '#description'    => t('A unique machine-readable name for this token. It must only contain lowercase letters, numbers, and underscores.'),
    '#default_value' => $token ? $token->machine_name : NULL,
    '#maxlength' => 32,
    '#disabled'   => (bool) $token,
    '#machine_name'  => array(
      'exists'  =>  'token_custom_load',
      'replace' =>  '-',
      'replace_pattern' => '[^a-z0-9\-]+',
    ),
  );

  $form['description'] = array(
    '#type'   => 'textfield',
    '#title' => t('Token description'),
    '#description' => t("The token's description that will appear in the token list"),
    '#default_value' => $token ? $token->description : NULL,
    '#maxlength'      => 255,
    '#required' => TRUE,
  );

  $token_info = token_info();
  $options = array('custom' => 'Custom Token');
  foreach ($token_info['types'] as $type => $info) {
    $options[$type] = $info['name'];
    if (!empty($info['needs-data'])) {
      $options[$type] .= ' [needs: ' . $info['needs-data'] . ']';
    }
  }

  $form['type'] = array(
    '#type'   => 'select',
    '#title' => 'Token type',
    '#description' => t('The token type determines the availability of the token according to the data in the $data array (ex. a token of type <em>node</em> will need $data[node].'),
    '#options' => $options,
    '#maxlength' => 128,
    '#default_value' => ($token && !empty($token->type)) ? $token->type : 0,
  );

  $form['content'] = array(
    '#type' => 'text_format',
    '#title' => t('Content'),
    '#description' => t('Enter the content that will be replaced with this token.'),
    '#default_value' => isset($token->content) ? $token->content : '',
    '#format' => isset($token->format) ? $token->format : filter_default_format(),
  );

  // Add help text if PHP filter is available.
  if (module_exists('php')) {
    $ref = l('token_replace()', 'http://api.drupal.org/api/drupal/includes--token.inc/function/token_replace/7',
             array('attributes' => array('target' => '_blank')));
    $form['content']['#description']
      .= '<br />'
      .  t('PHP Filter : You will have access to all the arguments of !link (ex : $data[\'node\'] for node token type, $options). Be sure to carefully read the documentation regarding the security implications of using the php input filter.',
           array('!link' => $ref)
         );
  }

  $form['save'] = array(
    '#type'   => 'submit',
    '#value' => t('Save'),
  );

  if ($op == 'edit') {
    $form['delete'] = array(
      '#type'   => 'submit',
      '#value' => t('Delete'),
    );
  }


  return $form;
}


/**
 * The add/edit token type form
 *
 * @param array $form
 *   The token type edit form
 * @param array $form_state
 *   The form state
 * @param string $op
 *   Either 'add' or 'edit', according to the operation performed
 * @param object $type
 *   If $op is 'edit', $type contains the loaded token type to edit.
 *
 * @return array
 *   The complete form array
 */
function token_custom_type_edit_form($form, &$form_state, $op, $type = NULL) {

  $form = array();

  $form_state['token_custom']['op'] = $op;
  $form_state['token_custom']['type'] = $type;

  $form['name'] = array(
    '#type'   => 'textfield',
    '#title' => t("Token type's name"),
    '#description' => t("The token types's readable name"),
    '#default_value' => $type ? $type->name : NULL,
    '#maxlength' => 255,
    '#required' => TRUE,
  );

  $form['machine_name'] = array(
    '#type'       => 'machine_name',
    '#title'     => t("Token type's machine name"),
    '#description'    => t('A unique machine-readable name for this token. It must only contain lowercase letters, numbers, and underscores.'),
    '#default_value' => $type ? $type->machine_name : NULL,
    '#maxlength' => 32,
    '#disabled'   => (bool) $type,
    '#machine_name'  => array(
      'exists'  =>  'token_custom_type_load',
      'replace' =>  '-',
      'replace_pattern' => '[^a-z0-9\-]+',
    ),
  );

  $form['description'] = array(
    '#type'   => 'textfield',
    '#title' => t('Token description'),
    '#description' => t("The token type's description."),
    '#default_value' => $type ? $type->description : NULL,
    '#required' => TRUE,
  );

  $form['save'] = array(
    '#type'   => 'submit',
    '#value' => t('Save'),
  );

  if ($op == 'edit') {
    $form['delete'] = array(
      '#type'   => 'submit',
      '#value' => t('Delete'),
    );
  }

  return $form;
}


/**
 * Submit callback for token_custom_type_edit_form.
 *
 * @param array $form
 *   The form array.
 * @param array $form_state
 *   The submited form state.
 */
function token_custom_type_edit_form_submit($form, &$form_state) {
  if ($form_state['token_custom']['op'] == 'edit'
      && $form_state['triggering_element']['#id'] == 'edit-delete') {
    $form_state['redirect'] = 'admin/structure/token-custom/type/'
                            . $form_state['values']['machine_name'] . '/delete';
  }
  else {
    $type = array(
      'name' => $form_state['values']['name'],
      'machine_name' => $form_state['values']['machine_name'],
      'description' => $form_state['values']['description'],
    );

    if (!token_custom_type_save($type)) {
      drupal_set_message(
        t('There was a problem saving token type <em>@machine_name</em>. Please contact the site administrator.',
          array('@machine_name' => $form_state['values']['machine_name'])),
        'error'
      );
    }
    else {
      drupal_set_message(
        t('Token type <em>@machine_name</em> saved.',
          array('@machine_name' => $form_state['values']['machine_name']))
      );
    }

    $form_state['redirect'] = 'admin/structure/token-custom/type';
  }
}


/**
 * Submit handler for the custom token admin form.
 *
 * Tries to save the added/edited token.
 *
 * @param array $form
 *   The form array.
 * @param array $form_state
 *   The form state array.
 */
function token_custom_edit_form_submit($form, &$form_state) {

  if ($form_state['token_custom']['op'] == 'edit'
    && $form_state['triggering_element']['#id'] == 'edit-delete') {
    $form_state['redirect'] = 'admin/structure/token-custom/'
                            . $form_state['values']['machine_name'] . '/delete';
    return;
  }

  $form_state['values']['is_new'] = $form_state['token_custom']['op'] == 'add';

  $token = array(
    'name' => $form_state['values']['name'],
    'machine_name' => $form_state['values']['machine_name'],
    'description' => $form_state['values']['description'],
    'type' => $form_state['values']['type'],
    'content' => $form_state['values']['content']['value'],
    'format' => $form_state['values']['content']['format'],
    'is_new' => $form_state['values']['is_new'],
  );

  if (!token_custom_save($token)) {
    drupal_set_message(
      t('There was a problem saving token <em>@machine_name</em>. Please contact the site administrator.',
        array('@machine_name' => $form_state['values']['machine_name'])),
      'error'
    );
  }
  else {
    drupal_set_message(
      t('Token <em>@machine_name</em> saved.',
        array('@machine_name' => $form_state['values']['machine_name']))
    );
  }

  $form_state['redirect'] = 'admin/structure/token-custom';
}


/**
 * Confirm custom token's delete action.
 *
 * @param array $form
 *   The delete token form.
 * @param array $form_state
 *   Form state array
 * @param object $token
 *   The token object to delete.
 *
 * @return array
 *   The complete form.
 */
function token_custom_delete_confirm_form($form, &$form_state, $token) {
  $form_state['token_custom']['token'] = $token;
  return confirm_form(
    $form,
    t('Are you sure you want to delete token <em>@machine_name</em> ?', array('@machine_name' => $token->machine_name)),
    'admin/structure/token-custom',
    NULL,
    t('Delete'),
    t('Cancel')
  );
}


/**
 * Delete token form submit callback.
 *
 * @param array $form
 *   The form array.
 * @param array $form_state
 *   The form state array.
 */
function token_custom_delete_confirm_form_submit($form, &$form_state) {

  if (token_custom_delete($form_state['token_custom']['token']->machine_name)) {
    drupal_set_message(
      t('Token <em>@machine_name</em> deleted.',
        array('@machine_name' => $form_state['token_custom']['token']->machine_name))
    );
  }
  else {
    drupal_set_message(
      t('There was a problem deleting token <em>@machine_name</em>. Please contact the site administrator.',
        array('@machine_name' => $form_state['token_custom']['token']->machine_name)),
      'error'
    );
  }
  $form_state['redirect'] = 'admin/structure/token-custom';
}


/**
 * Confirm custom token type's delete action.
 *
 * @param array $form
 *   The delete token form.
 * @param array $form_state
 *   Form state array
 * @param object $token_type
 *   The token type to delete.
 *
 * @return array
 *   The complete form.
 */
function token_custom_type_delete_confirm_form($form, &$form_state, $token_type) {
  $form_state['token_custom']['token_type'] = $token_type;
  return confirm_form(
    $form,
    t('Are you sure you want to delete token type <em>@machine_name</em> ?', array('@machine_name' => $token_type->machine_name)),
    'admin/structure/token-custom',
    NULL,
    t('Delete'),
    t('Cancel')
  );
}


/**
 * Delete token type form submit callback.
 *
 * @param array $form
 *   The form array.
 * @param array $form_state
 *   The form state array.
 */
function token_custom_type_delete_confirm_form_submit($form, &$form_state) {

  if (token_custom_type_delete($form_state['token_custom']['token_type']->machine_name)) {
    drupal_set_message(
      t('Token type <em>@machine_name</em> deleted. All tokens using it were moved to type <em>@default_type</em>.',
        array(
          '@machine_name' => $form_state['token_custom']['token_type']->machine_name,
          '@default_type' => TOKEN_CUSTOM_DEFAULT_TYPE,
        )
      )
    );
  }
  else {
    drupal_set_message(
      t('There was a problem deleting token type <em>@machine_name</em>. Please contact the site administrator.',
        array('@machine_name' => $form_state['token_custom']['token_type']->machine_name)),
      'error'
    );
  }
  $form_state['redirect'] = 'admin/structure/token-custom/type';
}
