import Vue from 'vue';

require('../../../config/vue.config')(Vue);

document.addEventListener('DOMContentLoaded', () => {
  const searchOverlay = document.getElementById('js-search-overlay');
  if (!searchOverlay) {
    return;
  }

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
        negativeTabindex('a');
        negativeTabindex('input');
        addTabindex('#overlay-cludo-search-form input');
        addTabindex('#overlay-cludo-search-form button');
        addTabindex('.search-overlay__close');
        document.getElementById('js-search-overlay-input').focus();
      },
      closeSearchOverlay() {
        document.removeEventListener('keydown', this.handleEsc);
        this.isOpen = false;
        document.body.classList.remove('no-scroll');
        document.querySelector('.js-search-toggle').focus();
        removeTabindex('a');
        removeTabindex('input');
        negativeTabindex('#overlay-cludo-search-form input');
        negativeTabindex('#overlay-cludo-search-form button');
        document.getElementById('js-search-toggle').focus();
      },
      handleEsc(e) {
        if (e.keyCode === 27) {
          this.closeSearchOverlay();
        }
      },
    },
  });
});
