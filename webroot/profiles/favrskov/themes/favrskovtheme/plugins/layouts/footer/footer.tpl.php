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
<footer id="footer" class="footer">
  <div id="footer-wrapper" class="footer-wrapper group" style="background-color: <?php print "#$background"; ?>;">
    <div class="content">
      <?php if (!empty($content['header'])): ?>
        <div class="logo footer-block">
          <?php print $content['header']; ?>
        </div>
      <?php endif; ?>

      <?php if (!empty($content['social'])): ?>
        <div class="social footer-block" aria-label="kontaktoplysninger">
          <?php print $content['social']; ?>
        </div>
      <?php endif; ?>

      <?php if (!empty($content['contacts'])): ?>
        <div class="contacts footer-block" aria-label="åbningstider">
          <?php print $content['contacts']; ?>
        </div>
      <?php endif; ?>

      <?php if (!empty($content['navigation'])): ?>
        <nav class="nav footer-block" aria-label="nyttige links">
          <?php print $content['navigation']; ?>
        </nav>
      <?php endif; ?>
    </div>
  </div>
</footer>
