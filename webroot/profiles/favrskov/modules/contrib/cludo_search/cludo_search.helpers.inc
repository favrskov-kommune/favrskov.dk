<?php

/**
 * @file
 * Helper functions for the Cludo Search module.
 *
 * @see cludo_search_appliance.module
 */

/**
 * Default module settings.
 */
define('CS_DEFAULT_CUSTOMERID', 'default_customerId');
define('CS_DEFAULT_ENGINEID', 'default_engineId');
define('CS_DEFAULT_SEARCH_PAGE', 'csearch');
define('CS_DEFAULT_DISABLE_AUTOCOMPLETE', FALSE);
define('CS_DEFAULT_HIDE_RESULTS_COUNT', FALSE);
define('CS_DEFAULT_HIDE_DID_YOU_MEAN', FALSE);
define('CS_DEFAULT_HIDE_SEARCH_FILTERS', FALSE);

/**
 * Minimize redundant trips to the db when looking for module settings.
 *
 * Hooks that change module settings should run this function with
 * $refresh = TRUE so other hooks can just get settings without a db
 * query.
 */
function _cludo_search_get_settings($refresh = FALSE) {

  $settings = &drupal_static(__FUNCTION__, NULL, $refresh);

  if (!isset($settings)) {
    $field_keys = _cludo_search_get_field_keys();

    // Settings fall back to default constants.
    foreach ($field_keys as $field) {
      $settings[$field] = variable_get(
          'cludo_search_' . $field, constant('CS_DEFAULT_' . strtoupper($field))
      );
    }
  }

  return $settings;
}
