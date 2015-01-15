<?php

/**
 * Plugin provide visibility rule for displaying content only on drafts page.
 */
$plugin = array(
  'title' => t('Node: current revision of a node is draft'),
  'description' => t('Based on workbench moderation module determine whether revision of this node is draft'),
  'required context' => array(new ctools_context_required(t('Node'), 'node')),
  'callback' => 'panel_article_page_node_revision_state_callback',
  'summary' => 'panel_article_page_node_revision_state_summary',
);

/**
 * Provide a summary description.
 */
function panel_article_page_node_revision_state_summary($conf, $context) {
  return t('Current revision of a node is "draft"');
}

/**
 * Check for access.
 */
function panel_article_page_node_revision_state_callback($conf, $context) {
  !empty($context[0]->data) ? $node = $context[0]->data : $node = NULL;
  $drafts_state_name = workbench_moderation_state_none();

  return !workbench_moderation_node_is_current($node) && arg(2) == $drafts_state_name;
}

