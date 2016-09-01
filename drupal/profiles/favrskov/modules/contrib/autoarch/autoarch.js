(function($) {

  Drupal.behaviors.autoarch = {
    attach: function (context, settings) {
     if($("#edit-archive-option-manual-wrapper label input").attr("checked")) {
        $("#autoarch-date-picker").hide();
      }
      else if($("#edit-archive-option-automatic-wrapper label input").attr("checked")) {
        $("#autoarch-state-select").hide();
      }
      $("#edit-archive-option-automatic-wrapper label").click(function (event) {
        $("#autoarch-date-picker").show();
        $("#autoarch-state-select").hide();
      });
      $("#edit-archive-option-manual-wrapper label").click(function (event) {
        $("#autoarch-date-picker").hide();
        $("#autoarch-state-select").show();
      });
    }
  };
})(jQuery);
