<?php
/**
 * @file
 * Linkit panel pages plugin.
 */

$plugin = array(
  'title' => t("Panel pages"),
  'description' => t('Enables Linkit to search for panel pages.'),
  'handler' => array(
      'class' => 'LinkitPanelPagesPlugin',
      'file' => 'linkt_panel_pages.class.php',
  ),
);