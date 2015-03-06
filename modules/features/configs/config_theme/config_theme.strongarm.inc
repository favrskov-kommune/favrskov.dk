<?php
/**
 * @file
 * config_theme.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function config_theme_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_favrskovtheme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 0,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => 'public://favicon_0.ico',
    'layout_base_type' => NULL,
    'propeople_shiv' => 1,
    'propeople_shiv_google' => 0,
    'propeople_polyfill_mediaquery' => 1,
    'propeople_polyfill_mediaquery_type' => '0',
    'propeople_clear_registry' => 0,
    'propeople_settings__active_tab' => 'edit-propeople-general',
    'favrskovtheme_header_background' => array(
      0 => 88,
      1 => 100,
      2 => 100,
    ),
    'favrskovtheme_header_opacity' => 1,
    'favrskovtheme_header_links' => '',
    'favrskovtheme_footer_background' => '586464',
    'favrskovtheme_multisite_links' => '',
    'favrskovtheme_settings__active_tab' => 'edit-favrskovtheme-header-footer',
    'favicon_mimetype' => 'image/vnd.microsoft.icon',
  );
  $export['theme_favrskovtheme_settings'] = $strongarm;

  return $export;
}
