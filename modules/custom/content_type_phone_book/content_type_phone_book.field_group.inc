<?php
/**
 * @file
 * content_type_phone_book.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_phone_book_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_phone_book_address|node|phone_book|form';
  $field_group->group_name = 'group_phone_book_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phone_book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_phone_book_data';
  $field_group->data = array(
    'label' => 'Address',
    'weight' => '15',
    'children' => array(
      0 => 'field_phone_book_address',
      1 => 'field_phone_book_address_sep',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Address',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Address information. ',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_phone_book_address|node|phone_book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_phone_book_data|node|phone_book|form';
  $field_group->group_name = 'group_phone_book_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phone_book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Phone book data',
    'weight' => '1',
    'children' => array(
      0 => 'group_phone_book_address',
      1 => 'group_phone_book_phone_numbers',
      2 => 'group_phone_book_personal',
      3 => 'group_phone_book_urls',
      4 => 'group_phone_book_opening_hours',
      5 => 'group_phone_book_organization',
      6 => 'group_phone_book_other',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-phone-book-data field-group-tabs',
      ),
    ),
  );
  $export['group_phone_book_data|node|phone_book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_phone_book_opening_hours|node|phone_book|form';
  $field_group->group_name = 'group_phone_book_opening_hours';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phone_book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_phone_book_data';
  $field_group->data = array(
    'label' => 'Opening hours',
    'weight' => '18',
    'children' => array(
      0 => 'field_phone_book_opening_hours',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-phone-book-opening-hours field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_phone_book_opening_hours|node|phone_book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_phone_book_organization|node|phone_book|form';
  $field_group->group_name = 'group_phone_book_organization';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phone_book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_phone_book_data';
  $field_group->data = array(
    'label' => 'Organization',
    'weight' => '14',
    'children' => array(
      0 => 'field_phone_book_department',
      1 => 'field_phone_book_administration',
      2 => 'field_phone_book_type',
      3 => 'field_phone_book_committee',
      4 => 'field_phone_book_party',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Organization',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-phone-book-organization field-group-tab',
        'description' => 'Information about the organization and where the employee is located in the organization.',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_phone_book_organization|node|phone_book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_phone_book_other|node|phone_book|form';
  $field_group->group_name = 'group_phone_book_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phone_book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_phone_book_data';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '19',
    'children' => array(
      0 => 'field_phone_book_show_picture',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-phone-book-other field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_phone_book_other|node|phone_book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_phone_book_personal|node|phone_book|form';
  $field_group->group_name = 'group_phone_book_personal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phone_book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_phone_book_data';
  $field_group->data = array(
    'label' => 'Personal',
    'weight' => '13',
    'children' => array(
      0 => 'field_image',
      1 => 'field_phone_book_email',
      2 => 'field_phone_book_stuff',
      3 => 'field_phone_book_firstname',
      4 => 'field_phone_book_lastname',
      5 => 'field_phone_book_job_title',
      6 => 'field_phone_book_work_area',
      7 => 'field_phone_book_job_task',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Personal',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-phone-book-personal field-group-tab',
        'description' => 'Personal information about the employee.',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_phone_book_personal|node|phone_book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_phone_book_phone_numbers|node|phone_book|form';
  $field_group->group_name = 'group_phone_book_phone_numbers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phone_book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_phone_book_data';
  $field_group->data = array(
    'label' => 'Phone numbers',
    'weight' => '16',
    'children' => array(
      0 => 'field_phone_book_cell_phone',
      1 => 'field_phone_book_phone',
      2 => 'field_phone_book_main_number',
      3 => 'field_phone_book_fax_number',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_phone_book_phone_numbers|node|phone_book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_phone_book_urls|node|phone_book|form';
  $field_group->group_name = 'group_phone_book_urls';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phone_book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_phone_book_data';
  $field_group->data = array(
    'label' => 'URL\'s',
    'weight' => '17',
    'children' => array(
      0 => 'field_phone_book_blog',
      1 => 'field_phone_book_facebook',
      2 => 'field_phone_book_website',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-phone-book-urls field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_phone_book_urls|node|phone_book|form'] = $field_group;

  return $export;
}
