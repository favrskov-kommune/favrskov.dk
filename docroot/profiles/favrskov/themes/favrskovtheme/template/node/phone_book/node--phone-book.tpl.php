<?php
/**
 * @file
 * Template for Phone Book Content Type.
 */
?>

<?php $fields = array(
  'field_phone_book_address',
  'field_phone_book_phone',
  'field_phone_book_cell_phone',
  'field_phone_book_email',
  'field_phone_book_map_link',
  'field_phone_book_stuff',
);

// Throw node url to formatter.
$content['field_phone_book_address'][0]['name_block']['first_name']['#view_mode'] = $view_mode;
$content['field_phone_book_address'][0]['name_block']['last_name']['#view_mode'] = $view_mode;
?>
<?php print '<div class="contact-item group">'; ?>
<div class='contact-info'>
  <?php foreach ($fields as $field): ?>

    <?php if (isset($content[$field])): ?>
      <?php print render($content[$field]) ?>
    <?php endif ?>
  <?php endforeach ?>
</div>


<?php if (isset($content['field_opening_hours'])): ?>

  <?php print render($content['field_opening_hours']) ?>

<?php endif ?>

</div>
