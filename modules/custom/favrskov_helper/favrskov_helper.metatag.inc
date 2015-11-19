<?php

/**
 * Implements hook_metatag_info().
 */
function favrskov_helper_metatag_info() {
  $info['groups']['favrskov_custom_metatags'] = array(
    'label' => t('Favrskov custom metatags'),
    'form' => array(
      '#weight' => 50,
    ),
  );

  $info['tags']['kle_metatag'] = array(
    'label' => t('KLE metatag'),
    'description' => t('Separate metatag for KLE tag presented on Article, Subjectpage ans Webform nodes.'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'favrskov_custom_metatags',
  );

  return $info;
}

/**
 * Implements hook_metatag_bundled_config_alter().
 */
function favrskov_helper_metatag_bundled_config_alter(array &$configs) {
  foreach ($configs as &$config) {
    switch ($config->instance) {
      case 'global':
        $config->config += array();
        break;

      case 'global:frontpage':
        $config->config += array();
        break;

      case 'node':
        $config->config += array(
          'kle_metatag' => array('value' => ''),
        );
        break;

      case 'taxonomy_term':
        $config->config += array();
        break;

      case 'user':
        $config->config += array( );
        break;
    }
  }
}
