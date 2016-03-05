/**
 * @file
 * Javascript related to the admin/domain/content/%domain_id pages.
 */
(function ($) {

  Drupal.behaviors.domain_extention = {
    attach: function(context, settings) {
      $('#select-all', context).each(function() {
        console.log('works');
        console.log(settings);
      });
    }
  }

})(jQuery);
