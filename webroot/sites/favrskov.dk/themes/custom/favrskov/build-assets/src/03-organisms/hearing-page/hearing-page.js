document.addEventListener('DOMContentLoaded', () => {
  const hearingBackButtonWrapper = document.querySelector('.hearing-page__back-link');
  const hearingBackButton = document.querySelector('.hearing-page__back-link a');
  if (window.history.length > 1 && hearingBackButton.length !== 0) {
    hearingBackButtonWrapper.classList.remove('js-hidden');
    hearingBackButton.addEventListener('click', (event) => {
      event.preventDefault();
      window.history.go(-1);
    });
  }
});
