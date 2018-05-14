<?php
if (!empty($items[0]['#markup'])) {
  print '<div class="recommended">' . render($items) . '</div>';
}
