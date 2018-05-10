<?php

// Plugin definition
$plugin = array(
  'title' => t('Front page'),
  'category' => t('Site layouts'),
  'icon' => 'frontpage.png',
  'theme' => 'frontpage',
  'css' => 'frontpage.css',
  'regions' => array(
    'header'       => t('Header'),
    'region-two'   => t('subject-grid'),
    'region-three' => t('Slider'),
    'region-four'  => t('News'),
    'region-five'  => t('Events'),
    'region-six'   => t('Map'),
    'region-seven' => t('Banners'),
    'region-eight' => t('Footer')
  ),
);
