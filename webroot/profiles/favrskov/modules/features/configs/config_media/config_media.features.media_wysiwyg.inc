<?php
/**
 * @file
 * config_media.features.media_wysiwyg.inc
 */

/**
 * Implements hook_media_wysiwyg_defaults().
 */
function config_media_media_wysiwyg_defaults() {
  $media_wysiwyg = array();

  // WYSIWYG view mode for video files.
  $media_wysiwyg['video_wysiwyg_view_mode'] = 'none';

  // Restricted view modes for video files.
  $media_wysiwyg['video_teaser_restrict_wysiwyg'] = TRUE;
  $media_wysiwyg['video_preview_restrict_wysiwyg'] = TRUE;
  $media_wysiwyg['video_wysiwyg_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['video_default_restrict_wysiwyg'] = TRUE;

  // WYSIWYG view mode for document files.
  $media_wysiwyg['document_wysiwyg_view_mode'] = 'default';

  // Restricted view modes for document files.
  $media_wysiwyg['document_teaser_restrict_wysiwyg'] = TRUE;
  $media_wysiwyg['document_preview_restrict_wysiwyg'] = TRUE;
  $media_wysiwyg['document_wysiwyg_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['document_default_restrict_wysiwyg'] = TRUE;

  return $media_wysiwyg;
}
