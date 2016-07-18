<?php
class apachesolr_views_handler_filter_term extends apachesolr_views_handler_filter {

  public function value_form(&$form, &$form_state) {
    if ($this->options['type'] === 'textfield') {
      $form['value'] = array(
        '#type' => 'textfield',
        '#title' => t($this->definition['title']),
        '#default_value' => $this->value,
      );
    }
    else {
      $options = array();

      $field = $this->options['field'];
      $solr = apachesolr_get_solr();
      $result = $solr->search('', array('facet.field' => $field, 'facet' => 'true', 'rows' => 0));
      foreach ($result->facet_counts->facet_fields->$field as $key => $doc) {
        $options[$key] = $key;
      }

      $form['value'] = array(
        '#type' => 'select',
        '#title' => empty($form_state['exposed']) ? t('Value') : '',
        '#options' => $options,
        '#multiple' => TRUE,
        '#default_value' => is_array($this->value) ? $this->value : array(),
      );
    }
  }

  function has_extra_options() {
    return TRUE;
  }

  function extra_options_form(&$form, &$form_state) {

    $form['type'] = array(
      '#type' => 'radios',
      '#title' => t('Selection type'),
      '#options' => array('select' => t('Dropdown'), 'textfield' => t('Text input')),
      '#default_value' => $this->options['type'],
    );
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['type'] = array('default' => 'textfield');

    return $options;
  }

  function query() {
    $this->trim_value();

    if (!empty($this->value)) {
      if (is_array($this->value)) {
        $this->value = implode(' OR ', $this->value);
      }

      $this->query->add_where($this->options['group'], "$this->real_field", '"'. $this->value . '"', $this->operator);
    }
  }
}