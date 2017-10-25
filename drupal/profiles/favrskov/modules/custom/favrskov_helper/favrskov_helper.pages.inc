<?php

/**
 * @file
 * File, that implements pages functionality.
 */

function favrskov_helper_banner_iframe($file) {
  print $file->field_html_and_js[LANGUAGE_NONE][0]['value'];
  die();
}