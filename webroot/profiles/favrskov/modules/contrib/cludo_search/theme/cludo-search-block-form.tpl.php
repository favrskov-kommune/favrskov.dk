<?php

/**
 * @file
 * Default theme implementation for the search block form.
 *
 * Available variables:
 *
 * - variables['form'] : the form elements array, pre-render
 * - variables['block_search_form']['hidden'] : hidden form elements collapsed + rendered
 * - variables['block_serach_form'] : form elements rendered and keyed by original form keys
 * - variables['block_search_form_complete'] : the entire form collapsed and rendered.
 *
 * @see template_preprocess_cludo_search_block_form()
 */
?>
<div class="cludo-search-form" role="search">
  <?php print $block_search_form_complete; ?>
</div>
