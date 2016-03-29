<?php

/**
 * @file
 * Views related manipulations.
 */

/**
 * Implements hook_views_data().
 */
function favrskov_helper_views_data() {
  $data['users']['uid_current_except_super_admin'] = array(
    'real field' => 'uid',
    'title' => t('Current (except super admin and has not Webmaster role)'),
    'help' => t('Filter the view to the currently logged in user (except super admin and has not Webmaster role).'),
    'filter' => array(
      'handler' => 'favrskov_helper_handler_filter_user_current_except_super_admin',
      'type' => 'yes-no',
    ),
  );

  return $data;
}
