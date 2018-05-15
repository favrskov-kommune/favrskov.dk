<?php

/**
 * @file
 * Overrides theme implementation for displaying a single search result.
 *
 */
?>
<?php ?>
<li class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <time datetime="<?php  print format_date($result['date'],'custom', 'Y-m-d')?>">
    <?php print format_date($result['date'],'custom', 'd.m.Y'); ?>
  </time>
  <?php print render($title_prefix); ?>
  <h3 class="title"<?php print $title_attributes; ?>>
    <?php print l($title, $result['node']->path)?>
  </h3>
  <?php print render($title_suffix); ?>
  <div class="search-snippet-info">
    <?php if ($snippet): ?>
      <p class="search-snippet"<?php print $content_attributes; ?>><?php print $snippet; ?></p>
    <?php endif; ?>
  </div>
  <div class="search-content-type">
    <?php print $result['type'];?>
  </div>
</li>
