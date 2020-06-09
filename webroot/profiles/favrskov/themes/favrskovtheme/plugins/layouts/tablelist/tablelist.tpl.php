<?php
/**
 * @file
 * Template for a one column panel layout. For all pages which contain content
 * with table inside
 *
 * This template provides a two column panel display layout, with
 * additional areas for the top and the bottom.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['header']: Site header, contain header minipanel
 *   - $content['top-full-section']:   Content which use full width of the page
 *   - $content['middle-full-section']:   Content which use full width of the page
 *   - $content['bottom-full-section']:   Content which use full width of the page
 *   - $content['footer']: Site footer, contain footer minipanel
 */
?>

<div class="panel-list table-list" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['header']): ?>
      <?php print $content['header']; ?>
  <?php endif; ?>

  <main id="main-wrapper" class="main-wrapper group">
    <section id="main-content" class="content-container ">

      <?php if ($content['top-full-section']): ?>
        <section class="front-slider">
          <?php print $content['top-full-section']; ?>
        </section>
      <?php endif; ?>

      <?php if ($content['table-list']): ?>
      <div class="content">
        <section id="table-content" class="table-content">
          <?php print $content['table-list']; ?>
        </section>
      </div>
      <?php endif; ?>

      <?php if ($content['middle-full-section']): ?>
        <?php print $content['middle-full-section']; ?>
      <?php endif; ?>

      <?php if ($content['bottom-full-section']): ?>
        <?php print $content['bottom-full-section']; ?>
      <?php endif; ?>

    </section>
  </main>

  <?php if ($content['footer']): ?>
    <?php print $content['footer']; ?>
  <?php endif; ?>
</div>

