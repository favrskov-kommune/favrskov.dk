<?php

/**
 * @file
 * Include file for defining views handlers and data.
 */

/**
 * Implements hook_views_data().
 */
function views_ifempty_views_data() {
  $data['views_ifempty']['table']['group'] = t('Views If Empty');
  $data['views_ifempty']['table']['join'] = array(
    '#global' => array(),
  );

  $data['views_ifempty']['views_ifempty'] = array(
    'title' => t('Views If Empty'),
    'help' => t('Output a field if another field is empty'),
    'field' => array(
      'handler' => 'views_ifempty_handler_field',
    ),
  );

  return $data;
}