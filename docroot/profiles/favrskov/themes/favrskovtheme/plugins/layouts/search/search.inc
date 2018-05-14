<?php

// Plugin definition
$plugin = array(
  'title'     =>  t('Search Page'),
  'category'  =>  t('Site layouts'),
  'icon'      =>  'search.png',
  'theme'     =>  'search',
  'css'       =>  'search.css',
  'regions'   =>  array(
    'header'  =>  t('Header'),
    'results' =>  t('Results'),
    'sidebar' =>  t('Sidebar'),
    'footer'  =>  t('Footer')
  )
);
