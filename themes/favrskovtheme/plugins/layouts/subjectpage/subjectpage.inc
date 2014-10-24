<?php

// Plugin definition
$plugin = array(
  'title'     =>  t('Subject Page'),
  'category'  =>  t('Site layouts'),
  'icon'      =>  'subjectpage.png',
  'theme'     =>  'subjectpage',
  'css'       =>  'subjectpage.css',
  'regions'   =>  array(
    'header'  =>     t('Header'),
    'popular_img' => t('Popular Image'),
    'popular' =>     t('Popular'),
    'teasers' =>     t('Teasers'),
    'first-middle-region' =>  t('Middle region'),
    'second-middle-region' => t('Middle region'),
    'third-middle-region' =>  t('Middle region'),
    'news'    =>     t('News'),
    'footer'  =>     t('Footer')
  )
);
