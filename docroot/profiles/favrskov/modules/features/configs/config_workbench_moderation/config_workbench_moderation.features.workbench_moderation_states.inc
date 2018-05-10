<?php
/**
 * @file
 * config_workbench_moderation.features.workbench_moderation_states.inc
 */

/**
 * Implements hook_workbench_moderation_export_states().
 */
function config_workbench_moderation_workbench_moderation_export_states() {
  $items = array(
    'draft' => array(
      'name' => 'draft',
      'label' => t('Draft'),
      'description' => t('Work in progress'),
      'weight' => -99,
    ),
    'needs_review' => array(
      'name' => 'needs_review',
      'label' => t('Needs Review'),
      'description' => t('Ready for moderation'),
      'weight' => 0,
    ),
    'published' => array(
      'name' => 'published',
      'label' => t('Published'),
      'description' => t('Make this version live'),
      'weight' => 99,
    ),
  );
  return $items;
}
