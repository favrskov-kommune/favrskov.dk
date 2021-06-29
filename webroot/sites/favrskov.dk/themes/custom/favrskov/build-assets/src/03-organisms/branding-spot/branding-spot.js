import { gsap } from 'gsap';
import { ScrollTrigger } from 'gsap/ScrollTrigger';

gsap.registerPlugin(ScrollTrigger);

const brandingSpot = document.querySelector('.js-branding-spot');

if (brandingSpot) {
  gsap.to('.js-branding-spot .branding-spot__bg', {
    ease: 'none',
    scale: 3.6,
    x: '-10%',
    y: '20%',
    scrollTrigger: {
      trigger: '.js-branding-spot',
      start: 'center center',
      end: 'bottom center',
      scrub: true,
      pin: true,
      onLeave() {
        brandingSpot.classList.add('active');
      },
      onEnterBack() {
        brandingSpot.classList.remove('active');
      },
    },
  });
}
