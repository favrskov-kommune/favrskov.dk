<?php
if (!empty($items[0]['#markup'])) {
  print '<div class="byline">' . render($items) . '</div>';
}
