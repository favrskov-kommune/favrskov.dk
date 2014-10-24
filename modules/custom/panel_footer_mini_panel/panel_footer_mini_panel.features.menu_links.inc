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

  // Exported menu link: menu-footer-links:http://google.com
  $menu_links['menu-footer-links:http://google.com'] = array(
    'menu_name' => 'menu-footer-links',
    'link_path' => 'http://google.com',
    'router_path' => '',
    'link_title' => 'Read out loud',
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
  // Exported menu link: menu-footer-links:https://www.google.com.ua/search?q=events&oq=events&aqs=chrome.0.69i59j69i60j0l3j69i62.1240j0&sourceid=chrome&ie=UTF-8
  $menu_links['menu-footer-links:https://www.google.com.ua/search?q=events&oq=events&aqs=chrome.0.69i59j69i60j0l3j69i62.1240j0&sourceid=chrome&ie=UTF-8'] = array(
    'menu_name' => 'menu-footer-links',
    'link_path' => 'https://www.google.com.ua/search?q=events&oq=events&aqs=chrome.0.69i59j69i60j0l3j69i62.1240j0&sourceid=chrome&ie=UTF-8',
    'router_path' => '',
    'link_title' => 'Events',
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
  // Exported menu link: menu-footer-links:https://www.google.com.ua/search?q=jobs&oq=jobs&aqs=chrome.0.69i57j69i61j0l2j69i62l2.1508j0&sourceid=chrome&ie=UTF-8
  $menu_links['menu-footer-links:https://www.google.com.ua/search?q=jobs&oq=jobs&aqs=chrome.0.69i57j69i61j0l2j69i62l2.1508j0&sourceid=chrome&ie=UTF-8'] = array(
    'menu_name' => 'menu-footer-links',
    'link_path' => 'https://www.google.com.ua/search?q=jobs&oq=jobs&aqs=chrome.0.69i57j69i61j0l2j69i62l2.1508j0&sourceid=chrome&ie=UTF-8',
    'router_path' => '',
    'link_title' => 'Jobs',
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
  // Exported menu link: menu-footer-links:https://www.google.com.ua/search?q=news&oq=news&aqs=chrome.0.69i57j69i60j69i65j69i60j69i61j0.645j0&sourceid=chrome&ie=UTF-8
  $menu_links['menu-footer-links:https://www.google.com.ua/search?q=news&oq=news&aqs=chrome.0.69i57j69i60j69i65j69i60j69i61j0.645j0&sourceid=chrome&ie=UTF-8'] = array(
    'menu_name' => 'menu-footer-links',
    'link_path' => 'https://www.google.com.ua/search?q=news&oq=news&aqs=chrome.0.69i57j69i60j69i65j69i60j69i61j0.645j0&sourceid=chrome&ie=UTF-8',
    'router_path' => '',
    'link_title' => 'News',
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
  // Exported menu link: menu-footer-visit-also:http://google.com
  $menu_links['menu-footer-visit-also:http://google.com'] = array(
    'menu_name' => 'menu-footer-visit-also',
    'link_path' => 'http://google.com',
    'router_path' => '',
    'link_title' => 'Other municipality pages',
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
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  t('Jobs');
  t('News');
  t('Other municipality pages');
  t('Read out loud');


  return $menu_links;
}
