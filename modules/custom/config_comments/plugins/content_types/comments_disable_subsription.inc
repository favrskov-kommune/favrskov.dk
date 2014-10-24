<?php

/**
 * @file
 * Comments unsubscribe pane.
 */

/**
 * Callback function to supply a list of content types.
 */
$plugin = array(
  'title' => t('Disable comments subscription'),
  'single' => TRUE,
  'render callback' => 'comments_disable_subsription_render',
  'category' => t('ProPeople'),
);

/**
 * Run-time rendering of the pane.
 */
function comments_disable_subsription_render($subtype, $conf, $args, $context) {
  module_load_include('inc', 'comment_notify', 'comment_notify');
  $block = new stdClass();
  $block->content = '<div class="unsubscribe">';

  if (comment_notify_unsubscribe_by_hash($args[0])) {
    $block->content .= t('Your comment follow-up notification for this post was disabled. Thanks.');
  }
  else {
    $block->content .= t('Sorry, there was a problem unsubscribing from notifications.');
  }

  $block->content .= '</div>';
  return $block;
}
