<?php

/**
 * @file
 * Definition of media_browser_plus_views_handler_area_actions.
 */

/**
 * MBP area with file actions.
 *
 * @ingroup views_area_handlers
 */
class media_browser_plus_views_handler_area_actions extends views_handler_area {

  /**
   * Define the handler options.
   */
  public function option_definition() {
    $options = parent::option_definition();
    $options['mbp_action_area'] = array(
      'contains' => array(
        'actions' => array(
          'default' => array('view', 'edit', 'delete', 'download'),
        ),
      ),
    );
    return $options;
  }

  /**
   * Options form to configure the enabled actions.
   */
  public function options_form(&$form, &$form_state) {
    $form['mbp_action_area'] = array(
      '#type' => 'fieldset',
      '#title' => t('Media Browser Plus Settings'),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
      '#weight' => -1,
    );

    $action_options = array(
      'edit' => t('Edit'),
      'delete' => t('Delete'),
      // 'view' => t('View'),
      'download' => t('Download'),
      // 'usage' => t('Usage'),
    );
    // Check if there's a basket area, if so add basket action.
    foreach ($this->view->display_handler->handlers as $area => $handlers) {
      foreach ($handlers as $handler) {
        if ($handler instanceof media_browser_plus_views_handler_area_basket) {
          $action_options['basket'] = t('Add to Media basket');
          break(2);
        }
      }
    }

    $form['mbp_action_area']['actions'] = array(
      '#type' => 'checkboxes',
      '#title' => t('Enabled actions'),
      '#description' => t('Currently the actions are usable whe JavaScript is enabled'),
      '#default_value' => $this->options['mbp_action_area']['actions'],
      '#options' => $action_options,
    );
  }

  /**
   * Returns the action buttons and sets the JS configuration.
   */
  public function render($empty = FALSE) {
    $output = '';
    $actions = array();
    foreach ($this->options['mbp_action_area']['actions'] as $key => $action) {
      if ($key == $action && method_exists($this, 'render_action_' . $action)) {
        $output .= $this->{'render_action_' . $action}();
        $actions[$action] = $action;
      }
    }

    // Add javascript.
    drupal_add_js(array(
        'mbp' => array(
          'views' => array(
            $this->view->name . ':' . $this->view->current_display => array('actions' => $actions),
          ),
        )),
      'setting'
    );
    drupal_add_library('media_browser_plus', 'media_browser_plus');
    return $output;
  }

  /**
   * Renders the output for the edit action.
   */
  public function render_action_edit() {
    $element = array(
      '#type' => 'button',
      '#name' => 'mbp-action-edit',
      '#value' => t('Edit selected'),
      '#attributes' => array(
        'class' => array('mbp-action', 'mbp-action-edit'),
      ),
    );
    return render($element);
  }

  /**
   * Renders the output for the delete action.
   */
  public function render_action_delete() {
    $element = array(
      '#type' => 'button',
      '#name' => 'mbp-action-delete',
      '#value' => t('Delete selected'),
      '#attributes' => array(
        'class' => array('mbp-action', 'mbp-action-delete'),
      ),
    );
    return render($element);
  }

  /**
   * Renders the output for the basket action.
   */
  public function render_action_basket() {
    $element = array(
      '#type' => 'button',
      '#name' => 'mbp-action-basket',
      '#value' => t('Add selected to basket'),
      '#attributes' => array(
        'class' => array('mbp-action', 'mbp-action-basket'),
      ),
    );
    return render($element);
  }

  /**
   * Renders the output for the delete action.
   */
  public function render_action_download() {
    $element = array(
      '#type' => 'button',
      '#name' => 'mbp-action-download',
      '#value' => t('Download selected'),
      '#attributes' => array(
        'class' => array('mbp-action', 'mbp-action-download'),
      ),
    );
    return render($element);
  }
}
