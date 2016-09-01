<?php

/**
 * @file
 * A views handler to output an alterate field when a field is empty.
 */

class views_ifempty_handler_field extends views_handler_field {

  /**
   * Set default values for form elements.
   */
  function option_definition() {
    $options = parent::option_definition();
    // Never display the label of this field.
    $options['label']['default'] = NULL;

    $options['emptyfield'] = array('default' => '');
    $options['outputfield'] = array('default' => '');

    return $options;
  }

  /**
   * Add our form elements.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['relationship']['#access'] = FALSE;

    // Scan all the fields and add them as options for our field selectors.
    $fields = array(
      0 => '- ' . t('no field selected') . ' -',
    ) + $this->view->display_handler->get_field_labels();

    // We only use fields up to (not including) this one.
    unset($fields[$this->options['id']]);

    $form['emptyfield'] = array(
      '#type' => 'select',
      '#title' => t('If this field is empty'),
      '#description' => t('Check this field to see if is empty. This field will be output normally if not empty.'),
      '#options' => $fields,
      '#default_value' => $this->options['emptyfield'],
    );

    $form['outputfield'] = array(
      '#type' => 'select',
      '#title' => t('Then output this field'),
      '#description' => t('Only output this field when the other field is empty. This field will be hidden if the other field is not empty.'),
      '#options' => $fields,
      '#default_value' => $this->options['outputfield'],
    );
  }

  /**
   * Validate the options form.
   */
  function options_validate(&$form, &$form_state) {
    $values = &$form_state['values']['options'];
    if (empty($values['emptyfield']) || empty($values['outputfield'])) {
      if (empty($values['emptyfield'])) {
        form_set_error('emptyfield', t('Empty field must be specified.'));
      }
      if (empty($values['outputfield'])) {
        form_set_error('outputfield', t('Output field must be specified.'));
      }
    }
    elseif ($values['emptyfield'] == $values['outputfield']) {
      form_set_error('outputfield', t('The output field must be different from the empty field.'));
    }
  }

  /**
   * Add some summary text to the UI that explains what this field will do.
   */
  function admin_summary() {
    if (!empty($this->options['emptyfield']) && !empty($this->options['outputfield'])) {
      return t('If %emptyfield is empty, output %outputfield', array(
        '%emptyfield' => $this->options['emptyfield'],
        '%outputfield' => $this->options['outputfield'],
      ));
    }
    else {
      return t('Invalid field selection');
    }
  }

  /**
   * Remove advanced rendering options from form.
   */
  function allow_advanced_render() {
    return FALSE;
  }

  /**
   * Do not involve the query at all for this field.
   */
  function query() {
    $this->field_alias = 'views_ifempty_' . $this->position;
  }

  /**
   * Render the output.
   */
  function render($values) {
    $emptyfield = $this->options['emptyfield'];
    $outputfield = $this->options['outputfield'];
    if (!empty($emptyfield) && !empty($outputfield) && $emptyfield != $outputfield) {
      $fields = $this->view->display_handler->get_handlers('field');
      if (isset($fields[$emptyfield]) && isset($fields[$outputfield])) {
        if (empty($fields[$emptyfield]->last_render)) {
          $this->last_render = $fields[$outputfield]->last_render;
        }
        else {
          $this->last_render = $fields[$emptyfield]->last_render;
        }
      }
    }
    return $this->last_render;
  }

}
