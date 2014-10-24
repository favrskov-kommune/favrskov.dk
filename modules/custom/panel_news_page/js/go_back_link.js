(function ($) {
    Drupal.behaviors.panelNewsPageGoBackLink = {
        attach: function (context, settings) {
            var comp = new RegExp(location.host);
            var previousUrl = document.referrer;

            // lets check whether user came from external link or not
            // if he came from external url than co back link will lead to the front page
            if (comp.test(previousUrl)) {
                if ($('a.go-back-link', context).attr('href') == '/') {
                  $('a.go-back-link', context).attr('href', previousUrl);
                }
            }
        }
    };
})(jQuery);