(function ($) {
    Drupal.behaviors.hearing_responses = {
        attach: function (context, settings) {

            var urlParam = function (url, name) {
                var results = new RegExp('[\?&amp;]' + name + '=([^&amp;#]*)').exec(url);
                return  results && results[1] || 0;
            }

            var $hearing_pagers = $('#hearing-responses-form .pager li a');

            $hearing_pagers.click(function (el) {
                el.preventDefault();
            });

            $hearing_pagers.each(function () {
                var url = this.getAttribute('href');
                var webformId = Drupal.settings.hearings.webform_id;
                var data = {js: true};
                var filters = Drupal.settings.hearings.filters;

                $.each(filters, function (index, value) {
                    if (urlParam(url, value['form_key']) != 0) {
                        data[value['form_key']] = urlParam(url, value['form_key']);
                    }
                });

                data.page = urlParam(url, 'page');

                new Drupal.ajax(false, $(this), { url: Drupal.settings.basePath + 'ajax/hearing-responses/' + webformId,
                    event: 'mousedown', effect: 'fade', speed: 'slow', submit: data});
            });
        }
    };
})(jQuery)