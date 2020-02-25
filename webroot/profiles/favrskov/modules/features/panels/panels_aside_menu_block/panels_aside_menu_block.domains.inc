<?php
/**
 * @file
 * panels_aside_menu_block.domains.inc
 */

/**
 * Implements hook_domain_menu_block_default_domain_menu_blocks().
 */
function panels_aside_menu_block_domain_menu_block_default_domain_menu_blocks() {
$dmbs = array();
  $dmbs['main_menu'] = array(
  'machine_name' => 'main_menu',
  'base_name' => 'Main menu',
  'description' => 'Main menu',
  'level' => 2,
  'depth' => 3,
  'expanded' => 0,
  'follow' => 0,
  'sort' => 1,
  'auto_create' => 1,
  'auto_delete' => 1,
);

return $dmbs;
}
