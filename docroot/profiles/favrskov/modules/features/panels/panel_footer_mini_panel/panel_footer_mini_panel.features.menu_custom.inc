<?php
/**
 * @file
 * panel_footer_mini_panel.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function panel_footer_mini_panel_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-links.
  $menus['menu-footer-links'] = array(
    'menu_name' => 'menu-footer-links',
    'title' => 'Footer links',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer links');

  return $menus;
}
