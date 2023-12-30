import Vue from 'vue';

document.addEventListener('DOMContentLoaded', () => {
  const parcels = document.querySelectorAll('.js-parcels');
  if (parcels.length === 0) {
    return;
  }

  const parcelGroup = {
    props: ['title', 'show-text', 'hide-text', 'items-count'],
    data() {
      return {
        isOpen: false,
      };
    },
    computed: {
      toggleText() {
        return (this.isOpen ? this.hideText : this.showText);
      },
    },
    methods: {
      toggleParcelsGroup() {
        this.isOpen = !this.isOpen;
      },
    },
    template: `
      <div class="parcels__group" :class="{'parcels__group--hide-elements': itemsCount > 6 && !isOpen, 'parcels__group--hide-elements-mobile': itemsCount > 3 && !isOpen}">
        <h2 class="parcels__headline">{{ title }}</h2>
        <div class="parcels__elements">
          <div class="row">
            <slot/>
          </div>
          <div v-show="showText && hideText"
               class="parcels__toggle-text"
               :class="{'parcels__toggle-text--active': isOpen, 'parcels__toggle-text--move-up': !isOpen }"
               @click="toggleParcelsGroup()">{{ toggleText }}</div>
        </div>
      </div>
    `,
  };

  for (let i = 0; i < parcels.length; i += 1) {
    const vm = new Vue({
      delimiters: ['${', '}'],
      el: parcels[i],
      components: {
        parcelGroup,
      },
    });
  }
});
