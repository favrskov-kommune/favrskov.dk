<?php

/**
 * @file
 * Definition of media_browser_plus_views_handler_area_actions.
 */

/**
 * MBP area with file basket.
 *
 * @ingroup views_area_handlers
 */
class media_browser_plus_views_handler_area_basket extends views_handler_area {

  /**
   * Has no options, so don't return a form.
   */
  public function options_form(&$form, &$form_state) {
  }

  /**
   * Returns the markup for the basket area.
   */
  public function render($empty = FALSE) {
    $output['mbp_basket'] = array(
      '#type' => 'fieldset',
      '#title' => t('Media Basket'),
      '#collapsed' => FALSE,
      '#collapsible' => FALSE,
      '#attributes' => array(
        'class' => array('mbp-file-basket'),
      ),
    );
    // Check if there are files in the basket, if so add them to the list.
    $selected_files = NULL;
    $fids = array();
    if (!empty($this->view->exposed_data['mbp_basket_files'])) {
      $fids = explode(' ', trim($this->view->exposed_data['mbp_basket_files']));
      // Save the basket into a cookie to make them more persistent.
      user_cookie_save(array('mbp.basket' => implode(' ', $fids)));
    }
    if (empty($fids) && isset($_COOKIE['Drupal_visitor_mbp_basket'])) {
      $fids = explode(' ', trim($_COOKIE['Drupal_visitor_mbp_basket']));
    }
    if (!empty($fids)) {
      // Sanitize.
      foreach ($fids as &$fid) {
        $fid = (int) $fid;
      }
      $file_query = new EntityFieldQuery();
      $files = $file_query
        ->entityCondition('entity_type', 'file')
        ->propertyCondition('fid', $fids)
        ->execute();
      if (!empty($files['file'])) {
        $file_entities = file_load_multiple(array_keys($files['file']));
        foreach ($file_entities as $file) {
          $preview = media_get_thumbnail_preview($file);
          $selected_files .= '<li id="media-item-' . $file->fid . '">' . render($preview) . '</li>';
        }
      }
    }

    $output['mbp_basket']['list'] = array(
      '#type' => 'markup',
      '#markup' => '<ul class="mbp-file-basket-list clearfix">' . $selected_files . '</ul>',
    );
    $output['mbp_basket']['download'] = array(
      '#type' => 'button',
      '#value' => t('Download files in Media Basket'),
      '#name' => 'mbp_basket_files_download',
    );
    $output = render($output);

    // Add javascript.
    drupal_add_js(array(
      'mbp' => array(
        'views' => array(
          $this->view->name . ':' . $this->view->current_display => array('media_basket' => TRUE),
        ),
      )),
      'setting'
    );
    drupal_add_library('media_browser_plus', 'media_browser_plus.area_actions');

    // Hide this input from the pager. That way the cookie can do its work.
    unset($this->view->exposed_raw_input['mbp_basket_files']);

    return $output;
  }

  /**
   * Always exposed.
   */
  public function can_expose() {
    return TRUE;
  }

  /**
   * Always exposed.
   */
  public function is_exposed() {
    return TRUE;
  }

  /**
   * Form element to track the media basket.
   */
  public function exposed_form(&$form, &$form_state) {
    $default_value = NULL;
    if (isset($_COOKIE['Drupal_visitor_mbp_basket'])) {
      $fids = explode(' ', trim($_COOKIE['Drupal_visitor_mbp_basket']));
      // Sanitize.
      foreach ($fids as &$fid) {
        $fid = (int) $fid;
      }
      $default_value = implode(' ', array_filter($fids));
    }
    $form['mbp_basket_files'] = array(
      '#type' => 'hidden',
      '#title' => 'Media Basket selected files',
      '#default_value' => $default_value,
      '#attributes' => array(
        'class' => array('mbp-basket-files'),
      ),
    );
  }

}
