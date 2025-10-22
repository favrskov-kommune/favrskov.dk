import Vue from 'vue';

require('../../../config/vue.config')(Vue);

Drupal.behaviors.burgerMenu = {
  attach(context) {
    const burgerMenu = document.getElementById('js-burger-menu');
    const showSubNavigationClass = 'burger-menu-list--expanded';
    if (!burgerMenu || burgerMenu.classList.contains('loaded')) {
      return;
    }
    burgerMenu.classList.add('loaded');

    const focuseAbleHtmlElements = 'button, input, a';

    function addTabindex(element) {
      element.setAttribute('tabindex', 0);
      const children = element.querySelectorAll(focuseAbleHtmlElements);
      children.forEach((child) => {
        child.setAttribute('tabindex', 0);
      });
    }

    function negativeTabindex(element) {
      element.setAttribute('tabindex', -1);
      const children = element.querySelectorAll(focuseAbleHtmlElements);
      children.forEach((child) => {
        child.setAttribute('tabindex', -1);
      });
    }

    function addAriahidden(element) {
      element.setAttribute('aria-hidden', 'true');
      const children = element.querySelectorAll(focuseAbleHtmlElements);
      children.forEach((child) => {
        child.setAttribute('aria-hidden', 'true');
      });
    }

    function removeAriahidden(element) {
      element.setAttribute('aria-hidden', 'false');
      const children = element.querySelectorAll(focuseAbleHtmlElements);
      children.forEach((child) => {
        child.setAttribute('aria-hidden', 'false');
      });
    }

    function addTabFocus(element) {
      addTabindex(element);
      removeAriahidden(element);
      const focusableElements = element.querySelectorAll('button, input, a');
      if (focusableElements.length === 0) {
        return;
      }
      const firstFocusableElement = focusableElements[0];
      const lastFocusableElement = focusableElements[focusableElements.length - 1];
      const KEYCODE_TAB = 9;

      document.addEventListener('keydown', (e) => {
        if (e.key === 'Tab' || e.keyCode === KEYCODE_TAB) {
          if (e.shiftKey) {
            // If Shift + Tab
            if (document.activeElement === firstFocusableElement) {
              lastFocusableElement.focus();
              e.preventDefault();
            }
          } else if (document.activeElement === lastFocusableElement) {
            firstFocusableElement.focus();
            e.preventDefault();
          }
        }
      });
    }

    function removeTabFocus(element) {
      negativeTabindex(element);
      addAriahidden(element);
      document.removeEventListener('keydown', this.handleEsc);
    }

    negativeTabindex(burgerMenu);
    addAriahidden(burgerMenu);

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
          const parent = trigger.closest('.js-burger-menu-list-item--expandable');
          // this.hideSubNavigations(parent);
          const expandbutton = trigger.closest('.burger-menu-list-item__expand-trigger');
          if (expandbutton.getAttribute('aria-expanded') === 'false') {
            expandbutton.setAttribute('aria-expanded', 'true');
          } else {
            expandbutton.setAttribute('aria-expanded', 'false');
          }
          parent.classList.toggle(showSubNavigationClass);
        },
        openBurgerMenu() {
          const burgerMenu = document.getElementById('js-burger-menu'); /* eslint-disable-line */
          this.isOpen = true;
          document
            .querySelector('#js-burger-menu')
            .removeAttribute('aria-hidden');
          document
            .querySelector('#js-burger-menu')
            .setAttribute('aria-hidden', 'false');
          document.body.classList.add('no-scroll');
          document.addEventListener('keydown', this.handleEsc);
          addTabFocus(burgerMenu);
          document.querySelector('.burger-menu__close').focus();
        },
        closeBurgerMenu() {
          const burgerMenu = document.getElementById('js-burger-menu'); /* eslint-disable-line */
          this.isOpen = false;
          document.querySelector('#js-burger').focus();
          document.removeEventListener('keydown', this.handleEsc);
          document.removeEventListener('click', this.handleClickOutside);
          document
            .querySelector('#js-burger-menu')
            .removeAttribute('aria-hidden');
          document
            .querySelector('#js-burger-menu')
            .setAttribute('aria-hidden', 'true');
          document.body.classList.remove('no-scroll');
          removeTabFocus(burgerMenu);
        },
        hideSubNavigations(parent) {
          const items = document.querySelectorAll('.js-burger-menu-list-item--expandable');
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
