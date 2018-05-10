<?php
if (!empty($items[0]['#markup'])) {
  print '<div class="legislation">' . render($items) . '</div>';
}
