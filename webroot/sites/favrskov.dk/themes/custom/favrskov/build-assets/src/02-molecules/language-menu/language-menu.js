import { createApp } from 'vue';

Drupal.behaviors.languageMenu = {
  attach(context) {
    const languageMenu = document.getElementById('js-language-menu');

    if (!languageMenu || languageMenu.classList.contains('loaded')) {
      return;
    }

    languageMenu.classList.add('loaded');

    const app = createApp({
      data() {
        return {
          isOpen: false,
        };
      },

      methods: {
        toggleLanguageMenu() {
          this.isOpen ? this.closeLanguageMenu() : this.openLanguageMenu();
        },

        openLanguageMenu() {
          this.isOpen = true;
          document.addEventListener('keydown', this.handleEsc);
          document.addEventListener('click', this.handleClickOutside);
        },

        closeLanguageMenu() {
          this.isOpen = false;
          document.removeEventListener('keydown', this.handleEsc);
          document.removeEventListener('click', this.handleClickOutside);
        },

        handleEsc(e) {
          if (e.key === 'Escape') {
            this.closeLanguageMenu();
          }
        },

        handleClickOutside(e) {
          if (!this.$el.contains(e.target)) {
            this.closeLanguageMenu();
          }
        },
      },
    });

    app.mount(languageMenu);
  },
};