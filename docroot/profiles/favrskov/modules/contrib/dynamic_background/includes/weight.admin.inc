<?php

/**
 * @file
 * Hanldes the re-ordring of dynamic background extension weights to determind
 * overrid order.
 */

/**
 * Creates a form which can be used to order the sub-modules/extension weights
 * so the override order of the CSS can be weighted.
 */
function dynamic_background_admin_weight_form($form_state) {
  $form = array(
    '#tree' => TRUE,
  );

  // Load default values.
  $default = variable_get('dynamic_background_weight', array());

  // Find all modules that implements hook_dynamic_background_weight().
  foreach (module_implements('dynamic_background_weight') as $module) {
    // Check if the weight have been overriden.
    $found = FALSE;
    foreach ($default as $value) {
      if ($value['name'] == $module) {
        $found = TRUE;
      }
    }
    if (!$found) {
      // Weight not found in defaults.
      $function = $module . '_dynamic_background_weight';
      $row = $function();
      $row['name'] = $module;
      $default[] = $row;
    }
  }

  // Sort the default values based on weight.
  usort($default, 'dynamic_background_weight_cmp');

  // Build the form based on the sorted values.
  foreach ($default as $module) {
    $form['module'][$module['name']] = array(
      // Module name
      'name' => array(
        '#markup' => drupal_ucfirst(str_replace('_', ' ', $module['name'])),
      ),
      // The weight of the module
      'weight' => array(
        '#type' => 'weight',
        '#delta' => 50,
        '#title-display' => 'invisible',
        '#default_value' => $module['weight'],
      ),
    );
  }

  $form['actions']['#type'] = 'actions';
  $form['actions']['submit'] = array('#type' => 'submit', '#value' => t('Save configuration'));

  return $form;
}

/**
 * Submit handler for the weight administration form, which stores the weights
 * in a sort frendly format (used in loading of default values for the form).
 */
function dynamic_background_admin_weight_form_submit($form, $form_state) {
  $weights = array();
  foreach ($form_state['values']['module'] as $name => $value) {
    $weights[] = array(
      'name' => $name,
      'weight' => $value['weight'],
    );
  }
  variable_set('dynamic_background_weight', $weights);
}

/**
 * Sorts values based on their weight, used by usort when build the form.
 */
function dynamic_background_weight_cmp($a, $b) {
  if ($a['weight'] == $b['weight']) {
    return 0;
  }
  return ($a['weight'] < $b['weight']) ? -1 : 1;
}

/**
 * Theme function for the weight administration form.
 */
function theme_dynamic_background_admin_weight_form($variables) {
  $form = $variables['form'];

  // Loop over the form elements and convert them into table rows.
  foreach (element_children($form['module']) as $id) {
    $form['module'][$id]['weight']['#attributes']['class'] = array('db-weight');

    $rows[] = array(
      'data' => array(
        drupal_render($form['module'][$id]['name']),
        drupal_render($form['module'][$id]['weight']),
      ),
      // Add class to make the row draggable
      'class' => array('draggable'),
    );
  }

  // Define the header.
  $header = array(
    t('Name'),
    t('Weight')
  );

  // Render the table and the rest of the form.
  $output = theme('table', array(
    'header' => $header,
    'rows' => $rows,
    'attributes' => array(
      'id' => 'db-weight-table',
    ),
  ));
  $output .= drupal_render_children($form);

  // Make the table draggable.
  drupal_add_tabledrag('db-weight-table', 'order', 'sibling', 'db-weight');
  return $output;
}
