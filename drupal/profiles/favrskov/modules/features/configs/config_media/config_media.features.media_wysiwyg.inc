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

  // WYSIWYG view mode for document files.
  $media_wysiwyg['document_wysiwyg_view_mode'] = 'default';

  // Restricted view modes for document files.
  $media_wysiwyg['document_teaser_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['document_preview_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['document_wysiwyg_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['document_default_restrict_wysiwyg'] = FALSE;

  return $media_wysiwyg;
}
