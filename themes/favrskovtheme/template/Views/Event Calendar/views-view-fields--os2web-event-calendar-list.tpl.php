<?php print $fields['view_node']->content; ?>
<article role="article">
  <header>
    <div class="colored" style="color:<?php print $fields['field_os2web_ec_color']->content; ?>">
      <div class="date">
        <?php print $fields['field_os2web_ec_date']->content; ?>
      </div>

      <div class="category">
        <?php print $fields['field_os2web_ec_tax_category']->content; ?>
      </div>
    </div>
    <h1>  <?php print $fields['title']->raw ?> </h1>
  </header>
  <p>
    <?php print $fields['field_os2web_ec_teaser']->content; ?>
  </p>
  <footer>
    <p>
      <?php print $fields['field_os2web_ec_date_1']->content; ?>
    </p>

    <p>
      <?php print $fields['field_os2web_ec_location_name']->content; ?>
    </p>

    <p>
      <?php print $fields['views_ifempty']->content; ?>
    </p>

  </footer>
</article>