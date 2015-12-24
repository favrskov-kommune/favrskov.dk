<?php
/**
 * @file
 * panel_header_mini_panel.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function panel_header_mini_panel_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu for Favrskov Kommune',
    'description' => 'Main menu for Favrskov Kommune',
  );
  // Exported menu: menu-header-menu.
  $menus['menu-header-menu'] = array(
    'menu_name' => 'menu-header-menu',
    'title' => 'Header menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Header menu');
  t('Main menu for Favrskov Kommune');

  return $menus;
}
