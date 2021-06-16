import Vue from 'vue';

require('../../../config/vue.config')(Vue);

document.addEventListener('DOMContentLoaded', () => {
  const searchOverlay = document.getElementById('js-search-overlay');
  if (!searchOverlay) {
    return;
  }

  const vm = new Vue({
    delimiters: ['${', '}'],
    el: searchOverlay,
    data: {
      isOpen: false,
    },
    mounted() {
      // Run function on `searchToggle` event
      document.addEventListener('searchToggle', () => {
        this.openSearchOverlay();
      });
    },
    methods: {
      openSearchOverlay() {
        const searchOverlayInput = document.getElementById('js-search-overlay-input');
        searchOverlayInput.focus();
        this.isOpen = true;
        document.body.classList.add('no-scroll');
        document.addEventListener('keydown', this.handleEsc);
        CludoSearch.registerSearchFormElement('#overlay-cludo-search-form');
      },
      closeSearchOverlay() {
        document.removeEventListener('keydown', this.handleEsc);
        this.isOpen = false;
        document.body.classList.remove('no-scroll');
        document.querySelector('.js-search-toggle').focus();
      },
      handleEsc(e) {
        if (e.keyCode === 27) {
          this.closeSearchOverlay();
        }
      },
    },
  });
});
