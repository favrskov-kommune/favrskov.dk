<?php

// Plugin definition
$plugin = array(
  'title' => t('Footer'),
  'category' => t('Site parts'),
  'icon' => 'footer.png',
  'theme' => 'footer',
  'css' => 'footer.css',
  'regions' => array(
    'header' => t('Logo'),
    'contacts' => t('Contacts'),
    'navigation'   => t('Menu'),
    'social' => t('Social'),
    'policy'   => t('Policy'),
  ),
);
