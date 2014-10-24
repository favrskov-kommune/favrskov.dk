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
<?php print $list_type_prefix; ?>

<?php foreach ($rows as $id => $row): ?>
  <li class="<?php print $classes_array[$id]; ?>"><?php print $row; ?></li>
<?php endforeach; ?>
<?php print $list_type_suffix; ?>

<div class="pagination"></div>
<div class="node-slider-nav">
  <a href="#" class="arrow-left">Previuos slide</a>
  <a href="#" class="arrow-right"> Next slide</a>
</div>
<?php print $wrapper_suffix; ?>
