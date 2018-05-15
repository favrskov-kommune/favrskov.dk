<?php
if (!empty($items[0]['#markup'])) {
  print '<div class="shortlist">' . render($items) . '</div>';
}
