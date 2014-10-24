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

<?php $last = array_pop(array_keys($rows)); ?>
<table align="center" style="width:666px; margin:0 auto; background:#fff; border:0; border-collapse:collapse; font-family:Trebuchet MS, Arial, Helvetica, sans-serif;">
  <tbody>
    <tr class="pad_null">
      <?php foreach ($rows as $row_count => $row): ?>
        <?php if($row_count == 0): ?>
          <td class="pad_null" style="width:318px; vertical-align:top;">
          <ul class="list" style="margin:0; padding:0; list-style:none; border-top:40px solid #fff;">
        <?php elseif(($row_count == (int) ($last / 2 + 1))): ?>
            <td class="pad_null" style="width:318px; vertical-align:top; border-left:30px solid #fff;">
            <ul class="list" style="margin:0; padding:0; list-style:none; border-top:40px solid #fff;">
        <?php endif; ?>
          <?php foreach ($row as $field => $content): ?>
            <?php print $content; ?>
          <?php endforeach; ?>
        <?php if($row_count == $last || ($row_count == (int) ($last / 2))): ?>
          </ul>
          </td>
        <?php endif; ?>
      <?php endforeach; ?>
    </tr>
  </tbody>
</table>