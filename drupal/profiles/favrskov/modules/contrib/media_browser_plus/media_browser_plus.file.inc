<?php
/**
 * @file
 * File entity specific hooks.
 */

/**
 * Implements hook_file_presave().
 */
function media_browser_plus_file_presave($entity) {
  // Set appropriate default folder if necessary.
  if (empty($entity->field_folder[LANGUAGE_NONE][0]['tid'])) {
    $root = media_browser_plus_get_media_root_folder();
    $entity->field_folder[LANGUAGE_NONE] = array(array('tid' => $root->tid));
  }

  // Ensure file is stored in the appropriate folder.
  $folder = taxonomy_term_load($entity->field_folder[LANGUAGE_NONE][0]['tid']);
  $new_path = file_stream_wrapper_uri_normalize(file_uri_scheme($entity->uri) . '://' . media_browser_plus_construct_dir_path($folder) . '/' . basename($entity->uri));
  // Only move file if necessary.
  if ($entity->uri !== $new_path) {
    media_browser_plus_move_file($folder->tid, $entity, FILE_EXISTS_RENAME, FALSE);
  }
}
