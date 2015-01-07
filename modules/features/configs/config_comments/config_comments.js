(function ($) {
  Drupal.behaviors.configComments = {
    attach: function (context, settings) {
      if ($(context).hasClass('ajax-comment-wrapper')) {
        if ($('.pane-node-comments .pane-title').length == 0) {
          $('.pane-node-comments').prepend('<h2 class ="pane-title">' + Drupal.t('Comments') + '</h2>');
        }
      }
    }
  };
}(jQuery));
