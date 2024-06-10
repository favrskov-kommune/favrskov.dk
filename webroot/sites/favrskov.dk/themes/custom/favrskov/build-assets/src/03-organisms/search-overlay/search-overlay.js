import Vue from "vue";

require("../../../config/vue.config")(Vue);

document.addEventListener("DOMContentLoaded", () => {
  const searchOverlay = document.getElementById("js-search-overlay");
  if (!searchOverlay) {
    return;
  }

  const focuseAbleHtmlElements = "button, input, a";

  function addTabindex(element) {
    element.setAttribute("tabindex", 0);
    const children = element.querySelectorAll(focuseAbleHtmlElements);
    children.forEach(child => {
      child.setAttribute("tabindex", 0);
    });
  }

  function negativeTabindex(element) {
    element.setAttribute("tabindex", -1);
    const children = element.querySelectorAll(focuseAbleHtmlElements);
    children.forEach(child => {
      child.setAttribute("tabindex", -1);
    });
  }

  function addAriahidden(element) {
    element.setAttribute("aria-hidden", "true");
    const children = element.querySelectorAll(focuseAbleHtmlElements);
    children.forEach(child => {
      child.setAttribute("aria-hidden", "true");
    });
  }

  function removeAriahidden(element) {
    element.setAttribute("aria-hidden", "false");
    const children = element.querySelectorAll(focuseAbleHtmlElements);
    children.forEach(child => {
      child.setAttribute("aria-hidden", "false");
    });
  }

  function addTabFocus(element) {
    addTabindex(element);
    removeAriahidden(element);
    const focusableElements = element.querySelectorAll("button, input, a");
    if (focusableElements.length === 0) {
      return;
    }
    const firstFocusableElement = focusableElements[0];
    const lastFocusableElement =
      focusableElements[focusableElements.length - 1];
    const KEYCODE_TAB = 9;

    document.addEventListener("keydown", e => {
      if (e.key === "Tab" || e.keyCode === KEYCODE_TAB) {
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
    document.removeEventListener("keydown", this.handleEsc);
  }

  negativeTabindex(searchOverlay);
  addAriahidden(searchOverlay);

  const vm = new Vue({
    delimiters: ["${", "}"],
    el: searchOverlay,
    data: {
      isOpen: false
    },
    mounted() {
      // Run function on `searchToggle` event
      document.addEventListener("searchToggle", () => {
        this.openSearchOverlay();
      });
    },
    methods: {
      openSearchOverlay() {
        const searchOverlayEl = document.getElementById("js-search-overlay");
        const searchOverlayInput = document.getElementById(
          "js-search-overlay-input"
        );
        searchOverlayInput.focus();
        this.isOpen = true;
        document.body.classList.add("no-scroll");
        document.addEventListener("keydown", this.handleEsc);
        CludoSearch.registerSearchFormElement("#overlay-cludo-search-form");
        searchOverlayInput.focus();
        addTabFocus(searchOverlayEl);
      },
      closeSearchOverlay() {
        this.isOpen = false;
        const searchOverlayEl = document.getElementById("js-search-overlay");
        document.querySelector(".js-search-toggle").focus();
        removeTabFocus(searchOverlayEl);
        document.removeEventListener("keydown", this.handleEsc);
        document.body.classList.remove("no-scroll");
        document.getElementById("js-search-toggle").focus();
      },
      handleEsc(e) {
        if (e.keyCode === 27) {
          this.closeSearchOverlay();
        }
      }
    }
  });
});
