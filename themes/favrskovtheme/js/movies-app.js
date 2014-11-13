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

  //START SHOW DESCRIPTION FIRST SLIDE
  startShowDescriptionSlide('.front-slider .swiper-content ul li:first');

	//Swiper Content
  var contentSwiper = $('.swiper-content').swiper({
    autoplay: 1000,
    loop:true,
    onTouchEnd: function(swiper){
      if ( !$('.swiper-content, .swiper-container').hasClass('is-hover') ){
        swiper.startAutoplay();
      }
    },
    onSlideChangeStart: function(swiper, direction){
      updateNavPosition(direction);

      //START SHOW DESCRIPTION SLIDE
      startShowDescriptionSlide(contentSwiper.slides[swiper.activeIndex]);
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
      onSlideClick: function(index){
        //console.log(navSwiper);
        //SHOW DESCRIPTION SLIDE
        showDescriptionSlide(navSwiper.clickedSlide,index.clickedSlideIndex);

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

  //START SHOW DESCRIPTION SLIDE
  function startShowDescriptionSlide(e){
      var title_slide=$('.title-slide'),
          this_description=$(e).find('.headline').find('h2').text();

      if(title_slide.length!=1) {
              $('.front-slider').find('.swiper-nav')
          .prepend('<h2 class="title-slide">'+this_description+'</h2>');
      } else {
          title_slide.text(this_description);
      }
  }

  //SHOW DESCRIPTION SLIDE
  function showDescriptionSlide(e,i){
    var this_li=$(e),
        container_slider=this_li.parents('.front-slider'),
        description_slide=container_slider
          .find('.swiper-content ul')
            .children('li').eq(i)
              .find('.headline')
                .find('h2').text();
    if($('.title-slide').length!=1) {
      container_slider.find('.swiper-nav')
        .prepend('<h2 class="title-slide">'+description_slide+'</h2>'); 
    } else {
      $('.title-slide').text(description_slide);
    } 
  }

})(jQuery);;

