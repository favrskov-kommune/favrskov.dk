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

<div class="panel-nodes" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['header']): ?>
      <?php print $content['header']; ?>
  <?php endif; ?>

  <main id="main-wrapper" class="main-wrapper group clearfix" role="main">
    <section id="main-content" class="content-container">

      <div class="content">

        <section id="node-content" class="node-content">
          <?php if ($content['node-content']): ?>
            <?php print $content['node-content']; ?>
          <?php endif; ?>
        </section>

        <aside class="sidebar">
          <?php if ($content['node-sidebar']): ?>
            <?php print $content['node-sidebar']; ?>
          <?php endif; ?>
        </aside>

      </div>

    </section>
  </main>

  <?php if ($content['footer']): ?>
    <?php print $content['footer']; ?>
  <?php endif; ?>
</div>

