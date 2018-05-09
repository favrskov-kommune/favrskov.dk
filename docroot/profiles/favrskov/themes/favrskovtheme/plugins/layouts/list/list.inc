<?php

// Plugin definition
$plugin = array(
  'title'     =>  t('List Page'),
  'category'  =>  t('Site layouts'),
  'icon'      =>  'list.png',
  'theme'     =>  'list',
  'css'       =>  'list.css',
  'regions'   =>  array(
    'header'  =>    t('Header'),
    'blogs-list' => t('List content'),
    'sidebar'  =>   t('Sidebar'),
    'footer'  =>    t('Footer')
  )
);
