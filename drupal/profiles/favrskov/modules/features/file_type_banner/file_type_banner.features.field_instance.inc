<?php
/**
 * @file
 * file_type_banner.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function file_type_banner_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'file-banner-field_folder'.
  $field_instances['file-banner-field_folder'] = array(
    'active' => 1,
    'bundle' => 'banner',
    'bundles' => array(
      'file' => array(
        0 => 'image',
        1 => 'video',
        2 => 'audio',
        3 => 'document',
      ),
    ),
    'cardinality' => 1,
    'columns' => array(
      'tid' => array(
        'not null' => FALSE,
        'type' => 'int',
        'unsigned' => TRUE,
      ),
    ),
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'wysiwyg' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'file',
    'entity_types' => array(),
    'field_name' => 'field_folder',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'label' => 'Media Folder',
    'locked' => 0,
    'module' => 'taxonomy',
    'required' => TRUE,
    'settings' => array(
      'allow_term_autocreation' => TRUE,
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'media_folders',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'storage' => array(
      'active' => 1,
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_folder' => array(
              'tid' => 'field_folder_tid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_folder' => array(
              'tid' => 'field_folder_tid',
            ),
          ),
        ),
      ),
      'module' => 'field_sql_storage',
      'settings' => array(),
      'type' => 'field_sql_storage',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'file-banner-field_html_and_js'.
  $field_instances['file-banner-field_html_and_js'] = array(
    'bundle' => 'banner',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'wysiwyg' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'file',
    'field_name' => 'field_html_and_js',
    'label' => 'html and js',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'custom_tokens_no_filters_' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'job_html' => 0,
          'no_filter' => 'no_filter',
          'plain_text' => 0,
          'video_html' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'custom_tokens_no_filters_' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 0,
            ),
            'job_html' => array(
              'weight' => 0,
            ),
            'no_filter' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'video_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
      'wysiwyg_override' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 30,
      ),
      'type' => 'text_textarea',
      'weight' => 42,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Media Folder');
  t('html and js');

  return $field_instances;
}
