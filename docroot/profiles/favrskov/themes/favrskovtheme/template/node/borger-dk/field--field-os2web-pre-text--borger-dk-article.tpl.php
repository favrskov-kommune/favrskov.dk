<?php
if (!empty($items[0]['#markup'])) {
  print '<div>' . render($items) . '</div>';
}
