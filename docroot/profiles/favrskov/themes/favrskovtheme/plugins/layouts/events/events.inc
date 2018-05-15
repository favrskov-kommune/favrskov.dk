<?php

// Plugin definition
$plugin = array(
  'title'     =>  t('Events Page'),
  'category'  =>  t('Site layouts'),
  'icon'      =>  'events.png',
  'theme'     =>  'events',
  'css'       =>  'events.css',
  'regions'   =>  array(
    'header'  =>    t('Header'),
    'header'  =>    t('Header'),
    'events-header'  =>    t('Events header'),
    'events-list'  =>    t('Events list'),

    'footer'  =>   t('Footer')
  )
);
