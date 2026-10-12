import { createApp } from 'vue';

Drupal.behaviors.burgerMenu = {
  attach(context) {
    const root = document.getElementById('js-burger-menu');
    const burgerBtn = document.getElementById('js-burger');

    if (!root || root.classList.contains('loaded')) return;

    root.classList.add('loaded');

    const showSubNavigationClass = 'burger-menu-list--expanded';
    const focusableSelector = 'button, input, a';

    function setTabIndex(el, value) {
      if (!el) return;

      el.setAttribute('tabindex', value);

      el.querySelectorAll(focusableSelector).forEach((child) => {
        child.setAttribute('tabindex', value);
      });
    }

    function trapTab(e, first, last) {
      if (e.key !== 'Tab') return;

      if (e.shiftKey) {
        if (document.activeElement === first) {
          last?.focus();
          e.preventDefault();
        }
      } else {
        if (document.activeElement === last) {
          first?.focus();
          e.preventDefault();
        }
      }
    }

    createApp({
      data() {
        return {
          isOpen: false,
          keydownHandler: null,
        };
      },

      watch: {
        isOpen(value) {
          const menu = document.getElementById('js-burger-menu');
          if (!menu) return;

          if (value) {
            menu.classList.add('burger-menu--open');
            menu.setAttribute('aria-hidden', 'false');
          } else {
            menu.classList.remove('burger-menu--open');
            menu.setAttribute('aria-hidden', 'true');
          }
        },
      },

      mounted() {
        if (burgerBtn) {
          burgerBtn.addEventListener('click', () => {
            this.openBurgerMenu();
          });
        }
      },

      methods: {
        triggerSubNavigation(e) {
          e.preventDefault();

          const trigger = e.currentTarget;
          const parent = trigger.closest('.js-burger-menu-list-item--expandable');
          const btn = trigger.closest('.burger-menu-list-item__expand-trigger');

          if (!btn || !parent) return;

          const expanded = btn.getAttribute('aria-expanded') === 'true';
          btn.setAttribute('aria-expanded', String(!expanded));

          parent.classList.toggle(showSubNavigationClass);
        },

        openBurgerMenu() {
          this.isOpen = true;

          const menu = document.getElementById('js-burger-menu');
          if (!menu) return;

          document.body.classList.add('no-scroll');

          setTabIndex(menu, 0);

          const focusables = menu.querySelectorAll(focusableSelector);
          const first = focusables[0];
          const last = focusables[focusables.length - 1];

          this.keydownHandler = (e) => {
            if (e.key === 'Escape') {
              this.closeBurgerMenu();
              return;
            }
            trapTab(e, first, last);
          };

          document.addEventListener('keydown', this.keydownHandler);

          const closeBtn = menu.querySelector('.burger-menu__close');
          closeBtn?.focus();
        },

        closeBurgerMenu() {
          this.isOpen = false;

          const menu = document.getElementById('js-burger-menu');
          if (menu) {
            setTabIndex(menu, -1);
          }

          document.body.classList.remove('no-scroll');

          if (this.keydownHandler) {
            document.removeEventListener('keydown', this.keydownHandler);
            this.keydownHandler = null;
          }

          burgerBtn?.focus();
        },

        hideSubNavigations(parent) {
          document
            .querySelectorAll('.js-burger-menu-list-item--expandable')
            .forEach((item) => {
              if (item !== parent) {
                item.classList.remove(showSubNavigationClass);
              }
            });
        },
      },
    }).mount(root);
  },
};