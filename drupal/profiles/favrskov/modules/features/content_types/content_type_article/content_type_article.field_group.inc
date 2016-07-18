<?php
/**
 * @file
 * content_type_article.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_article_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_borger_dk|node|article|form';
  $field_group->group_name = 'group_borger_dk';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_grouping';
  $field_group->data = array(
    'label' => 'Borger DK',
    'weight' => '6',
    'children' => array(
      0 => 'field_borgerdk',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-borger-dk field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_borger_dk|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faq|node|article|form';
  $field_group->group_name = 'group_faq';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_grouping';
  $field_group->data = array(
    'label' => 'Spørgsmål og svar',
    'weight' => '3',
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
  $field_groups['group_faq|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grouping|node|article|form';
  $field_group->group_name = 'group_grouping';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Grouping',
    'weight' => '7',
    'children' => array(
      0 => 'group_borger_dk',
      1 => 'group_faq',
      2 => 'group_internal_info',
      3 => 'group_not_used',
      4 => 'group_page_layout',
      5 => 'group_publications',
      6 => 'group_related_content',
      7 => 'group_self_service_link',
      8 => 'group_table',
      9 => 'group_taxonomy',
      10 => 'group_video',
      11 => 'group_domain_access',
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
  $field_groups['group_grouping|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_internal_info|node|article|form';
  $field_group->group_name = 'group_internal_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_grouping';
  $field_group->data = array(
    'label' => 'Info til intern brug',
    'weight' => '9',
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
  $field_groups['group_internal_info|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_not_used|node|article|form';
  $field_group->group_name = 'group_not_used';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_grouping';
  $field_group->data = array(
    'label' => 'Not used',
    'weight' => '12',
    'children' => array(
      0 => 'field_taxonomy_local',
      1 => 'field_taxonomy_location',
      2 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Not used',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_not_used|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_layout|node|article|form';
  $field_group->group_name = 'group_page_layout';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_grouping';
  $field_group->data = array(
    'label' => 'Sidelayout',
    'weight' => '10',
    'children' => array(
      0 => 'field_hide_node_update_date',
      1 => 'field_one_column_layout',
      2 => 'field_job_list',
      3 => 'field_volunteer_jobs_list',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-page-layout field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_page_layout|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publications|node|article|form';
  $field_group->group_name = 'group_publications';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_grouping';
  $field_group->data = array(
    'label' => 'Publikationer',
    'weight' => '8',
    'children' => array(
      0 => 'field_publications',
      1 => 'field_publications_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-publications field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_publications|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|article|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_grouping';
  $field_group->data = array(
    'label' => 'Relateret indhold',
    'weight' => '4',
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
  $field_groups['group_related_content|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_self_service_link|node|article|form';
  $field_group->group_name = 'group_self_service_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_grouping';
  $field_group->data = array(
    'label' => 'Selvbetjening eller bannerlink',
    'weight' => '5',
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
  $field_groups['group_self_service_link|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table|node|article|form';
  $field_group->group_name = 'group_table';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_grouping';
  $field_group->data = array(
    'label' => 'Tabel',
    'weight' => '7',
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
  $field_groups['group_table|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|article|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_grouping';
  $field_group->data = array(
    'label' => 'Taksonomi',
    'weight' => '1',
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
  $field_groups['group_taxonomy|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|article|form';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_grouping';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '2',
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
  $field_groups['group_video|node|article|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Borger DK');
  t('Grouping');
  t('Info til intern brug');
  t('Not used');
  t('Publikationer');
  t('Relateret indhold');
  t('Selvbetjening eller bannerlink');
  t('Sidelayout');
  t('Spørgsmål og svar');
  t('Tabel');
  t('Taksonomi');
  t('Video');

  return $field_groups;
}
