DESCRIPTION
============

Integrates jQuery Slider with Drupal.
It provides two form elements, jslider & transfer_slider and one widget for integer fields
All slider parameters are configurable either as parameters for form element or in widget settings form
It also offers a special feature called grouping, by using it one can connect several sliders, the result is
by changing one slider the others sliders linked to it will also change. There are several group types that
indicate how the other sliders change. Look for "group" in README file for further info

INSTALLATION
============

Enable the module at Administer >> Modules.


USAGE
============

For Field Widget you can use jSlider as widget for any integer filefiled

You may user new Forms API element type: transfer_slider or jslider

Example:

function example_form() {

  $form['slider'] = array(
    '#type' => 'transfer_slider',
    '#title' => t('Slider test'),
    '#left_value' => 0,
    '#right_value' => 200,
    '#left' => t('Left input'),
    '#right' => t('Right input'),
    '#size' => 4,
  );

  $form['slider2'] = array(
    '#title' => NULL,
    '#title2' => NULL,
    '#input_title' => t('Min'),
    '#input2_title' => t('Max'),
    /**
     * Boolean: When set to true, the handle will animate with the default duration.
     * String: The name of a speed, such as "fast" or "slow".
     * Number: The duration of the animation, in milliseconds.
     */
    '#animate' => 'fast',
    /**
     * Disables the slider if set to true.
     */
    '#disabled' => FALSE,
    /**
     * The maximum value of the slider.
     */
    '#max' => 100,
    /**
     * The minimum value of the slider.
     */
    '#min' => 0,
    /**
     * Determines whether the slider handles move horizontally (min on left, max on right)
     * or vertically (min on bottom, max on top). Possible values: "horizontal", "vertical".
     */
    '#orientation' => 'horizontal',
    /**
     * Whether the slider represents a range.
     * Multiple types supported:
     *   Boolean: If set to true, the slider will detect if you have two handles and create a stylable range element between these two.
     *   String: Either "min" or "max". A min range goes from the slider min to one handle. A max range goes from one handle to the slider max.
     */
    '#range' => FALSE,
    /**
     * Determines the size or amount of each interval or step the slider takes between the min and max.
     * The full specified value range of the slider (max - min) should be evenly divisible by the step.
     */
    '#step' => 1,
    /**
     * Determines the value of the slider, if there's only one handle.
     * If there is more than one handle, determines the value of the first handle.
     * Or an array of values can be passed array('value'=>1 , 'value2'=> 2) ,
     * the order of values is important
     */
    //'#value' => 0,
    '#default_value' => NULL,
    /**
     * Some default color styles for ease of use
     * red, green, blue
     */
    '#slider_style' => NULL,
    /**
     * Default size for input values
     */
    '#size' => 3,
    /**
     * If set to FALSE will display inputs only when javascript is disabled
     */
    '#display_inputs' => TRUE,
    /**
     * If enabled display the current values of slider
     * as simple text
     */
    '#display_values' => FALSE,
    /**
     * Format of the displaied values
     * The usage is mostly for showing $,% or other signs near the value
     */
    '#display_values_format' => '%{value}%',
    /**
     * Acceptable types are the same as css with and height and it will be used as width
     * or height depending on #orientation
     */
    '#slider_length' => NULL,
    /**
     * Display the element inside a fieldset
     */
    '#display_inside_fieldset' => FALSE,
    /**
     * Sliders with the same group will be linked
     * The behavior of linked sliders depends on group_type parametr
     * group name can only contain letters, numbers and underscore
     */
    '#group' => NULL,
    /**
     * same : All sliders in the same group will have the same value.
     * lock : All sliders in the same group will move with the exact same amount
     * total : The total value of all sliders will be between min/max , incresing value of
     *         one slider decreases the rest of the sliders in the same group
     */
    '#group_type' => 'same',
    /**
     * When set to TRUE, other sliders in the same
     * group will change only if this slider changes
     * values : TRUE , FALSE
     */
    '#group_master' => FALSE,
    /**
     * Disable buildin range validation
     * useful when element is used as widget
     * for fields, since integer fields have range validation
     * values : TRUE , FALSE
     */
    '#validate_range' => TRUE
  );

  $form['slider2'] = array(
    '#title' => 'slider',
    '#type' => 'jslider',
    '#value' => 10,
    '#value2' => 500,
    //'#orientation' => 'vertical',
    '#slider_style' => 'blue',
    '#range' => TRUE,
    '#min' => 10,
    '#max' => 1000,
    '#step' => 100,
    //'#required' => 1,
    //'#disabled' => TRUE,
    //'#display_inputs' => FALSE,
    '#display_values' => TRUE,
    '#slider_length' => '100px',
  );
  
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
  );
  
  return $form;
}

function example_form_submit($form, &$form_state) {
  $left_value   = $form_state['values']['slider']['left'];
  $right_value  = $form_state['values']['slider']['right'];  
  drupal_set_message(t('Left value is !left_value. Right value is !right_value.', array('!left_value' => $left_value, '!right_value' => $right_value)));
}

DEVELOPERS
===========

Original code : Roman Grachev (http://graker.ru/) , Maslouski Yauheni (http://drupalace.ru/)
Fork : Sina Salek (http://sina.salek.ws)
