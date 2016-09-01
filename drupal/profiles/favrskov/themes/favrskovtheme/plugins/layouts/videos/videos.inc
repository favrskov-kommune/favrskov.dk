<?php

// Plugin definition
$plugin = array(
  'title' => t('Video page'),
  'category' => t('Site layouts'),
  'icon' => 'videos.png',
  'theme' => 'videos',
  'css' => 'videos.css',
  'regions' => array(
    'header'       => t('Header'),
    'main-video'   => t('Main video'),
    'region-five'  => t('Video List'),
    'region-eight' => t('Footer')
  ),
);
