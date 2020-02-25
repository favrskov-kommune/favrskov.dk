/**
 * @file
 * Administration helper.
 */

(function ($) {
  'use strict';

  Drupal.behaviors.basicAuthFieldsetSummaries = {
    attach: function (context) {
      $(context).find('fieldset.vertical-tabs-pane').drupalSetSummary(function (fieldset) {
        return $(fieldset).find('input[name*=path]').val() || Drupal.t('No path specified');
      });
    }
  };
})(jQuery);
