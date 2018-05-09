(function ($) {
  $(document).ready(function() {
    // Find all picture use checkboxes and ensure that only
    // one can be checked at anytime.
    var picture_use = $('.picture-use .form-checkbox');

    // Disable deletion for currently checked
    var checked = $('.picture-use .form-checkbox:checked');
    if (checked.length) {
      toggle_current_delete(checked, true);
    }

    // Add event listners
    for (var i = 0; picture_use.length > i; i++) {
      var current = $(picture_use[i]);
      current.change(function() {
        var box = $(this);
        if (box.attr('checked') == false) {
          // Enable deletion of this picture
          toggle_current_delete(box, false);
        }
        else {
          // Disable deletion of this picture
          toggle_current_delete(box, true);

          // Disable all the other choices
          move_checked(box);
        }
      });
    }

    function move_checked(current) {
      var checked = $('.picture-use .form-checkbox:checked');
      for (var i = 0; checked.length > i; i++) {
        var cb = $(checked[i]);
        if (cb.attr('id') != current.attr('id')) {
          cb.attr('checked', false);
          toggle_current_delete(cb, false);
        }
      }
    }

    function enable_all() {
      $('.picture-use .form-checkbox').attr('disabled', false);
    }

    function toggle_current_delete(checkbox, state) {
      $('input', checkbox.parent().parent().siblings('div')).attr('disabled', state);
    }
  });
})(jQuery);