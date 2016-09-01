(function ($) {
  Drupal.behaviors.content_reminder_preset_select = {
    attach: function (context, settings) {
      // the datepicker is attached on the first focus
      $('.content-reminder-precise-date', context).once().focus();

      $('.content-reminder-preset-select', context).change(function () {
        var timestamp = parseInt($(this).val());
        if(timestamp) {
          var date = new Date(timestamp * 1000);
          $('.content-reminder-precise-date', context).datepicker('setDate', date);
        }
      });

      $('.content-reminder-precise-date', context).change(function () {
        $('.content-reminder-preset-select', context).val(0);
      });
    }
  };
}(jQuery));
