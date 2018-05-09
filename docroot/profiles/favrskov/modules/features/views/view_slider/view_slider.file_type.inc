<?php
/**
 * @file
 * view_slider.file_type.inc
 */

/**
 * Implements hook_file_default_types().
 */
function view_slider_file_default_types() {
  $export = array();

  $file_type = new stdClass();
  $file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
  $file_type->api_version = 1;
  $file_type->type = 'banner';
  $file_type->label = 'Banner';
  $file_type->description = 'Banner that include html and js code';
  $file_type->mimetypes = array(
    0 => 'image/gif',
    1 => 'image/ief',
    2 => 'image/jpeg',
    3 => 'image/pcx',
    4 => 'image/png',
    5 => 'image/svg+xml',
    6 => 'image/tiff',
    7 => 'image/vnd.djvu',
    8 => 'image/vnd.microsoft.icon',
    9 => 'image/vnd.wap.wbmp',
    10 => 'image/webp',
    11 => 'image/x-cmu-raster',
    12 => 'image/x-coreldraw',
    13 => 'image/x-coreldrawpattern',
    14 => 'image/x-coreldrawtemplate',
    15 => 'image/x-corelphotopaint',
    16 => 'image/x-jg',
    17 => 'image/x-jng',
    18 => 'image/x-ms-bmp',
    19 => 'image/x-photoshop',
    20 => 'image/x-portable-anymap',
    21 => 'image/x-portable-bitmap',
    22 => 'image/x-portable-graymap',
    23 => 'image/x-portable-pixmap',
    24 => 'image/x-rgb',
    25 => 'image/x-xbitmap',
    26 => 'image/x-xpixmap',
    27 => 'image/x-xwindowdump',
  );
  $export['banner'] = $file_type;

  return $export;
}
