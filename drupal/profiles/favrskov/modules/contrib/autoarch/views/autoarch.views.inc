<?php

/**
 * @file
 * Filter file for autoarch
 */

/**
 * Implements hook_views_data().
 */
function autoarch_views_data() {
  $data = array();
  $data['autoarch_state'] = array(
    'table' => array(
      'group' => t('Autoarch'),
      'join' => array(
        'node' => array(
          'left_field' => 'nid',
          'field' => 'nid',
        ),
      ),
    ),
  );
  $data['autoarch_state']['state'] = array(
    'title' => t('State of the node'),
    'help' => t('Actual') . ' / ' . t('Archive'),
  );
  $data['autoarch_state']['state']['filter'] = array(
    'handler' => 'AutoarchFilterMultiple',
  );
  return $data;
}
