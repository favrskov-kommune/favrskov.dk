<?php

/**
 * @file
 * Implimentation of hook_form_system_theme_settings_alter()
 *
 * To use replace "adaptivetheme_subtheme" with your themeName and uncomment by
 * deleting the comment line to enable.
 *
 * @param $form : Nested array of form elements that comprise the form.
 * @param $form_state : A keyed array containing the current state of the form.
 */
/* -- Delete this line to enable.
function adaptivetheme_subtheme_form_system_theme_settings_alter(&$form, &$form_state)  {
  // Your knarly custom theme settings go here...
}
// */

function propeople_form_system_theme_settings_alter(&$form, &$form_state) {
  $layout_types = array(1 => 'Use blocks', 2 => 'Use panels');

  $form['propeople_settings'] = array(
    '#type' => 'vertical_tabs',
    '#weight' => -10,
  );

  /**
   * General settings.
   */
  $form['propeople_settings']['propeople_general'] = array(
    '#type' => 'fieldset',
    '#title' => t('General Settings'),
  );

  $form['propeople_settings']['propeople_general']['theme_settings'] = $form['theme_settings'];
  unset($form['theme_settings']);

  $form['propeople_settings']['propeople_general']['logo'] = $form['logo'];
  unset($form['logo']);

  $form['propeople_settings']['propeople_general']['favicon'] = $form['favicon'];
  unset($form['favicon']);

  /**
   * Layout settings.
   */
  $form['propeople_settings']['propeople_layout'] = array(
    '#type' => 'fieldset',
    '#title' => t('Layout Settings'),
  );

  $form['propeople_settings']['propeople_layout']['layout_base_type'] = array(
    '#description' => t('This option provides main settings for the main site layout (see - page.tpl.php)'),
    '#type' => 'radios',
    '#title' => t('Choose which type of layout you prefer to use:'),
    '#default_value' => theme_get_setting('propeople_blocks'),
    //'#default_value' => theme_get_setting('propeople_blocks'),
    '#options' => $layout_types,
  );

  /**
   * HTML5
   */
  $form['propeople_settings']['propeople_html5'] = array(
    '#type' => 'fieldset',
    '#title' => t('HTML5 Settings'),
  );

  $form['propeople_settings']['propeople_html5']['propeople_shiv'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use HTML5 Shiv'),
    '#description' => t('An HTML5Shiv is used to enable HTML5 elements in Internet Explorer 6-8.'),
    '#default_value' => theme_get_setting('propeople_shiv'),
  );

  $form['propeople_settings']['propeople_html5']['propeople_shiv_google'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use Google Code-Hosted shiv'),
    '#description' => t('Check this option to load the shiv from Google Code instead of locally. This should be enabled in production for performance reasons.'),
    '#default_value' => theme_get_setting('propeople_shiv_google'),
    '#states' => array(
      'invisible' => array(
        'input[name="propeople_shiv"]' => array('checked' => FALSE),
      ),
    ),
  );

  /**
   * Polyfills.
   */
  $form['propeople_settings']['propeople_polyfills'] = array(
    '#type' => 'fieldset',
    '#title' => t('Polyfills'),
    '#description' => t("A <a href='@link'>polyfill</a> is basically an external script of some sort that simulates a new functionality in old browsers.<br/>Propeople includes various pre-integrated polyfills for you to pick from in order to offer the best possible experience for all your users.<br/>If you are unsure about what to do, don't worry! The defaults should be OK!", array('@link' => 'http://remysharp.com/2010/10/08/what-is-a-polyfill/')),
  );

  $form['propeople_settings']['propeople_polyfills']['propeople_polyfill_mediaquery'] = array(
    '#title' => t('Enable media queries in IE8 and below'),
    '#description' => t('By checking this setting IE6, 7 and 8 will rely on either <a href="@respond">respond.js</a> or <a href="@css3mq">css3-mediaqueries-js</a> to set the layout.', array(
      '@respond' => 'http://github.com/scottjehl/Respond',
      '@css3mq' => 'http://code.google.com/p/css3-mediaqueries-js/'
    )),
    '#type' => 'checkbox',
    '#default_value' => theme_get_setting('propeople_polyfill_mediaquery'),
  );

  $form['propeople_settings']['propeople_polyfills']['propeople_polyfill_mediaquery_type'] = array(
    '#type' => 'select',
    '#title' => t('Select a Media Query polyfill'),
    '#description' => t("<strong>Respond.js</strong> is a lot faster but less feature-complete whereas <strong>css3-mediaqueries-js</strong> is more feature complete but less performant. If you only use Propeople's default media queries then respond.js is recommended."),
    '#options' => array(
      0 => t('Respond.js'),
      1 => t('css3-mediaqueries-js'),
    ),
    '#default_value' => theme_get_setting('propeople_polyfill_mediaquery_type'),
    '#states' => array(
      'visible' => array(
        'input[name="propeople_polyfill_mediaquery"]' => array('checked' => TRUE),
      ),
    ),
  );

  /**
   * Development settings.
   */
  $form['propeople_settings']['propeople_dev'] = array(
    '#type' => 'fieldset',
    '#title' => t('Development Settings'),
  );

  $form['propeople_settings']['propeople_dev']['propeople_clear_registry'] = array(
    '#type' => 'checkbox',
    '#title' => t('Rebuild theme registry on every page.'),
    '#description' => t('During theme development, it can be very useful to continuously <a href="!link">rebuild the theme registry</a>. WARNING: this is a huge performance penalty and must be turned off on production websites.', array('!link' => 'http://drupal.org/node/173880#theme-registry')),
    '#default_value' => theme_get_setting('propeople_clear_registry'),
  );
}
