<?php

// Plugin definition
$plugin = array(
  'title'     =>  t('Node page'),
  'category'  =>  t('Site layouts'),
  'icon'      =>  'nodepage.png',
  'theme'     =>  'nodepage',
  'css'       =>  'nodepage.css',
  'regions'   =>  array(
    'header'  =>    t('Header'),
    'node-content'  =>    t('Content'),
    'node-sidebar'  =>    t('Sidebar'),
    'footer'  =>   t('Footer')
  )
);
