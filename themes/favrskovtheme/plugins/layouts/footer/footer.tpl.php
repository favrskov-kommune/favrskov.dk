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
$background = theme_get_setting('favrskovtheme_footer_background') ? theme_get_setting('favrskovtheme_footer_background') : '586464';
?>
<footer id="footer" class="footer" role="contentinfo">
  <div id="footer-wrapper" class="footer-wrapper group" style="background-color: <?php print "#$background"; ?>;">
    <div class="content">
      <?php if (!empty($content['header'])): ?>
        <section class="logo footer-block" role="region">
          <?php print $content['header']; ?>
        </section>
      <?php endif; ?>

      <?php if (!empty($content['social'])): ?>
        <section class="social footer-block" role="region">
          <?php print $content['social']; ?>
        </section>
      <?php endif; ?>

      <?php if (!empty($content['contacts'])): ?>
        <section class="contacts footer-block" role="region">
          <?php print $content['contacts']; ?>
        </section>
      <?php endif; ?>

      <?php if (!empty($content['navigation'])): ?>
        <nav class="nav footer-block" role="navigation">
          <?php print $content['navigation']; ?>
        </nav>
      <?php endif; ?>
    </div>
  </div>
</footer>
