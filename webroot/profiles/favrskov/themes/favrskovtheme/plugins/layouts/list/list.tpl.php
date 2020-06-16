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

<div class="panel-list" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['header']): ?>
      <?php print $content['header']; ?>
  <?php endif; ?>

  <main id="main-wrapper" class="main-wrapper group">
    <section id="main-content" class="content-container ">

      <div class="content">
        <section id="list-content" class="list-content">
          <div class="articles">
            <?php if ($content['blogs-list']): ?>
              <?php print $content['blogs-list']; ?>
            <?php endif; ?>
          </div>
        </section>

        <nav aria-label="sekundær navigation" class="list-sidebar">
          <?php if ($content['sidebar']): ?>
              <?php print $content['sidebar']; ?>
            <?php endif; ?>
        </nav>
      </div>
    </section>
  </main>

  <?php if ($content['footer']): ?>
    <?php print $content['footer']; ?>
  <?php endif; ?>
</div>

