(function($) {
  Drupal.behaviors.os2web_borger_dk_articles = {
    attach: function(context) {
      $("div.mArticle").hide();
      $(".microArticle h2.mArticle").click(function() {
        var myid = $(this).attr('id');
        $("div." + myid).toggle("500");
        // Use class instead of background style, so theme can use it
        $(this).toggleClass("expanded");
      });
    }
  }
})(jQuery);