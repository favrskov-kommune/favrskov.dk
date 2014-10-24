<?php if (!empty($element['#items'][0]['value'])): ?>
  <div class='telephone'><span class='label'>
    <?php print t('Phn'); ?>
  </span>
    <?php print render($items); ?>
  </div>
<?php endif ?>


