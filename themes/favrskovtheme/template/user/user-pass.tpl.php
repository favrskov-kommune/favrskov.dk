<?php
$messages = form_get_errors();
foreach ($messages as $message) {
  drupal_set_message($message, 'error');
}
print theme('status_messages');
?>
<?php print drupal_render_children($form);?>