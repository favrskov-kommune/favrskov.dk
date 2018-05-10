<?php
// $Id$

/**
 * @file
 * Hooks provided by the encrypt suite of modules.
 *
 * @ingroup encrypt
 */

/**
 * Encrypt API Hook
 *
 * This hook informs Encrypt about where the other hooks
 * will be located and will eventually support version
 * combatability.
 *
 * @return
 *   An associative array with the following keys
 *   - "file": Drupal path to file where hook implementations
 *     can be found.
 *   - "api version": Not actually used yet.
 */
function hook_encrypt_api() {
  return array(
    'file' => drupal_get_path('module', 'encrypt') . '/includes/encrypt.encrypt.inc',
    'api version' => '1.0',
  );
}

/**
 * Encrypt Method Info
 *
 * This hook informs Encrypt about the methods that are
 * provided by the module.
 *
 * @return
 *   An associative array with the following top level key
 *   being the id of the method, then an associative array of:
 *   - "title": Translated title of method, used for selecting in UI.
 *   - "description": Translated description of method, used for
 *      selecting in UI.
 *   - "callback": PHP encryption function.  The actual function shoud have
 *     a similar signature:
 *     encrypt_encrypt_none($op = 'encrypt', $text = '', $options = array()).
 */
function hook_encrypt_method_info() {
  $methods = array();

  $methods['none'] = array(
    'title' => t('None'),
    'description' => t('This uses no encryption.  It is not suggested to use this.'),
    'callback' => 'encrypt_encrypt_none',
  );

  return $methods;
}
