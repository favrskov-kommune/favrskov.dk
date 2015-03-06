<?php
/**
 * @file
 * panel_header_mini_panel.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function panel_header_mini_panel_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_borger:<front>
  $menu_links['main-menu_borger:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Borger',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_borger:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Borger');


  return $menu_links;
}
