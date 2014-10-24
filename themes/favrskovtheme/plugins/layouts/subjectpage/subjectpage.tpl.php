<?php
/**
 * @file
 * Template for a one column panel layout.
 *
 * This template provides a one column panel display layout, with
 * additional areas for the header and the footer.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['header']: Region which contain site header.
 *   - $content['popular_img']: Contain image from the node.
 *   - $content['popular']: Contain description of the popular image
 *   - $content['teasers']: Contain short teasers of the nodes from main menu
 *   - $content['news']:    Contain news list which outputted from the view - News
 *   - $content['footer']: Region which contain site footer.
 */
?>

<div class="panel-subject" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if (!empty($content['header'])): ?>
      <?php print $content['header']; ?>
  <?php endif; ?>

  <main id="main-wrapper" class="main-wrapper group" role="main">
    <section id="main-content" class="content-container">

      <section id="popular" class="popular">
      <?php if (!empty($content['popular_img'])): ?>
        <?php print $content['popular_img']; ?>
      <?php endif; ?>

      <?php if (!empty($content['popular'])): ?>
        <div class="overlay">
          <div class="content">
            <div class="articles">
              <?php print $content['popular']; ?>
            </div>
          </div>
        </div>
      <?php endif; ?>
      </section>

      <?php if (!empty($content['teasers'])): ?>
        <?php print $content['teasers']; ?>
      <?php endif; ?>

      <?php if (!empty($content['first-middle-region'])): ?>
        <?php print $content['first-middle-region']; ?>
      <?php endif; ?>

      <?php if (!empty($content['second-middle-region'])): ?>
        <?php print $content['second-middle-region']; ?>
      <?php endif; ?>

      <?php if (!empty($content['third-middle-region'])): ?>
        <?php print $content['third-middle-region']; ?>
      <?php endif; ?>

      <?php if (!empty($content['news'])): ?>
        <?php print $content['news']; ?>
      <?php endif; ?>

    </section>
  </main>

  <?php if (!empty($content['footer'])): ?>
    <?php print $content['footer']; ?>
  <?php endif; ?>
</div>

