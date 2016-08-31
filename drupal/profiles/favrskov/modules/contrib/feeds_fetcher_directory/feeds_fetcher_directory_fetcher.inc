<?php

/**
 * @file
 *
 * Provides the Feeds Directory Fetcher to feeds.
 */

/**
 * Fetches a file from a specified directory.
 *
 * This fetcher will keep track of the files that it has already fetched, and
 * will not re-fetch them, unless specifically told to.
 */
class feeds_fetcher_directory_fetcher extends FeedsFileFetcher {

 /**
   * Fetch content from a source and return it.
   *
   * Every class that extends FeedsFetcher must implement this method.
   *
   * @param $source
   *   Source value as entered by user through sourceForm().
   */
  public function fetch(FeedsSource $source) {
    $state = $source->state(FEEDS_FETCH);

    // If we're not batching, scan for new files.
    if (!isset($state->files)) {

      $source_config = $source->getConfigFor($this);
      $dir = $source_config['source'];
      $options = array(
        'recurse' => $this->config['recursive'],
      );
      $files = file_scan_directory($dir, $this->config['filemask'], $options);
      $files_to_fetch = array();
      foreach (array_keys($files) as $file) {
        // Skip this file if we're not checking updated files and we've imported it before.
        if (!$this->config['updated_files'] && isset($source_config['feed_files_fetched'][$file])) {
          continue;
        }
        // Skip this file if we've imported it before and its not changed.
        if ($this->config['updated_files'] && isset($source_config['feed_files_fetched'][$file]) && ($source_config['feed_files_fetched'][$file] == filemtime($file))) {
          continue;
        }

        // Save the modification time of the file in my config.
        $source_config['feed_files_fetched'][$file] = filemtime($file);
        $blah = $source->getConfig();
        $blah[get_class($this)] = $source_config;
        $source->setConfig($blah);

        // Keep a record of the files to fetch.
        $files_to_fetch[] = $file;
      }

      $state->files = $files_to_fetch;
      $state->total = count($state->files);
    }

    if (count($state->files)) {
      $file = array_shift($state->files);
      $state->progress($state->total, $state->total - count($state->files));
      return new FeedsFileFetcherResult($file);
    }

    // Return an empty FeedsFetcherResult if we didn't get anything from the directory:
    throw new Exception(t('No new files found in: %source to fetch.', array('%source' => $source_config['source'])));
  }

 /**
   * Source form.
   */
  public function sourceForm($source_config) {
    $form = array();
    // When renaming, do not forget feeds_vews_handler_field_source class.
    $form['source'] = array(
      '#type' => 'textfield',
      '#title' => t('Directory'),
      '#description' => t('Specify a URI to scan for feed data, e.g. private://files-to-scan.'),
      '#default_value' => (isset($source_config['source']) && !empty($source_config['source'])) ? $source_config['source'] : $this->config['directory'],
      '#required' => TRUE,
    );
    $form['reset'] = array(
      '#type' => 'checkbox',
      '#title' => t('Re-fetch entire directory'),
      '#description' => t('When checked will re-fetch previously imported data.'),
      '#default_value' => FALSE,
    );
    $form['feed_files_fetched'] = array(
      '#type' => 'value',
      '#value' => isset($source_config['feed_files_fetched']) ? $source_config['feed_files_fetched'] : array(),
    );
    return $form;
  }

 /**
   * Override parent::sourceFormValidate().
   */
  public function sourceFormValidate(&$values) {
    // If $values['source'] is not empty, make
    // sure that this directory is within Drupal's files directory as otherwise
    // potentially any file that the web server has access could be exposed.
    $uri = $values['source'];
    if (!empty($uri) && !file_valid_uri($uri)) {
      form_set_error('feeds][source', t('Directory needs to be a valid URI.'));
    }
    if (!empty($values['reset'])) {
      $values['feed_files_fetched'] = array();
      $values['reset'] = 0;
    }
  }

 /**
   * Override parent::configDefaults().
   */
  public function configDefaults() {
    $schemes = $this->getSchemes();
    $scheme = in_array('private', $schemes) ? 'private' : 'public';

    return array(
      'recursive' => TRUE,
      'directory' => $scheme . '://feeds',
      'filemask' => '/\.txt$/',
      'updated_files' => FALSE,
    );
  }

  /**
   * Override parent::configForm().
   */
  public function configForm(&$form_state) {
    $form = array();
    $form['directory'] = array(
      '#type' => 'textfield',
      '#title' => t('Upload directory'),
      '#description' => t('Directory to search for files. Prefix the path with a scheme. Available schemes: @schemes.', array('@schemes' => implode(', ', $this->getSchemes()))),
      '#default_value' => $this->config['directory'],
      '#states' => array(
        'visible' => array(':input[name="direct"]' => array('checked' => FALSE)),
        'required' => array(':input[name="direct"]' => array('checked' => FALSE)),
      ),
    );
    $form['filemask'] = array(
      '#type' =>'textfield',
      '#title' => t('File mask'),
      '#description' => t('Specify a file mask to apply when scanning for files. See the <a href="@api_link">file_scan_directory documentation</a> for details', array('@api_link' => url('http://api.drupal.org/api/function/file_scan_directory'))),
      '#default_value' => $this->config['filemask'],
    );
    $form['updated_files'] = array(
      '#type' =>'checkbox',
      '#title' => t('Re-fetch files that are modified'),
      '#default_value' => $this->config['updated_files'],
    );
    $form['recursive'] = array(
      '#type' =>'checkbox',
      '#title' => t('Recursively scan directory'),
      '#description' => t('Scan within the specified directories for other directories containing files.'),
      '#default_value' => $this->config['recursive'],
    );
    return $form;
  }

  /**
   * Overrides parent::configFormValidate().
   *
   * Ensure that the chosen directory is accessible.
   */
  public function configFormValidate(&$values) {

    $values['directory'] = trim($values['directory']);

    // Validate the URI scheme of the upload directory.
    $scheme = file_uri_scheme($values['directory']);
    if (!$scheme || !in_array($scheme, $this->getSchemes())) {
      form_set_error('directory', t('Please enter a valid scheme into the directory location.'));

      // Return here so that attempts to create the directory below don't
      // throw warnings.
      return;
    }

    // Ensure that the upload directory exists.
    if (!file_prepare_directory($values['directory'], FILE_CREATE_DIRECTORY | FILE_MODIFY_PERMISSIONS)) {
      form_set_error('directory', t('The chosen directory does not exist and attempts to create it failed.'));
    }
  }

}
