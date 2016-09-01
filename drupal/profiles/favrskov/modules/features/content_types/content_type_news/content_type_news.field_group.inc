<?php
/**
 * @file
 * content_type_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_news_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_information|node|news|form';
  $field_group->group_name = 'group_contact_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_grouping';
  $field_group->data = array(
    'label' => 'Kontaktoplysninger',
    'weight' => '26',
    'children' => array(
      0 => 'field_contact_information',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_contact_information|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faq|node|news|form';
  $field_group->group_name = 'group_faq';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_grouping';
  $field_group->data = array(
    'label' => 'Spørgsmål og svar',
    'weight' => '20',
    'children' => array(
      0 => 'field_faq_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-faq field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_faq|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grouping|node|news|form';
  $field_group->group_name = 'group_grouping';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Grouping',
    'weight' => '8',
    'children' => array(
      0 => 'group_domain_access',
      1 => 'group_faq',
      2 => 'group_internal_info',
      3 => 'group_not_used',
      4 => 'group_related_content',
      5 => 'group_self_service_link',
      6 => 'group_table',
      7 => 'group_taxonomy',
      8 => 'group_video',
      9 => 'group_contact_information',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-grouping field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_grouping|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_internal_info|node|news|form';
  $field_group->group_name = 'group_internal_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_grouping';
  $field_group->data = array(
    'label' => 'Info til intern brug',
    'weight' => '24',
    'children' => array(
      0 => 'field_editorial_responsibility',
      1 => 'field_internal_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-internal-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_internal_info|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_not_used|node|news|form';
  $field_group->group_name = 'group_not_used';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_grouping';
  $field_group->data = array(
    'label' => 'Not used',
    'weight' => '27',
    'children' => array(
      0 => 'field_author',
      1 => 'field_taxonomy_local',
      2 => 'field_taxonomy_location',
      3 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-not-used field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_not_used|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|news|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_grouping';
  $field_group->data = array(
    'label' => 'Relateret indhold',
    'weight' => '21',
    'children' => array(
      0 => 'field_related_boxes',
      1 => 'field_related_content',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_related_content|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_self_service_link|node|news|form';
  $field_group->group_name = 'group_self_service_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_grouping';
  $field_group->data = array(
    'label' => 'Selvbetjening eller bannerlink',
    'weight' => '22',
    'children' => array(
      0 => 'field_bannerlink',
      1 => 'field_self_service',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-self-service-link field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_self_service_link|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table|node|news|form';
  $field_group->group_name = 'group_table';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_grouping';
  $field_group->data = array(
    'label' => 'Tabel',
    'weight' => '23',
    'children' => array(
      0 => 'field_table',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-table field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_table|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|news|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_grouping';
  $field_group->data = array(
    'label' => 'Taksonomi',
    'weight' => '18',
    'children' => array(
      0 => 'field_taxonomy_kle',
      1 => 'field_taxonomy_subject_area',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Taksonomi',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-taxonomy field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_taxonomy|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|news|form';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_grouping';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '19',
    'children' => array(
      0 => 'field_video',
      1 => 'field_video_description',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-video field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_video|node|news|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Grouping');
  t('Info til intern brug');
  t('Kontaktoplysninger');
  t('Not used');
  t('Relateret indhold');
  t('Selvbetjening eller bannerlink');
  t('Spørgsmål og svar');
  t('Tabel');
  t('Taksonomi');
  t('Video');

  return $field_groups;
}
