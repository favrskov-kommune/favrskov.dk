<?php

/**
 * @file
 * Theme callbacks for the favrskov_helper module.
 */

/**
 * Theme callback for Favrskov Download link formatter.
 *
 * @see favrskov_helper_field_formatter_view()
 */
function theme_file_entity_favrskov_download_link($variables) {
  $file = $variables['file'];
  $uri = file_entity_download_uri($file);

  // Set options as per anchor format described at
  // http://microformats.org/wiki/file-format-examples
  $uri['options']['attributes']['type'] = $file->filemime . '; length=' . $file->filesize;

  // Provide the default link text.
  if (!isset($variables['text'])) {
    $variables['text'] = t('Download [file:name]');
  }

  // Perform unsanitized token replacement if $uri['options']['html'] is empty
  // since then l() will escape the link text.
  $variables['text'] = token_replace($variables['text'], ['file' => $file], ['clear' => TRUE, 'sanitize' => !empty($uri['options']['html'])]);

  $output = '<span class="file">';
  $output .= l($variables['text'], $uri['path'], $uri['options']);
  $output .= '</span>';

  return $output;
}
