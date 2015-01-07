/**
 * @file
 * JS for Views Grid/List Switcher module
 *
 * jQuery code for switcher
 */
(function($) {
  Drupal.behaviors.viewsGLSwitcher = {
    attach: function(context) {
      // Get list type from setting
      if (typeof Drupal.settings.viewsGLSwitcher !== 'undefined') {
        var listType = Drupal.settings.viewsGLSwitcher['list_type'];
      }

      //check window hash
      $('body').once(function() {
        if (window.location.hash) {
          changeStyle(window.location.hash.substr(1));
        }

        // Click events for switcher buttons.
        $(".switch a", context).live('click', function() {
          changeStyle($(this).data('viewstyle'));
        });

        // Exposed filter click
        $('.views-exposed-form a').live('click',function() {
          // don't reload page if click to displayed filter
          if ($(this).attr('href') === window.location.href+window.location.hash) {
            return false;
          }
          // add default style to all view exposed filter
          if (window.location.hash) {
            $(this).attr('href', $(this).attr('href')+window.location.hash);
          }
        });
      });



      // Add corresponding layout class to list.
      function changeStyle(style) {
        $('.switch a').removeClass('active');
        $('.switch a.' + style).addClass('active');

        $(listType + '.display').fadeOut(200).toggleClass("grid list", false).addClass(style).fadeIn(300);
      }
    }
  }
})(jQuery);
