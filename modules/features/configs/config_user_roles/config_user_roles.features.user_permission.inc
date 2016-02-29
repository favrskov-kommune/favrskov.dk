<?php
/**
 * @file
 * config_user_roles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function config_user_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access broken links report'.
  $permissions['access broken links report'] = array(
    'name' => 'access broken links report',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access own broken links report'.
  $permissions['access own broken links report'] = array(
    'name' => 'access own broken links report',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access piwik information'.
  $permissions['access piwik information'] = array(
    'name' => 'access piwik information',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'piwik_stats',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site map'.
  $permissions['access site map'] = array(
    'name' => 'access site map',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'site_map',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add terms in media_folders'.
  $permissions['add terms in media_folders'] = array(
    'name' => 'add terms in media_folders',
    'roles' => array(
      'Communications Officer' => 'Communications Officer',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer breakpoints'.
  $permissions['administer breakpoints'] = array(
    'name' => 'administer breakpoints',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'breakpoints',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer content translations'.
  $permissions['administer content translations'] = array(
    'name' => 'administer content translations',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'i18n_node',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer ctools access ruleset'.
  $permissions['administer ctools access ruleset'] = array(
    'name' => 'administer ctools access ruleset',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ctools_access_ruleset',
  );

  // Exported permission: 'administer custom content'.
  $permissions['administer custom content'] = array(
    'name' => 'administer custom content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'ctools_custom_content',
  );

  // Exported permission: 'administer custom tokens'.
  $permissions['administer custom tokens'] = array(
    'name' => 'administer custom tokens',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'token_custom',
  );

  // Exported permission: 'administer elysia_cron'.
  $permissions['administer elysia_cron'] = array(
    'name' => 'administer elysia_cron',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'elysia_cron',
  );

  // Exported permission: 'administer encrypt'.
  $permissions['administer encrypt'] = array(
    'name' => 'administer encrypt',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'encrypt',
  );

  // Exported permission: 'administer facets'.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'facetapi',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer job importer search'.
  $permissions['administer job importer search'] = array(
    'name' => 'administer job importer search',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'favrskov_helper',
  );

  // Exported permission: 'administer jquery colorpicker'.
  $permissions['administer jquery colorpicker'] = array(
    'name' => 'administer jquery colorpicker',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'jquery_colorpicker',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer linkchecker'.
  $permissions['administer linkchecker'] = array(
    'name' => 'administer linkchecker',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'administer linkit'.
  $permissions['administer linkit'] = array(
    'name' => 'administer linkit',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'linkit',
  );

  // Exported permission: 'administer mailsystem'.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'mailsystem',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu attributes'.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'menu_attributes',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer mini panels'.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodequeue'.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer nodesymlinks'.
  $permissions['administer nodesymlinks'] = array(
    'name' => 'administer nodesymlinks',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'nodesymlinks',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panelizer'.
  $permissions['administer panelizer'] = array(
    'name' => 'administer panelizer',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node borger_dk_article defaults'.
  $permissions['administer panelizer node borger_dk_article defaults'] = array(
    'name' => 'administer panelizer node borger_dk_article defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node frontpage breadcrumbs'.
  $permissions['administer panelizer node frontpage breadcrumbs'] = array(
    'name' => 'administer panelizer node frontpage breadcrumbs',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node frontpage content'.
  $permissions['administer panelizer node frontpage content'] = array(
    'name' => 'administer panelizer node frontpage content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node frontpage context'.
  $permissions['administer panelizer node frontpage context'] = array(
    'name' => 'administer panelizer node frontpage context',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node frontpage defaults'.
  $permissions['administer panelizer node frontpage defaults'] = array(
    'name' => 'administer panelizer node frontpage defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node frontpage layout'.
  $permissions['administer panelizer node frontpage layout'] = array(
    'name' => 'administer panelizer node frontpage layout',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node frontpage overview'.
  $permissions['administer panelizer node frontpage overview'] = array(
    'name' => 'administer panelizer node frontpage overview',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node frontpage settings'.
  $permissions['administer panelizer node frontpage settings'] = array(
    'name' => 'administer panelizer node frontpage settings',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node subjectpage breadcrumbs'.
  $permissions['administer panelizer node subjectpage breadcrumbs'] = array(
    'name' => 'administer panelizer node subjectpage breadcrumbs',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node subjectpage content'.
  $permissions['administer panelizer node subjectpage content'] = array(
    'name' => 'administer panelizer node subjectpage content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node subjectpage context'.
  $permissions['administer panelizer node subjectpage context'] = array(
    'name' => 'administer panelizer node subjectpage context',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node subjectpage defaults'.
  $permissions['administer panelizer node subjectpage defaults'] = array(
    'name' => 'administer panelizer node subjectpage defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node subjectpage layout'.
  $permissions['administer panelizer node subjectpage layout'] = array(
    'name' => 'administer panelizer node subjectpage layout',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node subjectpage overview'.
  $permissions['administer panelizer node subjectpage overview'] = array(
    'name' => 'administer panelizer node subjectpage overview',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node subjectpage settings'.
  $permissions['administer panelizer node subjectpage settings'] = array(
    'name' => 'administer panelizer node subjectpage settings',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer pictures'.
  $permissions['administer pictures'] = array(
    'name' => 'administer pictures',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'picture',
  );

  // Exported permission: 'administer piwik'.
  $permissions['administer piwik'] = array(
    'name' => 'administer piwik',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'piwik',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer scheduler'.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer site verify'.
  $permissions['administer site verify'] = array(
    'name' => 'administer site verify',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'site_verify',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer stylizer'.
  $permissions['administer stylizer'] = array(
    'name' => 'administer stylizer',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'stylizer',
  );

  // Exported permission: 'administer taxon taxononmy'.
  $permissions['administer taxon taxononmy'] = array(
    'name' => 'administer taxon taxononmy',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxon_taxonomy',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer total control'.
  $permissions['administer total control'] = array(
    'name' => 'administer total control',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'total_control',
  );

  // Exported permission: 'administer tracking code'.
  $permissions['administer tracking code'] = array(
    'name' => 'administer tracking code',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'tracking_code',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer video styles'.
  $permissions['administer video styles'] = array(
    'name' => 'administer video styles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'video_embed_field',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer workbench moderation'.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'allow publish newly created articles'.
  $permissions['allow publish newly created articles'] = array(
    'name' => 'allow publish newly created articles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'content_type_article',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'bypass workbench moderation'.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear job_importer feeds'.
  $permissions['clear job_importer feeds'] = array(
    'name' => 'clear job_importer feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clone node'.
  $permissions['clone node'] = array(
    'name' => 'clone node',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'clone',
  );

  // Exported permission: 'clone own nodes'.
  $permissions['clone own nodes'] = array(
    'name' => 'clone own nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'clone',
  );

  // Exported permission: 'configure tablefield'.
  $permissions['configure tablefield'] = array(
    'name' => 'configure tablefield',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'tablefield',
  );

  // Exported permission: 'content reminder administration'.
  $permissions['content reminder administration'] = array(
    'name' => 'content reminder administration',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'content_reminder',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create banner_element content'.
  $permissions['create banner_element content'] = array(
    'name' => 'create banner_element content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create bannerlink content'.
  $permissions['create bannerlink content'] = array(
    'name' => 'create bannerlink content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create borger_dk_article content'.
  $permissions['create borger_dk_article content'] = array(
    'name' => 'create borger_dk_article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create factbox content'.
  $permissions['create factbox content'] = array(
    'name' => 'create factbox content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create faq content'.
  $permissions['create faq content'] = array(
    'name' => 'create faq content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create frontpage content'.
  $permissions['create frontpage content'] = array(
    'name' => 'create frontpage content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create job content'.
  $permissions['create job content'] = array(
    'name' => 'create job content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create mini panels'.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create phone_book content'.
  $permissions['create phone_book content'] = array(
    'name' => 'create phone_book content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create self_service content'.
  $permissions['create self_service content'] = array(
    'name' => 'create self_service content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create shared content'.
  $permissions['create shared content'] = array(
    'name' => 'create shared content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create slider_element content'.
  $permissions['create slider_element content'] = array(
    'name' => 'create slider_element content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create subjectpage content'.
  $permissions['create subjectpage content'] = array(
    'name' => 'create subjectpage content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any banner_element content'.
  $permissions['delete any banner_element content'] = array(
    'name' => 'delete any banner_element content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any bannerlink content'.
  $permissions['delete any bannerlink content'] = array(
    'name' => 'delete any bannerlink content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any borger_dk_article content'.
  $permissions['delete any borger_dk_article content'] = array(
    'name' => 'delete any borger_dk_article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any factbox content'.
  $permissions['delete any factbox content'] = array(
    'name' => 'delete any factbox content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any faq content'.
  $permissions['delete any faq content'] = array(
    'name' => 'delete any faq content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any frontpage content'.
  $permissions['delete any frontpage content'] = array(
    'name' => 'delete any frontpage content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any job content'.
  $permissions['delete any job content'] = array(
    'name' => 'delete any job content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any phone_book content'.
  $permissions['delete any phone_book content'] = array(
    'name' => 'delete any phone_book content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any self_service content'.
  $permissions['delete any self_service content'] = array(
    'name' => 'delete any self_service content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any shared content'.
  $permissions['delete any shared content'] = array(
    'name' => 'delete any shared content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any slider_element content'.
  $permissions['delete any slider_element content'] = array(
    'name' => 'delete any slider_element content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any subjectpage content'.
  $permissions['delete any subjectpage content'] = array(
    'name' => 'delete any subjectpage content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own banner_element content'.
  $permissions['delete own banner_element content'] = array(
    'name' => 'delete own banner_element content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own bannerlink content'.
  $permissions['delete own bannerlink content'] = array(
    'name' => 'delete own bannerlink content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own borger_dk_article content'.
  $permissions['delete own borger_dk_article content'] = array(
    'name' => 'delete own borger_dk_article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own factbox content'.
  $permissions['delete own factbox content'] = array(
    'name' => 'delete own factbox content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own faq content'.
  $permissions['delete own faq content'] = array(
    'name' => 'delete own faq content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own frontpage content'.
  $permissions['delete own frontpage content'] = array(
    'name' => 'delete own frontpage content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own job content'.
  $permissions['delete own job content'] = array(
    'name' => 'delete own job content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own phone_book content'.
  $permissions['delete own phone_book content'] = array(
    'name' => 'delete own phone_book content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own self_service content'.
  $permissions['delete own self_service content'] = array(
    'name' => 'delete own self_service content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own shared content'.
  $permissions['delete own shared content'] = array(
    'name' => 'delete own shared content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own slider_element content'.
  $permissions['delete own slider_element content'] = array(
    'name' => 'delete own slider_element content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own subjectpage content'.
  $permissions['delete own subjectpage content'] = array(
    'name' => 'delete own subjectpage content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in kle'.
  $permissions['delete terms in kle'] = array(
    'name' => 'delete terms in kle',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in local'.
  $permissions['delete terms in local'] = array(
    'name' => 'delete terms in local',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in location'.
  $permissions['delete terms in location'] = array(
    'name' => 'delete terms in location',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in media_folders'.
  $permissions['delete terms in media_folders'] = array(
    'name' => 'delete terms in media_folders',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in media_tags'.
  $permissions['delete terms in media_tags'] = array(
    'name' => 'delete terms in media_tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in subject_area'.
  $permissions['delete terms in subject_area'] = array(
    'name' => 'delete terms in subject_area',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any banner_element content'.
  $permissions['edit any banner_element content'] = array(
    'name' => 'edit any banner_element content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any bannerlink content'.
  $permissions['edit any bannerlink content'] = array(
    'name' => 'edit any bannerlink content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any borger_dk_article content'.
  $permissions['edit any borger_dk_article content'] = array(
    'name' => 'edit any borger_dk_article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any factbox content'.
  $permissions['edit any factbox content'] = array(
    'name' => 'edit any factbox content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any faq content'.
  $permissions['edit any faq content'] = array(
    'name' => 'edit any faq content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any frontpage content'.
  $permissions['edit any frontpage content'] = array(
    'name' => 'edit any frontpage content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any job content'.
  $permissions['edit any job content'] = array(
    'name' => 'edit any job content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any phone_book content'.
  $permissions['edit any phone_book content'] = array(
    'name' => 'edit any phone_book content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any self_service content'.
  $permissions['edit any self_service content'] = array(
    'name' => 'edit any self_service content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any shared content'.
  $permissions['edit any shared content'] = array(
    'name' => 'edit any shared content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any slider_element content'.
  $permissions['edit any slider_element content'] = array(
    'name' => 'edit any slider_element content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any subjectpage content'.
  $permissions['edit any subjectpage content'] = array(
    'name' => 'edit any subjectpage content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit link settings'.
  $permissions['edit link settings'] = array(
    'name' => 'edit link settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit mimemail user settings'.
  $permissions['edit mimemail user settings'] = array(
    'name' => 'edit mimemail user settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own banner_element content'.
  $permissions['edit own banner_element content'] = array(
    'name' => 'edit own banner_element content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own bannerlink content'.
  $permissions['edit own bannerlink content'] = array(
    'name' => 'edit own bannerlink content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own borger_dk_article content'.
  $permissions['edit own borger_dk_article content'] = array(
    'name' => 'edit own borger_dk_article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own factbox content'.
  $permissions['edit own factbox content'] = array(
    'name' => 'edit own factbox content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own faq content'.
  $permissions['edit own faq content'] = array(
    'name' => 'edit own faq content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own frontpage content'.
  $permissions['edit own frontpage content'] = array(
    'name' => 'edit own frontpage content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own job content'.
  $permissions['edit own job content'] = array(
    'name' => 'edit own job content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own phone_book content'.
  $permissions['edit own phone_book content'] = array(
    'name' => 'edit own phone_book content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own self_service content'.
  $permissions['edit own self_service content'] = array(
    'name' => 'edit own self_service content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own shared content'.
  $permissions['edit own shared content'] = array(
    'name' => 'edit own shared content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own slider_element content'.
  $permissions['edit own slider_element content'] = array(
    'name' => 'edit own slider_element content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own subjectpage content'.
  $permissions['edit own subjectpage content'] = array(
    'name' => 'edit own subjectpage content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in kle'.
  $permissions['edit terms in kle'] = array(
    'name' => 'edit terms in kle',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in local'.
  $permissions['edit terms in local'] = array(
    'name' => 'edit terms in local',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in location'.
  $permissions['edit terms in location'] = array(
    'name' => 'edit terms in location',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in media_folders'.
  $permissions['edit terms in media_folders'] = array(
    'name' => 'edit terms in media_folders',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in media_tags'.
  $permissions['edit terms in media_tags'] = array(
    'name' => 'edit terms in media_tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in subject_area'.
  $permissions['edit terms in subject_area'] = array(
    'name' => 'edit terms in subject_area',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit views basic settings'.
  $permissions['edit views basic settings'] = array(
    'name' => 'edit views basic settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'views_ui_basic',
  );

  // Exported permission: 'enter article revision log entry'.
  $permissions['enter article revision log entry'] = array(
    'name' => 'enter article revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter banner_element revision log entry'.
  $permissions['enter banner_element revision log entry'] = array(
    'name' => 'enter banner_element revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter bannerlink revision log entry'.
  $permissions['enter bannerlink revision log entry'] = array(
    'name' => 'enter bannerlink revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter borger_dk_article revision log entry'.
  $permissions['enter borger_dk_article revision log entry'] = array(
    'name' => 'enter borger_dk_article revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter factbox revision log entry'.
  $permissions['enter factbox revision log entry'] = array(
    'name' => 'enter factbox revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter faq revision log entry'.
  $permissions['enter faq revision log entry'] = array(
    'name' => 'enter faq revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter frontpage revision log entry'.
  $permissions['enter frontpage revision log entry'] = array(
    'name' => 'enter frontpage revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter job revision log entry'.
  $permissions['enter job revision log entry'] = array(
    'name' => 'enter job revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter news revision log entry'.
  $permissions['enter news revision log entry'] = array(
    'name' => 'enter news revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter phone_book revision log entry'.
  $permissions['enter phone_book revision log entry'] = array(
    'name' => 'enter phone_book revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter self_service revision log entry'.
  $permissions['enter self_service revision log entry'] = array(
    'name' => 'enter self_service revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter shared revision log entry'.
  $permissions['enter shared revision log entry'] = array(
    'name' => 'enter shared revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter slider_element revision log entry'.
  $permissions['enter slider_element revision log entry'] = array(
    'name' => 'enter slider_element revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter subjectpage revision log entry'.
  $permissions['enter subjectpage revision log entry'] = array(
    'name' => 'enter subjectpage revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter webform revision log entry'.
  $permissions['enter webform revision log entry'] = array(
    'name' => 'enter webform revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'exclude nodes from apache solr'.
  $permissions['exclude nodes from apache solr'] = array(
    'name' => 'exclude nodes from apache solr',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'apachesolr_exclude_node',
  );

  // Exported permission: 'export tablefield'.
  $permissions['export tablefield'] = array(
    'name' => 'export tablefield',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'tablefield',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'have total control'.
  $permissions['have total control'] = array(
    'name' => 'have total control',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'total_control',
  );

  // Exported permission: 'import job_importer feeds'.
  $permissions['import job_importer feeds'] = array(
    'name' => 'import job_importer feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'media',
  );

  // Exported permission: 'list custom tokens'.
  $permissions['list custom tokens'] = array(
    'name' => 'list custom tokens',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'token_custom',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manipulate all queues'.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'manipulate queues'.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'merge terms'.
  $permissions['merge terms'] = array(
    'name' => 'merge terms',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'moderate content from draft to needs_review'.
  $permissions['moderate content from draft to needs_review'] = array(
    'name' => 'moderate content from draft to needs_review',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from draft to published'.
  $permissions['moderate content from draft to published'] = array(
    'name' => 'moderate content from draft to published',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to draft'.
  $permissions['moderate content from needs_review to draft'] = array(
    'name' => 'moderate content from needs_review to draft',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to published'.
  $permissions['moderate content from needs_review to published'] = array(
    'name' => 'moderate content from needs_review to published',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'piwik',
  );

  // Exported permission: 'override article authored by option'.
  $permissions['override article authored by option'] = array(
    'name' => 'override article authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override article authored on option'.
  $permissions['override article authored on option'] = array(
    'name' => 'override article authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override article promote to front page option'.
  $permissions['override article promote to front page option'] = array(
    'name' => 'override article promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override article published option'.
  $permissions['override article published option'] = array(
    'name' => 'override article published option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override article revision option'.
  $permissions['override article revision option'] = array(
    'name' => 'override article revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override article sticky option'.
  $permissions['override article sticky option'] = array(
    'name' => 'override article sticky option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override banner_element authored by option'.
  $permissions['override banner_element authored by option'] = array(
    'name' => 'override banner_element authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override banner_element authored on option'.
  $permissions['override banner_element authored on option'] = array(
    'name' => 'override banner_element authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override banner_element promote to front page option'.
  $permissions['override banner_element promote to front page option'] = array(
    'name' => 'override banner_element promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override banner_element published option'.
  $permissions['override banner_element published option'] = array(
    'name' => 'override banner_element published option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override banner_element revision option'.
  $permissions['override banner_element revision option'] = array(
    'name' => 'override banner_element revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override banner_element sticky option'.
  $permissions['override banner_element sticky option'] = array(
    'name' => 'override banner_element sticky option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override bannerlink authored by option'.
  $permissions['override bannerlink authored by option'] = array(
    'name' => 'override bannerlink authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override bannerlink authored on option'.
  $permissions['override bannerlink authored on option'] = array(
    'name' => 'override bannerlink authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override bannerlink promote to front page option'.
  $permissions['override bannerlink promote to front page option'] = array(
    'name' => 'override bannerlink promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override bannerlink published option'.
  $permissions['override bannerlink published option'] = array(
    'name' => 'override bannerlink published option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override bannerlink revision option'.
  $permissions['override bannerlink revision option'] = array(
    'name' => 'override bannerlink revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override bannerlink sticky option'.
  $permissions['override bannerlink sticky option'] = array(
    'name' => 'override bannerlink sticky option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override borger_dk_article authored by option'.
  $permissions['override borger_dk_article authored by option'] = array(
    'name' => 'override borger_dk_article authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override borger_dk_article authored on option'.
  $permissions['override borger_dk_article authored on option'] = array(
    'name' => 'override borger_dk_article authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override borger_dk_article promote to front page option'.
  $permissions['override borger_dk_article promote to front page option'] = array(
    'name' => 'override borger_dk_article promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override borger_dk_article published option'.
  $permissions['override borger_dk_article published option'] = array(
    'name' => 'override borger_dk_article published option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override borger_dk_article revision option'.
  $permissions['override borger_dk_article revision option'] = array(
    'name' => 'override borger_dk_article revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override borger_dk_article sticky option'.
  $permissions['override borger_dk_article sticky option'] = array(
    'name' => 'override borger_dk_article sticky option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override factbox authored by option'.
  $permissions['override factbox authored by option'] = array(
    'name' => 'override factbox authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override factbox authored on option'.
  $permissions['override factbox authored on option'] = array(
    'name' => 'override factbox authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override factbox promote to front page option'.
  $permissions['override factbox promote to front page option'] = array(
    'name' => 'override factbox promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override factbox published option'.
  $permissions['override factbox published option'] = array(
    'name' => 'override factbox published option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override factbox revision option'.
  $permissions['override factbox revision option'] = array(
    'name' => 'override factbox revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override factbox sticky option'.
  $permissions['override factbox sticky option'] = array(
    'name' => 'override factbox sticky option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override faq authored by option'.
  $permissions['override faq authored by option'] = array(
    'name' => 'override faq authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override faq authored on option'.
  $permissions['override faq authored on option'] = array(
    'name' => 'override faq authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override faq promote to front page option'.
  $permissions['override faq promote to front page option'] = array(
    'name' => 'override faq promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override faq published option'.
  $permissions['override faq published option'] = array(
    'name' => 'override faq published option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override faq revision option'.
  $permissions['override faq revision option'] = array(
    'name' => 'override faq revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override faq sticky option'.
  $permissions['override faq sticky option'] = array(
    'name' => 'override faq sticky option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override frontpage authored by option'.
  $permissions['override frontpage authored by option'] = array(
    'name' => 'override frontpage authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override frontpage authored on option'.
  $permissions['override frontpage authored on option'] = array(
    'name' => 'override frontpage authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override frontpage promote to front page option'.
  $permissions['override frontpage promote to front page option'] = array(
    'name' => 'override frontpage promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override frontpage published option'.
  $permissions['override frontpage published option'] = array(
    'name' => 'override frontpage published option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override frontpage revision option'.
  $permissions['override frontpage revision option'] = array(
    'name' => 'override frontpage revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override frontpage sticky option'.
  $permissions['override frontpage sticky option'] = array(
    'name' => 'override frontpage sticky option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override job authored by option'.
  $permissions['override job authored by option'] = array(
    'name' => 'override job authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override job authored on option'.
  $permissions['override job authored on option'] = array(
    'name' => 'override job authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override job promote to front page option'.
  $permissions['override job promote to front page option'] = array(
    'name' => 'override job promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override job published option'.
  $permissions['override job published option'] = array(
    'name' => 'override job published option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override job revision option'.
  $permissions['override job revision option'] = array(
    'name' => 'override job revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override job sticky option'.
  $permissions['override job sticky option'] = array(
    'name' => 'override job sticky option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news authored by option'.
  $permissions['override news authored by option'] = array(
    'name' => 'override news authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news authored on option'.
  $permissions['override news authored on option'] = array(
    'name' => 'override news authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news promote to front page option'.
  $permissions['override news promote to front page option'] = array(
    'name' => 'override news promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news published option'.
  $permissions['override news published option'] = array(
    'name' => 'override news published option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news revision option'.
  $permissions['override news revision option'] = array(
    'name' => 'override news revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news sticky option'.
  $permissions['override news sticky option'] = array(
    'name' => 'override news sticky option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override phone_book authored by option'.
  $permissions['override phone_book authored by option'] = array(
    'name' => 'override phone_book authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override phone_book authored on option'.
  $permissions['override phone_book authored on option'] = array(
    'name' => 'override phone_book authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override phone_book promote to front page option'.
  $permissions['override phone_book promote to front page option'] = array(
    'name' => 'override phone_book promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override phone_book published option'.
  $permissions['override phone_book published option'] = array(
    'name' => 'override phone_book published option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override phone_book revision option'.
  $permissions['override phone_book revision option'] = array(
    'name' => 'override phone_book revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override phone_book sticky option'.
  $permissions['override phone_book sticky option'] = array(
    'name' => 'override phone_book sticky option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override self_service authored by option'.
  $permissions['override self_service authored by option'] = array(
    'name' => 'override self_service authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override self_service authored on option'.
  $permissions['override self_service authored on option'] = array(
    'name' => 'override self_service authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override self_service promote to front page option'.
  $permissions['override self_service promote to front page option'] = array(
    'name' => 'override self_service promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override self_service published option'.
  $permissions['override self_service published option'] = array(
    'name' => 'override self_service published option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override self_service revision option'.
  $permissions['override self_service revision option'] = array(
    'name' => 'override self_service revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override self_service sticky option'.
  $permissions['override self_service sticky option'] = array(
    'name' => 'override self_service sticky option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override shared authored by option'.
  $permissions['override shared authored by option'] = array(
    'name' => 'override shared authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override shared authored on option'.
  $permissions['override shared authored on option'] = array(
    'name' => 'override shared authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override shared promote to front page option'.
  $permissions['override shared promote to front page option'] = array(
    'name' => 'override shared promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override shared published option'.
  $permissions['override shared published option'] = array(
    'name' => 'override shared published option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override shared revision option'.
  $permissions['override shared revision option'] = array(
    'name' => 'override shared revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override shared sticky option'.
  $permissions['override shared sticky option'] = array(
    'name' => 'override shared sticky option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override slider_element authored by option'.
  $permissions['override slider_element authored by option'] = array(
    'name' => 'override slider_element authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override slider_element authored on option'.
  $permissions['override slider_element authored on option'] = array(
    'name' => 'override slider_element authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override slider_element promote to front page option'.
  $permissions['override slider_element promote to front page option'] = array(
    'name' => 'override slider_element promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override slider_element published option'.
  $permissions['override slider_element published option'] = array(
    'name' => 'override slider_element published option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override slider_element revision option'.
  $permissions['override slider_element revision option'] = array(
    'name' => 'override slider_element revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override slider_element sticky option'.
  $permissions['override slider_element sticky option'] = array(
    'name' => 'override slider_element sticky option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override subjectpage authored by option'.
  $permissions['override subjectpage authored by option'] = array(
    'name' => 'override subjectpage authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override subjectpage authored on option'.
  $permissions['override subjectpage authored on option'] = array(
    'name' => 'override subjectpage authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override subjectpage promote to front page option'.
  $permissions['override subjectpage promote to front page option'] = array(
    'name' => 'override subjectpage promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override subjectpage published option'.
  $permissions['override subjectpage published option'] = array(
    'name' => 'override subjectpage published option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override subjectpage revision option'.
  $permissions['override subjectpage revision option'] = array(
    'name' => 'override subjectpage revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override subjectpage sticky option'.
  $permissions['override subjectpage sticky option'] = array(
    'name' => 'override subjectpage sticky option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override webform authored by option'.
  $permissions['override webform authored by option'] = array(
    'name' => 'override webform authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override webform authored on option'.
  $permissions['override webform authored on option'] = array(
    'name' => 'override webform authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override webform promote to front page option'.
  $permissions['override webform promote to front page option'] = array(
    'name' => 'override webform promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override webform published option'.
  $permissions['override webform published option'] = array(
    'name' => 'override webform published option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override webform revision option'.
  $permissions['override webform revision option'] = array(
    'name' => 'override webform revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override webform sticky option'.
  $permissions['override webform sticky option'] = array(
    'name' => 'override webform sticky option',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'rebuild tablefield'.
  $permissions['rebuild tablefield'] = array(
    'name' => 'rebuild tablefield',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'tablefield',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'schedule (un)publishing of nodes'.
  $permissions['schedule (un)publishing of nodes'] = array(
    'name' => 'schedule (un)publishing of nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'send arbitrary files'.
  $permissions['send arbitrary files'] = array(
    'name' => 'send arbitrary files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'show format selection for field_collection_item'.
  $permissions['show format selection for field_collection_item'] = array(
    'name' => 'show format selection for field_collection_item',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for file'.
  $permissions['show format selection for file'] = array(
    'name' => 'show format selection for file',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for node'.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for rules_config'.
  $permissions['show format selection for rules_config'] = array(
    'name' => 'show format selection for rules_config',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for taxonomy_term'.
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for user'.
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format tips'.
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show more format tips link'.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'tamper job_importer'.
  $permissions['tamper job_importer'] = array(
    'name' => 'tamper job_importer',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'unlock job_importer feeds'.
  $permissions['unlock job_importer feeds'] = array(
    'name' => 'unlock job_importer feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'piwik',
  );

  // Exported permission: 'use content reminders'.
  $permissions['use content reminders'] = array(
    'name' => 'use content reminders',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'content_reminder',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use text format custom_tokens_no_filters_'.
  $permissions['use text format custom_tokens_no_filters_'] = array(
    'name' => 'use text format custom_tokens_no_filters_',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format job_html'.
  $permissions['use text format job_html'] = array(
    'name' => 'use text format job_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format video_html'.
  $permissions['use text format video_html'] = array(
    'name' => 'use text format video_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use workbench_moderation my drafts tab'.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'use workbench_moderation needs review tab'.
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view all unpublished content'.
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view encrypted values'.
  $permissions['view encrypted values'] = array(
    'name' => 'view encrypted values',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform_encrypt',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view moderation history'.
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view moderation messages'.
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Communications Officer' => 'Communications Officer',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'system',
  );

  return $permissions;
}
