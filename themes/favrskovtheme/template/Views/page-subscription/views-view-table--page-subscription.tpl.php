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

<?php if (!empty($title)) : ?>
  <?php print "*|INTERESTED:$title|*"; ?>
<?php endif; ?>
<table align="center" style="width:666px; background:#f0f0f0; margin:0 auto; border:0; border-collapse:collapse; font-family:Trebuchet MS, Arial, Helvetica, sans-serif;">
  <tbody>
    <?php if (!empty($title)) : ?>
      <tr class="pad_null" style="line-height:120%;">
        <td style="vertical-align:middle; padding:50px 0 50px 0;" class="pad_null">
          <h2 style="margin:0; color:#666; font-size:22px; font-weight:bold; font-family:Trebuchet MS, Arial, Helvetica, sans-serif;">
            <?php print preg_replace('/(.*:)(\s)*/', '$2', $title); ?>
          </h2>
        </td>
      </tr>
    <?php endif; ?>
    <?php $index = 0; ?>
    <?php foreach ($rows as $row): ?>
      <?php if($index % 2 == 0) : ?>
        <tr class="pad_null">
          <td style="vertical-align:top; width:316px; padding-bottom: 16px;" class="pad_null">
      <?php else: ?>
          <td style="vertical-align:top; width:316px; padding-bottom: 16px; border-left:23px solid #f0f0f0;" class="pad_null">
      <?php endif; ?>
      <?php foreach ($row as $field => $content): ?>
        <?php print $content; ?>
      <?php endforeach; ?>
      </td>
      <?php if(($index % 2 != 0) || ($index == array_pop(array_keys($rows)))) { print '</tr>'; } ?>
      <?php $index++; ?>
    <?php endforeach; ?>
  </tbody>
</table>
<?php if (!empty($title)) : ?>
  <?php print '*|END:INTERESTED|*'; ?>
<?php endif; ?>
