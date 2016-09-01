<?php if (!empty($fields['field_external_link']->content)): ?>
  <?php print l($fields['field_image']->content, $fields['field_external_link']->content, array(
    'html' => TRUE,
    'attributes' => array('target' => $fields['field_external_link_1']->content)
  )) ?>
<?php else: ?>
  <?php print $fields['field_image']->content ?>
<?php endif ?>