<?php
unset($content['field_faq']['#prefix']);
unset($content['field_faq']['#suffix']);
?>
  <header>
    <?php
    $title = !empty($content['field_displayed_title'][0]['#markup']) ? $content['field_displayed_title'][0]['#markup'] : t('FAQ');
    print "<h2>" . $title . "</h2>";
    ?>
  </header>
<?php print render($content['field_faq']); ?>
