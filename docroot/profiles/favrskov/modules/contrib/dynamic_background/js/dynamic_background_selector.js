(function ($) {
  $(document).ready(function() {
    // Find all picture checkboxes and ensure that only one can be checked at
    // anytime.
    var pictures = $('.dynamic-background-picture .form-checkbox');
    // Add event listners
    for (var i = 0; pictures.length > i; i++) {
      var current = $(pictures[i]);
      current.click(function() {
        var checked = $('.dynamic-background-picture .form-checkbox:checked');
        for (var i = 0; checked.length > i; i++) {
          var cb = $(checked[i]);
          if (cb.attr('id') != $(this).attr('id')) {
            cb.attr('checked', false);
          }
        }
      });
    }
  });
})(jQuery);