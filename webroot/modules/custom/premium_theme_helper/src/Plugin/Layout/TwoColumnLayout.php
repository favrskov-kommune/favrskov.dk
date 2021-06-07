<?php

namespace Drupal\premium_theme_helper\Plugin\Layout;

use Drupal\Component\Utility\Html;
use Drupal\Core\Form\FormStateInterface;

/**
 * Two column layout.
 *
 * @package Drupal\premium_theme_helper\Plugin\Layout
 */
class TwoColumnLayout extends BaseLayout {

  /**
   * {@inheritdoc}
   */
  public function buildConfigurationForm(array $form, FormStateInterface $form_state): array {
    $form = parent::buildConfigurationForm($form, $form_state);
    $form['section_id'] = [
      '#type' => 'textfield',
      '#title' => $this->t('Section ID'),
      '#default_value' => $this->configuration['section_id'],
      '#description' => $this->t('Should only contain lowercase letters, numbers and hyphens.')
    ];

    return $form;
  }

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

  /**
   * {@inheritdoc}
   */
  public function submitConfigurationForm(array &$form, FormStateInterface $form_state): void {
    parent::submitConfigurationForm($form, $form_state);
    $this->configuration['section_id'] = Html::getId($form_state->getValue('section_id'));
  }

  /**
   * {@inheritdoc}
   */
  public function defaultConfiguration() {
    $configuration = parent::defaultConfiguration();
    $configuration['section_id'] = '';
    return $configuration;
  }

}
