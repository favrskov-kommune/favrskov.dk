/**
 * @file
 * Javascript for jQuery minicolors colorfield widget.
 */

/**
 * Provides a farbtastic colorpicker for the widget.
 */
(function ($) {
  Drupal.behaviors.colorfield_minicolors = {
    attach: function (context) {
      $(".colorfield-colorpicker", context).each(function () {
        settings = {
          animationSpeed: 0
        }
        $(this).minicolors(settings);
      });
    }
  }
})(jQuery);
