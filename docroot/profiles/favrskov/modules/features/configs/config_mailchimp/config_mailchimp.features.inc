<?php
/**
 * @file
 * config_mailchimp.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function config_mailchimp_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_mailchimp_list().
 */
function config_mailchimp_default_mailchimp_list() {
  $items = array();
  $items['nyheder_fra_roskilde_kommune'] = entity_import('mailchimp_list', '{
    "name" : "nyheder_fra_roskilde_kommune",
    "mc_list_id" : "2faa99a074",
    "label" : "Nyheder fra Roskilde Kommune",
    "description" : "",
    "settings" : {
      "roles" : { "2" : 2, "3" : 3, "1" : 1 },
      "mergefields" : { "NAME" : "name", "EMAIL" : "mail" },
      "mergefields_display" : { "NAME" : true, "EMAIL" : true },
      "doublein" : 1,
      "show_register_form" : 0,
      "default_register_form_optin" : 0,
      "show_account_form" : 0,
      "form_label" : "",
      "submit_label" : "Submit",
      "include_interest_groups" : 1,
      "opt_in_interest_groups" : 0,
      "interest_groups_label" : "Interest Groups",
      "cron" : 0,
      "webhooks" : 0,
      "allow_anonymous" : 1,
      "required" : 0
    },
    "rdf_mapping" : []
  }');
  return $items;
}
