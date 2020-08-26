<?php

/**
 * @file
 * chatbot.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function chatbot_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_chatbot|node|article|form';
  $field_group->group_name = 'group_chatbot';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_grouping';
  $field_group->data = array(
    'label' => 'Chatbot',
    'weight' => '13',
    'children' => array(
      0 => 'field_chatbot_name',
      1 => 'field_chatbot_category',
      2 => 'field_chatbot_enable',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-chatbot field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_chatbot|node|article|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Chatbot');

  return $field_groups;
}
