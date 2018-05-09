<?php

/**
 * @file
 * Folder manipulation functions.
 */

/**
 * Moves the root folder of media files.
 *
 * Updates the variable media_root_folder too.
 *
 * @param string $source
 *   Source path.
 * @param string $destination
 *   Destination path.
 */
function media_browser_plus_move_root_folder($source, $destination) {
  if (!empty($source)) {
    $source .= '/';
  }
  if (!empty($destination)) {
    $destination .= '/';
  }
  // Load root folder term.
  $root_folder_term = media_browser_plus_get_media_root_folder();

  // Prepare destination.
  foreach (media_get_local_stream_wrappers() as $scheme => $scheme_info) {
    $directory = file_stream_wrapper_uri_normalize($scheme . '://' . $destination);
    file_prepare_directory($directory, FILE_CREATE_DIRECTORY | FILE_MODIFY_PERMISSIONS);
  }
  variable_set('media_root_folder', trim($destination, '/'));

  // Move media files in root folder itself. We do this because if the root
  // folder was located in the default file directory of Drupal we can't move
  // all files / folders.
  $file_query = new EntityFieldQuery();
  $files = $file_query
    ->entityCondition('entity_type', 'file')
    ->fieldCondition('field_folder', 'tid', $root_folder_term->tid)
    ->execute();
  if (!empty($files['file'])) {
    $file_entities = file_load_multiple(array_keys($files['file']));
    foreach ($file_entities as $file_entity) {
      file_move($file_entity, file_stream_wrapper_uri_normalize(file_uri_scheme($file_entity->uri) . '://' . $destination));
    }
  }
  // Collect the subfolder operations.
  $batch = array(
    'title' => t('Move root folder'),
    'operations' => array(),
    'finished' => 'media_browser_plus_move_root_folder_complete',
    'file' => drupal_get_path('module', 'media_browser_plus') . '/includes/media_browser_plus.folders.inc',
  );

  // Set the media root folder variable to the new destination.
  $batch['operations'] = array();

  // Move subfolders.
  $root_subfolders = taxonomy_get_children($root_folder_term->tid);
  foreach ($root_subfolders as $subfolder) {
    $subfolder_source = media_browser_plus_construct_dir_path($subfolder);
    $subfolder_destination = $destination . str_replace($source, '', $subfolder_source);
    // Already takes care of multiple stream wrappers.
    $batch['operations'] = array_merge($batch['operations'], media_browser_plus_move_subfolder($subfolder, $subfolder_source, $subfolder_destination));
  }
  batch_set($batch);
}

/**
 * Finish-callback for the move root folder batch.
 */
function media_browser_plus_move_root_folder_complete($success, $results, $operations) {
  if ($success) {
    drupal_set_message(t('Successfully changed media root folder and all file URIs'));
  }
  else {
    drupal_set_message(t('Error while changing media root folder'), 'error');
  }
}

/**
 * Helper function to move a subfolder - and update the related files.
 *
 * @param object $folder
 *   The _updated_ folder term. Is used to generate the destination.
 * @param string $source
 *   The current path without scheme.
 * @param string $destination
 *   The new path. Including the directory name but without scheme!
 *
 * @return array
 *   A list of batch operations to execute to finish the job.
 */
function media_browser_plus_move_subfolder($folder, $source, $destination) {
  $operations = array();
  foreach (media_get_local_stream_wrappers() as $scheme => $scheme_info) {
    $source_path = file_stream_wrapper_uri_normalize($scheme . '://' . $source);
    $destination_path = file_stream_wrapper_uri_normalize($scheme . '://' . $destination);
    if ($source != $destination) {
      // This will move all subfolders too. Thus we have to handle all child
      // folder terms as well.
      file_prepare_directory($destination_path, FILE_CREATE_DIRECTORY | FILE_MODIFY_PERMISSIONS);
      media_browser_plus_move_physical_folder($source_path, $destination_path, $scheme);
    }
    // @todo This could move into the condition, but this way it's more stable.
    // Update files in folder and subfolders get folders.
    $folders = array($folder->tid);

    // Fetch all sub-folders.
    $sub_folders = taxonomy_get_tree($folder->vid, $folder->tid);
    foreach ($sub_folders as $sub_folder) {
      $folders[] = $sub_folder->tid;
    }
    $operations[] = array('media_browser_plus_folder_update_file_locations_batch', array($folders));
  }

  return $operations;
}

