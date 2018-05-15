<?php

// Plugin definition
$plugin = array(
  'title' => t('Errors page'),
  'category' => t('Site layouts'),
  'icon' => 'errorspage.png',
  'theme' => 'errorspage',
  'css' => 'errorspage.css',
  'regions' => array(
    'first-region'  => t('Left region'),
    'second-region'  => t('Right region'),
    'third-region'  => t('Third region'),

  ),
);
