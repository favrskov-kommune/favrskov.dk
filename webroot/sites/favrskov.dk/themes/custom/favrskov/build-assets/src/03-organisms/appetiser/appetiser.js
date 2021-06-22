function appetizerLoop() {
  const appetizers = document.querySelectorAll('.js-appetiser--small:not(.show-more)');
  if (appetizers.length === 0) {
    return;
  }

  for (let i = 0; i < appetizers.length; i += 1) {
    const appetizerContentWrapper = appetizers[i].querySelector('.appetiser__content-wrapper');
    const appetizerTitle = appetizers[i].querySelector('.appetiser__title');
    const appetizerDescription = appetizers[i].querySelector('.appetiser__description');
    const appetizerContentHeight = appetizerDescription.offsetHeight + appetizerTitle.offsetHeight;
    const appetizerExpandedHeight = appetizerContentHeight + 50;
    const appetizerReadMore = appetizers[i].querySelector('.appetiser__read-more');

    if (appetizerContentHeight > appetizerContentWrapper.offsetHeight) {
      appetizers[i].classList.add('show-more');

      appetizerReadMore.addEventListener('click', (event) => {
        event.preventDefault();
        if (appetizerContentWrapper.classList.contains('expanded')) {
          appetizerContentWrapper.classList.remove('expanded');
          appetizerContentWrapper.removeAttribute('style');
        } else {
          appetizerContentWrapper.classList.add('expanded');
          appetizerContentWrapper.setAttribute('style', `max-height:${appetizerExpandedHeight}px`);
        }
      }, false);
    }
  }
}

Drupal.behaviors.appetiser = {
  attach(context) {
    appetizerLoop();
  },
};
