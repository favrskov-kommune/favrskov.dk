<?php
/**
 * @file
 * file_type_banner.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function file_type_banner_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'banner__preview__file_field_enclosure';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['banner__preview__file_field_enclosure'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'banner__preview__file_field_favrskov_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => '[file:name]',
  );
  $export['banner__preview__file_field_favrskov_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'banner__preview__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['banner__preview__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'banner__preview__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['banner__preview__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'banner__preview__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['banner__preview__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'banner__preview__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['banner__preview__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'banner__preview__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $export['banner__preview__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'banner__preview__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['banner__preview__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'banner__preview__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'picture_mapping' => 'blogs',
    'fallback_image_style' => '',
    'lazyload' => 0,
    'lazyload_aspect_ratio' => 0,
    'image_link' => '',
  );
  $export['banner__preview__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'banner__preview__file_field_picture_sizes_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'sizes' => '(min-width: 0px)',
    'image_styles' => array(
      '_empty image_' => '_empty image_',
      'thumbnail' => 0,
      'medium' => 0,
      'large' => 0,
      'linkit_thumb' => 0,
      'media_thumbnail' => 0,
      'media_crop_rotate_90' => 0,
      'media_crop_rotate_180' => 0,
      'media_crop_rotate_270' => 0,
      'banners_custom_user_full_1x' => 0,
      'banners_custom_user_phone_1x' => 0,
      'banners_custom_user_phone_land_1x' => 0,
      'banners_custom_user_phone_port_1x' => 0,
      'banners_custom_user_tablet_1x' => 0,
      'blog_teaser' => 0,
      'blogcustom_user_phone_1x' => 0,
      'blogcustom_user_phone_land_1x' => 0,
      'blogcustom_user_phone_port_1x' => 0,
      'blogcustom_user_tablet_1x' => 0,
      'faktaboks_image' => 0,
      'newsletter' => 0,
      'newsletter_news' => 0,
      'node_slide' => 0,
      'picture' => 0,
      'slider_default' => 0,
      'slider_thumb' => 0,
      'slidercustom_user_full_1x' => 0,
      'slidercustom_user_phone_1x' => 0,
      'slidercustom_user_phone_land_1x' => 0,
      'slidercustom_user_phone_port_1x' => 0,
      'slidercustom_user_tablet_1x' => 0,
      'subject_custom_user_full_1x' => 0,
      'subject_custom_user_phone_1x' => 0,
      'subject_custom_user_phone_land_1x' => 0,
      'subject_custom_user_phone_port_1x' => 0,
      'subject_custom_user_slider_default_1x' => 0,
      'subject_custom_user_tablet_1x' => 0,
      'subject_image' => 0,
      'thumb_150x120' => 0,
      'videocustom_user_tablet_1x' => 0,
      'banner_thumb' => 0,
      'square_thumbnail' => 0,
      '_original image_' => 0,
    ),
    'fallback_image_style' => 'thumbnail',
    'image_link' => '',
  );
  $export['banner__preview__file_field_picture_sizes_formatter'] = $file_display;

  return $export;
}
