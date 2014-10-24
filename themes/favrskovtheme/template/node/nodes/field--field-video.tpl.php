<?php
$pos = strpos($items[0]['#markup'], 'jwplayer');
if (!($pos === false)) {
  drupal_add_js('http://jwpsrv.com/library/DOh4HO3vEeKL5CIACqoQEQ.js',array('type' => 'external', 'scope' => 'jwplayer', 'weight' => -100));
}
?>
<section class="video">
  <?php print render($items); ?>
</section>

