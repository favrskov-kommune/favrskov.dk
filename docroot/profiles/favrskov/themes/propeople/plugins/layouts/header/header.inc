<?php

// Plugin definition
$plugin = array(
  'title' => t('Header'),
  'category' => t('Site parts'),
  'icon' => 'header.png',
  'theme' => 'header',
  'css' => 'header.css',
  'regions' => array(
    'logo' => t('Logo'),
    'top-navigation' => t('Secondary menu'),
    'navigation'   => t('Menu'),
    'search' => t('Search'),
    'system'   => t('System'),
  ),
);
