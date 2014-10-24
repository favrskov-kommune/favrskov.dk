(function($) {
  Drupal.behaviors.pageSubscriptionToggleCheckboxes = {
    attach: function(context, settings) {
      $('input[type="checkbox"][value="all"]').click(function() {
        $(this).parent().siblings().find('input[type="checkbox"]').attr('checked', $(this).attr('checked'));
      });
      $('input[type="checkbox"][value!="all"]').click(function() {
        if ($(this).is(':not(:checked)')) {
          $(this).parent().siblings().find('input[type="checkbox"][value="all"]').attr('checked', false);
        }
      });
    }
  };
})(jQuery);
