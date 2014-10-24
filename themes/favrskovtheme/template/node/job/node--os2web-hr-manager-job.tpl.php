<?php
  print render($content['field_application_due']);
  print render($content['body']);
?>
<footer class="job-footer">
  <?php
  if (!isset($content['field_disable_apply_button']) || !$content['field_disable_apply_button']['#items'][0]['value']) {
    if (isset($content['field_alternative_app_url']) && $content['field_alternative_app_url']['#items'][0]['url']) {
      print render($content['field_alternative_app_url']);
    } else {
      print render($content['field_application_form_url']);
    }
  }
   ?>
</footer>