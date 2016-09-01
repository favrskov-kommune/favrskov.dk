<?php

// Plugin definition
$plugin = array(
  'title'     =>  t('Node one column page'),
  'category'  =>  t('Site layouts'),
  'icon'      =>  'nodefullpage.png',
  'theme'     =>  'nodefullpage',
  'css'       =>  'nodefullpage.css',
  'regions'   =>  array(
    'header'  =>    t('Header'),
    'node-content'  =>    t('Content'),
    'first-bottom-reg'   =>  t('First bottom region'),
    'second-bottom-reg'  =>  t('Second bottom region'),
    'third-bottom-reg'   =>  t('Third bottom region'),
    'footer'  =>   t('Footer')
  )
);
