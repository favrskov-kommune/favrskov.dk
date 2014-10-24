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
<div class="panel-errorspage errors-page" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <main id="main-wrapper" class="main-wrapper group" role="main">
    <section id="main-content" class="content-container">
      <div class="content">

        <div class="left-side">
        <?php if ($content['first-region']): ?>
          <div class="logo">
            <?php print $content['first-region']; ?>
          </div>
        <?php endif; ?>

        <?php if ($content['third-region']): ?>
          <div class="nav-search">
            <sction class="search">
              <?php print $content['third-region']; ?>
            </sction>
          </div>
        <?php endif; ?>

        </div>

        <?php if ($content['second-region']): ?>
          <div class="right-side">
            <?php print $content['second-region']; ?>
          </div>
        <?php endif; ?>
      </div>
  </section>
  </main>
</div>
