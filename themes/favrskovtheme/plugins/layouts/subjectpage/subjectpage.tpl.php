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
 *   - $content['header']: header of page;
 *   - $content['wide_image']: widescreen presentation image;
 *   - $content['image_content']: content, placed on image;
 *   - $content['menu_items']: links for navigation;
 *   - $content['news']: latest news;
 *   - $content['footer']: footer of page.
 */
?>

<div class="panel-subject" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['header']): ?>
      <?php print $content['header']; ?>
  <?php endif; ?>

  <main id="main-wrapper" class="main-wrapper group" role="main">
    <section id="main-content" class="content-container" role="region">

      <?php if ($content['top_region']): ?>
        <?php print $content['top_region']; ?>
      <?php endif; ?>

      <section class="presentation" role="presentation">
        <?php if ($content['wide_image']): ?>
          <?php print $content['wide_image']; ?>
        <?php endif; ?>

        <?php if ($content['image_content']): ?>
          <?php if ($renderer->prepared['regions']['image_content']['pids']): ?>
            <?php $class = 'information'; ?>
          <?php else: ?>
            <?php $class = 'information-empty'; ?>
          <?php endif; ?>
          <div class="overlay">
            <div class="content">
              <?php print '<div class="' . $class . '">' . $content['image_content'] . '</div>'; ?>
            </div>
          </div>
        <?php endif; ?>
      </section>

      <?php if ($content['menu_items']): ?>
        <nav class="menuitems content group" role="navigation">
          <?php print $content['menu_items']; ?>
        </nav>
      <?php endif; ?>

      <?php if ($content['first_middle_region']): ?>
        <?php print $content['first_middle_region']; ?>
      <?php endif; ?>

      <?php if ($content['second_middle_region']): ?>
        <?php print $content['second_middle_region']; ?>
      <?php endif; ?>

      <?php if ($content['news']): ?>
        <section class="news" role="region">
          <?php print $content['news']; ?>
        </section>
      <?php endif; ?>

    </section>
  </main>

  <?php if ($content['footer']): ?>
      <?php print $content['footer']; ?>
  <?php endif; ?>
</div>

