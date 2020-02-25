<?php $is_description = !empty($fields['field_file_image_photographer']->content) || !empty($fields['views_ifempty']->content); ?>
<?php foreach ($fields as $id => $field): ?>
  <?php if (!empty($field->separator)): ?>
    <?php print $field->separator; ?>
  <?php endif; ?>

  <?php print $field->wrapper_prefix; ?>
  <?php print $field->label_html; ?>
  <?php print $field->content; ?>
  <?php print $field->wrapper_suffix; ?>

  <?php if (($id == "field_image_thumbnail") && $is_description): ?>
    <?php print '<div class="node-slide-description">'; ?>
  <?php endif;?>

  <?php if (($id == "views_ifempty") && $is_description): ?>
    <?php print '</div>'; ?>
  <?php endif;?>

<?php endforeach; ?>