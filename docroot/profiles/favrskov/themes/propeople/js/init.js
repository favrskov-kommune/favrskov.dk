/*global jQuery:false, Drupal:false, window, setTimeout, navigator */

(function($) {
  // Use strict mode to avoid errors:
  // https://developer.mozilla.org/en/JavaScript/Strict_mode
  "use strict";


  // Checking of existing of element
  $.fn.exists = function () {
    return this.length !== 0;
  };


  // Check mobile devices
  var isMobile = function() {
    return (/Android|webOS|iPhone|iPad|iPod|BlackBerry/i).test(navigator.userAgent);
  };

  // Get element Width
  $.fn.getWidth = function(){
    return $(this).width();
  };

  /*  Accordion */

  /*
   * Open-close methods using in Accordion
   * HTML structure shold be next:
   * <div> // Parent
   *  <div></div> // Clicable element
   *  <div></div> // Animated element
   * </div>
   * DOM element(parent) - clickable
   * DOM element( next ) - animated
  */

  var openCloseMethods = {
    show: function (element) {
      // Find next element animate it, add control class
      element.addClass('open');
      element.next().slideDown(300, function () {
      });
    },

    close: function () {
      var current = jQuery('.open');
      // Find current element animate it, remove control class
      current.removeClass('open');
      current.next().slideUp(300, function () {
      });
    }
  };

  /*
   * Accordion object
   */
  $.fn.accordion = function(options) {

    //Setup basic Settings
    var settings = $.extend({
      'animated' : 'false'
    }, options);

    var $this = jQuery(this);

    $this.each(function(e){
      var element = $(this);

      // If we call scrollTo plugin (With animation)
      if (settings.animated == 'true') {
        // Creat varibale with arrow (used in footer)
        var arrow = jQuery('.expand-link .arrow');
        $this.next().slideUp(400);
      }


      element.click(function (e) {
        e.preventDefault();
        var self = $(this);

        // case: clicked archive is not open
        if (!self.hasClass('open')) {
          openCloseMethods.close();
          openCloseMethods.show(self);

          // With animation
          if (settings.animated == 'true') {
            setTimeout(function() {
              //Call Scroll plugin
              if($.scrollTo()) {
                jQuery.scrollTo(jQuery('#scrollhere'), 500, {axis:'y'});
                arrow.addClass('up');
              }
            }, 650);
          }
        }

        // case: clicked archive is open
        else {
          openCloseMethods.close(self);
          if (settings.animated == 'true') {
            arrow.removeClass('up');
          }
        }
      });
    });
  };




  //----------------------------------------------------------------------------
  /* To learn more about Javascript in Drupal 7
     check out: http://drupal.org/node/756722 */

  Drupal.behaviors.ppl_theme = {
    attach: function(context, settings) {

      /*  Functions which will called only
          in IE version less than 9.0  */

      // IE less than the 10.0
      if (jQuery.browser.msie) {
      }

      if (jQuery.browser.msie && jQuery.browser.version < 10.0) {

      }

      // IE 9.0 or less
      if (jQuery.browser.msie && jQuery.browser.version == 9.0) {

      }

      // IE 8.0 only
      if (jQuery.browser.msie && jQuery.browser.version == 8.0) {
      }

      // IE 7.0 only
      if (jQuery.browser.msie && jQuery.browser.version < 8.0) {

      }

    }
  };


})(jQuery);
