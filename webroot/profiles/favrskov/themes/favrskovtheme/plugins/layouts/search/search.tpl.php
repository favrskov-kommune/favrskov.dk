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

<div class="search" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['header']): ?>
      <?php print $content['header']; ?>
  <?php endif; ?>

  <main id="main-wrapper" class="main-wrapper group">
    <div id="main-content" class="content-container">

      <div class="content clearfix">

        <?php if ($content['results']): ?>
          <section id="found" class="found">
            <?php print $content['results']; ?>
          </section>
        <?php endif; ?>


        <?php if ($content['sidebar']): ?>

          <aside id="search-filters" class="search-filters">
            <a data-target=".search-filters" data-toggle="collapse" class="btn-filters"> Toggle filters </a>
            <div class="filter-results">
              <?php print $content['sidebar']; ?>
            </div>
          </aside>
          <?php endif; ?>
      </div>

    </div>
  </main>

  <?php if ($content['footer']): ?>
    <?php print $content['footer']; ?>
  <?php endif; ?>
</div>

