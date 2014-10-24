<?php
/**
 * @file
 * content_type_hearing.features.webform.inc
 */

/**
 * Implements hook_webform_defaults().
 */
function content_type_hearing_webform_defaults() {
$webforms = array();
  $webforms['default_hearing'] = array(
  'title' => 'Default Hearing',
  'log' => '',
  'status' => 0,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'hearing',
  'language' => 'en',
  'tnid' => 0,
  'translate' => 0,
  'body' => array(),
  'field_hearing_start_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-06-18 12:45:00',
        'timezone' => 'Europe/Copenhagen',
        'timezone_db' => 'Europe/Copenhagen',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_hearing_end_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-06-18 12:45:00',
        'timezone' => 'Europe/Copenhagen',
        'timezone_db' => 'Europe/Copenhagen',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_hearing_category' => array(
    'und' => array(
      0 => array(
        'tid' => 5451,
      ),
    ),
  ),
  'field_image_thumbnail' => array(),
  'field_image_description' => array(),
  'field_video' => array(),
  'field_video_description' => array(),
  'field_teaser' => array(),
  'field_table' => array(
    'und' => array(
      0 => array(
        'value' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_taxonomy_kle' => array(),
  'field_self_service' => array(),
  'field_bannerlink' => array(),
  'field_faq_ref' => array(),
  'field_borgerdk' => array(),
  'field_related_boxes' => array(),
  'field_publications_title' => array(),
  'field_publications' => array(),
  'field_related_content' => array(),
  'field_contact_information' => array(),
  'field_taxonomy_subject_area' => array(),
  'field_taxonomy_location' => array(),
  'field_taxonomy_local' => array(),
  'field_editorial_responsibility' => array(),
  'field_fics_esdh_cases' => array(),
  'field_fics_esdh_documents' => array(),
  'field_hide_node_update_date' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'teaser' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'machine_name' => 'default_hearing',
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(
      0 => array(
        'email' => 'default_hearing__email',
        'subject' => 'Hearing Response submission',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => 'Thank you for your response!

Submitted on %date
Submitted values are:
%email_values',
        'excluded_components' => array(),
        'html' => 0,
        'attachments' => 1,
        'components_machine_names' => array(
          'email' => TRUE,
          'subject' => FALSE,
          'from_name' => FALSE,
          'from_address' => FALSE,
        ),
      ),
      1 => array(
        'email' => 'kommunen@favrskov.dk',
        'subject' => 'Hearing Response submission',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => 'Submitted response on %date

Submitted values are:
%email_values

The results of this submission may be viewed at:
%response_url',
        'excluded_components' => array(),
        'html' => 0,
        'attachments' => 1,
        'components_machine_names' => array(
          'email' => FALSE,
          'subject' => FALSE,
          'from_name' => FALSE,
          'from_address' => FALSE,
        ),
      ),
    ),
    'components' => array(
      'default_hearing__name' => array(
        'form_key' => 'name',
        'name' => 'Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'encrypt' => 0,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
          'submission_field' => TRUE,
        ),
        'mandatory' => 1,
        'weight' => 0,
        'machine_name' => 'default_hearing__name',
        'page_num' => 1,
      ),
      'default_hearing__email' => array(
        'form_key' => 'email',
        'name' => 'E-mail',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'encrypt' => 0,
          'width' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
          'submission_field' => TRUE,
        ),
        'mandatory' => 1,
        'weight' => 1,
        'machine_name' => 'default_hearing__email',
        'page_num' => 1,
      ),
      'default_hearing__comment' => array(
        'form_key' => 'comment',
        'name' => 'Comment',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'resizable' => 1,
          'disabled' => 0,
          'conditional_operator' => '=',
          'encrypt' => 0,
          'cols' => '',
          'rows' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 2,
        'machine_name' => 'default_hearing__comment',
        'page_num' => 1,
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'domains' => array(
    1 => 1,
  ),
  'domain_site' => FALSE,
  'subdomains' => array(
    0 => 'Favrskov Kommune',
  ),
  'domain_source' => -5,
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
  'webform_features_author' => 'admin',
  'webform_features_revision_author' => 'admin',
);
  $webforms['default_hearing_attachment'] = array(
  'title' => 'Default Hearing with Attachment',
  'log' => '',
  'status' => 0,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'hearing',
  'language' => 'en',
  'tnid' => 0,
  'translate' => 0,
  'body' => array(),
  'field_hearing_start_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-06-18 12:45:00',
        'timezone' => 'Europe/Copenhagen',
        'timezone_db' => 'Europe/Copenhagen',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_hearing_end_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-06-18 12:45:00',
        'timezone' => 'Europe/Copenhagen',
        'timezone_db' => 'Europe/Copenhagen',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_hearing_category' => array(
    'und' => array(
      0 => array(
        'tid' => 5451,
      ),
    ),
  ),
  'field_image_thumbnail' => array(),
  'field_image_description' => array(),
  'field_video' => array(),
  'field_video_description' => array(),
  'field_teaser' => array(),
  'field_table' => array(
    'und' => array(
      0 => array(
        'value' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_taxonomy_kle' => array(),
  'field_self_service' => array(),
  'field_bannerlink' => array(),
  'field_faq_ref' => array(),
  'field_borgerdk' => array(),
  'field_related_boxes' => array(),
  'field_publications_title' => array(),
  'field_publications' => array(),
  'field_related_content' => array(),
  'field_contact_information' => array(),
  'field_taxonomy_subject_area' => array(),
  'field_taxonomy_location' => array(),
  'field_taxonomy_local' => array(),
  'field_editorial_responsibility' => array(),
  'field_fics_esdh_cases' => array(),
  'field_fics_esdh_documents' => array(),
  'field_hide_node_update_date' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'teaser' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'machine_name' => 'default_hearing_attachment',
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(
      0 => array(
        'email' => 'default_hearing__email',
        'subject' => 'Hearing Response submission',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => 'Thank you for your response!

Submitted on %date
Submitted values are:
%email_values',
        'excluded_components' => array(
          0 => 4,
        ),
        'html' => 0,
        'attachments' => 1,
        'components_machine_names' => array(
          'email' => TRUE,
          'subject' => FALSE,
          'from_name' => FALSE,
          'from_address' => FALSE,
        ),
      ),
      1 => array(
        'email' => 'kommunen@favrskov.dk',
        'subject' => 'Hearing Response submission',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => 'Submitted response on %date

Submitted values are:
%email_values

The results of this submission may be viewed at:
%response_url',
        'excluded_components' => array(
          0 => 4,
        ),
        'html' => 0,
        'attachments' => 1,
        'components_machine_names' => array(
          'email' => FALSE,
          'subject' => FALSE,
          'from_name' => FALSE,
          'from_address' => FALSE,
        ),
      ),
    ),
    'components' => array(
      'default_hearing__name' => array(
        'form_key' => 'name',
        'name' => 'Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'encrypt' => 0,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 0,
        'machine_name' => 'default_hearing__name',
        'page_num' => 1,
      ),
      'default_hearing__email' => array(
        'form_key' => 'email',
        'name' => 'E-mail',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'encrypt' => 0,
          'width' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 1,
        'machine_name' => 'default_hearing__email',
        'page_num' => 1,
      ),
      'default_hearing__comment' => array(
        'form_key' => 'comment',
        'name' => 'Comment',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'resizable' => 1,
          'disabled' => 0,
          'conditional_operator' => '=',
          'encrypt' => 0,
          'cols' => '',
          'rows' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 2,
        'machine_name' => 'default_hearing__comment',
        'page_num' => 1,
      ),
      'default_hearing_attachment__image' => array(
        'form_key' => 'image',
        'name' => 'Image',
        'type' => 'file',
        'value' => '',
        'extra' => array(
          'scheme' => 'public',
          'title_display' => 'before',
          'private' => 0,
          'progress_indicator' => 'throbber',
          'filtering' => array(
            'size' => '',
            'types' => array(
              0 => 'gif',
              1 => 'jpg',
              2 => 'png',
            ),
            'addextensions' => '',
          ),
          'conditional_operator' => '=',
          'directory' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 0,
        'weight' => 3,
        'machine_name' => 'default_hearing_attachment__image',
        'page_num' => 1,
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'domains' => array(
    1 => 1,
  ),
  'domain_site' => FALSE,
  'subdomains' => array(
    0 => 'Favrskov Kommune',
  ),
  'domain_source' => -5,
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
  'webform_features_author' => 'admin',
  'webform_features_revision_author' => 'admin',
);
return $webforms;
}
