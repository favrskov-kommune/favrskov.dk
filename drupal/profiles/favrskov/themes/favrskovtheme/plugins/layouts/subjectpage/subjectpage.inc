<?php

// Plugin definition
$plugin = array(
  'title'     =>  t('Subject Page'),
  'category'  =>  t('Site layouts'),
  'icon'      =>  'subjectpage.png',
  'theme'     =>  'subjectpage',
  'css'       =>  'subjectpage.css',
  'regions'   =>  array(
    'header'        =>   t('Header'),
    'top_region'    =>   t('Top region'),
    'image_content' =>   t('Content on the image'),
    'wide_image'    =>   t('Image'),
    'menu_items'    =>   t('Menu links'),
    'first_middle_region'  => t('First middle region'),
    'second_middle_region' => t('Second middle region'),
    'news'          =>   t('News'),
    'footer'        =>   t('Footer')
  )
);
