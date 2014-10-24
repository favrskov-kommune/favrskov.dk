<?php
/**
 * @file
 * config_user_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function config_user_roles_user_default_roles() {
  $roles = array();

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 2,
  );

  return $roles;
}
