window.Drupal = {behaviors: {}};

document.addEventListener('DOMContentLoaded', function () {
  const behaviors = Drupal.behaviors;
  Object.keys(behaviors || {}).forEach(function (i) {
    behaviors[i].attach({}, {});
  });
});
