const navigationLink = document.querySelector('.js-navigation-item.active');
if (navigationLink) {
  navigationLink.children[0].setAttribute('aria-current', 'page');
}