/**
 * Batch function to move files to the location according the assigned folder.
 *
 * Adjust the file uri to match the path given by the assigned folder. If the
 * uri is adjusted hook_file_move() is invoked.
 * If the file isn't located in the related directory on the disk it's moved.
 * The legacy path of the file is logged in $context['handled_directories'].
 *
 * @param array $folders
 *   A list of folder ids (term ids).
 * @param array $context
 *   Batch context array.
 */
function media_browser_plus_folder_update_file_locations_batch($folders, &$context) {
  $step_size = 25;

  $file_query = new EntityFieldQuery();
  $file_query
    ->entityCondition('entity_type', 'file');
  if (!empty($folders)) {
    $file_query->fieldCondition('field_folder', 'tid', $folders, 'IN');
  }

  if (empty($context['sandbox'])) {
    $context['sandbox']['progress'] = 0;
    $files = $file_query->execute();
    $context['sandbox']['max'] = (!empty($files['file'])) ? count($files['file']) : 0;
    $context['local_stream_wrappers'] = media_get_local_stream_wrappers();
  }
  if (!isset($context['results'])) {
    $context['results'] = array('success' => array(), 'errors' => array());
  }

  $file_query->range($context['sandbox']['progress'], $step_size);
  $files = $file_query->execute();
  $file_entities = array();
  if (!empty($files['file'])) {
    $file_entities = file_load_multiple(array_keys($files['file']));
  }
  // Checking media.
  foreach ($file_entities as $file) {
    // Only handle locale files with a folder id.
    if (isset($context['local_stream_wrappers'][file_uri_scheme($file->uri)]) && isset($file->field_folder[LANGUAGE_NONE][0]['tid'])) {
      // Update file path.
      $source = clone $file;
      $path = media_browser_plus_construct_dir_path(taxonomy_term_load($file->field_folder[LANGUAGE_NONE][0]['tid']));
      $file->uri = file_stream_wrapper_uri_normalize(file_uri_scheme($file->uri) . '://' . $path . '/' . drupal_basename($file->uri));
      // Check if the uri has changed.
      if ($file->uri !== $source->uri) {
        // Check if the source file still exists, if so move the file.
        clearstatcache();
        if (file_exists(drupal_realpath($source->uri))) {
          $context['handled_directories'][drupal_dirname($source->uri)] = drupal_dirname($source->uri);
          $destination = drupal_dirname($file->uri);
          file_prepare_directory($destination, FILE_CREATE_DIRECTORY | FILE_MODIFY_PERMISSIONS);
          file_unmanaged_move($source->uri, $destination, FILE_EXISTS_RENAME);
        }
        // Save all the changes and inform other modules.
        file_save($file);
        // Inform modules that the file has been moved.
        module_invoke_all('file_move', $file, $source);
      }
    }
  }
  // Increment progress but make sure start is not above max (for progress).
  $context['sandbox']['progress'] = min($context['sandbox']['max'], ($context['sandbox']['progress'] + $step_size));
  // Set other context values.
  $context['message'] = t('Relocating files') . '...(' . $context['sandbox']['progress'] . '/' . $context['sandbox']['max'] . ') ';
  $context['finished'] = 1;
  if ($context['sandbox']['progress'] < $context['sandbox']['max']) {
    $context['finished'] = $context['sandbox']['progress'] / $context['sandbox']['max'];
  }
}

