<?php
/**
 * @file
 * config_node_view_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function config_node_view_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: view any banner_element content.
  $permissions['view any banner_element content'] = array(
    'name' => 'view any banner_element content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Koordinator' => 'Koordinator',
      'Redaktør' => 'Redaktør',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: view any borger_dk_article content.
  $permissions['view any borger_dk_article content'] = array(
    'name' => 'view any borger_dk_article content',
    'roles' => array(),
    'module' => 'node_view_permissions',
  );

  // Exported permission: view any factbox content.
  $permissions['view any factbox content'] = array(
    'name' => 'view any factbox content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Koordinator' => 'Koordinator',
      'Redaktør' => 'Redaktør',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: view any faq content.
  $permissions['view any faq content'] = array(
    'name' => 'view any faq content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Koordinator' => 'Koordinator',
      'Redaktør' => 'Redaktør',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: view any phone_book content.
  $permissions['view any phone_book content'] = array(
    'name' => 'view any phone_book content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Koordinator' => 'Koordinator',
      'Redaktør' => 'Redaktør',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: view any self_service content.
  $permissions['view any self_service content'] = array(
    'name' => 'view any self_service content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Koordinator' => 'Koordinator',
      'Redaktør' => 'Redaktør',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: view any shared content.
  $permissions['view any shared content'] = array(
    'name' => 'view any shared content',
    'roles' => array(),
    'module' => 'node_view_permissions',
  );

  // Exported permission: view any slider_element content.
  $permissions['view any slider_element content'] = array(
    'name' => 'view any slider_element content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Koordinator' => 'Koordinator',
      'Redaktør' => 'Redaktør',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: view own banner_element content.
  $permissions['view own banner_element content'] = array(
    'name' => 'view own banner_element content',
    'roles' => array(),
    'module' => 'node_view_permissions',
  );

  // Exported permission: view own borger_dk_article content.
  $permissions['view own borger_dk_article content'] = array(
    'name' => 'view own borger_dk_article content',
    'roles' => array(),
    'module' => 'node_view_permissions',
  );

  // Exported permission: view own factbox content.
  $permissions['view own factbox content'] = array(
    'name' => 'view own factbox content',
    'roles' => array(),
    'module' => 'node_view_permissions',
  );

  // Exported permission: view own faq content.
  $permissions['view own faq content'] = array(
    'name' => 'view own faq content',
    'roles' => array(),
    'module' => 'node_view_permissions',
  );

  // Exported permission: view own phone_book content.
  $permissions['view own phone_book content'] = array(
    'name' => 'view own phone_book content',
    'roles' => array(),
    'module' => 'node_view_permissions',
  );

  // Exported permission: view own self_service content.
  $permissions['view own self_service content'] = array(
    'name' => 'view own self_service content',
    'roles' => array(),
    'module' => 'node_view_permissions',
  );

  // Exported permission: view own shared content.
  $permissions['view own shared content'] = array(
    'name' => 'view own shared content',
    'roles' => array(),
    'module' => 'node_view_permissions',
  );

  // Exported permission: view own slider_element content.
  $permissions['view own slider_element content'] = array(
    'name' => 'view own slider_element content',
    'roles' => array(),
    'module' => 'node_view_permissions',
  );

  return $permissions;
}
