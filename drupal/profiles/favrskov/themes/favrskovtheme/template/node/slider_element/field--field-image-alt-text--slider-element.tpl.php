<div class="banner-alt-text">
  <?php if (!$label_hidden): ?>
    <label class="field-label"><?php print $label ?>:</label>
  <?php endif; ?>
  <?php if(!empty($items)): ?>
   <span><?php print render($items);?> </span>
  <?php endif; ?>
</div>
