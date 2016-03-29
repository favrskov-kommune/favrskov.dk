<?php

/**
 * @file
 * Definition of views_handler_filter_user_current_except_super_admin.
 *
 * This plugin is extension of views_handler_filter_user_current.
 */

/**
 * Filter handler for the current user except super admin (user with uid = 1)
 * and has not Webmaster role.
 *
 * @ingroup views_filter_handlers
 */
class favrskov_helper_handler_filter_user_current_except_super_admin extends views_handler_filter_boolean_operator {
  function construct() {
    parent::construct();
    $this->value_value = t('Is the logged in user (except super admin and has not Webmaster role)');
  }

  function query() {
    global $user;

    // Filter nodes for all roles except Webmaster and Super admin user.
    if ($user->uid != 1 && !in_array('Webmaster', $user->roles)) {
      $this->ensure_my_table();

      $field = $this->table_alias . '.' . $this->real_field . ' ';
      $or = db_or();

      if (empty($this->value)) {
        $or->condition($field, '***CURRENT_USER***', '<>');
        if ($this->accept_null) {
          $or->isNull($field);
        }
      }
      else {
        $or->condition($field, '***CURRENT_USER***', '=');
      }
      $this->query->add_where($this->options['group'], $or);
    }
  }
}
