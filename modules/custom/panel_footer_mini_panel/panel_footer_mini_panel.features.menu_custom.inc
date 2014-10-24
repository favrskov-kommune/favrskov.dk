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
  // Exported menu: menu-footer-visit-also.
  $menus['menu-footer-visit-also'] = array(
    'menu_name' => 'menu-footer-visit-also',
    'title' => 'Footer Visit also',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer Visit also');
  t('Footer links');


  return $menus;
}
