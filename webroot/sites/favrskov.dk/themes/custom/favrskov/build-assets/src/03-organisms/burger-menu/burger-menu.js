import { createApp } from 'vue';

Drupal.behaviors.burgerMenu = {
  attach(context) {
    const root = document.getElementById('js-burger-menu');
    const burgerBtn = document.getElementById('js-burger');

    if (!root || root.classList.contains('loaded')) return;

    root.classList.add('loaded');

    const showSubNavigationClass = 'burger-menu-list--expanded';
    const focusableSelector = 'a[href], button, input, select, textarea, [tabindex], [contenteditable="true"]';

    function getFocusableElements() {
      return Array.from(root.querySelectorAll(focusableSelector)).filter((el) => {
        const { visibility } = window.getComputedStyle(el);
        return el.tabIndex >= 0
          && !el.matches(':disabled')
          && !el.closest('[inert]')
          && el.getClientRects().length > 0
          && visibility !== 'hidden'
          && visibility !== 'collapse';
      });
    }

    function trapTab(e) {
      if (e.key !== 'Tab') return;

      // Submenus can change which controls are visible while the menu is open.
      const focusables = getFocusableElements();
      const first = focusables[0];
      const last = focusables[focusables.length - 1];

      if (!first) return;

      if (!focusables.includes(document.activeElement)) {
        (e.shiftKey ? last : first).focus();
        e.preventDefault();
      } else if (e.shiftKey && document.activeElement === first) {
        last.focus();
        e.preventDefault();
      } else if (!e.shiftKey && document.activeElement === last) {
        first.focus();
        e.preventDefault();
      }
    }

    createApp({
      data() {
        return {
          isOpen: false,
          keydownHandler: null,
        };
      },

      mounted() {
        setTabIndex(root, -1);

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
          if (this.isOpen) return;

          root.inert = false;
          root.classList.add('burger-menu--open');
          this.isOpen = true;
          burgerBtn?.setAttribute('aria-expanded', 'true');
          document.body.classList.add('no-scroll');

          this.keydownHandler = (e) => {
            if (e.key === 'Escape') {
              e.preventDefault();
              this.closeBurgerMenu();
              return;
            }
            trapTab(e);
          };

          document.addEventListener('keydown', this.keydownHandler);

          this.$nextTick(() => {
            if (this.isOpen) root.querySelector('.burger-menu__close')?.focus();
          });
        },

        closeBurgerMenu() {
          // Move focus out before making the menu unavailable.
          burgerBtn?.focus();
          root.inert = true;
          root.classList.remove('burger-menu--open');

          this.isOpen = false;
          burgerBtn?.setAttribute('aria-expanded', 'false');

          document.body.classList.remove('no-scroll');

          if (this.keydownHandler) {
            document.removeEventListener('keydown', this.keydownHandler);
            this.keydownHandler = null;
          }
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
