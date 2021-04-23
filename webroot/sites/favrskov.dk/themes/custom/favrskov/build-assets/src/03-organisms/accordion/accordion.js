import Vue from 'vue';

require('../../../config/vue.config')(Vue);

Drupal.behaviors.accordion = {
  attach(context) {
    const accordions = document.querySelectorAll('.js-accordion:not(.loaded)');
    if (accordions.length === 0) {
      return;
    }

    const accordionItem = {
      props: ['title', 'id', 'hidden'],
      data() {
        return {
          isOpen: false,
        };
      },
      methods: {
        toggleAccordionItem() {
          this.isOpen = !this.isOpen;
        },
      },
      template: `
        <div class="accordion-item" v-show="!hidden">
        <div :aria-expanded="isOpen ? 'true' : 'false'" :aria-controls="'accordion-content-' + id" :class="{'active': isOpen}" class="accordion-item__headline" @click="toggleAccordionItem">
          <h3 class="accordion-item__title">{{ title }}</h3>
          <div class="accordion-item__icon"></div>
        </div>
        <div class="accordion-item__content" :aria-hidden="!isOpen ? 'true' : 'false'" :id="'accordion-content-' + id" :class="{'active': isOpen}">
          <div class="accordion-item__text">
            <slot/>
          </div>
        </div>
        </div>
      `,
    };

    for (let i = 0; i < accordions.length; i += 1) {
      accordions[i].classList.add('loaded');
      const vm = new Vue({
        delimiters: ['${', '}'],
        el: accordions[i],
        data: {
          showAllHiddenItems: false,
        },
        components: {
          accordionItem,
        },
        methods: {
          displayHiddenItems() {
            this.showAllHiddenItems = true;
          },
        },
      });
    }
  },
};
