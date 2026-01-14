document.addEventListener('DOMContentLoaded', () => {
  const localTasksWrapper = document.querySelector('.js-local-tasks-wrapper');
  const toolbarOriented = document.querySelector('.toolbar-oriented');
  const localTasks = document.querySelector('.js-local-tasks');
  const bodyPaddingTop = document.querySelector('body').style.paddingTop;
  const localTasksHeight = localTasks.clientHeight;

  document.addEventListener('scroll', () => {
    if (window.scrollY > 0) {
      localTasksWrapper.classList.add('sticky');
      localTasksWrapper.style.paddingTop = `${localTasksHeight}px`;
      localTasks.style.top = `${toolbarOriented.clientHeight || 0}px`;
    } else {
      localTasksWrapper.classList.remove('sticky');
      localTasksWrapper.style.paddingTop = 0;
      localTasks.style.top = 'auto';
    }
  });
});
