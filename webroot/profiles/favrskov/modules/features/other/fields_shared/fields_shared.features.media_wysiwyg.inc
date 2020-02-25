<?php
/**
 * @file
 * fields_shared.features.media_wysiwyg.inc
 */

/**
 * Implements hook_media_wysiwyg_defaults().
 */
function fields_shared_media_wysiwyg_defaults() {
  $media_wysiwyg = array();

  // WYSIWYG view mode for image files.
  $media_wysiwyg['image_wysiwyg_view_mode'] = 'default';

  // Restricted view modes for image files.
  $media_wysiwyg['image_teaser_restrict_wysiwyg'] = TRUE;
  $media_wysiwyg['image_preview_restrict_wysiwyg'] = TRUE;
  $media_wysiwyg['image_wysiwyg_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['image_default_restrict_wysiwyg'] = TRUE;

  return $media_wysiwyg;
}
