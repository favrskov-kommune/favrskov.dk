<?php

namespace Drupal\premium_theme_helper\Plugin\Layout;

use Drupal\Core\Form\FormStateInterface;
use Drupal\layout_builder\Plugin\Layout\MultiWidthLayoutBase;

/**
 * Handle global settings for all layouts.
 *
 * @package Drupal\premium_theme_helper\Plugin\Layout
 */
class BaseLayout extends MultiWidthLayoutBase {

  /**
   * {@inheritDoc}
   */
  protected function getWidthOptions(): array {
    return [];
  }

  /**
   * {@inheritdoc}
   */
  public function buildConfigurationForm(array $form, FormStateInterface $form_state): array {
    $form = parent::buildConfigurationForm($form, $form_state);

    if (\Drupal::moduleHandler()->moduleExists('dynamic_key_value')) {
      $color_themes = \Drupal::service('dynamic_key_value.storage')->getOptions('color_themes');
    }

    if (empty($color_themes)) {
      $color_themes = [
        'primary' => 'Primary',
        'secondary' => 'Secondary',
      ];
    }

    $form['color_theme'] = [
      '#type' => 'select',
      '#multiple' => FALSE,
      '#title' => $this->t('Color theme'),
      '#options' => [
        'none' => 'None',
      ] + $color_themes,
      '#default_value' => $this->configuration['color_theme'] ?? 'none',
      '#description' => $this->t('Choose color theme this layout.'),
    ];

    $form['column_spacing_top'] = [
      '#type' => 'select',
      '#multiple' => FALSE,
      '#title' => $this->t('Column spacing top'),
      '#options' => [
        'none' => $this->t('None'),
        'small' => $this->t('Small'),
        'medium' => $this->t('Medium'),
        'large' => $this->t('Large'),
      ],
      '#default_value' => $this->configuration['column_spacing_top'] ?? 'medium',
      '#description' => $this->t('Choose column spacing layout.'),
    ];

    $form['column_spacing_bottom'] = [
      '#type' => 'select',
      '#multiple' => FALSE,
      '#title' => $this->t('Column spacing bottom'),
      '#options' => [
        'none' => $this->t('None'),
        'small' => $this->t('Small'),
        'medium' => $this->t('Medium'),
        'large' => $this->t('Large'),
      ],
      '#default_value' => $this->configuration['column_spacing_bottom'] ?? 'medium',
      '#description' => $this->t('Choose column spacing for this layout.'),
    ];

    return $form;
  }

  /**
   * {@inheritdoc}
   */
  public function submitConfigurationForm(array &$form, FormStateInterface $form_state): void {
    parent::submitConfigurationForm($form, $form_state);
    $this->configuration['color_theme'] = $form_state->getValue('color_theme');
    $this->configuration['column_spacing_top'] = $form_state->getValue('column_spacing_top');
    $this->configuration['column_spacing_bottom'] = $form_state->getValue('column_spacing_bottom');
  }

  /**
   * {@inheritdoc}
   */
  public function defaultConfiguration() {
    $configuration = parent::defaultConfiguration();
    $configuration['color_theme'] = 'none';
    $configuration['column_spacing_top'] = 'medium';
    $configuration['column_spacing_bottom'] = 'medium';
    return $configuration;
  }

}
