<?php

/**
 * @file
 * Default theme implementation for displaying a single search result.
 *
 * This template renders a single search result and is collected into
 * cludo-applinace-results.tpl.php. This and the parent template are
 * dependent on one another sharing the markup for results listings.
 *
 * Result items that are files (pdf and whatnot) can be decorated with file
 * icons as we use theme_file_icon in template_preprocess_cludo_search_result().
 * Copy this template to your theme directory and use code like the following to
 * display an icon for each result if it has an iconable mime type:
 * @code
 *        <?php print (isset($mime['icon'])) ? $mime['icon'] : ''; ?>
 * @endcode
 *
 * Metadata for each result is also available to be themed, but is not part of
 * the default implementation here. Have a look at $variables['meta'] to see
 * what data you have available.
 *
 * @see template_preprocess_cludo_search_result()
 * @see cludo-search-results.tpl.php
 */
?>
<?php print drupal_render($search_form); ?>
<?php print drupal_render($cludo_search_search_form); ?>
<div class="cludo-search-form">
  <?php print $search_form_complete; ?>
</div>
<!-- Cludo search results starts -->
<div id="cludo-search-results">
  <div class="cludo-r">
    <div class="cludo-c-3">
      <div class="search-filters"></div>
    </div>
    <div class="cludo-c-9">
      <div class="search-result-count"></div>
      <div class="search-did-you-mean"></div>
      <div class="search-results"></div>
    </div>
  </div>
</div>
<!-- Cludo search results ends -->
