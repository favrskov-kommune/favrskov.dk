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
<?php if(!empty($fields['path']->content)):?>
  <?php print $fields['path']->content; ?>
<?php endif;?>
<article class="matrix-content" role="article">
  <header>
    <?php if(!empty($fields['field_date']->content)):?>
      <div class="date">
        <?php print $fields['field_date']->content; ?>
      </div>
    <?php else: ?>
      <div class="date">
        <?php $day = t(format_date($fields['created']->raw, 'custom', 'd')); ?>
        <?php $month = t(format_date($fields['created']->raw, 'custom', 'M')); ?>
        <?php $iso = format_date($fields['created']->raw, 'custom', 'Y-m-d\TH:i:sO'); ?>
        <?php $date = '<time datetime="' . $iso . '"><span class="day">' . $day . '</span><span class="month">' . $month . '</span></time>'; ?>
        <?php if(!empty($fields['path']->content)):?>
          <?php print l($date, $fields['path']->handler->original_value, array('html' => TRUE)) ?>
        <?php endif;?>
      </div>
    <?php endif; ?>
    <?php if(!empty($fields['field_taxonomy_subject_area']->content)):?>
      <div class="category">
        <?php print $fields['field_taxonomy_subject_area']->content; ?>
      </div>
    <?php endif; ?>
  </header>

  <section class="element-content">
    <?php if(!empty($fields['title']->content)):?>
      <h1>
        <?php print $fields['title']->content; ?>
      </h1>
    <?php endif; ?>
    <?php if(!empty($fields['field_teaser']->content)):?>
      <div class="element-teaser">
        <?php print $fields['field_teaser']->content; ?>
      </div>
    <?php endif; ?>

    <footer>
        <?php if(!empty($fields['views_ifempty_1']->content)):?>
          <div class="pub-date">
            <?php print $fields['views_ifempty_1']->content; ?>
          </div>
        <?php endif; ?>
    </footer>
  </section>
</article>
