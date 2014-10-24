<div class="slide-description">
  <?php if (!$label_hidden): ?>
    <label class="field-label"><?php print $label ?>:</label>
  <?php endif; ?>
  <?php if(!empty($items)): ?>
   <p><?php print render($items);?> </p>
  <?php endif; ?>
</div>
