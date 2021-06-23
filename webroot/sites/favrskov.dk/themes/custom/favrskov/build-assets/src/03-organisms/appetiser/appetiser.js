function appLoop() {
  const apps = document.querySelectorAll('.js-appetiser--small:not(.show-more)');
  if (apps.length === 0) {
    return;
  }

  for (let i = 0; i < apps.length; i += 1) {
    const appContWrap = apps[i].querySelector('.appetiser__content-wrapper');
    const appContent = apps[i].querySelector('.appetiser__content');
    const appExpHeight = appContent.offsetHeight + 30;
    const appReadMore = apps[i].querySelector('.appetiser__read-more');

    if (appContent.offsetHeight > appContWrap.offsetHeight) {
      apps[i].classList.add('show-more');

      appReadMore.addEventListener('click', (event) => {
        event.preventDefault();
        if (appContWrap.classList.contains('expanded')) {
          appContWrap.classList.remove('expanded');
          appContWrap.removeAttribute('style');
        } else {
          appContWrap.classList.add('expanded');
          appContWrap.setAttribute('style', `max-height:${appExpHeight}px; height:${appExpHeight}px`);
        }
      }, false);
    }
  }
}

Drupal.behaviors.appetiser = {
  attach(context) {
    appLoop();
  },
};
