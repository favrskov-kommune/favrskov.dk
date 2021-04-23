import HoverIntent from 'hoverintent';

Drupal.behaviors.navigation = {
  attach(context) {
    const navigation = document.querySelectorAll('.js-navigation:not(.loaded)');
    if (navigation.length === 0) {
      return;
    }

    for (let i = 0; i < navigation.length; i += 1) {
      const navigationItems = navigation[i].querySelectorAll('.js-navigation-item');
      navigation[i].classList.add('loaded');

      for (let x = 0; x < navigationItems.length; x += 1) {
        const currentItem = navigationItems[x];
        HoverIntent(currentItem, () => {
          currentItem.classList.add('open-sub-navigation');
        }, () => {
          currentItem.classList.remove('open-sub-navigation');
        }).options({
          timeout: 400,
          interval: 55,
        });
      }
    }
  },
};
