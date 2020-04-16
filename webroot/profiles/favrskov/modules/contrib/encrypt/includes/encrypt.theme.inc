<?php

/**
 * @file
 * This file holds the theme functions for encrypt module
 *
 * @ingroup encrypt
 */

/**
 * Theme function admin method listing
 *
 * This function themes the list of methods for the admin view.
 *
 * @param $methods
 *   Array of methods
 * @return
 *   Array of similar put themed titles
 */
function theme_encrypt_admin_list($methods = array()) {
  $output = array();

  // Check methods
  if (!is_array($methods)) {
    return $output;
  }

  // Go through methods
  foreach ($methods as $name => $method) {
    $output[$name] = '
      <span class="encrypt-admin-list-item">
        <span class="encrypt-admin-list-item-label">' . $method['title'] . '</span> -
        <span class="encrypt-admin-list-item-description">
        ' . $method['description'] . '
        </span>
      </span>
    ';
  }

  return $output;
}
