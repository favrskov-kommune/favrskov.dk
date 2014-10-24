<?php

/**
 * @file
 * Template to display a view as a table.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $header: An array of header labels keyed by field id.
 * - $caption: The caption for this table. May be empty.
 * - $header_classes: An array of header classes keyed by field id.
 * - $fields: An array of CSS IDs to use for each field id.
 * - $classes: A class or classes to apply to the table, based on settings.
 * - $row_classes: An array of classes to apply to each row, indexed by row
 *   number. This matches the index in $rows.
 * - $rows: An array of row items. Each row is an array of content.
 *   $rows are keyed by row number, fields within rows are keyed by field ID.
 * - $field_classes: An array of classes to apply to each field, indexed by
 *   field id, then row number. This matches the index in $rows.
 * @ingroup views_templates
 */
?>

<table align="center" style="width:666px; background:#f0f0f0; margin:0 auto; border:0; border-collapse:collapse; font-family:Trebuchet MS, Arial, Helvetica, sans-serif;">
  <tbody>
  <?php foreach ($rows as $row_count => $row): ?>
    <?php if($row_count % 2 == 0) : ?>
  <tr class="pad_null">
    <td style="vertical-align:top; width:316px;" class="pad_null">
      <?php else: ?>
    <td style="vertical-align:top; width:316px; border-left:23px solid #f0f0f0;" class="pad_null">
      <?php endif; ?>
      <?php foreach ($row as $field => $content): ?>
          <?php print $content; ?>
      <?php endforeach; ?>
    </td>
    <?php if(($row_count % 2 != 0) || ($row_count == array_pop(array_keys($rows)))) { print '</tr>'; } ?>
  <?php endforeach; ?>
  </tbody>
</table>