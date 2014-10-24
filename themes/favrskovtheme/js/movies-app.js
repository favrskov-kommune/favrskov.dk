(function($) {
	function setContentSize() {
		$('.swiper-content').css({
			// height: $(window).height()-$('.swiper-nav').height()
		})
	}
	setContentSize()
	$(window).resize(function(){
		setContentSize()
	})

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
			slidesPerView: 4,
			mousewheelControl: true,

			//Thumbnails Clicks
      onSlideClick: function(){
        if (!$(navSwiper.clickedSlide).hasClass('active-nav')){
          contentSwiper.swipeTo( navSwiper.clickedSlideIndex);
        }
      }
		});
	}

	else {
		//Nav
		var navSwiper = $('.swiper-nav').swiper({
			visibilityFullFit: true,
			mode: 'vertical',
			slidesPerView: 4,
			mousewheelControl: true,
			simulateTouch: false,
			//Thumbnails Clicks
      onSlideClick: function(){
        if (!$(navSwiper.clickedSlide).hasClass('active-nav')){
          contentSwiper.swipeTo(navSwiper.clickedSlideIndex);
        }
      }
		});
	}



	//Update Nav Position
  function updateNavPosition(direction){
    var count = navSwiper.slides.length;
    var t = (contentSwiper.activeIndex+navSwiper.slides.length-1) % count;
    $('.swiper-nav .active-nav').removeClass('active-nav');
    $(navSwiper.getSlide(t)).addClass('active-nav');
    navSwiper.swipeTo(t);
  }
})(jQuery);;

