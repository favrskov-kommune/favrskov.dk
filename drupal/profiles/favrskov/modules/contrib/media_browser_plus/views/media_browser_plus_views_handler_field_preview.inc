<?php

/**
 * @file
 * The media browser plus field handler.
 */

/**
 * Field handler for the media browser plus.
 *
 * @ingroup views_field_handlers
 */
class media_browser_plus_views_handler_field_preview extends views_handler_field {

  /**
   * Define the handler options.
   */
  public function option_definition() {
    $options = parent::option_definition();

    $options['mbp_settings'] = array(
      'contains' => array(
        'add_link' => array(
          'contains' => array(
            'type' => array('default' => 'none'),
            'colorbox_settings' => array('default' => TRUE),
          ),
        ),
      ),
    );
    return $options;
  }

  /**
   * Options form.
   */
  public function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['mbp_settings'] = array(
      '#type' => 'fieldset',
      '#title' => t('Media Browser Plus Settings'),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
      '#weight' => -1,
    );

    $link_options = array(
      'none' => t('None'),
      'edit' => t('Edit'),
      'view' => t('View'),
      'delete' => t('Delete'),
      'download' => t('Download'),
      'usage' => t('Usage'),
      'file' => t('Raw-File'),
    );
    $form['mbp_settings']['add_link'] = array(
      '#type' => 'select',
      '#title' => t('Add link'),
      '#default_value' => $this->options['mbp_settings']['add_link'],
      '#options' => $link_options,
    );
  }

  /**
   * Returns the media browser preview item.
   *
   * @see media_get_thumbnail_preview()
   */
  public function render($values) {
    $file = file_load($values->fid);

    // Prepare file link.
    switch ($this->options['mbp_settings']['add_link']) {
      case 'delete':
      case 'edit':
      case 'usage':
      case 'view':
      case 'download':
        $uri = file_entity_uri($file);
        $link = $uri['path'] . '/' . $this->options['mbp_settings']['add_link'];
        break;

      case 'file':
        $link = file_create_url($file->uri);
        break;

      default:
        $link = NULL;
    }

    $preview = media_get_thumbnail_preview($file);
    return drupal_render($preview);
  }
}
