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
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: main-menu_erhverv:http://www.google.com?q=erhverv
  $menu_links['main-menu_erhverv:http://www.google.com?q=erhverv'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.google.com?q=erhverv',
    'router_path' => '',
    'link_title' => 'Erhverv',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_erhverv:http://www.google.com?q=erhverv',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
  );
  // Exported menu link: main-menu_kommunen:http://www.google.com?q=kommunen
  $menu_links['main-menu_kommunen:http://www.google.com?q=kommunen'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.google.com?q=kommunen',
    'router_path' => '',
    'link_title' => 'Kommunen',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_kommunen:http://www.google.com?q=kommunen',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
  );
  // Exported menu link: menu-header-menu_english:<front>
  $menu_links['menu-header-menu_english:<front>'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'English',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-header-menu_english:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_kontakt:<front>
  $menu_links['menu-header-menu_kontakt:<front>'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Kontakt',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-header-menu_kontakt:<front>',
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
  t('Borger');
  t('English');
  t('Erhverv');
  t('Kommunen');
  t('Kontakt');


  return $menu_links;
}
