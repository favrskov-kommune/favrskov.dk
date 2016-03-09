/**
 * @file
 * Javascript related to the admin/domain/content/%domain_id pages.
 */
(function ($) {

  Drupal.behaviors.domainExtention = {
    attach: function(context, settings) {

      var checkboxes, lastChecked;
      var maxNodesPerPage = 50;
      var showSelectAllRow = (parseInt(settings.domainExtention.filteredCount) > maxNodesPerPage) ? true : false;
      var table = $('th.select-all', context).closest('table');

      var updateSelectAll = function (state) {
        // Update table's select-all checkbox (and sticky header's if available).
        $(table).prev('table.sticky-header').andSelf().find('th.select-all input:checkbox').each(function() {
          this.checked = state;
        });
      };

      var selectContent = $('tbody', table).prepend('<tr class="select-content">' + '<td colspan="16">select all</td>' + '</tr>').find('.select-content');
      selectContent.addClass('hide-row');

      $('th.select-all', table)
        .prepend($('<input type="checkbox" class="domain-extention-select-all" />'))
        .click(function (event) {
          if ($(event.target).is('input:checkbox')) {

            console.log(event);

            if (event.target.checked && showSelectAllRow) {
              selectContent.removeClass('hide-row');
            }
            else {
              selectContent.addClass('hide-row');
            }

            // Loop through all checkboxes and set their state to the select all checkbox' state.
            checkboxes.each(function () {
              this.checked = event.target.checked;
            });
            // Update the title and the state of the check all box.
            updateSelectAll(event.target.checked);
          }
        });


      checkboxes = $('td input:checkbox:enabled', table).click(function (e) {
        // If all checkboxes are checked, make sure the select-all one is checked too, otherwise keep unchecked.
        updateSelectAll((checkboxes.length == $(checkboxes).filter(':checked').length));

        // Keep track of the last checked checkbox.
        lastChecked = e.target;
      });


      $('#filtered-count', context).each(function() {
        console.log(settings.domainExtention.filteredCount);
      });
    }
  }

})(jQuery);
