document.addEventListener('DOMContentLoaded', () => {
  const searchOverlayTriggers = document.querySelectorAll('.js-search-toggle');
  if (searchOverlayTriggers.length === 0) {
    return;
  }

  for (let i = 0; i < searchOverlayTriggers.length; i += 1) {
    searchOverlayTriggers[i].addEventListener('click', () => {
      const event = new CustomEvent('searchToggle');
      document.dispatchEvent(event);
    });
  }
});
