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
          returnFocus: null,
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
        openSearchOverlay(event) {
          const root = document.getElementById('js-search-overlay');
          if (!root || root.classList.contains('search-overlay--open')) return;

          this.returnFocus = event?.detail?.trigger || document.querySelector('.js-search-toggle');
          root.inert = false;
          root.classList.add('search-overlay--open');
          this.setExpanded(true);

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

          // Return focus before making the overlay unavailable.
          if (focusToggle) {
            const toggle = this.returnFocus || document.querySelector('.js-search-toggle');
            toggle?.focus();
          }

          root.inert = true;
          root.classList.remove('search-overlay--open');
          this.setExpanded(false);
          document.body.classList.remove('no-scroll');

          this.disableTrap();
          this.returnFocus = null;
        },

        setExpanded(expanded) {
          document.querySelectorAll('.js-search-toggle').forEach((toggle) => {
            toggle.setAttribute('aria-expanded', String(expanded));
          });
        },

        enableTrap(root) {
          this.disableTrap();

          this.trapHandler = (e) => {
            if (e.key === 'Escape') {
              e.preventDefault();
              this.closeOverlay();
              return;
            }

            if (e.key !== 'Tab') return;

            // Cludo can add or hide controls after the overlay has opened.
            const focusables = Array.from(root.querySelectorAll('a[href], button, input, select, textarea, [tabindex], [contenteditable="true"]')).filter((control) => {
              const { visibility } = window.getComputedStyle(control);
              return control.tabIndex >= 0
                && !control.matches(':disabled')
                && !control.closest('[inert]')
                && control.getClientRects().length > 0
                && visibility !== 'hidden'
                && visibility !== 'collapse';
            });
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
