<?php

/**
 * @file
 * Filter file for autoarch
 */

class AutoarchFilterMultiple extends views_handler_filter {

  /**
   * Creates the form element to the filter.
   */
  function value_form(&$form, &$form_state) {
    parent::value_form($form, $form_state);
    $show = array(
      'actual' => t('Actual'),
      'archive' => t('Archive'),
    );
    $form['value'] = array(
      '#type' => 'radios',
      '#title'  => t('State'),
      '#options'  => $show,
      '#default_value'  => !empty($this->value) ? $this->value : 'actual',
    );
    return $form;
  }
  /**
   * Adds WHERE to the views query chain.
   */
  function query() {
    $table = $this->ensure_my_table();
    $filter_identifier = $this->options['expose']['identifier'];
    $value = $this->value;
    if (is_array($value)) {
      $exposed_value = $this->value;
      $this->query->add_where($this->options['group'], "$table . $this->real_field", $exposed_value, "=");
    }
    else {
      $normal_value = $this->value;
      $this->query->add_where($this->options['group'], "$table . $this->real_field", $normal_value, "=");
    }
  }
}
