<?php
/**
 * @file
 * Implements a new context reaction that can be used to set dynamic background
 * images based on context.
 */

class DynamicBackgroundReaction extends context_reaction {

  function options_form($context) {
    $form = array();
    $form['dynamic_background'] = array(
      '#type' => 'fieldset',
      '#title' => t('Dynamic background'),
      '#description' => t('Select the image that you want for the current context.'),
      '#collapsed' => FALSE,
      '#collapsible' => TRUE,
      '#tree' => TRUE,
    );

    // Add the image selection part of the form.
    $form['dynamic_background'] += dynamic_background_image_selector_form('context', $context->name);

    return $form;
  }

  /**
   * Options form submit handler.
   */
  function options_form_submit($values) {
    // Check if any image have been selected.
    $fid = NULL;
    foreach ($values['dynamic_background'] as $key => $value) {
      if (isset($value['selected']) && $value['selected']) {
        $fid = $key;
        break;
      }
    }

    // Get dynamic background info.
    $info = $values['dynamic_background']['dynamic_background_info'];

    // Update the active background image.
    dynamic_background_set_active($fid, 'context', $info['data']);

    return $values;
  }

  /**
   * Find the selected image and return its id.
   */
  function execute() {
    $image = FALSE;
    foreach ($this->get_contexts() as $context) {
      if (isset($context->reactions['dynamic_background'])) {
        $image = dynamic_background_active_image('context', $context->name);

        // If no image have been found try to select random image (if configured).
        $image_behaviour = variable_get('dynamic_background_context_image_behaviour', array());
        if (!$image && (isset($image_behaviour['random']) && $image_behaviour['random'])) {
          $image = dynamic_background_random_image('context', $context->name);
        }

        break;
      }
    }

    return $image;
  }
}
