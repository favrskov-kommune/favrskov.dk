import { gsap } from 'gsap';
import { ScrollTrigger } from 'gsap/ScrollTrigger';

gsap.registerPlugin(ScrollTrigger);

const brandingSpot = document.querySelector('.js-branding-spot');

if (brandingSpot) {
  ScrollTrigger.matchMedia({
    '(min-width: 1200px)': function () {
      gsap.to('.js-branding-spot .branding-spot__bg', {
        ease: 'none',
        scale: 3.2,
        x: '-10%',
        y: '17%',
        scrollTrigger: {
          trigger: '.js-branding-spot',
          start: '40% bottom',
          end: '40% center',
          scrub: true,
          onLeave() {
            brandingSpot.classList.add('active');
          },
          onEnterBack() {
            brandingSpot.classList.remove('active');
          },
        },
      });
    },
    '(max-width: 1199px)': function () {
      gsap.to('.js-branding-spot .branding-spot__bg', {
        ease: 'none',
        scale: 4.5,
        x: 0,
        y: '20%',
        scrollTrigger: {
          trigger: '.js-branding-spot',
          start: '40% bottom',
          end: '40% center',
          scrub: true,
          onLeave() {
            brandingSpot.classList.add('active');
          },
          onEnterBack() {
            brandingSpot.classList.remove('active');
          },
        },
      });
    },
    '(max-width: 991px)': function () {
      gsap.to('.js-branding-spot .branding-spot__bg', {
        ease: 'none',
        scale: 5,
        x: '-2%',
        y: '15%',
        scrollTrigger: {
          trigger: '.js-branding-spot',
          start: '40% bottom',
          end: '40% center',
          scrub: true,
          onLeave() {
            brandingSpot.classList.add('active');
          },
          onEnterBack() {
            brandingSpot.classList.remove('active');
          },
        },
      });
    },
    '(max-width: 767px)': function () {
      gsap.to('.js-branding-spot .branding-spot__bg', {
        ease: 'none',
        scale: 9,
        x: '85%',
        y: '60%',
        scrollTrigger: {
          trigger: '.js-branding-spot',
          start: '40% bottom',
          end: '40% center',
          scrub: true,
          onLeave() {
            brandingSpot.classList.add('active');
          },
          onEnterBack() {
            brandingSpot.classList.remove('active');
          },
        },
      });
    },
    '(max-width: 575px)': function () {
      gsap.to('.js-branding-spot .branding-spot__bg', {
        ease: 'none',
        scale: 9,
        x: '85%',
        y: '80%',
        scrollTrigger: {
          trigger: '.js-branding-spot',
          start: '40% bottom',
          end: '40% center',
          scrub: true,
          onLeave() {
            brandingSpot.classList.add('active');
          },
          onEnterBack() {
            brandingSpot.classList.remove('active');
          },
        },
      });
    },
  });
}
