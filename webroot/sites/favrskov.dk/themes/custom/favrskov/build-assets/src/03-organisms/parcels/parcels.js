import { createApp } from 'vue';

const ParcelGroup = {
  props: {
    title: String,
    showText: String,
    hideText: String,
    itemsCount: Number,
  },
  data() {
    return {
      isOpen: false,
    };
  },
  computed: {
    toggleText() {
      return this.isOpen ? this.hideText : this.showText;
    },
  },
  methods: {
    toggleParcelsGroup() {
      this.isOpen = !this.isOpen;
    },
  },
  template: `
    <div class="parcels__group"
      :class="{
        'parcels__group--hide-elements': itemsCount > 6 && !isOpen,
        'parcels__group--hide-elements-mobile': itemsCount > 3 && !isOpen
      }">

      <h2>{{ title }}</h2>

      <div class="parcels__elements">
        <slot />

        <div
          v-if="showText && hideText"
          class="parcels__toggle-text"
          @click="toggleParcelsGroup"
        >
          {{ toggleText }}
        </div>
      </div>
    </div>
  `,
};

document.addEventListener('DOMContentLoaded', () => {
  document.querySelectorAll('.js-parcels').forEach((el) => {
    createApp({
      components: { ParcelGroup },
    }).mount(el);
  });
});