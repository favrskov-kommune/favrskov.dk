<?php

/**
 * @file
 * Contains the gl_switcher style plugin.
 */

/**
 * Style plugin to render each item in an ordered or unordered list with switcher between grid and list layout.
 *
 * @ingroup views_style_plugins
 */
class views_plugin_style_gl_switcher extends views_plugin_style_list {
  /**
   * Set default options
   */
  function option_definition() {
    $options = parent::option_definition();

    $options['switcher'] = array('default' => FALSE);

    return $options;
  }

  /**
   * Render the given style.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['switcher'] = array(
      '#type' => 'checkbox',
      '#title' => t('Switcher'),
      '#default_value' => $this->options['switcher'],
    );
  }
}