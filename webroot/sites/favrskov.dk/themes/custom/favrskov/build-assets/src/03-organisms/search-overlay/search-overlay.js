import { createApp } from 'vue';

Drupal.behaviors.searchOverlay = {
  attach(context) {
    const el = context.querySelector?.('#js-search-overlay')
      || document.getElementById('js-search-overlay');

    if (!el || el.dataset.vued) return;

    el.dataset.vued = 'true';

    createApp({
      data() {
        return {
          trapHandler: null,
        };
      },

      mounted() {
        document.addEventListener('searchToggle', this.openSearchOverlay);

        // initial state
        this.closeOverlay(false);
      },

      beforeUnmount() {
        document.removeEventListener('searchToggle', this.openSearchOverlay);
        this.disableTrap();
      },

      methods: {
        openSearchOverlay() {
          const root = document.getElementById('js-search-overlay');
          if (!root) return;

          root.classList.add('search-overlay--open');
          root.setAttribute('aria-hidden', 'false');

          document.body.classList.add('no-scroll');

          this.enableTrap(root);

          const input = document.getElementById('js-search-overlay-input');
          if (input) input.focus();

          // IMPORTANT: re-init Cludo AFTER DOM is visible
          if (window.CludoSearch?.registerSearchFormElement) {
            window.CludoSearch.registerSearchFormElement('#overlay-cludo-search-form');
          }
        },

        closeSearchOverlay() {
          this.closeOverlay(true);
        },

        closeOverlay(focusToggle = true) {
          const root = document.getElementById('js-search-overlay');
          if (!root) return;

          root.classList.remove('search-overlay--open');
          root.setAttribute('aria-hidden', 'true');

          document.body.classList.remove('no-scroll');

          this.disableTrap();

          if (focusToggle) {
            const toggle = document.querySelector('.js-search-toggle');
            if (toggle) toggle.focus();
          }
        },

        enableTrap(root) {
          const focusables = root.querySelectorAll('button, input, a');
          if (!focusables.length) return;

          const first = focusables[0];
          const last = focusables[focusables.length - 1];

          this.trapHandler = (e) => {
            if (e.key === 'Escape') {
              this.closeOverlay();
              return;
            }

            if (e.key !== 'Tab') return;

            if (e.shiftKey && document.activeElement === first) {
              last.focus();
              e.preventDefault();
            }

            if (!e.shiftKey && document.activeElement === last) {
              first.focus();
              e.preventDefault();
            }
          };

          document.addEventListener('keydown', this.trapHandler);
        },

        disableTrap() {
          if (this.trapHandler) {
            document.removeEventListener('keydown', this.trapHandler);
            this.trapHandler = null;
          }
        },
      },
    }).mount(el);
  },
};