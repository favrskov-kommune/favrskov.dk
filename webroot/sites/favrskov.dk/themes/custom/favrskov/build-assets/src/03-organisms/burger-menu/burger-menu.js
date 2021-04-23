import Vue from 'vue';

require('../../../config/vue.config')(Vue);

Drupal.behaviors.burgerMenu = {
  attach(context) {
    const burgerMenu = document.getElementById('js-burger-menu');
    const showSubNavigationClass = 'open-sub-navigation';
    if (!burgerMenu || burgerMenu.classList.contains('loaded')) {
      return;
    }
    burgerMenu.classList.add('loaded');

    const vm = new Vue({
      delimiters: ['${', '}'],
      el: burgerMenu,
      data: {
        isOpen: false,
      },
      mounted() {
        const burger = document.getElementById('js-burger');
        if (burger) {
          burger.addEventListener('click', () => {
            this.openBurgerMenu();
          });
        }
      },
      methods: {
        triggerSubNavigation(e) {
          e.preventDefault();
          const trigger = e.currentTarget;
          const parent = trigger.closest('.js-burger-menu-list-item');
          this.hideSubNavigations(parent);

          parent.classList.toggle(showSubNavigationClass);
        },
        openBurgerMenu() {
          this.isOpen = true;
          document.body.classList.add('no-scroll');
          document.addEventListener('keydown', this.handleEsc);
          document.addEventListener('click', this.handleClickOutside);
        },
        closeBurgerMenu() {
          this.isOpen = false;
          document.removeEventListener('keydown', this.handleEsc);
          document.removeEventListener('click', this.handleClickOutside);
          document.body.classList.remove('no-scroll');
        },
        hideSubNavigations(parent) {
          const items = document.querySelectorAll('.js-burger-menu-list-item');
          for (let i = 0; i < items.length; i += 1) {
            if (parent !== items[i]) {
              items[i].classList.remove(showSubNavigationClass);
            }
          }
        },
        handleEsc(e) {
          if (e.keyCode === 27) {
            this.closeBurgerMenu();
          }
        },
        handleClickOutside(e) {
          const burgerMenuElem = document.getElementById('js-burger-menu');
          const burgerElem = document.getElementById('js-burger');
          const isClickInside = burgerMenuElem.contains(e.target) || burgerElem.contains(e.target);

          if (!isClickInside) {
            this.closeBurgerMenu();
          }
        },
      },
    });
  },
};
