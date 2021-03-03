<?php

/**
 * @file
 * Default theme implementation for the full search form.
 *
 * Available variables:
 *
 * - variables['form'] : the form elements array, pre-render
 * - variables['search_form']['hidden'] : hidden form elements collapsed + rendered
 * - variables['search_form'] : non-hidden form elements rendered and keyed by original form keys
 * - variables['search_form_complete'] : the entire form collapsed and rendered.
 *
 * @see template_preprocess_cludo_search_search_form()
 */
?>
<?php print drupal_render($search_form); ?>
<?php print drupal_render($cludo_search_search_form); ?>
<div class="cludo-search-form">
  <?php print $search_form_complete; ?>
</div>
<div id="cludo-search-results">
  <div class="cludo-r">
    <div class="cludo-c-12">
      <div class="search-result-count"></div>
      <div class="search-did-you-mean"></div>
      <div class="search-results"></div>
    </div>
  </div>
</div>
