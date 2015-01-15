<?php

/**
 * Plugin provide visibility rule for displaying content only on drafts page.
 */
$plugin = array(
  'title' => t('Revisions content'),
  'description' => t('Display content only on revisions of node page'),
  'required context' => array(new ctools_context_required(t('Node'), 'node')),
  'callback' => 'panel_article_page_access_plugin_callback',
  'summary' => 'panel_article_page_access_plugin_summary',
);

/**
 * Provide a summary description based on selected settings.
 */
function panel_article_page_access_plugin_summary($conf, $context) {
    return t('Will display slider if current node state is "draft"');
}

/**
 * Check for access.
 */
function panel_article_page_access_plugin_callback($conf, $context) {
  $node = $context[0]->data;
  $drafts_state_name = workbench_moderation_state_none();

  return !workbench_moderation_node_is_current($node) && arg(2) == $drafts_state_name;
}

