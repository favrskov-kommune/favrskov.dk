<?php
/**
 * @file
 * panels_social_directory_listing.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panels_social_directory_listing_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
