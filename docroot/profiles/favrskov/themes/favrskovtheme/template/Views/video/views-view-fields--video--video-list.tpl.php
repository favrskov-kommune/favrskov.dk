<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>

<article role="article">
  <div class="video-thumb">
    <?php if(!empty($fields['field_embed_video']->content)): ?>
      <?php print $fields['field_embed_video']->content; ?>
    <?php endif; ?>
  </div>
 <header>
  <div class="category">
    <?php if(!empty($fields['field_video_category']->content)): ?>
      <?php print $fields['field_video_category']->content; ?>
    <?php endif; ?>
  </div>
  <h1>
    <?php if(!empty($fields['title']->content)): ?>
      <?php print $fields['title']->content; ?>
    <?php endif; ?>
  </h1>
 </header>

  <p>
    <?php if(!empty($fields['field_video_description']->content)): ?>
      <?php print $fields['field_video_description']->content; ?>
    <?php endif; ?>
  </p>
  <footer>
    <?php if(!empty($fields['nothing']->content)): ?>
      <?php print $fields['nothing']->content; ?>
    <?php endif; ?>
    <?php if(!empty($fields['created']->content)): ?>
      <?php print $fields['created']->content; ?>
    <?php endif; ?>
  </footer>
</article>
