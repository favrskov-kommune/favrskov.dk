<?php
/**
 * @file
 * config_domain_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function config_domain_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access domain navigation'.
  $permissions['access domain navigation'] = array(
    'name' => 'access domain navigation',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain_nav',
  );

  // Exported permission: 'access domain settings form'.
  $permissions['access domain settings form'] = array(
    'name' => 'access domain settings form',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain_settings',
  );

  // Exported permission: 'access inactive domains'.
  $permissions['access inactive domains'] = array(
    'name' => 'access inactive domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'access the domain content page'.
  $permissions['access the domain content page'] = array(
    'name' => 'access the domain content page',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain_content',
  );

  // Exported permission: 'administer domains'.
  $permissions['administer domains'] = array(
    'name' => 'administer domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'assign domain editors'.
  $permissions['assign domain editors'] = array(
    'name' => 'assign domain editors',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create article content on assigned domains'.
  $permissions['create article content on assigned domains'] = array(
    'name' => 'create article content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create banner_element content on assigned domains'.
  $permissions['create banner_element content on assigned domains'] = array(
    'name' => 'create banner_element content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create bannerlink content on assigned domains'.
  $permissions['create bannerlink content on assigned domains'] = array(
    'name' => 'create bannerlink content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create borger_dk_article content on assigned domains'.
  $permissions['create borger_dk_article content on assigned domains'] = array(
    'name' => 'create borger_dk_article content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create factbox content on assigned domains'.
  $permissions['create factbox content on assigned domains'] = array(
    'name' => 'create factbox content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create faq content on assigned domains'.
  $permissions['create faq content on assigned domains'] = array(
    'name' => 'create faq content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create frontpage content on assigned domains'.
  $permissions['create frontpage content on assigned domains'] = array(
    'name' => 'create frontpage content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create job content on assigned domains'.
  $permissions['create job content on assigned domains'] = array(
    'name' => 'create job content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'create news content on assigned domains'.
  $permissions['create news content on assigned domains'] = array(
    'name' => 'create news content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create phone_book content on assigned domains'.
  $permissions['create phone_book content on assigned domains'] = array(
    'name' => 'create phone_book content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create self_service content on assigned domains'.
  $permissions['create self_service content on assigned domains'] = array(
    'name' => 'create self_service content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create shared content on assigned domains'.
  $permissions['create shared content on assigned domains'] = array(
    'name' => 'create shared content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'create slider_element content on assigned domains'.
  $permissions['create slider_element content on assigned domains'] = array(
    'name' => 'create slider_element content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create subjectpage content on assigned domains'.
  $permissions['create subjectpage content on assigned domains'] = array(
    'name' => 'create subjectpage content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create webform content on assigned domains'.
  $permissions['create webform content on assigned domains'] = array(
    'name' => 'create webform content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete article content on assigned domains'.
  $permissions['delete article content on assigned domains'] = array(
    'name' => 'delete article content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete banner_element content on assigned domains'.
  $permissions['delete banner_element content on assigned domains'] = array(
    'name' => 'delete banner_element content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete bannerlink content on assigned domains'.
  $permissions['delete bannerlink content on assigned domains'] = array(
    'name' => 'delete bannerlink content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete borger_dk_article content on assigned domains'.
  $permissions['delete borger_dk_article content on assigned domains'] = array(
    'name' => 'delete borger_dk_article content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete domain content'.
  $permissions['delete domain content'] = array(
    'name' => 'delete domain content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete factbox content on assigned domains'.
  $permissions['delete factbox content on assigned domains'] = array(
    'name' => 'delete factbox content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete faq content on assigned domains'.
  $permissions['delete faq content on assigned domains'] = array(
    'name' => 'delete faq content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete frontpage content on assigned domains'.
  $permissions['delete frontpage content on assigned domains'] = array(
    'name' => 'delete frontpage content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete job content on assigned domains'.
  $permissions['delete job content on assigned domains'] = array(
    'name' => 'delete job content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'delete news content on assigned domains'.
  $permissions['delete news content on assigned domains'] = array(
    'name' => 'delete news content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete phone_book content on assigned domains'.
  $permissions['delete phone_book content on assigned domains'] = array(
    'name' => 'delete phone_book content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete self_service content on assigned domains'.
  $permissions['delete self_service content on assigned domains'] = array(
    'name' => 'delete self_service content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete shared content on assigned domains'.
  $permissions['delete shared content on assigned domains'] = array(
    'name' => 'delete shared content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'delete slider_element content on assigned domains'.
  $permissions['delete slider_element content on assigned domains'] = array(
    'name' => 'delete slider_element content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete subjectpage content on assigned domains'.
  $permissions['delete subjectpage content on assigned domains'] = array(
    'name' => 'delete subjectpage content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete webform content on assigned domains'.
  $permissions['delete webform content on assigned domains'] = array(
    'name' => 'delete webform content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'edit domain content'.
  $permissions['edit domain content'] = array(
    'name' => 'edit domain content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'publish from assigned domain'.
  $permissions['publish from assigned domain'] = array(
    'name' => 'publish from assigned domain',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'publish from default domain'.
  $permissions['publish from default domain'] = array(
    'name' => 'publish from default domain',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'publish to any assigned domain'.
  $permissions['publish to any assigned domain'] = array(
    'name' => 'publish to any assigned domain',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'review content for all domains'.
  $permissions['review content for all domains'] = array(
    'name' => 'review content for all domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain_content',
  );

  // Exported permission: 'set domain access'.
  $permissions['set domain access'] = array(
    'name' => 'set domain access',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update article content on assigned domains'.
  $permissions['update article content on assigned domains'] = array(
    'name' => 'update article content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update banner_element content on assigned domains'.
  $permissions['update banner_element content on assigned domains'] = array(
    'name' => 'update banner_element content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update bannerlink content on assigned domains'.
  $permissions['update bannerlink content on assigned domains'] = array(
    'name' => 'update bannerlink content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update borger_dk_article content on assigned domains'.
  $permissions['update borger_dk_article content on assigned domains'] = array(
    'name' => 'update borger_dk_article content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update factbox content on assigned domains'.
  $permissions['update factbox content on assigned domains'] = array(
    'name' => 'update factbox content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update faq content on assigned domains'.
  $permissions['update faq content on assigned domains'] = array(
    'name' => 'update faq content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update frontpage content on assigned domains'.
  $permissions['update frontpage content on assigned domains'] = array(
    'name' => 'update frontpage content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update job content on assigned domains'.
  $permissions['update job content on assigned domains'] = array(
    'name' => 'update job content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'update news content on assigned domains'.
  $permissions['update news content on assigned domains'] = array(
    'name' => 'update news content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update phone_book content on assigned domains'.
  $permissions['update phone_book content on assigned domains'] = array(
    'name' => 'update phone_book content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update self_service content on assigned domains'.
  $permissions['update self_service content on assigned domains'] = array(
    'name' => 'update self_service content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update shared content on assigned domains'.
  $permissions['update shared content on assigned domains'] = array(
    'name' => 'update shared content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'update slider_element content on assigned domains'.
  $permissions['update slider_element content on assigned domains'] = array(
    'name' => 'update slider_element content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update subjectpage content on assigned domains'.
  $permissions['update subjectpage content on assigned domains'] = array(
    'name' => 'update subjectpage content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update webform content on assigned domains'.
  $permissions['update webform content on assigned domains'] = array(
    'name' => 'update webform content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'view unpublished domain content'.
  $permissions['view unpublished domain content'] = array(
    'name' => 'view unpublished domain content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'domain',
  );

  return $permissions;
}
