/**!
 * jQuery lightweight plugin boilerplate
 * Original author: @ajpiano
 * Further changes, comments: @addyosmani
 * Licensed under the MIT license
 * http://coding.smashingmagazine.com/2011/10/11/essential-jquery-plugin-patterns/
 **/
 ;(function ($, window, document, undefined) {
  // Create the defaults once
  var pluginName = 'mbp',
    defaults = {
      folderManagementEnabled: false,
      fileIdRegexp: /^.*media-item-([0-9]*).*$/,
      folderIdRegexp: /^.*folder-id-([0-9]*).*$/,
      mbpActionRegexp: /^.*mbp-action-(.*?)( .*|)$/,
      actions: {}
    };

  // The actual plugin constructor
  function MBP( element, options ) {
    var plugin = this;
    this.element = $(element);
    this.options = $.extend( {}, defaults, options) ;
    this._defaults = defaults;
    this._name = pluginName;

    // Add static methods.

    this.removeItemFromBasket = function(item) {
      // Extract file id and store it - in cookie and exposed form.
      var file_id = this.id.replace(plugin.options.fileIdRegexp, '$1');
      $('input[name=mbp_basket_files]', plugin.element).val($('input[name=mbp_basket_files]', plugin.element).val().replace(file_id, '').replace('  ', ' '));
      $.cookie(
        'Drupal.visitor.mbp.basket',
        $('input[name=mbp_basket_files]', plugin.element).val(),
        {path: Drupal.settings.basePath}
      );
      // Update links.
      $('a[href*="mbp_basket_files="]', plugin.element).each(function(index, link) {
        link.href = link.href.replace(/(&|)mbp_basket_files=.*?(\#|\&|$)/, '$1mbp_basket_files=' + encodeURIComponent($('input[name=mbp_basket_files]', plugin.element).val()) +  '$2');
      });
      $(this).remove();
    };

    this.addItemToBasked = function (item) {
      if (!$('.mbp-file-basket-list', plugin.element).find('#' + item.id).length) {
        // Extract file id and store it - in cookie and exposed form.
        var file_id = item.id.replace(plugin.options.fileIdRegexp, '$1');
        $('input[name=mbp_basket_files]', plugin.element).val($('input[name=mbp_basket_files]', plugin.element).val() + ' ' + file_id);
        $.cookie(
          'Drupal.visitor.mbp.basket',
          $('input[name=mbp_basket_files]', plugin.element).val(),
          {path: Drupal.settings.basePath}
        );
        // Update links.
        $('a[href*="mbp_basket_files="]', plugin.element).each(function(index, link) {
          link.href = link.href.replace(/(&|)mbp_basket_files=.*?(\#|\&|$)/, '$1mbp_basket_files=' + encodeURIComponent($('input[name=mbp_basket_files]', plugin.element).val()) +  '$2');
        });
        // Add item to list.
        $('.mbp-file-basket-list', plugin.element).append(item);
        $(item)
          .click(plugin.removeItemFromBasket)
          .find('a').click(function(e) {
            e.preventDefault();
          });
      }
    }

    this.init();
  }

  MBP.prototype.init = function () {
    var plugin = this;
    $('.mbp-folders li', this.element).bind('click.mbp', function(e) {
      // A click on the icon just opens the folder structure.
      if (!$(e.target).hasClass('icon')) {
        plugin.loadFiles($(this).children('div.folder-name').attr('class').replace(plugin.options.folderIdRegexp, '$1'));
      }
      else {
        if ($(this).hasClass('open')) {
          plugin.folderClose($(this));
        }
        else {
          plugin.folderOpen($(this));
        }
      }
      e.stopPropagation();
    });

    // Hide exposed folder filter.
    $('div.form-item-mbp-current-folder:has(:input[name=mbp_current_folder])', this.element).hide();
    // Initialize the folder structure.
    var currentFolder = $(':input[name=mbp_current_folder]', this.element).val();
    if (currentFolder) {
      this.element
        .find('li:has(>.folder-id-' + currentFolder + ')').addClass('active')
        .find('ol:first').show();
      var folder = $('.folder-id-' + currentFolder, this.element).show();
      folder.parents('ol').show();
      folder.parents('li').addClass('open');
    }

    // Enable drag n drop.
    if (this.options.files_draggable) {
      $('.mbp-file-list li', this.element).draggable({
        iframeFix: true,
        opacity: 0.7,
        revert: 'invalid',
        zIndex: 999,
        helper: function(){
          // Support grouping of draggables.
          var selected = $('li:has(input.vbo-select:checked)', plugin.element);
          if (selected.length === 0) {
            selected = $(this);
          }
          var container = $('<div/>').attr('id', 'draggingContainer');
          container.append(selected.clone());
          return container;
        }
      });
    }
    // @todo Add folder management.
    if (this.options.folders_draggable) {
//      $('.mbp-folders li', this.element).draggable({
//        iframeFix: true,
//        opacity: 0.7,
//        revert: 'invalid'
//      });
    }
    if (this.options.files_draggable || this.options.folders_draggable) {
      $('.mbp-folders li div.folder-name', this.element).droppable({
        hoverClass: 'drag-hover',
        tolerance: 'pointer',
        drop: function(event, ui) {
          if (ui.helper.data('mbpDragHoverTimeout')) {
            window.clearTimeout(ui.helper.data('mbpDragHoverTimeout'));
          }
          var target = $(this);
          var folder_id = target.attr('class').replace(plugin.options.folderIdRegexp, '$1');
          // Since we support grouping of draggables iterate over each item.
          ui.helper.find('li').each(function(index, item){
            item = $(item);
            var file_id = item.attr('id').replace(plugin.options.fileIdRegexp, '$1');
            var url = Drupal.settings.basePath + 'admin/content/file/' + file_id + '/move-to-folder/' + folder_id;
            // Add throbber to folder.
            target.prepend('<div class="ajax-progress ajax-progress-throbber media-item-' + file_id + '"><div class="throbber">&nbsp;</div></div>');
            $('#' + item.attr('id'), plugin.element).remove();
            $.ajax({
              url: url,
              success: function(data) {
                target.find('.ajax-progress.media-item-' + file_id).remove();
              },
              error: function(data) {
                alert(Drupal.t('An error occured, please refresh the page and try again.'));
                target.find('.ajax-progress.media-item-' + file_id).remove();
              }
            });
          });
        },
        over: function(event, ui) {
          // Open subfolder after 1 second hovering.
          if (ui.helper.data('mbpDragHoverTimeout')) {
            window.clearTimeout(ui.helper.data('mbpDragHoverTimeout'));
          }
          var target = $(this);
          ui.helper.data('mbpDragHoverTimeout', window.setTimeout(function(){
            //@todo Figure out why subfolders aren't initialized droppables.
            plugin.folderOpen(target.parent());
          }, 1000));
        },
        out: function(event, ui ) {
          if (ui.helper.data('mbpDragHoverTimeout')) {
            window.clearTimeout(ui.helper.data('mbpDragHoverTimeout'));
            ui.helper.data('mbpDragHoverTimeout', false);
          }
        }
      });
    }

    // Make media basked.
    if (this.options.media_basket ) {
      $('.mbp-file-basket-list li', this.element)
        .click(this.removeItemFromBasket);
      $('.mbp-file-basket input[name=mbp_basket_files_download]', this.element).click(function() {
        window.setTimeout(function(){
          $('.mbp-file-basket-list li', plugin.element).trigger('click');
        }, 1000);
        window.location.href = this.getBasePath() + 'admin/content/file/download-multiple/' + $('input[name=mbp_basket_files]', plugin.element).val();
      });

      if (this.options.files_draggable) {
        $('.mbp-file-basket', this.element).droppable({
          hoverClass: 'drag-hover',
          drop: function(event, ui) {
            var target = $(this);
            ui.helper.find('li').each(function(index, item){
              plugin.addItemToBasked(item);
            });
          }
        });
      }
    }

    // Hide the vbo checkboxes and handle them by JS.
    $('.mbp-file-list li:has(.vbo-select)', this.element)
      .bind('click.mbp', function(e) {
        if (!$(e.target).hasClass('vbo-select')) {
          $(this).find('input.vbo-select')
            .attr('checked', !$(this).find('input.vbo-select').attr('checked'))
            .trigger('change');
        }
      })
      .bind('dblclick.mbp', function(e) {
        plugin['editFiles']($(this).find('input.vbo-select').val());
      });
    $('.mbp-file-list li input.vbo-select', this.element)
      .bind('change.mbp', function(e) {
        var media_item = $('#media-item-' + this.value + ' .media-item', plugin.element);
        if (this.checked) {
          media_item.addClass('selected');
        }
        else {
          media_item.removeClass('selected');
        }
      })
      .hide();
    $('.vbo-select-this-page', this.element).click(function() {
      $('input.vbo-select', this.element)
        .attr('checked', this.checked)
        .trigger('change');
    });
    $('.vbo-select-all-pages', this.element).click(function() {
      $('input.vbo-select', this.element)
        .attr('checked', this.checked)
        .trigger('change');
    });
    // If there are links and vbo selects navigate only on dbl clicks.
    $('.mbp-file-list li:has(.vbo-select):has(a)', this.element)
      .bind('dblclick.mbp', function(e) {
        window.location.href = $(this).find('a').attr('href');
      })
      .find('a').bind('click.mbp', function(e) {
        e.preventDefault();
      });

    // Register actions
    for (var action in this.options.actions) {
      if (this[action + 'Files']) {
        $('.mbp-action-' + action, this.element).bind('click.mbp',function() {
          var action = $(this).attr('class').replace(plugin.options.mbpActionRegexp, '$1');
          plugin[action + 'Files']();
        });
      }
    }
  };

  MBP.prototype.destroy = function () {
    $('.mbp-folders li', this.element)
      .unbind('.mbp')
      .draggable('destroy')
      .droppable('destroy');
    $('.mbp-file-list li', this.element)
      .unbind('.mbp')
      .draggable('destroy')
      .find('input.vbo-select')
      .unbind('.mbp')
      .show();
    $('div.views-exposed-widget:has(:input[name=mbp_current_folder])', this.element).show();
    $('.mbp-action-', this.element).unbind('.mbp');
  };

  /**
   * Returns the proper Drupal path to use as destination parameter.
   */
  MBP.prototype.getDestinationPath = function () {
    var path = window.location.pathname;
    path = path.replace(new RegExp('^' + Drupal.settings.basePath.replace(/([.?*+^$[\]\\(){}|-])/g, '\\$1')), '');
    if (Drupal.settings.pathPrefix.length) {
      path = path.replace(new RegExp('^' + Drupal.settings.pathPrefix.replace(/([.?*+^$[\]\\(){}|-])/g, '\\$1')), '');
    }
    return path;
  };

  /**
   * Returns the proper Drupal path to navigate with.
   */
  MBP.prototype.getBasePath = function (path) {
    return Drupal.settings.basePath + Drupal.settings.pathPrefix;
  };

  MBP.prototype.folderOpen = function(folder) {
    $(folder)
      .addClass('open')
      .find('ol:first').show();
  }

  MBP.prototype.folderClose = function(folder) {
    $(folder)
      .removeClass('open')
      .find('ol').hide();
  }

  // Loads the files of a folder.
  MBP.prototype.loadFiles = function(folder_id) {
    if ($(':input[name=mbp_current_folder]', this.element).length && $(':input[name=mbp_current_folder]', this.element).val() != folder_id) {
      $(':input[name=mbp_current_folder]', this.element).val(folder_id).trigger('change');
      $('li.active', this.element).removeClass('active');
      $('li:has(>.folder-id-' + folder_id + ')', this.element)
        .addClass('active')
        .prepend('<div class="ajax-progress ajax-progress-throbber"><div class="throbber">&nbsp;</div></div>');
    }
  }

  MBP.prototype.getSelectedFiles = function () {
    var fids = [];
    var plugin = this;
    $('.mbp-file-list li:has(.media-item.selected)', this.element).each(function(i, item) {
      fids.push(item.id.replace(plugin.options.fileIdRegexp, '$1'));
    });
    return fids;
  }

  MBP.prototype.deleteFiles = function () {
    var fids = this.getSelectedFiles();
    if (fids.length) {
      window.location.href = this.getBasePath() + 'admin/content/file/delete-multiple/' + fids.join(' ') + '?destination=' + this.getDestinationPath();
    }
  }

  MBP.prototype.basketFiles = function () {
    var plugin = this;
    var items = $('.mbp-file-list li:has(.media-item.selected)', this.element)
    if (items.length) {
      items.each(function(index, item) {
        plugin.addItemToBasked(item);
      });
    }
  }

  MBP.prototype.editFiles = function (fileId) {
    var fids = this.getSelectedFiles();
    if (typeof(fileId) != 'undefined') {
      fids = [fileId];
    }
    if (fids.length > 1) {
      window.location.href = this.getBasePath()+ 'admin/content/file/edit-multiple/' + fids.join(' ') + '?destination=' + this.getDestinationPath();
    }
    else if (fids.length == 1) {
      window.location.href = this.getBasePath() + 'file/' + fids[0] + '/edit?destination=' + this.getDestinationPath();
    }
  }

  MBP.prototype.downloadFiles = function () {
    var fids = this.getSelectedFiles();
    if (fids.length) {
      window.location.href = this.getBasePath() + 'admin/content/file/download-multiple/' + fids.join(' ');
    }
  }

  $.fn[pluginName] = function ( options ) {
    return this.each(function () {
      if (!$.data(this, 'plugin_' + pluginName)) {
        $.data(this, 'plugin_' + pluginName,
          new MBP( this, options ));
      }
      else {
        if (options == 'options') {
          return $.data(this, 'plugin_' + pluginName).options;
        }
      }
    });
  }

  Drupal.behaviors.media_browser_plus_views = {
    attach: function (context) {
      if (Drupal.settings.mbp.views) {
        for(var i in Drupal.settings.mbp.views) {
          var view_id = Drupal.settings.mbp.views[i].view_id;
          var view_display_id = Drupal.settings.mbp.views[i].view_display_id;
          $('.view-id-'  + view_id + '.view-display-id-' + view_display_id).mbp(Drupal.settings.mbp.views[i]);
        }
      }
    }
  }

})( jQuery, window, document );
