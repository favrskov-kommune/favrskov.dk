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
<table align="center" style="width:666px; margin:0 auto; background:#f0f0f0; border:0; border-collapse:collapse; font-family:Trebuchet MS, Arial, Helvetica, sans-serif;">
  <tbody>
    <?php if (!empty($title)) : ?>
      <tr class="pad_null" style="line-height:120%;">
        <td style="vertical-align:middle; padding-top:50px;" class="pad_null">
          <h2 style="margin:0; color:#666; font-size:22px; font-weight:bold; font-family:Trebuchet MS, Arial, Helvetica, sans-serif;">
            <?php print preg_replace('/(.*:)(\s)*/', '$2', $title); ?>
          </h2>
        </td>
      </tr>
    <?php endif; ?>
    <tr class="pad_null">
      <?php $index = 0; ?>
      <?php $last = count($rows) - 1; ?>
      <?php foreach ($rows as $row): ?>
        <?php if($index == 0): ?>
          <td class="pad_null" style="width:318px; vertical-align:top;">
            <ul class="list" style="margin:0; padding:0; list-style:none; border-top:40px solid #f0f0f0;">
        <?php elseif(($index == (int) ($last / 2 + 1))): ?>
          <td class="pad_null" style="width:318px; vertical-align:top; border-left:30px solid #f0f0f0;">
            <ul class="list" style="margin:0; padding:0; list-style:none; border-top:40px solid #f0f0f0;">
        <?php endif; ?>
        <?php foreach ($row as $field => $content): ?>
          <?php print $content; ?>
        <?php endforeach; ?>
        <?php if($index == $last || ($index == (int) ($last / 2))): ?>
            </ul>
          </td>
        <?php endif; ?>
        <?php $index++; ?>
      <?php endforeach; ?>
    </tr>
  </tbody>
</table>
<?php if (!empty($title)) : ?>
  <?php print '*|END:INTERESTED|*'; ?>
<?php endif; ?>