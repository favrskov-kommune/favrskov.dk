<?php
/**
 * @file
 * file_type_banner.features.media_wysiwyg.inc
 */

/**
 * Implements hook_media_wysiwyg_defaults().
 */
function file_type_banner_media_wysiwyg_defaults() {
  $media_wysiwyg = array();

  // WYSIWYG view mode for banner files.
  $media_wysiwyg['banner_wysiwyg_view_mode'] = 'teaser';

  // Restricted view modes for banner files.
  $media_wysiwyg['banner_teaser_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['banner_preview_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['banner_wysiwyg_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['banner_default_restrict_wysiwyg'] = FALSE;

  return $media_wysiwyg;
}
