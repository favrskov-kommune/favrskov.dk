document.addEventListener('DOMContentLoaded', () => {
  const feedbackButtons = document.querySelectorAll('.js-footer__feedback--action_link');
  const feedbackFormWrapper = document.querySelector('.js-footer__feedback-form');
  if (feedbackButtons.length !== 0) {
    feedbackButtons.forEach((feedback, index) => {
      feedback.addEventListener('click', (event) => {
        event.preventDefault();
        const feedbackType = event.target.dataset.feedback;
        const feedbackActiveClass = `active-${feedbackType}`;
        feedbackFormWrapper.classList.remove('active', 'active-yes', 'active-no');
        if (feedback.classList.contains('active')) {
          for (let i = 0; i < feedbackButtons.length; i += 1) {
            feedbackButtons[i].classList.remove('active');
          }
        } else {
          for (let i = 0; i < feedbackButtons.length; i += 1) {
            feedbackButtons[i].classList.remove('active');
          }
          feedback.classList.add('active');
          feedbackFormWrapper.classList.add('active', feedbackActiveClass);
        }
        const ajaxObject = Drupal.ajax({
          url: `/ajax/feedback/${feedbackType}`,
        });
        ajaxObject.execute();
      });
    });
  }
});
