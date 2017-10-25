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
  $file_url = file_create_url($file->uri);

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
  $output .= l($variables['text'], $file_url, $uri['options']);
  $output .= '</span>';

  return $output;
}


/**
 * Theme callback for Favrskov Banner Iframe formatter.
 *
 * @see favrskov_helper_field_formatter_view()
 */
function theme_file_entity_favrskov_banner_iframe($variables) {
  global $base_path;
  $suffix = $base_path !== '/' ? $base_path : '';
  $fid = $variables['fid'];

  $output = '<iframe src="' . $suffix . '/banner-iframe/' . $fid . '" width="980" height="460">' .
    'Your browser doesnt support iframes!' .
    '</iframe>';

  return $output;
}
