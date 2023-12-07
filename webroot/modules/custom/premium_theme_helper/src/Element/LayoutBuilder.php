<?php

namespace Drupal\premium_theme_helper\Element;

use Drupal\Core\Plugin\PluginFormInterface;
use Drupal\layout_builder\Element\LayoutBuilder as LayoutBuilderOrg;
use Drupal\layout_builder\SectionStorageInterface;

/**
 * Change layout builder structure.
 *
 * @package Drupal\premium_theme_helper\Element
 */
class LayoutBuilder extends LayoutBuilderOrg {

  /**
   * {@inheritdoc}
   */
  protected function buildAdministrativeSection(SectionStorageInterface $section_storage, $delta): array {
    $element = parent::buildAdministrativeSection($section_storage, $delta);

    $remove_element = $element['remove'];
    $configure_element = $element['configure'];
    $section = $section_storage->getSection($delta);
    $layout = $section->getLayout();
    $layout_settings = $section->getLayoutSettings();
    $label = !empty($layout_settings['label']) ? $layout_settings['label'] : $this->t('Section @section', ['@section' => $delta + 1]);
    $layout_definition = $layout->getPluginDefinition();

    unset(
      $element['remove'],
      $element['configure'],
      $element['section_label']
    );

    $element['layout-builder__section']['#header'] = [
      '#access' => $layout instanceof PluginFormInterface,
      '#weight' => -100,
      'label' => [
        '#type' => 'html_tag',
        '#tag' => 'span',
        '#attributes' => [
          'class' => ['layout-builder__section-label'],
        ],
        '#value' => t('Section (@type): @label', ['@type' => $layout_definition->getLabel(), '@label' => $label]),
        '#access' => $layout instanceof PluginFormInterface,
      ],
      'remove' => $remove_element,
      'configure' => $configure_element,
    ];

    return $element;
  }

}
