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
    'name' => 'banners_custom_user_full_1x',
    'effects' => array(
      43 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 317,
          'height' => 190,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'banners_custom_user_full_1x',
  );

  // Exported image style: banners_custom_user_phone_1x.
  $styles['banners_custom_user_phone_1x'] = array(
    'name' => 'banners_custom_user_phone_1x',
    'effects' => array(
      44 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'banners_custom_user_phone_land_1x',
    'effects' => array(
      46 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'banners_custom_user_phone_port_1x',
    'effects' => array(
      45 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'banners_custom_user_tablet_1x',
    'effects' => array(
      47 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'blog_teaser',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 565,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
      3 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => 565,
          'height' => 338,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'blog_teaser',
  );

  // Exported image style: blogcustom_user_phone_1x.
  $styles['blogcustom_user_phone_1x'] = array(
    'name' => 'blogcustom_user_phone_1x',
    'effects' => array(
      9 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 380,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
      10 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => 380,
          'height' => 250,
          'anchor' => 'center-center',
        ),
        'weight' => 3,
      ),
    ),
    'label' => 'blogcustom_user_phone_1x',
  );

  // Exported image style: blogcustom_user_phone_land_1x.
  $styles['blogcustom_user_phone_land_1x'] = array(
    'name' => 'blogcustom_user_phone_land_1x',
    'effects' => array(
      6 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
      7 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => 480,
          'height' => 338,
          'anchor' => 'center-center',
        ),
        'weight' => 3,
      ),
    ),
    'label' => 'blogcustom_user_phone_land_1x',
  );

  // Exported image style: blogcustom_user_phone_port_1x.
  $styles['blogcustom_user_phone_port_1x'] = array(
    'name' => 'blogcustom_user_phone_port_1x',
    'effects' => array(
      7 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'blogcustom_user_tablet_1x',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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

  // Exported image style: newsletter.
  $styles['newsletter'] = array(
    'name' => 'newsletter',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'newsletter_news',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'node_slide',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'picture',
    'effects' => array(),
    'label' => 'picture',
  );

  // Exported image style: slider_default.
  $styles['slider_default'] = array(
    'name' => 'slider_default',
    'effects' => array(
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'slider_thumb',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'slidercustom_user_full_1x',
    'effects' => array(
      11 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 488,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'slidercustom_user_full_1x',
  );

  // Exported image style: slidercustom_user_phone_1x.
  $styles['slidercustom_user_phone_1x'] = array(
    'name' => 'slidercustom_user_phone_1x',
    'effects' => array(
      37 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'slidercustom_user_phone_land_1x',
    'effects' => array(
      38 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'slidercustom_user_phone_port_1x',
    'effects' => array(
      42 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'slidercustom_user_tablet_1x',
    'effects' => array(
      39 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'subject_custom_user_full_1x',
    'label' => 'subject_custom_user_full_1x',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'subject_custom_user_phone_1x',
    'effects' => array(
      51 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'subject_custom_user_phone_land_1x',
    'effects' => array(
      53 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'subject_custom_user_phone_port_1x',
    'effects' => array(
      52 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'subject_custom_user_slider_default_1x',
    'effects' => array(
      49 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'subject_custom_user_tablet_1x',
    'effects' => array(
      54 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'subject_image',
    'effects' => array(
      48 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'thumb_150x120',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'videocustom_user_tablet_1x',
    'effects' => array(
      17 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
