<?php

/**
 * @file
 * Template to display a list of rows and add switcher if enabled.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * - $switcher : Indicates the switcher status. Either TRUE of FALSE
 * @ingroup views_templates
 */
?>
  <div class="slide-description">
    <?php foreach ($rows as $id => $row): ?>
      <h2 class="title-slide slide-<?php print $id ?> <?php if ($id == 0) {
        print "active";
      } ?>">
        <?php print($view->result[$id]->field_field_description[0]['rendered']['#markup']) ?>
      </h2>
    <?php endforeach; ?>
  </div>
<?php print $wrapper_prefix; ?>
<?php if (!empty($title)) : ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php if (!empty($switcher)) : ?>
  <div class="switch">
    <a href="#grid" data-viewstyle="grid" class="grid active">Grid</a>
    <a href="#list" data-viewstyle="list" class="list">List</a>
  </div>
<?php endif; ?>



<?php print $list_type_prefix; ?>

<?php foreach ($rows as $id => $row): ?>
  <li class="<?php print $classes_array[$id]; ?>"><?php print $row; ?></li>
<?php endforeach; ?>

<?php print $list_type_suffix; ?>
<?php print $wrapper_suffix; ?>