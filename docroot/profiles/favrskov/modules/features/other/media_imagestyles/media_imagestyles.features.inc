<?php
/**
 * @file
 * media_imagestyles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function media_imagestyles_image_default_styles() {
  $styles = array();

  // Exported image style: banners_custom_user_full_1x.
  $styles['banners_custom_user_full_1x'] = array(
    'label' => 'banners_custom_user_full_1x',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 315,
          'height' => 231,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: banners_custom_user_phone_1x.
  $styles['banners_custom_user_phone_1x'] = array(
    'effects' => array(
      44 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 190,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'banners_custom_user_phone_1x',
  );

  // Exported image style: banners_custom_user_phone_land_1x.
  $styles['banners_custom_user_phone_land_1x'] = array(
    'effects' => array(
      46 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 705,
          'height' => 220,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'banners_custom_user_phone_land_1x',
  );

  // Exported image style: banners_custom_user_phone_port_1x.
  $styles['banners_custom_user_phone_port_1x'] = array(
    'effects' => array(
      45 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 317,
          'height' => 190,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'banners_custom_user_phone_port_1x',
  );

  // Exported image style: banners_custom_user_tablet_1x.
  $styles['banners_custom_user_tablet_1x'] = array(
    'effects' => array(
      47 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 705,
          'height' => 220,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'banners_custom_user_tablet_1x',
  );

  // Exported image style: blog_teaser.
  $styles['blog_teaser'] = array(
    'label' => 'blog_teaser',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 565,
          'height' => 338,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: blogcustom_user_phone_1x.
  $styles['blogcustom_user_phone_1x'] = array(
    'label' => 'blogcustom_user_phone_1x',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 380,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: blogcustom_user_phone_land_1x.
  $styles['blogcustom_user_phone_land_1x'] = array(
    'label' => 'blogcustom_user_phone_land_1x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: blogcustom_user_phone_port_1x.
  $styles['blogcustom_user_phone_port_1x'] = array(
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 566,
          'height' => 313,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'blogcustom_user_phone_port_1x',
  );

  // Exported image style: blogcustom_user_tablet_1x.
  $styles['blogcustom_user_tablet_1x'] = array(
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 767,
          'height' => 450,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'blogcustom_user_tablet_1x',
  );

  // Exported image style: faktaboks_image.
  $styles['faktaboks_image'] = array(
    'label' => 'faktaboks_image',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 120,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: newsletter.
  $styles['newsletter'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 666,
          'height' => 279,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'newsletter',
  );

  // Exported image style: newsletter_news.
  $styles['newsletter_news'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 316,
          'height' => 175,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'newsletter_news',
  );

  // Exported image style: node_slide.
  $styles['node_slide'] = array(
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 566,
          'height' => 340,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'node_slide',
  );

  // Exported image style: picture.
  $styles['picture'] = array(
    'effects' => array(),
    'label' => 'picture',
  );

  // Exported image style: publications_thumb.
  $styles['publications_thumb'] = array(
    'label' => 'Publications thumb',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 212,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: slider_default.
  $styles['slider_default'] = array(
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1920,
          'height' => 490,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'slider_default',
  );

  // Exported image style: slider_thumb.
  $styles['slider_thumb'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 109,
          'height' => 71,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'slider_thumb',
  );

  // Exported image style: slidercustom_user_full_1x.
  $styles['slidercustom_user_full_1x'] = array(
    'label' => 'slidercustom_user_full_1x',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 980,
          'height' => 460,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slidercustom_user_phone_1x.
  $styles['slidercustom_user_phone_1x'] = array(
    'effects' => array(
      37 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 350,
          'height' => 263,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'slidercustom_user_phone_1x',
  );

  // Exported image style: slidercustom_user_phone_land_1x.
  $styles['slidercustom_user_phone_land_1x'] = array(
    'effects' => array(
      38 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 768,
          'height' => 490,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'slidercustom_user_phone_land_1x',
  );

  // Exported image style: slidercustom_user_phone_port_1x.
  $styles['slidercustom_user_phone_port_1x'] = array(
    'effects' => array(
      42 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 263,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'slidercustom_user_phone_port_1x',
  );

  // Exported image style: slidercustom_user_tablet_1x.
  $styles['slidercustom_user_tablet_1x'] = array(
    'effects' => array(
      39 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 980,
          'height' => 490,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'slidercustom_user_tablet_1x',
  );

  // Exported image style: subject_custom_user_full_1x.
  $styles['subject_custom_user_full_1x'] = array(
    'label' => 'subject_custom_user_full_1x',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 980,
          'height' => 460,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: subject_custom_user_phone_1x.
  $styles['subject_custom_user_phone_1x'] = array(
    'effects' => array(
      51 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 390,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'subject_custom_user_phone_1x',
  );

  // Exported image style: subject_custom_user_phone_land_1x.
  $styles['subject_custom_user_phone_land_1x'] = array(
    'effects' => array(
      53 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 770,
          'height' => 390,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'subject_custom_user_phone_land_1x',
  );

  // Exported image style: subject_custom_user_phone_port_1x.
  $styles['subject_custom_user_phone_port_1x'] = array(
    'effects' => array(
      52 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 370,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'subject_custom_user_phone_port_1x',
  );

  // Exported image style: subject_custom_user_slider_default_1x.
  $styles['subject_custom_user_slider_default_1x'] = array(
    'effects' => array(
      49 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1920,
          'height' => 390,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'subject_custom_user_slider_default_1x',
  );

  // Exported image style: subject_custom_user_tablet_1x.
  $styles['subject_custom_user_tablet_1x'] = array(
    'effects' => array(
      54 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 980,
          'height' => 390,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'subject_custom_user_tablet_1x',
  );

  // Exported image style: subject_image.
  $styles['subject_image'] = array(
    'effects' => array(
      48 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1920,
          'height' => 390,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'subject_image',
  );

  // Exported image style: thumb_150x120.
  $styles['thumb_150x120'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 120,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'thumb_150x120',
  );

  // Exported image style: videocustom_user_tablet_1x.
  $styles['videocustom_user_tablet_1x'] = array(
    'effects' => array(
      17 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 349,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'videocustom_user_tablet_1x',
  );

  return $styles;
}
