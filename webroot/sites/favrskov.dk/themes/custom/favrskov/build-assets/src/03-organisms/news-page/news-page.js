document.addEventListener('DOMContentLoaded', () => {
  const newsBackButtonWrapper = document.querySelector('.news-page__back-link');
  const newsBackButton = document.querySelector('.news-page__back-link a');
  if (window.history.length > 1 && newsBackButton.length !== 0) {
    newsBackButtonWrapper.classList.remove('js-hidden');
    newsBackButton.addEventListener('click', (event) => {
      event.preventDefault();
      window.history.go(-1);
    });
  }
});
