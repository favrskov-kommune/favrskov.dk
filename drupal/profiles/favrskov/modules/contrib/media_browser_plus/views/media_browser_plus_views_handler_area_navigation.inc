<?php

/**
 * @file
 * Definition of media_browser_plus_views_handler_area_navigation.
 */

/**
 * MBP navigation handler.
 *
 * @todo Review / refactor to meet the proper views coding style.
 *
 * @ingroup views_area_handlers
 */
class media_browser_plus_views_handler_area_navigation extends views_handler_area_view {

  /**
   * Initialize the handler.
   *
   * This is kind of hackish, how is this done properly?
   *
   * @todo Review / refactor to meet the proper views coding style.
   */
  public function init(&$view, &$options) {
    parent::init($view, $options);
    // @todo Review / refactor to meet the proper views coding style.
    $this->table = 'field_data_field_folder';
  }

  /**
   * Define options.
   *
   * @todo Review / refactor to meet the proper views coding style.
   */
  public function option_definition() {
    $options = parent::option_definition();
    $this->definition['field'] = 'field_folder_tid';
    $options['table'] = array('default' => 'field_data_field_folder');
    $options['field'] = array('default' => 'field_folder_tid');
    return $options;
  }

  /**
   * Remove label from options form.
   */
  public function options_form(&$form, &$form_state) {
    $options = parent::options_form($form, $form_state);
    unset($form['label']);
    return $options;
  }

  /**
   * Add folder filter to the query.
   */
  public function query() {
    $root_folder = media_browser_plus_get_media_root_folder();
    if (!empty($this->view->exposed_data['mbp_current_folder'])) {
      $this->value = (int) $this->view->exposed_data['mbp_current_folder'];
      user_cookie_save(array('mbp.current_folder' => $this->value));
    }
    elseif (!empty($_COOKIE['Drupal_visitor_mbp_current_folder']) && (int) $_COOKIE['Drupal_visitor_mbp_current_folder'] > 0) {
      $this->value = (int) $_COOKIE['Drupal_visitor_mbp_current_folder'];
    }
    else {
      $this->value = $root_folder->tid;
    }
    $this->ensure_my_table();
    $where_group = 1;

    // Ensure folders is always an array.
    $folders = array($this->value);
    // If including subfolders is enabled fetch all child terms of the current
    // folder.
    if (isset($this->view->exposed_data['mbp_current_folder_include_subfolders']) && $this->view->exposed_data['mbp_current_folder_include_subfolders'] !== 0) {
      $taxonomy_tree = taxonomy_get_tree(taxonomy_vocabulary_machine_name_load('media_folders')->vid, $this->value);
      if (is_array($taxonomy_tree)) {
        foreach ($taxonomy_tree as $term) {
          $folders[] = (int) $term->tid;
        }
      }
    }

    // If this is the root folder also show files without a folder.
    if ($this->value == $root_folder->tid) {
      // Add new where group to use OR condition.
      $where_group = $this->query->set_where_group('OR');
      $this->query->add_where($where_group, "$this->table_alias.$this->real_field", $this->value, 'IS NULL');
    }
    $this->query->add_where($where_group, "$this->table_alias.$this->real_field", $folders, 'IN');
  }

  /**
   * Always exposed.
   */
  public function can_expose() {
    return TRUE;
  }

  /**
   * Always expose.
   */
  public function is_exposed() {
    return TRUE;
  }

  /**
   * Doesn't output anything because it's hijacked by the MBP.
   *
   * @see template_preprocess_media_browser_plus_views_view_media_browser()
   * @see media_browser_plus_views_handler_area_navigation::render_custom()
   */
  public function render($empty = FALSE) {}

  /**
   * Called to embed the view into the sidebar of the media browser plus style.
   *
   * @see template_preprocess_media_browser_plus_views_view_media_browser()
   * @see media_browser_plus_views_handler_area_navigation::render_custom()
   */
  public function render_custom($empty = FALSE) {
    return parent::render($empty);
  }

  /**
   * Form element to track the media basket.
   */
  public function exposed_form(&$form, &$form_state) {
    $root_folder = media_browser_plus_get_media_root_folder();
    $folders = taxonomy_get_tree($root_folder->vid, $root_folder->tid);
    $folder_options = array($root_folder->tid => $root_folder->name);
    foreach ($folders as $folder) {
      $folder_options[$folder->tid] = str_repeat('-', $folder->depth + 1) . $folder->name;
    }

    $default_folder = $root_folder->tid;
    if (!empty($_COOKIE['Drupal_visitor_mbp_current_folder']) && (int) $_COOKIE['Drupal_visitor_mbp_current_folder'] > 0) {
      $default_folder = (int) $_COOKIE['Drupal_visitor_mbp_current_folder'];
    }

    $form['mbp_current_folder'] = array(
      '#type' => 'select',
      '#title' => t('Folder'),
      '#default_value' => $default_folder,
      '#options' => $folder_options,
      '#attributes' => array(
        'class' => array('mbp-selected-folder'),
      ),
    );

    // Add a checkbox to include subfolders in the view results.
    $form['mbp_current_folder_include_subfolders'] = array(
      '#type' => 'checkbox',
      '#title' => t('Include subfolders in results'),
      '#default_value' => 0,
    );
  }

}
