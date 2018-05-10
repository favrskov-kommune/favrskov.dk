(function($, Drupal) {
  /**
   * This script adds jQuery slider functionality to transform_slider form element
   */
  Drupal.behaviors.jSliderFieldjSlider = {
    attach: function (context, settings) {

      // Create sliders
      $('.jslider-container:not(.jslider-processed)', context).each(function () {

        $(this).addClass('jslider-processed');
        var slider_id = $(this).parent().attr('id');
        var setting = settings['jslider_field_' + slider_id];

        // Get values
        var $slider = $(this).parents('.jslider', context);

        var $values = [];
        var $value = $slider.find('.jslider-value-field', context).val() - 0;
        var $value2 = $slider.find('.jslider-value2-field', context).val() - 0;
        if (!isNaN($value2)) {
          $values = [$value, $value2];
        } else {
          setting.value = $value;
          setting.current_value = $value;
        }

        if (!setting.display_inputs) {
          $slider.find('.jslider-value-field, .jslider-value2-field', context).parent().hide();
        }
        // Setup slider
        $(this).slider({
          value: $value,
          animate : setting.animate,
          max : setting.max - 0,
          min : setting.min - 0,
          orientation : setting.orientation,
          range : setting.range,
          step : setting.step,
          values : $values,
          slide: jslidersSlideProcess,
          stop: jslidersSlideStop,
          change: jslidersSlideChange
        });

        if (setting.disabled) {
          $(this).slider( "disable" );
        }

        jslidersSlideUpdateFields($slider, {value: $value, values: $values});
      });



      // Bind left textfield changes
      $('.jslider-value-field:not(.jslider-processed)', context)
          .addClass('jslider-processed')
          .keyup(function(e) {
            // Get container
            var $slider = $(this).parents('.jslider', context);

            // Left input value
            var $value = $(this).val() - 0;
            if (isNaN($value)) {
              $value = 0;
              $slider.find('.jslider-value-field', context).val($value);
            }

            // Get slider max value
            var $jSlider = $slider.find('.jslider-container', context);
            var $max = $jSlider.slider('option', 'max');

            // Validate left input
            if ($value > $max) {
              $value = $max;
              $slider.find('.jslider-value-field', context).val($value);
            }

            // Setup right value
            //$slider.find('.jslider-right-field', context).val($max - $left);

            // Move slider without toggling events
            $jSlider.slider({value: $value});
          });

      // Bind left textfield changes
      $('.jslider-value2-field:not(.jslider-processed)', context)
          .addClass('jslider-processed')
          .keyup(function(e) {

            // Get container
            var $slider = $(this).parents('.jslider', context);

            // Left input value
            var $value = $(this).val() - 0;
            if (isNaN($value)) {
              $value = 0;
              $slider.find('.jslider-value2-field', context).val($value);
            }

            // Get slider max value
            var $jSlider = $slider.find('.jslider-container', context);
            var $max = $jSlider.slider('option', 'max');

            // Validate left input
            if ($value > $max) {
              $value = $max;
              $slider.find('.jslider-value2-field', context).val($value);
            }

            // Setup right value
            //$slider.find('.jslider-right-field', context).val($max - $left);

            // Move slider without toggling events
            $jSlider.slider('values', 1, $value);
          });
    }
  }

  var jslidersSlideStop = function($slider, ui) {
    var $slider = $(this).parents('.jslider');
    $slider_id = $slider.attr('id');
    var setting = Drupal.settings['jslider_field_' + $slider_id];
    if (ui.value) {
      //setting.value = ui.value;
      //setting.current_value = ui.value;
    }
  }

  // Slider update related fields
  var jslidersSlideUpdateFields = function($slider, ui) {
    $slider_id = $slider.attr('id');
    var setting = Drupal.settings['jslider_field_' + $slider_id];

    var $values = [];
    if ($slider.find('.jslider-value2-field').length > 0) {
      $slider.find('.jslider-value-field').val(ui.values[0]);
      $slider.find('.jslider-value2-field').val(ui.values[1]);
      $values = ui.values;

    } else {
      $slider.find('.jslider-value-field').val(ui.value);
      $values.push(ui.value);
    }
    for(var i = 0; i < $values.length; i++) {
      $values[i] = setting.display_values_format.replace('%{value}%', $values[i]);
    }
    $slider.find('.jslider-display-values-field').html($values.join(' - '));
  }

  var jslidersSlideChange = function(event, ui) {
    // Setup values
    var $slider = $(this).parents('.jslider');
    jslidersSlideUpdateFields($slider, ui);

    $slider_id = $slider.attr('id');
    var setting = Drupal.settings['jslider_field_' + $slider_id];
    // Sync other sliders in the same group
    if (setting.group) {
      var $group_sliders = $('.jslider:[id!="' + $slider_id + '"].jslider-group-' + setting.group);
      if ($('.jslider:[id!="' + $slider_id + '"].jslider-group-master.jslider-group-' + setting.group).length < 1) {
        var $group_slider;
        var $group_slider_settings;
        var $group_ui;
        for(var i = 0; i < $group_sliders.length; i++) {
          $group_slider = $($group_sliders[i]);
          $group_ui = $group_slider.find('.jslider-container');
          $group_slider_settings = Drupal.settings['jslider_field_' + $group_slider.attr('id')];

          jslidersSlideUpdateFields($group_slider, {value:$group_ui.slider('value'), values: $group_ui.slider('values')});

          $group_slider_settings.value = $group_ui.slider('value');
        }
      }
    }

    if (ui.value) {
      setting.value = ui.value;
    }

    //Manually trigger element change event for compatibility with Drupal's ajax system
    $slider.find('.jslider-event-field').trigger('change');
  }

  // Slider processor
  var jslidersSlideProcess = function(event, ui) {
    // Setup values
    var $slider = $(this).parents('.jslider');
    jslidersSlideUpdateFields($slider, ui);

    $slider_id = $slider.attr('id');
    var setting = Drupal.settings['jslider_field_' + $slider_id];

    // Sync other sliders in the same group
    if (setting.group) {
      var $value_diff_orig = ui.value - setting.value;
      //var value_diff = ui.value - setting.current_value;

      var $group_sliders = $('.jslider:[id!="' + $slider_id + '"].jslider-group-' + setting.group);
      if ($('.jslider:[id!="' + $slider_id + '"].jslider-group-master.jslider-group-' + setting.group).length < 1) {
        var $group_slider;
        var $group_slider_settings;
        var $group_ui;
        var $items = new Array();
        var $total_diff = $value_diff_orig;
        var $total_diff_items_no = $group_sliders.length;
        var $val;

        for(var i = 0; i < $group_sliders.length; i++) {
          $group_slider = $($group_sliders[i]);
          $group_slider_settings = Drupal.settings['jslider_field_' + $group_slider.attr('id')];
          $items[i] = {value: $group_slider_settings.value, index: i};
        }
        var sortFunc = function(data_A, data_B)
        {
          return (data_A.value - data_B.value);
        }
        $items.sort(sortFunc);

        for(var i = 0; i < $group_sliders.length; i++) {
          var n = $items[i].index;
          $group_slider = $($group_sliders[n]);
          $group_ui = $group_slider.find('.jslider-container');
          $group_slider_settings = Drupal.settings['jslider_field_' + $group_slider.attr('id')];

          $group_ui.slider({slide: function() {}, change: function() {}});

          if (setting.group_type == 'same') {
            $group_ui.slider('value', ui.value);
          }
          if (setting.group_type == 'lock') {
            $group_ui.slider('value', $group_slider_settings.value + $value_diff_orig);
          }
          if (setting.group_type == 'total') {
            $val = $group_slider_settings.value - ($total_diff / $total_diff_items_no);
            $total_diff = $total_diff - ($total_diff / $total_diff_items_no);
            $total_diff_items_no = $total_diff_items_no - 1;
            if ($val < 0) {
              $total_diff = $total_diff + (-1 * $val);
              $val = 0;
            }

            $group_ui.slider('value', $val);
          }

          $group_ui.slider({slide: jslidersSlideProcess, change: jslidersSlideChange});

          jslidersSlideUpdateFields($group_slider, {value:$group_ui.slider('value'), values: $group_ui.slider('values')});
        }
      }
    }
  }

})(jQuery, Drupal);
