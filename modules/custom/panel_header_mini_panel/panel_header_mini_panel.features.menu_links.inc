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

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Borger',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: main-menu:http://www.google.com?q=english
  $menu_links['main-menu:http://www.google.com?q=english'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.google.com?q=english',
    'router_path' => '',
    'link_title' => 'English',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Exported menu link: main-menu:http://www.google.com?q=erhverv
  $menu_links['main-menu:http://www.google.com?q=erhverv'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.google.com?q=erhverv',
    'router_path' => '',
    'link_title' => 'Erhverv',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: main-menu:http://www.google.com?q=kommunen
  $menu_links['main-menu:http://www.google.com?q=kommunen'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.google.com?q=kommunen',
    'router_path' => '',
    'link_title' => 'Kommunen',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: main-menu:http://www.google.com?q=kontakt
  $menu_links['main-menu:http://www.google.com?q=kontakt'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.google.com?q=kontakt',
    'router_path' => '',
    'link_title' => 'Kontakt',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
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
