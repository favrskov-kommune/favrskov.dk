(function($) {

	//Swiper Content
  var contentSwiper = $('.swiper-content').swiper({
    autoplay: 8000,
    loop:true,
    onTouchEnd: function(swiper){
      if ( !$('.swiper-content, .swiper-container').hasClass('is-hover') ){
        swiper.startAutoplay();
      }
    },
    onSlideChangeStart: function(swiper, direction){
      updateNavPosition(direction);
    }
  });

  // Controls swiper left/right
  consrolsLeftRightSwiper();

  $('.swiper-content, .swiper-container').hover(function () {
    contentSwiper.stopAutoplay();
    $(this).addClass('is-hover');
  }, function () {
    contentSwiper.startAutoplay();
    $(this).removeClass('is-hover');
  });

	if (!($.browser.msie & $.browser.version <= 9.0)) {
		//Nav
		var navSwiper = $('.swiper-nav').swiper({
			visibilityFullFit: true,
			mode: 'vertical',
			slidesPerView: 3,
			mousewheelControl: true
		});
	}

	else {
		//Nav
		var navSwiper = $('.swiper-nav').swiper({
	    	visibilityFullFit: true,
			mode: 'vertical',
			slidesPerView: 3,
			mousewheelControl: true,
			simulateTouch: false
		});
	}



	//Update Nav Position
  function updateNavPosition(direction){
    var count = navSwiper.slides.length;
    var t = (contentSwiper.activeIndex+navSwiper.slides.length-1) % count;
    $('.swiper-nav .active-nav').removeClass('active-nav');
    $(navSwiper.getSlide(t)).addClass('active-nav');
    $('.title-slide').removeClass('active');
    $(".title-slide.slide-" + t).addClass('active');
    navSwiper.swipeTo(t);
  }

  // Controls swiper left/right
  function consrolsLeftRightSwiper() {
    $('.swiper-content').parent()
      .append('<div class="controls-left-right-swiper arrow-left-swiper"></div>'+
              '<div class="controls-left-right-swiper arrow-right-swiper"></div>');
    $('.controls-left-right-swiper').click(function() {
      if($(this).hasClass('arrow-right-swiper')) {
        contentSwiper.swipeNext();
      } else if($(this).hasClass('arrow-left-swiper')) {
        contentSwiper.swipePrev();
      }
    });
  }

})(jQuery);

