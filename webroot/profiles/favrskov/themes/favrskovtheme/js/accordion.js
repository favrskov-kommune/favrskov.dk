/**
 * @file
 *
 * Accordion plugin definition.
 */


(function ($) {
  // Use strict mode to avoid errors:
  // https://developer.mozilla.org/en/JavaScript/Strict_mode
  "use strict";


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
      element.next().slideDown(300,function () {

        var heightDiff = $('div', element.parent().prev()).height() - element.parent().height();

        var _docHeight = $(element).offset().top - $(window).scrollTop();

        if (_docHeight < heightDiff) {
          $("html, body").animate({scrollTop: element.parent().offset().top - 50}, 1000);
        }

        // Reinit minimaps in case if map present in Answer field of FAQ
        var $minimap = element.next().find('.minimapwidget'),
          mapID = $minimap.attr('minimapid');

        updateMap();

        function updateMap() {
          var mapsWidgets = window.minimapwidgets;

          if (mapsWidgets !== undefined) {
            minimapwidgets.map(function(mapItem){
              if (mapID === mapItem.minimapId) {
                mapItem._mapControl.map.updateSize();
              }
            });
          }
        }


      }).once(function () {
          var closeAnsw = $('<a />', {
            rel: 'nofollow',
            href: '#',
            html: Drupal.t('Close answer')
          }).addClass('state')
            .click(function (event) {
              event.preventDefault();
              openCloseMethods.close();
            }).appendTo($(this));

        });
    },

    close: function (element) {
      if (element == null) {
        var current = jQuery('.open');
        // Find current element animate it, remove control class
        current.removeClass('open');
        current.next().slideUp(300);
      }
      else {
        element.removeClass('open');
        element.next().slideUp(300);
      }
    }
  };

  /*
   * Accordion object
   */

  $.fn.accordion = function (options) {

    var $this = jQuery(this);

    $this.each(function (e) {
      var element = $(this);
      element.keydown(function (e) {
        if(e.keyCode == 13) {
          e.preventDefault();
          var self = $(this);

          // case: clicked archive is not open
          if (!self.hasClass('open')) {
            if (options == null || options.keepOpen == false) {
              openCloseMethods.close();
            }
            openCloseMethods.show(self);
          }
          // case: clicked archive is open
          else {
            if (options == null || options.keepOpen == false) {
              openCloseMethods.close();
            } else {
              openCloseMethods.close(self);
            }
          }
        }
      });

      element.click(function (e) {
        e.preventDefault();
        var self = $(this);

        // case: clicked archive is not open
        if (!self.hasClass('open')) {
          if (options == null || options.keepOpen == false) {
            openCloseMethods.close();
          }
          openCloseMethods.show(self);
        }
        // case: clicked archive is open
        else {
          if (options == null || options.keepOpen == false) {
            openCloseMethods.close();
          } else {
            openCloseMethods.close(self);
          }
        }
      });
    });



  };
})(jQuery);
