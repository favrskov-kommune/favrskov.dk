<?php
/**
 * @file
 * file_type_banner.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function file_type_banner_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node banner_element defaults'.
  $permissions['administer panelizer node banner_element defaults'] = array(
    'name' => 'administer panelizer node banner_element defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node bannerlink defaults'.
  $permissions['administer panelizer node bannerlink defaults'] = array(
    'name' => 'administer panelizer node bannerlink defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'delete any banner files'.
  $permissions['delete any banner files'] = array(
    'name' => 'delete any banner files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own banner files'.
  $permissions['delete own banner files'] = array(
    'name' => 'delete own banner files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any banner files'.
  $permissions['download any banner files'] = array(
    'name' => 'download any banner files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own banner files'.
  $permissions['download own banner files'] = array(
    'name' => 'download own banner files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any banner files'.
  $permissions['edit any banner files'] = array(
    'name' => 'edit any banner files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own banner files'.
  $permissions['edit own banner files'] = array(
    'name' => 'edit own banner files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  return $permissions;
}
