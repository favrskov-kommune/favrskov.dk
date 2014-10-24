<?php
foreach ($items as $key => $value) {
  unset($items[$key]['#theme_wrappers']);
  unset($items[$key]['#attributes']);
}

print "<ul>" . render($items) . "</ul>";
