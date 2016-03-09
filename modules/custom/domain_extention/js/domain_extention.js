/**
 * @file
 * Javascript related to the admin/domain/content/%domain_id pages.
 */
(function ($) {

  Drupal.behaviors.domainExtention = {
    attach: function(context, settings) {

      var filteredCount = settings.domainExtention.filteredCount;
      var onPageArgs  = {'@defaultCount' : '50'},
          onTableArgs = {'@filteredCount' : filteredCount};

      var text5 = Drupal.t('Select all @filteredCount nodes in this table.', onTableArgs);
      var checkboxes, lastChecked;
      var maxNodesPerPage = 50;
      var showSelectAllRow = (parseInt(filteredCount) > maxNodesPerPage) ? true : false;
      var $table = $('th.select-all', context).closest('table');
      /*input2 = '<span class="vbo-table-this-page" style="display: none;">' +
              Drupal.t('Selected <strong>%filteredCount</strong> in this page. &nbsp', args) +
              '<input class="vbo-table-select-all-pages form-submit" ' +
              'type="submit" ' +
              'name="op" ' +
              'value="' + Drupal.t('Select all %defaultCount nodes in this table.', args) + '">' +
              '</span>';*/
      var $nodesOnPage = $('<span>');
      $nodesOnPage.addClass('nodes-on-page')
          .append(Drupal.t('Selected <strong>@defaultCount</strong> in this page.', onPageArgs))
          .append('<input type="submit" />')
          .find('input')
          .attr('class', 'form-submit')
          .attr('name', 'op')
          .attr('value', text5);

      var updateSelectAll = function (state) {
        // Update table's select-all checkbox (and sticky header's if available).
        $table.prev('table.sticky-header').andSelf().find('th.select-all input:checkbox').each(function() {
          this.checked = state;
        });
      };

      var $tbody = $('tbody', $table).prepend('<tr></tr>');
      var $selectContentRow = $('tr:first', $tbody).addClass('select-content hide-row');
      $selectContentRow.append('<td></td>').find('td:first').attr('colspan', 16)
        .append($nodesOnPage);

      $('th.select-all', $table)
        .prepend('<input type="checkbox" class="domain-extention-select-all" />')
        .click(function (event) {
          if ($(event.target).is('input:checkbox')) {
            //console.log(event);
            if (event.target.checked && showSelectAllRow) {
              $selectContentRow.removeClass('hide-row');
            }
            else {
              $selectContentRow.addClass('hide-row');
            }

            // Loop through all checkboxes and set their state to the select all checkbox' state.
            checkboxes.each(function () {
              this.checked = event.target.checked;
            });
            // Update the title and the state of the check all box.
            updateSelectAll(event.target.checked);
          }
        });


      checkboxes = $('td input:checkbox:enabled', $table).click(function (e) {
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
