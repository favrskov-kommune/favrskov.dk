<?php

/**
 * Implements hook_install_tasks_alter().
 */
function favrskov_install_tasks_alter(&$tasks, $install_state) {
  // Replace the "Choose language" installation task provided by Drupal core
  // with a custom callback function defined by this installation profile.

  $tasks['install_select_locale']['function'] = 'favrskov_locale_selection';
  $tasks['install_configure_form']['function'] = 'favrskov_configure_form_save';
  $tasks['install_import_locales_remaining']['function'] = 'favrskov_last';
  $tasks['change_collations']['function'] = 'favrskov_change_collations';
  $tasks['install_finished']['function'] = 'favrskov_install_finished';
}

/**
 * Callback that overrides default install_finished_task.
 *
 * Adds some feature reverts before cron run.
 *
 * @param array $install_state
 */
function favrskov_install_finished(&$install_state) {
  // Revert wysiwyg configuration after site installation. It's Drupal bug
  if (module_exists('config_wysiwyg')) {
    features_revert(array('config_wysiwyg' => array('ckeditor_profile')));
  }

  // Copy a dir+contents library.
    _favrskov_recurse_copy('profiles/favrskov/modules/contrib/node_embed/ckeditor/NodeEmbed',
    'profiles/favrskov/libraries/ckeditor/plugins/NodeEmbed');

  if (module_exists('config_search')) {
    features_revert(array('config_search' => array('apachesolr_environment', 'apachesolr_search_page')));
  }

  // insert login redirect conf
  $conf = array();
  $conf['triggers'] = serialize(array('login' => 'login'));
  $conf['roles'] = serialize(array());
  $conf['pages_type'] = 0;
  $conf['pages'] = '';
  $conf['destination_type'] = 0;
  $conf['destination'] = 'admin/dashboard';
  $conf['weight'] = 0;

  drupal_write_record('login_destination', $conf);

  install_finished($install_state);
}

/**
 * Change collation of taxonomy name field in 'taxonomy_term_data' table and node titles.
 *
 * @param array $install_state
 */
function favrskov_change_collations(&$install_state){
  db_query('ALTER TABLE {taxonomy_term_data} MODIFY name VARCHAR(255) COLLATE utf8_danish_ci');
  db_query('ALTER TABLE {node} MODIFY title VARCHAR(255) COLLATE utf8_danish_ci');
}

/**
 * Set danish as the default language.
 *
 * @param array $install_state
 */
function favrskov_locale_selection(&$install_state) {
  $install_state['parameters']['locale'] = 'da';
  $install_state['locales']['en'] = new stdClass();
  $install_state['locales']['en']->langcode = 'en';
  $install_state['locales']['da'] = new stdClass();
  $install_state['locales']['da']->langcode = 'da';
}

/**
 * Save site info and user 1.
 *
 * @param array $form
 * @param array $form_state
 * @param array $install_state
 */
function favrskov_configure_form_save($form, &$form_state, &$install_state) {
  global $user;

  $admin_mail_default = 'vitaliy.sekan@propeople.com.ua';

  variable_set('site_name', drush_get_option('site-name', 'Favrskov Kommune'));
  variable_set('site_mail', drush_get_option('site-mail', ''));
  variable_set('date_default_timezone', 'Europe/Copenhagen');
  variable_set('site_default_country', 'DK');
  variable_set('update_status_module', 2);
  variable_set('update_notify_emails', array(drush_get_option('account-mail', $admin_mail_default)));
  variable_set('clean_url', 1);
  variable_set('admin_theme', 'seven');
  variable_set('node_admin_theme', '1');

  // Record when this install ran.
  variable_set('install_time', $_SERVER['REQUEST_TIME']);

  // We precreated user 1 with placeholder values. Let's save the real values.
  $account = user_load(1);
  $merge_data = array(
    'language' => 'en',
    'name'     => drush_get_option('account-name', 'admin'),
    'pass'     => drush_get_option('account-pass', 'admin'),
    'mail'     => drush_get_option('account-mail', $admin_mail_default),
    'roles'    => !empty($account->roles) ? $account->roles : array(),
    'status'   => 1,
    'timezone' => 'Europe/Copenhagen'
  );
  user_save($account, $merge_data);
  // Load global $user and perform final login tasks.
  $user = user_load(1);
  user_login_finalize();
}

/**
 * Copy directory recursively (cp -r).
 *
 * @param string $src
 * @param string $dst
 *
 * @return void
 */
function _favrskov_recurse_copy($src, $dst) {
  if (($dir = opendir($src))) {
    mkdir($dst);
    while (($file = readdir($dir)) !== FALSE) {
      if ($file != '.' && $file != '..') {
        if (is_dir($src . '/' . $file)) {
          _favrskov_recurse_copy($src . '/' . $file, $dst . '/' . $file);
        }
        else {
          copy($src . '/' . $file, $dst . '/' . $file);
        }
      }
    }
    closedir($dir);
  }
}

/**
 * Run any function here as drupal now is fully bootstrapped but the install process has not run yet.
 *
 * @param $install_state
 *
 * @return bool
 */
function favrskov_last(&$install_state) {

  // Copy favicon.ico to document root (againt 404 errors for old IE browsers).
  // @copy('profiles/kk_seb_pers_mod/favicon.ico', 'favicon.ico');

  // Load local profile translation, and overwrite the drupal translation.
  //$filepath = 'profiles/kk_seb_pers_mod/translations/a_profile.da.po';
  //$file = (object) array(
  //  'filename' => drupal_basename($filepath),
  //  'uri'      => $filepath,
  //);
  //_locale_import_read_po('db-store', $file, LOCALE_IMPORT_OVERWRITE, 'da');

  //return FALSE;
}

/**
 * Checking if drush_get_option() exists and if not is it creating the function.
 * Needed if Drupal is installed from the browser.
 */
if (!function_exists('drush_get_option')) {
  function drush_get_option($arg1 = '', $arg2 = '') {
    return $arg2;
  }
}