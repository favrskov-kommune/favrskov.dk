<?php

// Plugin definition
$plugin = array(
  'title'     =>  t('Table List Page'),
  'category'  =>  t('Site layouts'),
  'icon'      =>  'tablelist.png',
  'theme'     =>  'tablelist',
  'css'       =>  'tablelist.css',
  'regions'   =>  array(
    'header'  =>    t('Header'),
    'top-full-section'     =>  t('Full width section'),
    'table-list'           =>  t('Table content'),
    'middle-full-section'  =>  t('Full width section'),
    'bottom-full-section'  =>  t('Full width section'),
    'footer'  =>    t('Footer')
  )
);
