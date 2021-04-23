import Flickity from 'flickity';
import FlickityFade from 'flickity-fade';
import FlickityAsNavFor from 'flickity-as-nav-for';
import 'flickity/css/flickity.css';

Drupal.behaviors.imageSlideshow = {
  attach(context) {
    const imageSlideShowsWrappers = document.querySelectorAll('.js-image-slideshow-wrapper:not(.loaded)');
    if (imageSlideShowsWrappers.length === 0) {
      return;
    }

    for (let i = 0; i < imageSlideShowsWrappers.length; i += 1) {
      const current = imageSlideShowsWrappers[i];
      const slideshow = current.querySelector('.js-image-slideshow');
      const navigation = current.querySelector('.js-image-slideshow-navigation');
      current.classList.add('loaded');

      setTimeout(() => {
        const flktySlideshow = new Flickity(slideshow, {
          // options
          cellAlign: 'left',
          contain: true,
          pageDots: false,
          prevNextButtons: false,
          fade: true,
          wrapAround: true,
          autoPlay: current.dataset.autoplay === 'true' ? 3000 : '',
          cellSelector: '.image-slideshow-slide',
        });

        const flktyNavigation = new Flickity(navigation, {
          // options
          contain: true,
          pageDots: false,
          prevNextButtons: false,
          asNavFor: slideshow,
        });
      });
    }
  },
};
