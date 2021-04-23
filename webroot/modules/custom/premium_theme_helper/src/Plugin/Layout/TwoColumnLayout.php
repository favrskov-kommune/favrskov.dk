<?php

namespace Drupal\premium_theme_helper\Plugin\Layout;

/**
 * Two column layout.
 *
 * @package Drupal\premium_theme_helper\Plugin\Layout
 */
class TwoColumnLayout extends BaseLayout {

  /**
   * {@inheritdoc}
   */
  protected function getWidthOptions(): array {
    return [
      '50-50' => '50%/50%',
      '33-67' => '33%/67%',
      '67-33' => '67%/33%',
    ];
  }

}