/**
 * Cut-paste a directory with its children into a new filesystem location.
 *
 * @param string $source
 *   The current path.
 * @param string $destination
 *   The new path.
 * @param string $scheme
 *   The scheme to handle.
 *
 * @return bool
 *   TRUE on success.
 */
function media_browser_plus_move_physical_folder($source, $destination, $scheme = NULL) {
  if (!$scheme) {
    $scheme = variable_get('file_default_scheme', 'public');
  }
  $destination = drupal_realpath($destination);
  $source = drupal_realpath($source);
  $jail = drupal_realpath($scheme . '://');
  $files = @scandir($source);
  if ($files && count($files) > 2) {
    $transfer = new FileTransferLocal($jail);
    clearstatcache();
    // We need to copy the children first and later handle the source folder
    // since this is how FileTransferLocal works.
    foreach ($files as $file) {
      if (!in_array($file, array('.', '..'))) {
        $source_path = $source . DIRECTORY_SEPARATOR . $file;
        $copy_destination = $destination . DIRECTORY_SEPARATOR . $file;
        if (is_file($source_path)) {
          $transfer->copyFile($source_path, $copy_destination);
          $transfer->removeFile($source_path);
        }
        else {
          $transfer->copyDirectory($source_path, $copy_destination);
          $transfer->removeDirectory($source_path);
        }
      }
    }
    // All stuff is moved to destination, delete the source now.
    $transfer->removeDirectory($source);
  }
  else {
    // The folder is empty so just delete and create the new one.
    if (file_exists($source)) {
      drupal_rmdir($source);
    }
    file_prepare_directory($destination, FILE_CREATE_DIRECTORY | FILE_MODIFY_PERMISSIONS);
  }
  return TRUE;
}

/**
 * Rebuilds the folder structure on the disk.
 *
 * All local files that have a folder id will be processed. If a file isn't
 * located where it should be it's moved to the correct place.
 * This will trigger hook_file_move() so that other modules can act.
 * After all files are processed the legacy directories are deleted if they're
 * empty.
 *
 * @see hook_file_move()
 */
function media_browser_plus_rebuild_folder_structure() {
  // Prepare batch.
  $batch = array(
    'title' => t('Rebuild folder structure'),
    'operations' => array(
      array('media_browser_plus_rebuild_folder_structure_process', array()),
    ),
    'finished' => 'media_browser_plus_rebuild_folder_structure_complete',
    'file' => drupal_get_path('module', 'media_browser_plus') . '/includes/media_browser_plus.folders.inc',
  );
  batch_set($batch);
}

/**
 * Batch process of folder rebuild moves files and delete leftover directories.
 *
 * @see media_browser_plus_rebuild_folder_structure()
 */
function media_browser_plus_rebuild_folder_structure_process(&$context) {
  // Reuse existing code to move the files.
  media_browser_plus_folder_update_file_locations_batch(array(), $context);
  // Cleanup empty directories.
  if ($context['finished'] >= 1 && !empty($context['handled_directories'])) {
    clearstatcache();
    foreach ($context['handled_directories'] as $uri) {
      $directory = drupal_realpath($uri);
      if (is_dir($directory)) {
        foreach (new RecursiveIteratorIterator(new SkipDotsRecursiveDirectoryIterator($directory), RecursiveIteratorIterator::CHILD_FIRST) as $filename => $file) {
          if ($file->isDir()) {
            @drupal_rmdir($filename);
          }
          elseif ($file->isFile()) {
            // If there's a file left, don't delete the folder.
            break;
          }
        }
      }
    }
  }
}

/**
 * Finish callback for the folder structure rebuild batch.
 */
function media_browser_plus_rebuild_folder_structure_complete($success, $results, $operations) {
  if ($success) {
    drupal_set_message(t('Successfully rebuild the folder structure'));
  }
  else {
    drupal_set_message(t('Error while rebuilding folder structure'), 'error');
  }
}
