<?php

namespace Drupal\premium_theme_helper\Plugin\Layout;

use Drupal\Component\Utility\Html;
use Drupal\Core\Form\FormStateInterface;

/**
 * One column layout.
 *
 * @package Drupal\premium_theme_helper\Plugin\Layout
 */
class OneColumnLayout extends BaseLayout {

  /**
   * {@inheritdoc}
   */
  public function buildConfigurationForm(array $form, FormStateInterface $form_state): array {
    $form = parent::buildConfigurationForm($form, $form_state);
    $form['column_widths']['#access'] = FALSE;

    $form['column_width'] = [
      '#type' => 'select',
      '#multiple' => FALSE,
      '#title' => $this->t('Column width'),
      '#options' => [
        'normal' => $this->t('Normal'),
        'narrow' => $this->t('Narrow'),
        'fullwidth' => $this->t('Full width'),
      ],
      '#default_value' => $this->configuration['column_width'] ?? 'normal',
      '#description' => $this->t('Choose column width for this layout.'),
    ];
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
  public function submitConfigurationForm(array &$form, FormStateInterface $form_state): void {
    parent::submitConfigurationForm($form, $form_state);
    $this->configuration['column_width'] = $form_state->getValue('column_width');
    $this->configuration['section_id'] = Html::getId($form_state->getValue('section_id'));
  }

  /**
   * {@inheritdoc}
   */
  public function defaultConfiguration() {
    $configuration = parent::defaultConfiguration();
    $configuration['column_width'] = 'normal';
    $configuration['section_id'] = '';
    return $configuration;
  }

}
