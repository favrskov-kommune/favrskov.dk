<?php if (isset($items[0])): ?>
  <?php print l(t('See more'), url($items[0]['#markup']), array('attributes' => array('target' => 'blank'))) ?>
<?php endif ?>