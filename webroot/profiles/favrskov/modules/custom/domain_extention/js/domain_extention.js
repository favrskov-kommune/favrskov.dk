/**
 * @file
 * Javascript related to the admin/domain/content/%domain_id pages.
 */
(function ($) {

  Drupal.behaviors.domainExtention = {
    attach: function(context, settings) {
      // Settings from backend.
      var filteredCount = settings.domainExtention.filteredCount,
          selectButtonsMarkup = settings.domainExtention.selectButtonsMarkup,
          defaultPageNodeCount = settings.domainExtention.defaultPageNodeCount;

      // Internal variables.
      var checkboxes,
          lastChecked = 'init',
          showSelectAllRow = (parseInt(filteredCount) > parseInt(defaultPageNodeCount)) ? true : false,
          $table = $('th.select-all', context).closest('table'),
          $tbody = $('tbody', $table).prepend('<tr></tr>'),
          $buttonsRow = $('tr:first', $tbody).addClass('select-content hide-element'),
          $selected = $('.select-nodes-on-page-or-all', context);

      // Append markup with buttons in table row.
      $buttonsRow.append(selectButtonsMarkup);

      var updateSelectAll = function (state) {
        // Update table's select-all checkbox (and sticky header's if available).
        $table.prev('table.sticky-header').andSelf().find('th.select-all input:checkbox').each(function() {
          this.checked = state;
        });
      };

      $('th.select-all', $table)
        .prepend('<input type="checkbox" class="domain-extention-select-all" />')
        .click(function (event) {
          if ($(event.target).is('input:checkbox')) {

            if (event.target.checked && showSelectAllRow) {
              $buttonsRow.show();
              $selected.val(1);
            }
            else {
              $buttonsRow.hide();
              $selected.val(0);
            }

            // Loop through all checkboxes and set their state to the select all checkbox state.
            checkboxes.each(function () {
              this.checked = event.target.checked;
            });
            // Update the state of the check all box.
            updateSelectAll(event.target.checked);
          }
        });

      // If one of listed boxes were unchecked then switch off all select-all box staff.
      $('td :checkbox', $tbody).change(function(event) {
        if (event.target.checked == false) {
          $selected.val('0');
          $buttonsRow.hide();
          $('th.select-all :checkbox', context).attr('checked', false);
        }
      });

      checkboxes = $('td input:checkbox:enabled', $table).click(function (e) {
        // If all checkboxes are checked, make sure the select-all one is checked too,
        // otherwise keep unchecked.
        updateSelectAll((checkboxes.length == $(checkboxes).filter(':checked').length));
      });

      // Click on submit with init class leads to setting input.select-nodes-on-page-or-all
      // value to '2'. It`s mean that all (filtered) nodes will be affected during some
      // operation performing.
      $('.init input', $tbody).click(function(event) {
        if (lastChecked == 'init') $selected.val('2');
        event.preventDefault();
        $(this).closest('span').hide().siblings('.all-nodes-in-table').show();
        lastChecked = 'all-nodes-in-table';

        return false;
      });

      // Click on submit with all-nodes-in-table class leads to setting input.select-nodes-on-page-or-all
      // value to '1'. It`s mean that default page nodes count will be affected.
      $('.all-nodes-in-table input', $tbody).click(function(event) {
        if (lastChecked == 'all-nodes-in-table') $selected.val('1');
        event.preventDefault();
        $(this).closest('span').hide().siblings('.init').show();
        lastChecked = 'init';

        return false;
      });

    }
  }

})(jQuery);
