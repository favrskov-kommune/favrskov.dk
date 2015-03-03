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

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 5,
  );

  // Exported role: Communications Officer.
  $roles['Communications Officer'] = array(
    'name' => 'Communications Officer',
    'weight' => 3,
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 2,
  );

  // Exported role: Webmaster.
  $roles['Webmaster'] = array(
    'name' => 'Webmaster',
    'weight' => 4,
  );

  return $roles;
}
