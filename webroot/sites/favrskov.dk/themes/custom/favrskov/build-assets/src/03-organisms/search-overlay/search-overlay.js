import { createApp } from 'vue';

Drupal.behaviors.searchOverlay = {
  attach(context) {
    const el = context.querySelector?.('#js-search-overlay') || document.getElementById('js-search-overlay');

    if (!el || el.dataset.vued) return;

    el.dataset.vued = 'true';

    const app = createApp({
      data() {
        return {
          isOpen: false,
          trapHandler: null,
        };
      },

      watch: {
        isOpen(val) {
          const el = document.getElementById('js-search-overlay');
          if (!el) return;

          el.classList.toggle('search-overlay--open', val);
          el.setAttribute('aria-hidden', String(!val));

          document.body.classList.toggle('no-scroll', val);

          if (val) {
            this.enableTrap(el);

            const input = document.getElementById('js-search-overlay-input');
            if (input) input.focus();
          } else {
            this.disableTrap();
          }
        },
      },

      mounted() {
        document.addEventListener('searchToggle', this.openSearchOverlay);
      },

      beforeUnmount() {
        document.removeEventListener('searchToggle', this.openSearchOverlay);
        this.disableTrap();
      },

      methods: {
        openSearchOverlay() {
          this.isOpen = true;
        },

        open() {
          const root = document.getElementById('js-search-overlay');
          if (!root) return;

          root.setAttribute('aria-hidden', 'false');
          document.body.classList.add('no-scroll');

          this.enableTrap(root);

          const input = document.getElementById('js-search-overlay-input');
          if (input) input.focus();

          if (window.CludoSearch?.registerSearchFormElement) {
            window.CludoSearch.registerSearchFormElement('#overlay-cludo-search-form');
          }
        },

        closeSearchOverlay() {
          this.isOpen = false;
        },

        close() {
          const root = document.getElementById('js-search-overlay');
          if (!root) return;

          root.setAttribute('aria-hidden', 'true');
          document.body.classList.remove('no-scroll');

          this.disableTrap();

          const toggle = document.querySelector('.js-search-toggle');
          if (toggle) toggle.focus();
        },

        enableTrap(root) {
          const focusables = root.querySelectorAll('button, input, a');
          if (!focusables.length) return;

          const first = focusables[0];
          const last = focusables[focusables.length - 1];

          this.trapHandler = (e) => {
            if (e.key === 'Escape') {
              this.closeSearchOverlay();
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
    });

    app.mount(el);
  },
};