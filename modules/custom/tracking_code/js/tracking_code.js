(function ($) {

  // enable/disable codeblocks using AJAX call
  Drupal.behaviors.trackingCode = {
    attach: function (context, settings) {
      $('.tracking-code-disable-link', context).click(function () {
        anchor = $(this);
        delta = anchor.attr('rel');
        loading = $('<div class="tracking-code-loading"></div>');

        anchor.after(loading);
        ajaxResponse = $.getJSON(Drupal.settings.basePath + 'admin/structure/tracking_code/' + delta + '/disable', function(response) {
          if (response.status) {
            anchor.parents('tr').removeClass('tracking-code-disabled');
          } else {
            anchor.parents('tr').addClass('tracking-code-disabled');
          }
          anchor.html(response.label);
          loading.remove();
        });

        return false;
      });
    }
  };

}(jQuery));
