
<?php if ( (isset($items[0]['#markup']) && $items[0]['#markup'] != '<a href="mailto:"></a>') || isset($items[0]['#element'])): ?>
  <div class="data">
    <h2>
      <?php if (!$label_hidden) print $label ?>
    </h2>

    <p>
      <?php print render($items); ?>
    </p>
  </div>
<?php endif ?>