<?php
  // Added minimap.js only to article and news pages.
  if ($node && (in_array($node->type, ['article', 'news']))) {
    $minimap = [
      '#type' => 'markup',
      '#markup' => "<script type='text/javascript' src='https://webkort.favrskov.dk/clientapi/minimap2/2.4.x/minimap.js' charset='windows-1252'></script>",
    ];
    drupal_add_html_head($minimap, 'minimap');
  }
?>

<?php print render($page['content']); ?>
