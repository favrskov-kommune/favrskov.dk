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
<div class="panel-frontpage" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <?php if ($content['header']): ?>
      <?php print $content['header']; ?>
  <?php endif; ?>

  <main id="main-wrapper" class="main-wrapper group" role="main">
    <section id="main-content" class="content-container">

    <?php if ($content['region-two']): ?>
      <?php print $content['region-two']; ?>
    <?php endif; ?>

    <?php if ($content['region-three']): ?>
      <section id="slider" class="front-slider">
        <?php print $content['region-three']; ?>
      </section>
    <?php endif; ?>

    <?php if ($content['region-four']): ?>
      <?php print $content['region-four']; ?>
    <?php endif; ?>

    <?php if ($content['region-five']): ?>
      <?php print $content['region-five']; ?>
    <?php endif; ?>

    <?php if ($content['region-six']): ?>
      <?php print $content['region-six']; ?>
    <?php endif; ?>

    <?php if ($content['region-seven']): ?>
      <?php print $content['region-seven']; ?>
    <?php endif; ?>

  </section>
  </main>


  <?php if ($content['region-eight']): ?>
    <?php print $content['region-eight']; ?>
  <?php endif; ?>
</div>
