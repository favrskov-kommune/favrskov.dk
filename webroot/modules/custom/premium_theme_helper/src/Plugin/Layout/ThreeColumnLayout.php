<?php

namespace Drupal\premium_theme_helper\Plugin\Layout;

/**
 * Three column layout.
 *
 * @package Drupal\premium_theme_helper\Plugin\Layout
 */
class ThreeColumnLayout extends BaseLayout {

  /**
   * {@inheritdoc}
   */
  protected function getWidthOptions(): array {
    return [
      '33-33-33' => '33%/33%/33%',
    ];
  }

}
