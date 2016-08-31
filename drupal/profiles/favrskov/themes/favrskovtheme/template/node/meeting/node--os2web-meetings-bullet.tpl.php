<li>
  <h2 class="meetnig-title">
    <?php
    $value = array_pop($field_os2web_meetings_bul_closed);
    if ($value[0]['value'] == 0) {
      $postfix = "(" . t('Closed') . ")";
    }
    else {
      $postfix = '';
    }?>
    <?php print $title . $postfix; ?>
  </h2>

  <section class="meeting-body node-body">
    <?php print render($content['field_os2web_meetings_enclosures']) ?>
    <?php print render($content['field_os2web_meetings_attach']) ?>
  </section>
</li>
