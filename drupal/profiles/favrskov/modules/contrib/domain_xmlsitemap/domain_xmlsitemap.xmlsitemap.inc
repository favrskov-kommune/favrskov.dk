<?php

/**
 * @file
 * XML sitemap integration functions for domain_xmlsitemap.module.
 */

/**
 * Implements hook_xmlsitemap_context_info().
 */
function domain_xmlsitemap_xmlsitemap_context_info() {
  $context['domain'] = array(
    'label' => t('Domain'),
    'default' => 0,
  );
  return $context;
}

/**
 * Implements hook_xmlsitemap_context().
 */
function domain_xmlsitemap_xmlsitemap_context() {
  $domain = domain_get_domain();
  $context['domain'] = $domain['domain_id'];
  return $context;
}

/**
 * Implements hook_xmlsitemap_context_url_options().
 */
function domain_xmlsitemap_xmlsitemap_context_url_options(array $context) {
  $options = array();
  if (isset($context['domain']) && $domain = domain_load($context['domain'])) {
    $options['base_url'] = rtrim($domain['path'], '/');
  }
  return $options;
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function domain_xmlsitemap_form_xmlsitemap_sitemap_edit_form_alter(&$form, $form_state) {
  $domains = domain_domains();
  $options = array();
  foreach ($domains as $domain) {
    $options[$domain['domain_id']] = $domain['path'];
  }
  $form['context']['domain'] = array(
    '#type' => 'select',
    '#title' => t('Domain'),
    '#options' => $options,
    '#default_value' => isset($form['#sitemap']->context['domain']) ? $form['#sitemap']->context['domain'] : '',
    '#access' => !empty($options),
  );
}

/**
 * Implements hook_query_TAG_alter().
 */
function domain_xmlsitemap_query_xmlsitemap_generate_alter(QueryAlterableInterface $query) {
  $sitemap = $query->getMetaData('sitemap');
  if (!isset($sitemap->context['domain'])) {
    return;
  }

  // @todo Join here may cause duplicate records. Investigate using a subquery.
  $domain_alias = $query->leftJoin('domain_access', 'da', "x.type = 'node' AND x.id = da.nid");
  $domain_condition = db_or();
  $domain_condition->isNull('da.gid');
  $domain_condition->condition(db_and()
    ->condition('da.gid', 0)
    ->condition('da.realm', 'domain_site')
  );
  $domain_condition->condition(db_and()
    ->condition('da.gid', $sitemap->context['domain'])
    ->condition('da.realm', 'domain_id')
  );
  $query->condition($domain_condition);

  // If the domain source module is enabled, we need to add a check against
  // the {domain_source} table as well.
  if (module_exists('domain_source')) {
    $domain_source = $query->leftJoin('domain_source', 'ds', "x.type = 'node' AND x.id = ds.nid");
    $source_condition = db_or();
    $source_condition->isNull('ds.domain_id');
    $source_condition->condition('ds.domain_id', array(DOMAIN_SOURCE_USE_ACTIVE, $sitemap->context['domain']));
    $query->condition($source_condition);
  }
}
