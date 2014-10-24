<?php
/**
 * @file
 * content_type_article.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_article_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_update_subscription|node|article|form';
  $field_group->group_name = 'group_page_update_subscription';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => t('Page update subscription'),
    'weight' => '36',
    'children' => array(
      0 => 'field_send_update',
      1 => 'field_update_category',
      2 => 'field_update_teaser',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => t('Page update subscription'),
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-page-update-subscription field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_page_update_subscription|node|article|form'] = $field_group;

  return $export;
}
