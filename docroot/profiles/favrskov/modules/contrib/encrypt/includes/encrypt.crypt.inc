<?php

/**
 * @file
 * This file holds the ffunctions necessary to encrypt and decrypt
 *
 * @ingroup encrypt
 */

/**
 * Get Encryption Methods
 *
 * @param $format
 *   String of format to return.  Can be the following:
 *   - "simple": A simple key/balue pair for selects
 *   - "full": An array of all method data
 * @param $reset
 *   Boolean of whether to invoke modules again
 * @return
 *   Formatted array
 */
function encrypt_get_methods($format = 'simple', $reset = FALSE) {
  static $methods = array();
  static $simple = array();
  static $full = array();

  // Check format
  if (empty($methods) || $reset == TRUE) {
    // Invoke the encrypt_method_info hook
    $methods = module_invoke_all('encrypt_method_info');
  }

  // Check if format variable has data
  if (empty(${$format}) || ($reset == TRUE)) {
    $return = array();

    // Go through results
    foreach ($methods as $name => $method) {
      // Determine how to format data
      switch ($format) {
        case 'simple':
          $return[$name] = $method['title'];
          break;

        case 'full':
          $return[$name] = $method;
          break;

      }
    }

    // Set it for our static cache.
    ${$format} = $return;
    return $return;
  }
  else {
    return ${$format};
  }
}

/**
 * Get Key
 *
 * Get key from appropriate place.  Ideally the key should be stored
 * outside the webroot, but may be stored in drupal files or in the db.
 * If none are there, 'files_default' will be used
 *
 * @param $key_name
 *   Name of key, use 'default' by default
 * @reset
 *   Boolean whether to reset cache or not
 * @return
 *   FALSE if no key found or Key Array with following keys.
 *   - "name": Name of key to be able to refer later
 *   - "key": Actual key
 */
function encrypt_get_key($key_name = NULL, $reset = FALSE) {
  static $keys = array();
  static $searched = FALSE;
  $return_array = array();

  // Check if keys has already been retrieved
  if (!$searched ||  $reset) {
    // Get secure encrypt file
    $encrypt_key_path = rtrim(variable_get('encrypt_secure_key_path', ''), '/\\');
    $encrypt_key_file = $encrypt_key_path . '/' . ENCRYPT_SECURE_KEY_FILE;

    // Check secure encrypt file
    if (file_exists($encrypt_key_file)) {
      $file_data = file_get_contents($encrypt_key_file);
      // Check if key is in file
      if (!empty($file_data)) {
        $keys[ENCRYPT_DEFAULT_KEY_FILE] = $file_data;
      }
    }

    // Though, this is insecure, we default to the drupal_private_key
    $keys[ENCRYPT_DEFAULT_KEY_DB] = variable_get('drupal_private_key', ENCRYPT_DEFAULT_KEY_NONE);

    // Mark as searched
    $searched = TRUE;
  }

  // Check key name
  if ($key_name == NULL) {
    $key_name = variable_get('encrypt_default_key', ENCRYPT_DEFAULT_KEY);
  }

  // If there is a vlaue for the key name, set
  if (!empty($keys[$key_name])) {
    $return_array = array(
      'name' => $key_name,
      'key' => $keys[$key_name],
    );
  }
  else {
    // If not found, and default was specified
    if (!empty($keys[ENCRYPT_DEFAULT_KEY_FILE]) && $key_name == ENCRYPT_DEFAULT_KEY) {
      $return_array = array(
        'name' => ENCRYPT_DEFAULT_KEY_FILE,
        'key' => $keys[ENCRYPT_DEFAULT_KEY_FILE],
      );
    }
    elseif (!empty($keys[ENCRYPT_DEFAULT_KEY_DB]) && $key_name == ENCRYPT_DEFAULT_KEY) {
      $return_array = array(
        'name' => ENCRYPT_DEFAULT_KEY_DB,
        'key' => $keys[ENCRYPT_DEFAULT_KEY_DB],
      );
    }
  }

  // Check if found
  if (empty($return_array)) {
    // Key not found
    watchdog('encrypt', 'Key name could not be found: %key_name', array('%key_name', $key_name), WATCHDOG_ERROR);
    return FALSE;
  }
  else {
    return $return_array;
  }
}

/**
 * Private Encrypt and Decrypt
 *
 * Private internal function to Encrypt and Decrypt text.
 *
 * @param $op
 *   Whether to encrypt or decrypt.
 *   - "encrypt": Encrypt text
 *   - "decrypt": Decrypt text
 * @param $text
 *   Text to encrypt
 * @param $options
 *   Array of options for encryption
 * @param $method
 *   String name of method to use.  Uses setting
 *   default if NULL
 * @return
 *   Encrypted text
 */
function _encrypt_decrypt($op = 'encrypt', $text = '', $options = array(), $method = NULL, $key_name = NULL) {
  $methods = encrypt_get_methods('full');
  $encryption_array = array();
  $processed = '';

  // Check op
  if ($op !== 'encrypt') {
    $op = 'decrypt';
  }

  // If decrypting we need to get method
  // TODO: The does not actually use $method or $key_name when decrypting. See 7.x-2.x for more info.
  if ($op == 'decrypt') {
    $encryption_array = unserialize($text);
    $method = $encryption_array['method'];
    $text = $encryption_array['text'];
    $key_name = $encryption_array['key_name'];    
  }

  // Check text
  if ($text === '') {
    return $processed;
  }

  // Check method
  $method = encrypt_check_method($method);
  if ($method === FALSE) {
    return $processed;
  }

  // Get Key
  $key_array = encrypt_get_key($key_name);
  $key = $key_array['key'];
  $key_name = $key_array['name'];

  // Failsafe, if no key found, then use 'none' method
  if (empty($key) || $key_array == FALSE) {
    $method = 'none';
  }
  
  // Call callback function for encryption and decryption.
  $processed = call_user_func($methods[$method]['callback'], $op, $text, $options);

  // Check for returned value
  if (!empty($processed) && $op == 'encrypt') {
    $encryption_array = array(
      'text' => $processed,
      'method' => $method,
      'key_name' => $key_name,      
    );
    // Serialize array
    $processed = serialize($encryption_array);
  }

  return $processed;
}

/**
 * Check Method
 *
 * Check if a method is valid for encryption
 *
 * @param $method
 *   Method to check for
 * @return
 *   Method name or FALSE
 */
function encrypt_check_method($method = NULL) {
  $methods = encrypt_get_methods('full');
  $method = (string) $method;

  // Determine method
  if ($method == NULL) {
    $method = variable_get('encrypt_default_method', ENCRYPT_DEFAULT_METHOD);
  }

  // Make sure its a valid method
  if (!isset($methods[$method]) || !is_array($methods[$method])) {
    watchdog('encrypt', 'Encrypt call with invalid method: %method', array('%method' => $method));
    return FALSE;
  }

  // Make sure theres a valid callback
  if (empty($methods[$method]['callback']) || !function_exists($methods[$method]['callback'])) {
    watchdog('encrypt', 'Encrypt function call is not valid: %function , for method: %method', array('%method' => $method, '%function' => $methods[$method]['callback']));
    return FALSE;
  }

  return $method;
}
