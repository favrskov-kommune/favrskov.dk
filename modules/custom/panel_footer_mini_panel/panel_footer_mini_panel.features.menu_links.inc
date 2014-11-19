<?php
/**
 * @file
 * panel_footer_mini_panel.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function panel_footer_mini_panel_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-links_aktuelle-udbud:<front>
  $menu_links['menu-footer-links_aktuelle-udbud:<front>'] = array(
    'menu_name' => 'menu-footer-links',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Aktuelle udbud',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-links_aktuelle-udbud:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-links_ean-numre:<front>
  $menu_links['menu-footer-links_ean-numre:<front>'] = array(
    'menu_name' => 'menu-footer-links',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'EAN-Numre',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-links_ean-numre:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-links_ledige-stillinger:<front>
  $menu_links['menu-footer-links_ledige-stillinger:<front>'] = array(
    'menu_name' => 'menu-footer-links',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Ledige stillinger',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-links_ledige-stillinger:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-links_nyheder:<front>
  $menu_links['menu-footer-links_nyheder:<front>'] = array(
    'menu_name' => 'menu-footer-links',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Nyheder',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-links_nyheder:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Aktuelle udbud');
  t('EAN-Numre');
  t('Ledige stillinger');
  t('Nyheder');


  return $menu_links;
}
