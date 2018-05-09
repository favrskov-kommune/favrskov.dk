<?php
/**
 * @file os2web_borger_dk_articles.admin.inc
 *
 */

/**
 * Implements hook_form().
 */
function os2web_borger_dk_articles_settings_form($form, $form_state) {
  $form['vertical_settings_tab'] = array(
    '#type' => 'vertical_tabs',
    '#weight' => 0,
  );
  // Form element. It's a fieldset , "Toggle display"
  $form['os2web_borger_dk_articles_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Toggle display'),
    '#collapsible' => TRUE,
    '#group' => 'vertical_settings_tab',
  );
  // Some of the fields are locked from from being changed
  $locked_os2web_types = array('field_os2web_borger_dk_url' => 1);

  $data = field_info_instances('node', 'borger_dk_article');
  $newdata = array();
  $field_name = array();
  $field_name['title'] = 'title';
  $newdata['title'] = t('Title');
  foreach ($data as $type => $item) {
    if (empty($locked_os2web_types[$type])) {
      $field_name[$type] = $type;
    }
    $newdata[$type] = t($item['label']);
  }
  $form_display = variable_get('os2web_borger_dk_articles_display');

  $selected = array();
  if (isset($form_display) && !empty($form_display)) {
    $selected = $form_display;
  }
  elseif (!isset($form_display)) {
    $selected = $field_name;
    variable_set('os2web_borger_dk_articles_display', $field_name);
  }
  $form['os2web_borger_dk_articles_settings']['os2web_borger_dk_articles_display'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Visible article fields'),
    '#options' => $newdata,
    '#description' => t('Check or uncheck the respective fields'),
    '#default_value' => $selected,
    '#group' => 'vertical_settings_tab',
  );
  $form['os2web_borger_dk_articles_settings_2'] = array(
    '#type' => 'fieldset',
    '#title' => t('Editable article fields'),
    '#collapsible' => TRUE,
    '#group' => 'vertical_settings_tab',
  );
  $form_editable = variable_get('os2web_borger_dk_articles_editable');
  $selected2 = array();
  if (isset($form_editable) && !empty($form_editable)) {
    $selected2 = $form_editable;
  }
  elseif (!isset($form_editable)) {
    $selected2 = $field_name;
    variable_set('os2web_borger_dk_articles_editable', $selected2);
  }
  foreach ($locked_os2web_types as $type => $locked) {
    unset($newdata[$type]);
    unset($selected2[$type]);
  }
  $form['os2web_borger_dk_articles_settings_2']['os2web_borger_dk_articles_editable'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Editable article fields'),
    '#options' => $newdata,
    '#description' => t('Check or uncheck the respective fields'),
    '#default_value' => $selected2,
    '#group' => 'vertical_settings_tab',
  );

  $form['os2web_borger_dk_articles_settings_3'] = array(
    '#type' => 'fieldset',
    '#title' => t('Daily article syncronization'),
    '#collapsible' => TRUE,
    '#group' => 'vertical_settings_tab',
  );

  $sync_options = drupal_map_assoc(range(1, 24));
  $sync_options[0] = t('Disabled (Syncronize manually)');
  $form['os2web_borger_dk_articles_settings_3']['borger_dk_nightly_article_sync'] = array(
    '#type' => 'select',
    '#title' => t('Select when imported articles should be updated'),
    '#options' => $sync_options,
    '#description' => t('At what time of day should articles be syncronized with the Borger.dk-Webservice.'),
    '#default_value' => variable_get('borger_dk_nightly_article_sync'),
  );

  $form['os2web_borger_dk_import_settings_4'] = array(
    '#type' => 'fieldset',
    '#title' => t('Borger.dk Webservice settings'),
    '#collapsible' => TRUE,
    '#group' => 'vertical_settings_tab',
  );

  $form['os2web_borger_dk_import_settings_4']['os2web_borger_dk_webservice'] = array(
    '#type' => 'textfield',
    '#title' => t('Borger.dk Webservice URL'),
    '#default_value' => variable_get('os2web_borger_dk_webservice', 'https://www.borger.dk/_vti_bin/borger/ArticleExport.svc?wsdl'),
    '#group' => 'vertical_settings_tab',
    '#size' => 60,
    '#maxlength' => 130, 
  );
  $form['os2web_borger_dk_import_settings_4']['os2web_borger_dk_webservice_request_limit'] = array(
    '#type' => 'textfield',
    '#title' => t('Webservice request limitation'),
    '#description' => t("e.g this number of items (default is 100) can be fetched within the time-period limit"),
    '#default_value' => variable_get('os2web_borger_dk_webservice_request_limit', 100),
    '#group' => 'vertical_settings_tab',
    '#size' => 5,
    '#maxlength' => 10, 
  );
  $form['os2web_borger_dk_import_settings_4']['os2web_borger_dk_webservice_time_limit'] = array(
    '#type' => 'textfield',
    '#title' => t('Webservice request time-period limitation'),
    '#description' => t("e.g within this number of seconds (default is 60) the webservice is limited to serve a given number of requests"),
    '#default_value' => variable_get('os2web_borger_dk_webservice_time_limit', 60),
    '#group' => 'vertical_settings_tab',
    '#size' => 5,
    '#maxlength' => 10, 
  );
  $municipalities = array('0' => '');
  $municipalities += _os2web_borger_dk_articles_GetMunicipalityList();
  $form['os2web_borger_dk_import_settings_4']['os2web_borger_dk_webservice_municipality_code'] = array(
    '#type' => 'select',
    '#title' => t('Municipality code'),
    '#description' => t("The municipality code used in requests to the webservices."),
    '#default_value' => variable_get('os2web_borger_dk_webservice_municipality_code', 0),
    '#options' => $municipalities,
    '#group' => 'vertical_settings_tab',
  );

  $form['os2web_borger_dk_articles_settings_5'] = array(
    '#type' => 'fieldset',
    '#title' => t('Borger.dk Title search'),
    '#collapsible' => TRUE,
    '#group' => 'vertical_settings_tab',
  );
  $form['os2web_borger_dk_articles_settings_5']['borger_dk_article_titles_sync'] = array(
    '#type' => 'checkbox',
    '#title' => t('Import Borger.dk-articles by title instead of by URL'),
    '#description' => t('Check to enable the title-search when importing articles from Borger.dk'),
    '#default_value' => variable_get('borger_dk_article_titles_sync', 1),
  );
  $form['os2web_borger_dk_articles_settings_5']['borger_dk_article_titles_search_auto_submit'] = array(
    '#type' => 'checkbox',
    '#title' => t('Activate auto-submit when selecting an article to import by its title.'),
    '#description' => t('Check to enable the title-search auto-submit when importing articles from Borger.dk'),
    '#default_value' => variable_get('borger_dk_article_titles_search_auto_submit', 1),
  );

  $form['os2web_borger_dk_articles_settings_6'] = array(
    '#type' => 'fieldset',
    '#title' => t('Borger.dk Menu import'),
    '#collapsible' => TRUE,
    '#group' => 'vertical_settings_tab',
  );
  $form['os2web_borger_dk_articles_settings_6']['borger_dk_articles_borger_dk_menus_import'] = array(
    '#type' => 'checkbox',
    '#title' => t('Import and utilize Borger.dk-menus'),
    '#description' => t('Check to enable the menu-import from Borger.dk'),
    '#default_value' => variable_get('borger_dk_articles_borger_dk_menus_import', 0),
  );
  $sync_options = drupal_map_assoc(range(1, 24));
  $sync_options[0] = t('Disabled (No menu syncronization)');
  $form['os2web_borger_dk_articles_settings_6']['borger_dk_articles_nightly_menu_sync'] = array(
    '#type' => 'select',
    '#title' => t('Select when the menu-structure should be imported'),
    '#options' => $sync_options,
    '#description' => t('At what time of day should menus be syncronized with the Borger.dk-Webservice.'),
    '#default_value' => variable_get('borger_dk_articles_nightly_menu_sync'),
  );

  return system_settings_form($form);
}
