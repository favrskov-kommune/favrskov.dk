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

<?php print $wrapper_prefix; ?>
<?php if (!empty($title)) : ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php if (!empty($switcher)) :?>
  <div class="switch">
    <a href="#grid" data-viewstyle="grid" class="grid active">Grid</a>
    <a href="#list" data-viewstyle="list" class="list">List</a>
  </div>
<?php endif; ?>
    <a href="#" class="arrow-left nav-btn">Previuos slide</a>
    <a href="#" class="arrow-right nav-btn"> Next slide</a>
<?php print $list_type_prefix; ?>
<?php foreach ($rows as $id => $row): ?>
  <li class="<?php print $classes_array[$id]; ?>"><?php print $row; ?></li>
<?php endforeach; ?>
<?php print $list_type_suffix; ?>

<div class="content">
  <div class="pagination"></div>
</div>
<?php print $wrapper_suffix; ?>
