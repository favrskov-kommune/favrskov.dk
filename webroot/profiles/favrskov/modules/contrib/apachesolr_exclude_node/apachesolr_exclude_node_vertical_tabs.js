
(function ($) {

/**
 * Provide summary information for vertical tabs.
 */
Drupal.behaviors.apachesolr_exclude_node = {
  attach: function (context) {
	// Provide summary when editting a node.
	$('fieldset#edit-apachesolr-exclude-node', context).drupalSetSummary(function(context) {
      var vals = [];
      if ($('#edit-apachesolr-exclude-node-enabled').is(':checked')) {
        vals.push(Drupal.t('Excluded from Apache Solr'));
      }
      if (!vals.length) {
        vals.push(Drupal.t('Not excluded'));
      }
      return vals.join('<br/>');
    });
  }
};

})(jQuery);
