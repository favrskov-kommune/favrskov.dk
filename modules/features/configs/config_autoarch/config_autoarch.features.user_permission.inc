<?php
/**
 * @file
 * config_autoarch.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function config_autoarch_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer autoarch settings'.
  $permissions['administer autoarch settings'] = array(
    'name' => 'administer autoarch settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'autoarch',
  );

  return $permissions;
}
