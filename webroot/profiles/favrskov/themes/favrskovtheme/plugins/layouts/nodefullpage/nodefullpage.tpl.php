<?php
/**
 * @file
 * Template for a one column panel layout.
 *
 * This template provides a one column panel display layout, with
 * additional areas for the top and the bottom.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['header']: The site header contain header minipanel.
 *   - $content['node-content']: Content contain the main part of node.
 *   - $content['first-bottom-reg']:  Content bellow the main content.
 *   - $content['second-bottom-reg']: Content bellow the main content.
 *   - $content['third-bottom-reg']:  Content bellow the main content.
 *   - $content['footer']: The site footer, contain footer minipanel.
 */
?>

<div class="panel-onecolumn-nodes" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['header']): ?>
      <?php print $content['header']; ?>
  <?php endif; ?>

  <main id="main-wrapper" class="main-wrapper group clearfix">
    <section id="main-content" class="content-container">
      <div class="content">
        <section id="node-content" class="node-content">
          <?php if ($content['node-content']): ?>
            <?php print $content['node-content']; ?>
          <?php endif; ?>
        </section>
        <?php if ($content['first-bottom-reg']): ?>
          <?php print $content['first-bottom-reg']; ?>
        <?php endif; ?>
        <?php if ($content['second-bottom-reg']): ?>
          <?php print $content['second-bottom-reg']; ?>
        <?php endif; ?>

        <?php if ($content['third-bottom-reg']): ?>
          <?php print $content['third-bottom-reg']; ?>
        <?php endif; ?>
      </div>
    </section>
  </main>

  <?php if ($content['footer']): ?>
    <?php print $content['footer']; ?>
  <?php endif; ?>
</div>

