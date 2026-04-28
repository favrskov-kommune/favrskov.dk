import { createApp, reactive } from 'vue';

/* ---------------- ACCORDION ITEM ---------------- */

const accordionItem = {
  props: {
    title: String,
    id: String,
    hidden: Boolean,
  },

  inject: ['accordionState'],

  data() {
    return {
      isOpen: false,
    };
  },

  computed: {
    openAllItems() {
      return this.accordionState.openAllItems;
    },
  },

  watch: {
    openAllItems: {
      immediate: true,
      handler(val) {
        this.isOpen = !!val;
      },
    },
  },

  methods: {
    toggleAccordionItem() {
      this.isOpen = !this.isOpen;
    },
  },

  template: `
    <div class="accordion-item" v-show="!hidden">
      <div
          class="accordion-item__headline"
          :class="{ active: isOpen }"
          :aria-expanded="isOpen ? 'true' : 'false'"
          :aria-controls="'accordion-content-' + id"
          @click="toggleAccordionItem"
      >
        <h3 class="accordion-item__title">{{ title }}</h3>
        <div class="accordion-item__icon"></div>
      </div>

      <div
          class="accordion-item__content"
          :class="{ active: isOpen }"
          :aria-hidden="!isOpen"
          :id="'accordion-content-' + id"
      >
        <div class="accordion-item__text">
          <slot />
        </div>
      </div>
    </div>
  `,
};

/* ---------------- DRUPAL BEHAVIOR ---------------- */

Drupal.behaviors.accordion = {
  attach(context) {
    const accordions = context.querySelectorAll('.js-accordion:not(.loaded)');

    accordions.forEach((el) => {
      el.classList.add('loaded');

      const wrapper = el.querySelector('.js-accordion__wrapper');
      if (!wrapper) return;

      const accordionState = reactive({
        openAllItems: false,
      });

      const app = createApp({
        data() {
          return accordionState;
        },

        provide() {
          return {
            accordionState,
          };
        },

        methods: {
          toggleAllItems() {
            this.openAllItems = !this.openAllItems;
          },
        },
      });

      app.component('accordion-item', accordionItem);

      app.mount(wrapper);
    });
  },
};