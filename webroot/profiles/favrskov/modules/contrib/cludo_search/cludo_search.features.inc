<?php

/**
 * @file
 * Features component.
 */

/**
 * Implements hook_features_export_options().
 */
function cludo_search_profile_features_export_options() {
  $options = array();
  $options['cludo_search_customerId'] = 'Suppiled customer ID from cludo search';
  $options['cludo_search_engineId'] = 'Suppiled engine ID from cludo search';
  $options['cludo_search_search_page'] = 'The site configured search page path';
  $options['cludo_search_hide_did_you_mean'] = 'Hides how did you mean';
  $options['cludo_search_hide_results_count'] = 'Hides results count';
  $options['cludo_search_hide_search_filters'] = 'Hides search filters';
  $options['cludo_search_disable_autocomplete'] = 'Stops autocomplete';
  return $options;
}

/**
 * Implements hook_features_export().
 */
function cludo_search_profile_features_export($data, &$export, $module_name = '') {
  $keys = _cludo_search_get_field_keys();
  foreach ($keys as $key) {
    if (isset($data['cludo_search_' . $key])) {
      $export['features']['cludo_search_profile']['cludo_search_' . $key] = variable_get('cludo_search_' . $key);
    }
  }
}

/**
 * Implements hook_features_export_render().
 */
function cludo_search_profile_features_export_render($module_name, $data, $export = NULL) {
  $code = array();
  $code[] = '  $cludo_search_profile = array();';

  foreach ($data as $key => $name) {
    if ($export) {
      $code[] = "  \$cludo_search_profile['{$key}'] = " . features_var_export($name) . ";";
    }
    else {
      $val = variable_get($name);
      $code[] = "  \$cludo_search_profile['{$name}'] = " . features_var_export($val) . ";";
    }
  }
  $code[] = "  return \$cludo_search_profile;";
  $code = implode("\n", $code);
  return array('cludo_search_defaults' => $code);
}

/**
 * Implements hook_features_revert().
 */
function cludo_search_profile_features_revert($module) {
  return cludo_search_profile_features_rebuild($module);
}

/**
 * Implements hook_features_rebuild().
 */
function cludo_search_profile_features_rebuild($module_name) {
  $mycomponents = module_invoke($module_name, 'cludo_search_defaults');
  if (!empty($mycomponents)) {
    foreach ($mycomponents as $name => $value) {
      variable_set($name, $value);
    }
  }
}
