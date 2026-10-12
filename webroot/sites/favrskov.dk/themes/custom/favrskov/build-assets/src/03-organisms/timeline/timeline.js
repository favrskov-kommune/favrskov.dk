import Swiper from 'swiper';
import { A11y, Navigation, Thumbs } from 'swiper/modules';
import 'swiper/css';

function updateReadMore(root) {
  root.querySelectorAll('.js-timeline-card-text').forEach((text) => {
    const button = text.parentElement.querySelector('.js-timeline-read-more');
    if (!button) return;

    const expanded = text.classList.contains('is-expanded');
    text.classList.remove('is-expanded');
    const overflow = text.scrollHeight > text.clientHeight + 2;
    if (expanded) text.classList.add('is-expanded');
    button.hidden = !overflow;
  });
}

function initializeTimeline(root) {
  const datesElement = root.querySelector('.js-timeline-dates');
  const cardsElement = root.querySelector('.js-timeline-cards');
  if (!datesElement || !cardsElement) return;

  const slides = Array.from(root.querySelectorAll('.timeline__slide'));
  const slideStyles = slides.map((slide) => slide.getAttribute('style'));
  const dateButtons = Array.from(root.querySelectorAll('[data-timeline-date-index]'));
  const anchorLinks = Array.from(root.querySelectorAll('[data-timeline-anchor-index]'));
  const position = root.querySelector('.js-timeline-position');
  let datesSwiper;
  let cardsSwiper;
  let activeIndex = 0;

  function setActiveDate(index) {
    activeIndex = index;
    position.textContent = `${index + 1}/${slides.length}`;
    position.setAttribute('aria-label', Drupal.t('Slide @current of @total', {
      '@current': index + 1,
      '@total': slides.length,
    }));
    slides.forEach((slide, slideIndex) => {
      slide.toggleAttribute('inert', root.dataset.layout === 'horizontal' && slideIndex !== index);
    });
    dateButtons.forEach((button, buttonIndex) => {
      if (buttonIndex === index) button.setAttribute('aria-current', 'true');
      else button.removeAttribute('aria-current');
    });
    anchorLinks.forEach((link, linkIndex) => {
      if (linkIndex === index) link.setAttribute('aria-current', 'location');
      else link.removeAttribute('aria-current');
    });
  }

  function destroyCarousel() {
    if (cardsSwiper) {
      activeIndex = cardsSwiper.activeIndex;
      cardsSwiper.destroy(true, true);
      slides.forEach((slide, index) => {
        if (slideStyles[index] === null) slide.removeAttribute('style');
        else slide.setAttribute('style', slideStyles[index]);
      });
      cardsSwiper = undefined;
    }
    if (datesSwiper) {
      datesSwiper.destroy(true, true);
      datesSwiper = undefined;
    }
  }

  function buildCarousel() {
    datesSwiper = new Swiper(datesElement, {
      modules: [A11y],
      slidesPerView: 'auto',
      spaceBetween: 0,
      watchSlidesProgress: true,
      initialSlide: activeIndex,
    });

    cardsSwiper = new Swiper(cardsElement, {
      modules: [A11y, Navigation, Thumbs],
      slidesPerView: 1,
      autoHeight: true,
      initialSlide: activeIndex,
      navigation: {
        prevEl: root.querySelector('.js-timeline-prev'),
        nextEl: root.querySelector('.js-timeline-next'),
      },
      thumbs: { swiper: datesSwiper },
      a11y: {
        prevSlideMessage: root.querySelector('.js-timeline-prev').getAttribute('aria-label'),
        nextSlideMessage: root.querySelector('.js-timeline-next').getAttribute('aria-label'),
      },
      on: {
        slideChange(swiper) {
          setActiveDate(swiper.activeIndex);
        },
      },
    });
    setActiveDate(cardsSwiper.activeIndex);
    window.requestAnimationFrame(() => updateReadMore(root));
  }

  root.querySelectorAll('[data-timeline-layout]').forEach((button) => {
    button.addEventListener('click', () => {
      const layout = button.dataset.timelineLayout;
      if (layout === root.dataset.layout) return;

      if (layout === 'vertical') destroyCarousel();
      root.setAttribute('data-layout', layout);
      root.classList.toggle('timeline--horizontal', layout === 'horizontal');
      root.classList.toggle('timeline--vertical', layout === 'vertical');
      root.querySelectorAll('[data-timeline-layout]').forEach((control) => {
        control.setAttribute('aria-pressed', control.dataset.timelineLayout === layout ? 'true' : 'false');
      });
      if (layout === 'horizontal') buildCarousel();
      setActiveDate(activeIndex);
      window.requestAnimationFrame(() => updateReadMore(root));
    });
  });

  dateButtons.forEach((button) => {
    button.addEventListener('click', (event) => {
      if (!cardsSwiper) return;
      const index = Number(button.dataset.timelineDateIndex);
      cardsSwiper.slideTo(index);
      if (event.detail === 0) slides[index].focus({ preventScroll: true });
    });
  });

  anchorLinks.forEach((link) => {
    link.addEventListener('click', (event) => {
      if (event.button !== 0 || event.metaKey || event.ctrlKey || event.shiftKey || event.altKey) {
        return;
      }

      const index = Number(link.dataset.timelineAnchorIndex);
      const target = slides[index];
      if (!target) return;

      event.preventDefault();
      setActiveDate(index);
      target.focus({ preventScroll: true });
      target.scrollIntoView({
        behavior: window.matchMedia('(prefers-reduced-motion: reduce)').matches ? 'auto' : 'smooth',
        block: 'start',
      });
      window.history.pushState(null, '', link.getAttribute('href'));
    });
  });

  root.querySelectorAll('.js-timeline-read-more').forEach((button) => {
    button.addEventListener('click', () => {
      const text = root.querySelector(`#${button.getAttribute('aria-controls')}`);
      if (!text) return;
      const expanded = button.getAttribute('aria-expanded') === 'true';
      text.classList.toggle('is-expanded', !expanded);
      button.setAttribute('aria-expanded', expanded ? 'false' : 'true');
      if (cardsSwiper) window.requestAnimationFrame(() => cardsSwiper.updateAutoHeight());
    });
  });

  if ('IntersectionObserver' in window) {
    const observer = new IntersectionObserver((entries) => {
      if (root.dataset.layout !== 'vertical') return;
      const visible = entries.filter((entry) => entry.isIntersecting);
      if (!visible.length) return;
      const nearest = visible.sort((a, b) => a.boundingClientRect.y - b.boundingClientRect.y)[0];
      setActiveDate(slides.indexOf(nearest.target));
    }, { rootMargin: '-15% 0px -55% 0px' });
    slides.forEach((slide) => observer.observe(slide));
  }

  window.addEventListener('resize', () => {
    updateReadMore(root);
    if (cardsSwiper) cardsSwiper.updateAutoHeight();
  });

  setActiveDate(0);
  if (root.dataset.layout === 'horizontal') buildCarousel();
  window.requestAnimationFrame(() => updateReadMore(root));
}

Drupal.behaviors.timeline = {
  attach(context) {
    const timelines = Array.from(context.querySelectorAll('.js-timeline'));
    if (context.matches && context.matches('.js-timeline')) timelines.push(context);
    timelines.forEach((timeline) => {
      if (timeline.classList.contains('is-initialized')) return;
      timeline.classList.add('is-initialized');
      initializeTimeline(timeline);
    });
  },
};
