<?php

/**
 * @file
 * File entity specific hooks.
 */

/**
 * Implements hook_file_presave().
 */
function media_browser_plus_file_presave($entity) {

  // MBP folder processing is skipped if:
  // - Manually requested by adding the property mbp_bypass to the file entity.
  // - The file has no folder set and has a path in the filesystem defined.
  if (!empty($entity->mbp_bypass) || (empty($entity->field_folder[LANGUAGE_NONE][0]['tid']) && isset($entity->uri) && file_uri_scheme($entity->uri) . '://' !== $entity->uri)) {
    return;
  }

  // Set appropriate default folder if necessary.
  if (empty($entity->field_folder[LANGUAGE_NONE][0]['tid']) && !isset($entity->migrate)) {
    $root = media_browser_plus_get_media_root_folder();
    $entity->field_folder[LANGUAGE_NONE] = array(array('tid' => $root->tid));
  }

  // Ensure file is stored in the appropriate folder.
  if (!empty($entity->field_folder[LANGUAGE_NONE][0]['tid'])) {
    $folder = taxonomy_term_load($entity->field_folder[LANGUAGE_NONE][0]['tid']);
    $new_path = file_stream_wrapper_uri_normalize(file_uri_scheme($entity->uri) . '://' . media_browser_plus_construct_dir_path($folder) . '/' . basename($entity->uri));
    // Only move file if necessary.
    if ($entity->uri !== $new_path) {
      media_browser_plus_move_file($folder->tid, $entity, NULL, FALSE);
    }
  }
}
