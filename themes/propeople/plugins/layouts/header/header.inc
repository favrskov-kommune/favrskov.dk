<?php

// Plugin definition
$plugin = array(
  'title' => t('Header'),
  'category' => t('Site parts'),
  'icon' => 'header.png',
  'theme' => 'header',
  'css' => 'header.css',
  'regions' => array(
    'header' => t('Logo'),
    'navigation'   => t('Menu'),
    'search' => t('Search'),
    'system'   => t('System'),
  ),
);
