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

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: access all webform results.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: access contextual links.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(),
    'module' => 'contextual',
  );

  // Exported permission: access dashboard.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(),
    'module' => 'dashboard',
  );

  // Exported permission: access own webform results.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: access own webform submissions.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: access piwik information.
  $permissions['access piwik information'] = array(
    'name' => 'access piwik information',
    'roles' => array(),
    'module' => 'piwik_stats',
  );

  // Exported permission: access print.
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(),
    'module' => 'print',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: administer custom content.
  $permissions['administer custom content'] = array(
    'name' => 'administer custom content',
    'roles' => array(),
    'module' => 'ctools_custom_content',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(),
    'module' => 'menu',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: administer page manager.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(),
    'module' => 'page_manager',
  );

  // Exported permission: administer panelizer.
  $permissions['administer panelizer'] = array(
    'name' => 'administer panelizer',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node borger_dk_article defaults.
  $permissions['administer panelizer node borger_dk_article defaults'] = array(
    'name' => 'administer panelizer node borger_dk_article defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node frontpage breadcrumbs.
  $permissions['administer panelizer node frontpage breadcrumbs'] = array(
    'name' => 'administer panelizer node frontpage breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node frontpage content.
  $permissions['administer panelizer node frontpage content'] = array(
    'name' => 'administer panelizer node frontpage content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node frontpage context.
  $permissions['administer panelizer node frontpage context'] = array(
    'name' => 'administer panelizer node frontpage context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node frontpage defaults.
  $permissions['administer panelizer node frontpage defaults'] = array(
    'name' => 'administer panelizer node frontpage defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node frontpage layout.
  $permissions['administer panelizer node frontpage layout'] = array(
    'name' => 'administer panelizer node frontpage layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node frontpage overview.
  $permissions['administer panelizer node frontpage overview'] = array(
    'name' => 'administer panelizer node frontpage overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node frontpage settings.
  $permissions['administer panelizer node frontpage settings'] = array(
    'name' => 'administer panelizer node frontpage settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer piwik.
  $permissions['administer piwik'] = array(
    'name' => 'administer piwik',
    'roles' => array(),
    'module' => 'piwik',
  );

  // Exported permission: administer print.
  $permissions['administer print'] = array(
    'name' => 'administer print',
    'roles' => array(),
    'module' => 'print',
  );

  // Exported permission: administer redirects.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(),
    'module' => 'redirect',
  );

  // Exported permission: administer stylizer.
  $permissions['administer stylizer'] = array(
    'name' => 'administer stylizer',
    'roles' => array(),
    'module' => 'stylizer',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create article content.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create banner_element content.
  $permissions['create banner_element content'] = array(
    'name' => 'create banner_element content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create borger_dk_article content.
  $permissions['create borger_dk_article content'] = array(
    'name' => 'create borger_dk_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create factbox content.
  $permissions['create factbox content'] = array(
    'name' => 'create factbox content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create faq content.
  $permissions['create faq content'] = array(
    'name' => 'create faq content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create frontpage content.
  $permissions['create frontpage content'] = array(
    'name' => 'create frontpage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create location content.
  $permissions['create location content'] = array(
    'name' => 'create location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create news content.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create phone_book content.
  $permissions['create phone_book content'] = array(
    'name' => 'create phone_book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create self_service content.
  $permissions['create self_service content'] = array(
    'name' => 'create self_service content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create slider_element content.
  $permissions['create slider_element content'] = array(
    'name' => 'create slider_element content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create subjectpage content.
  $permissions['create subjectpage content'] = array(
    'name' => 'create subjectpage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(),
    'module' => 'path',
  );

  // Exported permission: create webform content.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete all webform submissions.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: delete any article content.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any banner_element content.
  $permissions['delete any banner_element content'] = array(
    'name' => 'delete any banner_element content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any borger_dk_article content.
  $permissions['delete any borger_dk_article content'] = array(
    'name' => 'delete any borger_dk_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any factbox content.
  $permissions['delete any factbox content'] = array(
    'name' => 'delete any factbox content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any faq content.
  $permissions['delete any faq content'] = array(
    'name' => 'delete any faq content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any frontpage content.
  $permissions['delete any frontpage content'] = array(
    'name' => 'delete any frontpage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any location content.
  $permissions['delete any location content'] = array(
    'name' => 'delete any location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any news content.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any phone_book content.
  $permissions['delete any phone_book content'] = array(
    'name' => 'delete any phone_book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any self_service content.
  $permissions['delete any self_service content'] = array(
    'name' => 'delete any self_service content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any slider_element content.
  $permissions['delete any slider_element content'] = array(
    'name' => 'delete any slider_element content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any subjectpage content.
  $permissions['delete any subjectpage content'] = array(
    'name' => 'delete any subjectpage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any webform content.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own article content.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own banner_element content.
  $permissions['delete own banner_element content'] = array(
    'name' => 'delete own banner_element content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own borger_dk_article content.
  $permissions['delete own borger_dk_article content'] = array(
    'name' => 'delete own borger_dk_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own factbox content.
  $permissions['delete own factbox content'] = array(
    'name' => 'delete own factbox content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own faq content.
  $permissions['delete own faq content'] = array(
    'name' => 'delete own faq content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own frontpage content.
  $permissions['delete own frontpage content'] = array(
    'name' => 'delete own frontpage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own location content.
  $permissions['delete own location content'] = array(
    'name' => 'delete own location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own news content.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own phone_book content.
  $permissions['delete own phone_book content'] = array(
    'name' => 'delete own phone_book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own self_service content.
  $permissions['delete own self_service content'] = array(
    'name' => 'delete own self_service content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own slider_element content.
  $permissions['delete own slider_element content'] = array(
    'name' => 'delete own slider_element content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own subjectpage content.
  $permissions['delete own subjectpage content'] = array(
    'name' => 'delete own subjectpage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own webform content.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own webform submissions.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1.
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 2.
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 3.
  $permissions['delete terms in 3'] = array(
    'name' => 'delete terms in 3',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 4.
  $permissions['delete terms in 4'] = array(
    'name' => 'delete terms in 4',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 5.
  $permissions['delete terms in 5'] = array(
    'name' => 'delete terms in 5',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 6.
  $permissions['delete terms in 6'] = array(
    'name' => 'delete terms in 6',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 7.
  $permissions['delete terms in 7'] = array(
    'name' => 'delete terms in 7',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit all webform submissions.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: edit any article content.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any banner_element content.
  $permissions['edit any banner_element content'] = array(
    'name' => 'edit any banner_element content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any borger_dk_article content.
  $permissions['edit any borger_dk_article content'] = array(
    'name' => 'edit any borger_dk_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any factbox content.
  $permissions['edit any factbox content'] = array(
    'name' => 'edit any factbox content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any faq content.
  $permissions['edit any faq content'] = array(
    'name' => 'edit any faq content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any frontpage content.
  $permissions['edit any frontpage content'] = array(
    'name' => 'edit any frontpage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any location content.
  $permissions['edit any location content'] = array(
    'name' => 'edit any location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any news content.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any phone_book content.
  $permissions['edit any phone_book content'] = array(
    'name' => 'edit any phone_book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any self_service content.
  $permissions['edit any self_service content'] = array(
    'name' => 'edit any self_service content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any slider_element content.
  $permissions['edit any slider_element content'] = array(
    'name' => 'edit any slider_element content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any subjectpage content.
  $permissions['edit any subjectpage content'] = array(
    'name' => 'edit any subjectpage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any webform content.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own article content.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own banner_element content.
  $permissions['edit own banner_element content'] = array(
    'name' => 'edit own banner_element content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own borger_dk_article content.
  $permissions['edit own borger_dk_article content'] = array(
    'name' => 'edit own borger_dk_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own factbox content.
  $permissions['edit own factbox content'] = array(
    'name' => 'edit own factbox content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own faq content.
  $permissions['edit own faq content'] = array(
    'name' => 'edit own faq content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own frontpage content.
  $permissions['edit own frontpage content'] = array(
    'name' => 'edit own frontpage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own location content.
  $permissions['edit own location content'] = array(
    'name' => 'edit own location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own news content.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own phone_book content.
  $permissions['edit own phone_book content'] = array(
    'name' => 'edit own phone_book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own self_service content.
  $permissions['edit own self_service content'] = array(
    'name' => 'edit own self_service content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own slider_element content.
  $permissions['edit own slider_element content'] = array(
    'name' => 'edit own slider_element content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own subjectpage content.
  $permissions['edit own subjectpage content'] = array(
    'name' => 'edit own subjectpage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own webform content.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own webform submissions.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 2.
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 3.
  $permissions['edit terms in 3'] = array(
    'name' => 'edit terms in 3',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 4.
  $permissions['edit terms in 4'] = array(
    'name' => 'edit terms in 4',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 5.
  $permissions['edit terms in 5'] = array(
    'name' => 'edit terms in 5',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 6.
  $permissions['edit terms in 6'] = array(
    'name' => 'edit terms in 6',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 7.
  $permissions['edit terms in 7'] = array(
    'name' => 'edit terms in 7',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit views basic settings.
  $permissions['edit views basic settings'] = array(
    'name' => 'edit views basic settings',
    'roles' => array(),
    'module' => 'views_ui_basic',
  );

  // Exported permission: import media.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(),
    'module' => 'media',
  );

  // Exported permission: manipulate all queues.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(),
    'module' => 'nodequeue',
  );

  // Exported permission: manipulate queues.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(),
    'module' => 'nodequeue',
  );

  // Exported permission: node-specific print configuration.
  $permissions['node-specific print configuration'] = array(
    'name' => 'node-specific print configuration',
    'roles' => array(),
    'module' => 'print',
  );

  // Exported permission: opt-in or out of tracking.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(),
    'module' => 'piwik',
  );

  // Exported permission: show format selection for comment.
  $permissions['show format selection for comment'] = array(
    'name' => 'show format selection for comment',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for field_collection_item.
  $permissions['show format selection for field_collection_item'] = array(
    'name' => 'show format selection for field_collection_item',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for file.
  $permissions['show format selection for file'] = array(
    'name' => 'show format selection for file',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for node.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for taxonomy_term.
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for user.
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: show format tips.
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: show more format tips link.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: translate interface.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(),
    'module' => 'locale',
  );

  // Exported permission: use PHP for tracking visibility.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(),
    'module' => 'piwik',
  );

  // Exported permission: use page manager.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(),
    'module' => 'page_manager',
  );

  // Exported permission: use panels dashboard.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: use panels in place editing.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: use text format filtered_html.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: use text format video_html.
  $permissions['use text format video_html'] = array(
    'name' => 'use text format video_html',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: view pane admin links.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(),
    'module' => 'system',
  );

  return $permissions;
}
