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
// Implode parameters and output as RGBa
$background = theme_get_setting('favrskovtheme_header_background') ? theme_get_setting('favrskovtheme_header_background') : array(88, 100, 100);
$background[] = theme_get_setting('favrskovtheme_header_opacity') ? theme_get_setting('favrskovtheme_header_opacity') : 1;
$background = implode(', ', $background);
?>
<header id="header" class="header" role="banner" style="background: rgba(<?php print "$background"; ?>);">
  <section class="header-content">

    <div class="nav-bar">
      <a class="btn-navbar" data-toggle="collapse" data-target=".nav-collapse">
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </a>
    </div>


    <?php if (!empty($content['header'])): ?>
      <section class="logo inline-block-header">
        <?php print $content['header']; ?>
      </section>
    <?php endif; ?>


      <?php if (!empty($content['navigation'])): ?>
        <nav class="nav inline-block-header">
          <?php print $content['navigation']; ?>
        </nav>
      <?php endif; ?>

      <section class="search-contact inline-block-header">
          <?php if (!empty($content['search'])): ?>
            <div class="search">
              <?php print $content['search']; ?>
            </div>
          <?php endif; ?>
      </section>

  </section>

      <?php if (!empty($content['system'])): ?>
        <div class="drupal-system group">
          <?php print $content['system']; ?>
        </div>
      <?php endif; ?>
</header>



