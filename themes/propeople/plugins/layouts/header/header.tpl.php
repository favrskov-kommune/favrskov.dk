<?php
/**
 * @file
 * Template for a 2 column panel layout.
 *
 * This template provides a two column panel display layout, with
 * additional areas for the top and the bottom.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['top']: Content in the top row.
 *   - $content['left']: Content in the left column.
 *   - $content['right']: Content in the right column.
 *   - $content['bottom']: Content in the bottom row.
 */
?>
<?php if (!empty($content['header'])): ?>
  <section class="logo">
    <?php print $content['header']; ?>
  </section>
<?php endif; ?>

<div class="nav-search group">
  <?php if (!empty($content['navigation'])): ?>
    <nav class="nav">
      <?php print $content['navigation']; ?>
    </nav>
  <?php endif; ?>

  <?php if (!empty($content['search'])): ?>
    <section class="search">
      <?php print $content['search']; ?>
    </section>
  <?php endif; ?>
</div>

<?php if (!empty($content['system'])): ?>
  <section class="drupal-system group">
    <?php print $content['system']; ?>
  </section>
<?php endif; ?>

