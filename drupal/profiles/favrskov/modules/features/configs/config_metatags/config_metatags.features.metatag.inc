<?php
/**
 * @file
 * config_metatags.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function config_metatags_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'config' => array(
      'kle_metatag' => array(
        'value' => '[node:field_taxonomy_kle]',
      ),
      'title' => array(
        'value' => '[node:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[node:summary]',
      ),
      'og:title' => array(
        'value' => '[node:title]',
      ),
      'og:description' => array(
        'value' => '[node:field-teaser] | [node:summary]',
      ),
      'og:image' => array(
        'value' => '[node:field_image_thumbnail]',
      ),
    ),
  );

  return $config;
}
