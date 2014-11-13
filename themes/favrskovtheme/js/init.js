/*global jQuery:false, Drupal:false, window, setTimeout, navigator */

(function ($) {
  // Use strict mode to avoid errors:
  // https://developer.mozilla.org/en/JavaScript/Strict_mode
  "use strict";


  // Checking of existing of element
  $.fn.exists = function () {
    return this.length !== 0;
  };


  // Check mobile devices
  var isMobile = function () {
    return (/Android|webOS|iPhone|iPad|iPod|BlackBerry/i).test(navigator.userAgent);
  };

  // Get element Width
  $.fn.getWidth = function () {
    return $(this).width();
  };


  /*
   Links popup target chooser.
   */

  $(document).click(function (e) {
    var cont = $(".target-popup");
    if ($.inArray($(e.target).attr('class'), ['new-window', 'same-window', 'target-popup']) == -1) {
      cont.remove();
    }
  });

  $('.target-link').click(function (e) {
    e.stopPropagation();
    e.preventDefault();

    if ($(".target-popup").is(':visible')) {
      $(".target-popup").remove();
    } else {
      $('<div />').append($('<div />', {
          html: Drupal.t('Open in new window')
        }).addClass('new-window'))
        .append($('<div />', {
          html: Drupal.t('Open in the same window')
        }).addClass('same-window'))
        .addClass('target-popup').insertBefore($(this));
    }


  });

  $('.new-window').live('click', function () {
    window.open($(this).parent().next().attr('href'));
    $(this).parent().remove();
  });

  $('.same-window').live('click', function () {
    window.location.href = $(this).parent().next().attr('href');
  });


  //----------------------------------------------------------------------------
  /* To learn more about Javascript in Drupal 7
   check out: http://drupal.org/node/756722 */

  Drupal.behaviors.ppl_theme = {
    attach: function (context, settings) {

      //  Print
      $('.print_data').click(function (event) {
        event.preventDefault();
        window.print();
      });


      // FAQ Accordion
      $('.question').accordion();
      $('h2.mArticle').accordion();
      $('.meetnig-title').accordion({
        keepOpen: true
      });

      // add wrapper and accordion to subscription groupings
      $('.page-subscribe .form-type-checkboxes, .page-subscribe .form-type-item').each(function () {
        $('span, div', $(this)).wrapAll('<div class="group-wrapper" />');
      });
      $('.form-type-checkboxes > label, .form-type-item > label').append('<span class="state"></span>');
      $('.form-type-checkboxes > label, .form-type-item > label').accordion();

      // Taxonomy mobile button
      $('.btn-navbar').once(function () {
        $(this).click(function () {
          $('.header-content .nav').toggleClass('animated');
        });
      });

      // Filters mobile button
      $('.btn-filters').once(function () {
        $(this).click(function () {
          $('.filter-results').toggleClass('animated');
        });
      });

      // Share block on the node sidebar
      $('.toggle-share').once(function () {
        $(this).click(function (event) {
          event.preventDefault();
          $(this).next().toggleClass('animated');
        });
      });

      // if(isMobile()){
      //   var mobileMenu = $('.nav-search, .btn-navbar'),
      //       input =  $('input');

      //   input.bind('focus', function(){
      //       mobileMenu.css({position:'absolute'})
      //   });

      //   input.bind('blur', function(){
      //       mobileMenu.css({position:'fixed'})
      //   });
      // }

      // Hide parent menu item
      var hddenMenuItem = $('.hidden-item');
      if (hddenMenuItem) {
        hddenMenuItem.each(function(){
           $(this).parent('li').addClass('hidden');
        });
      }


      // Add button fo mobile applications to the Events filter
      var eventDescription = $('<span />', {
        html: Drupal.t('Sort by category')
      }).addClass('filter-description').prependTo($('#events-list .view-filters'));

      var eventBtn = $('<a />', {
        rel: 'nofollow',
        href: '#',
        html: Drupal.t('Sort by category')
      }).addClass('toggle-filters')
        .click(function (event) {
          event.preventDefault();
          $('.events-list .form-type-select').toggleClass('open');
        }).prependTo($('#events-list .view-filters'));

      //  Add an arrow element to the button Load more
      $('.pager-load-more').once(function () {
        $('<span />').addClass('arrow').appendTo($(this).find('a'));
      });


      // Nodes slider
      if ($('.view-subject-subpages .swiper-slide').length > 1) {
        var nodeSwiper = new Swiper('.swiper-container', {
          mode: 'horizontal',
          loop: true,
          autoplay: 8000,
          calculateHeight: true,
          simulateTouch: true,
          pagination: '.pagination',
          paginationClickable: true,
          grabCursor: true,
          onTouchEnd: function (swiper) {
            if (!$('.swiper-container').is(':hover')) {
              swiper.startAutoplay();
            }
          }
        });

        $('.swiper-container').hover(function () {
          nodeSwiper.stopAutoplay();
        }, function () {
          nodeSwiper.startAutoplay();
        });

        $('.view-subject-subpages .arrow-left').click(function (event) {
          event.preventDefault();
          nodeSwiper.swipePrev();
        });
        $('.view-subject-subpages .arrow-right').click(function (event) {
          event.preventDefault();
          nodeSwiper.swipeNext();
        });
      } else {
        $('.node-slider-nav').addClass('visuallyhidden');
      }

      // Main slider with navigation
      var navSwiper = $('.swiper-nav-container').swiper({
        wrapperClass: 'swiper-nav-wrapper',
        mode: 'horizontal',
        loop: true,
        autoplay: 8000,
        calculateHeight: true,
        simulateTouch: true,
        pagination: '.pagination',
        paginationClickable: true,
        grabCursor: true,
        onTouchEnd: function (swiper) {
          if (!$('.swiper-container').is(':hover')) {
            swiper.startAutoplay();
          }
        }
      });

      $('.view-display-id-slider_with_nav .arrow-left').click(function (e) {
        e.preventDefault()
        navSwiper.swipePrev()
      });

      $('.view-display-id-slider_with_nav .arrow-right').click(function (e) {
        e.preventDefault()
        navSwiper.swipeNext()
      });


      $('.combi').each(function (index) {
        var combiSwiper = $(this).swiper({
          wrapperClass: 'combi-row',
          loop: true,
          simulateTouch: false,
          slidesPerView: 'auto',
          loopedSlides: 7,
          calculateHeight: true
        });

        $('.arrow-left', $(this)).click(function (e) {
          e.preventDefault()
          combiSwiper.swipePrev()
        });

        $('.arrow-right', $(this)).click(function (e) {
          e.preventDefault()
          combiSwiper.swipeNext()
        });

      });


      // Initialize of Selectboxit plugin
      // $('select').selectBoxIt({
      //   hideCurrent: true,
      //   autoWidth: false
      // });

      // Self services and banner links fix
      var selfServ = $('.field-name-field-self-service');

      if (selfServ.next().is('.pane-node-field-bannerlink')) {
        selfServ.addClass('no-self-service-border');
      }


      // Footer menu build

      $('.footer').once(function () {
        var menuLink = $('<a />', {
          rel: 'nofollow',
          href: '#',
          html: Drupal.t('Other local sites')
        }).append($('<span/>')).addClass('show-menu').insertBefore($('.social .menu'));

      });

      $('.social').delegate('.show-menu', 'click', function (event) {
        event.preventDefault();
        $(this).toggleClass('open');
        $(this).next().toggleClass('open');
      });

      // Use uniform plugin for styling select elements
      // igon drupal select elemtns
      $(".job-listing select, .pane-pane-hearing-responses select, #views-exposed-form-hearings-hearings-list-pane select").once(function () {
        $(this).uniform();
      });

      // Debug code to get window dimension

      // $('<div>').css({
      //  position: 'fixed',
      //  top: '50px',
      //  left: '0',
      //  width: '50px',
      //  height: '50px',
      //  background: 'red',
      //  padding:'50px',
      //  zIndex: '100'
      // }).html($(window).width()).prependTo($('body'));


      /*  Functions which will called only
       in Opera version less than 9.0  */
      var operaBrowser = jQuery.browser.opera && jQuery.browser.version <= 15.0;
      if (operaBrowser) {
        $('body').addClass('opera');
      }

      /*  Functions which will called only
       in IE version less than 9.0  */

      // IE less than the 10.0
      if (jQuery.browser.msie) {

      }

      if (jQuery.browser.msie && jQuery.browser.version < 10.0) {

      }

      // IE 9.0
      if (jQuery.browser.msie && jQuery.browser.version == 9.0) {

      }

      // IE 8.0 or less
      if (jQuery.browser.msie && jQuery.browser.version <= 8.0) {
        $('.job-list thead th:first-child').addClass('th-first');
        $('.taxonomy-list .taxonomy:nth-child(3n)').addClass('remove-mr');
        $('.front .taxonomy-list .taxonomy:nth-child(4n)').addClass('remove-mr');
        $('.footer-wrapper section:nth-child(4n)').addClass('remove-mr');
        $('.news .news-list li:nth-child(4n)').addClass('remove-mr');
        $('.subject-list .subject-item:nth-child(4n)').addClass('remove-mr');

        $('.view-id-events .item-list li:nth-child(3n)').addClass('remove-mr');
        $('.matrix-view .item-list li:nth-child(3n)').addClass('remove-mr');
        $('.banners-list li:nth-child(3n)').addClass('remove-mr');
        $('.video-views .view-content li:nth-child(3n)').addClass('remove-mr');
        $('.video-pane .video-items li:nth-child(3n)').addClass('remove-mr');

        $('.locations-list li:nth-child(2n)').addClass('remove-mr');
        $('.popular li:nth-child(2n)').addClass('remove-mr');

      }

      // IE 7.0 only
      if (jQuery.browser.msie && jQuery.browser.version < 8.0) {

      }

    }
  };

  Drupal.behaviors.customCommentNotify = {
    attach: function (context) {
      $('input[name="notify"]', context).bind('change',function () {
        $(this).parent().parent().find('.form-radios')[this.checked ? 'show' : 'hide']();
      }).trigger('change');
    }
  }

})(jQuery);
