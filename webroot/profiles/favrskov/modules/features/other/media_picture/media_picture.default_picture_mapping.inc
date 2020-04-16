<?php
/**
 * @file
 * media_picture.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function media_picture_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'blogs';
  $picture_mapping->machine_name = 'blogs';
  $picture_mapping->breakpoint_group = 'blogs';
  $picture_mapping->mapping = array(
    'custom.user.full' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'blog_teaser',
      ),
    ),
    'custom.user.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'blog_teaser',
      ),
    ),
    'custom.user.phone_land' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'blogcustom_user_tablet_1x',
      ),
    ),
    'custom.user.phone_port' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'blogcustom_user_phone_land_1x',
      ),
    ),
    'custom.user.phone' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'blogcustom_user_phone_1x',
      ),
    ),
  );
  $export['blogs'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'front_banners';
  $picture_mapping->machine_name = 'front_banners';
  $picture_mapping->breakpoint_group = 'front_banners';
  $picture_mapping->mapping = array(
    'custom.user.full' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'banners_custom_user_full_1x',
      ),
    ),
    'custom.user.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'banners_custom_user_full_1x',
      ),
    ),
    'custom.user.phone_land' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'banners_custom_user_phone_land_1x',
      ),
    ),
    'custom.user.phone_port' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'banners_custom_user_phone_1x',
      ),
    ),
    'custom.user.phone' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'banners_custom_user_phone_1x',
      ),
    ),
  );
  $export['front_banners'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'slider';
  $picture_mapping->machine_name = 'slider';
  $picture_mapping->breakpoint_group = 'slider';
  $picture_mapping->mapping = array(
    'custom.user.full' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'slidercustom_user_full_1x',
      ),
    ),
    'custom.user.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'slidercustom_user_tablet_1x',
      ),
    ),
    'custom.user.phone_land' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'slidercustom_user_phone_land_1x',
      ),
    ),
    'custom.user.phone_port' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'slidercustom_user_phone_port_1x',
      ),
    ),
    'custom.user.phone' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'slidercustom_user_phone_1x',
      ),
    ),
  );
  $export['slider'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'subject_image';
  $picture_mapping->machine_name = 'subject_image';
  $picture_mapping->breakpoint_group = 'subject_image';
  $picture_mapping->mapping = array(
    'custom.user.full' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'subject_custom_user_full_1x',
      ),
    ),
    'custom.user.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'subject_custom_user_tablet_1x',
      ),
    ),
    'custom.user.phone_land' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'subject_custom_user_phone_land_1x',
      ),
    ),
    'custom.user.phone_port' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'subject_custom_user_phone_port_1x',
      ),
    ),
    'custom.user.phone' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'subject_custom_user_phone_1x',
      ),
    ),
  );
  $export['subject_image'] = $picture_mapping;

  return $export;
}
