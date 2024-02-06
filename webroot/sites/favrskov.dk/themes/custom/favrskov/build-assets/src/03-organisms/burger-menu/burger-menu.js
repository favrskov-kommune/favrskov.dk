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

    function addTabindex(selector) {
      const addTabIndex = document.querySelectorAll(selector);
      for (let i = 0; i < addTabIndex.length; i += 1) {
        addTabIndex[i].setAttribute('tabindex', 0);
      }
    }
    function removeTabindex(selector) {
      const removeTabIndex = document.querySelectorAll(selector);
      for (let i = 0; i < removeTabIndex.length; i += 1) {
        removeTabIndex[i].removeAttribute('tabindex');
      }
    }

    function negativeTabindex(selector) {
      const removeTabIndex = document.querySelectorAll(selector);
      for (let i = 0; i < removeTabIndex.length; i += 1) {
        removeTabIndex[i].setAttribute('tabindex', -1);
      }
    }

    function addAriaHidden(selector) {
      const addAriaHidden = document.querySelectorAll(selector)
      for (let i = 0; i < addAriaHidden.length; i += 1)
      addAriaHidden[i].setAttribute('aria-hidden', "true")
    }

    function removeAriaHidden(selector) {
      const removeAriaHidden = document.querySelectorAll(selector)
      for (let i = 0; i < removeAriaHidden.length; i += 1)
      removeAriaHidden[i].setAttribute('aria-hidden', "false")
    }

    negativeTabindex('.burger-menu-list-item__link');
    negativeTabindex('.burger-menu-list-item__expand-trigger');

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
          const parent = trigger.closest(
            '.js-burger-menu-list-item--expandable',
          );
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
          this.isOpen = true;
          document.querySelector('#js-burger-menu').removeAttribute("aria-hidden");
          document.querySelector('#js-burger-menu').setAttribute("aria-hidden", "false")
          document.body.classList.add('no-scroll');
          document.addEventListener('keydown', this.handleEsc);
          document.addEventListener('click', this.handleClickOutside);
          addAriaHidden('#js-container');
          addAriaHidden('#js-search-overlay')
          addAriaHidden('#js-main-content-link')
          negativeTabindex('#js-container');
          negativeTabindex('a');
          negativeTabindex('input');
          negativeTabindex('button');
          addTabindex('.burger-menu-list-item__link');
          addTabindex('.burger-menu-list-item__expand-trigger');          
          document.getElementById('js-burger').focus();
          
        },
        closeBurgerMenu() {
          this.isOpen = false;
          document.removeEventListener('keydown', this.handleEsc);
          document.removeEventListener('click', this.handleClickOutside);
          document.querySelector('#js-burger-menu').removeAttribute("aria-hidden");
          document.querySelector('#js-burger-menu').setAttribute("aria-hidden", "true")
          document.body.classList.remove('no-scroll');
          // Alter tabindex on elements to improve user accessibility
          removeTabindex('#js-container')
          removeTabindex('a')
          removeTabindex('input')
          removeTabindex('button')
          removeAriaHidden('#js-container')
          negativeTabindex('#js-burger-menu')
          negativeTabindex('.burger-menu-list-item__link');
          negativeTabindex('.burger-menu-list-item__expand-trigger');
          document.getElementById('js-burger').focus();
        },
        hideSubNavigations(parent) {
          const items = document.querySelectorAll(
            '.js-burger-menu-list-item--expandable',
          );
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
