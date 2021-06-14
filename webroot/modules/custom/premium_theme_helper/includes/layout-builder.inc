<?php

use Drupal\Component\Utility\NestedArray;
use Drupal\Component\Serialization\Json;
use Drupal\Core\Form\FormStateInterface;
use Drupal\premium_theme_helper\Element\LayoutBuilder;
use Drupal\premium_theme_helper\Plugin\Layout\ThreeColumnLayout;
use Drupal\premium_theme_helper\Plugin\Layout\TwoColumnLayout;
use Drupal\premium_theme_helper\Plugin\Layout\OneColumnLayout;
use Drupal\views\ViewExecutable;

/**
 * Layout alter - Change and remove definitions.
 *
 * @param array $definitions
 *   The discovered plugin definitions.
 */
function premium_theme_helper_layout_alter(array &$definitions) {
  $definitions['layout_onecol']->setClass(OneColumnLayout::class);
  $definitions['layout_twocol_section']->setClass(TwoColumnLayout::class);
  $definitions['layout_threecol_section']->setClass(ThreeColumnLayout::class);
}

/**
 * Add libraries to specific elements.
 *
 * @param array $types
 *   An associative array with structure identical to that of the return value
 *   of \Drupal\Core\Render\ElementInfoManagerInterface::getInfo().
 */
function premium_theme_helper_element_info_alter(array &$types) {
  if (isset($types['layout_builder'])) {
    $types['layout_builder']['#attached']['library'][] = 'premium_theme/layout-builder';
  }
}

/**
 * Change layout builder class, so we can change structure in layout builder.
 *
 * @param array $definitions
 *   The discovered plugin definitions.
 */
function premium_theme_helper_element_plugin_alter(array &$definitions) {
  if (isset($definitions['layout_builder']['class'])) {
    $definitions['layout_builder']['class'] = LayoutBuilder::class;
  }
}

/**
 * Add header.
 *
 * @param array $variables
 *   Theme variables.
 */
function premium_theme_helper_preprocess_layout(array &$variables) {
  if (!empty($variables['content']['#header'])) {
    $variables['header'] = $variables['content']['#header'];
  }

  // Add section settings to blocks.
  $settings = $variables['content']['#settings'] ?? [];
  $element_to_skip = [
    'layout_builder_add_block',
    '#attributes',
    'region_label',
  ];
  foreach ($variables['content'] as $col_id => $content) {
    if (isset($col_id[0]) && $col_id[0] === '#') {
      continue;
    }

    foreach ($variables['content'][$col_id] as $key => $layout_block) {
      if (in_array($key, $element_to_skip, FALSE)) {
        continue;
      }

      $variables['content'][$col_id][$key]['content']['#layout'] = [
        'layout_id' => $variables['layout']->id(),
        'settings' => $settings,
        'column_id' => $col_id,
      ];
    }
  }
}

/**
 * Implements hook_preprocess_HOOK().
 */
function premium_theme_helper_preprocess_block__inline_block(&$variables) {
  if (isset($variables['content']['#attributes'], $variables['attributes']) && \Drupal::currentUser()->hasPermission('access in-place editing')) {
    $variables['attributes'] = NestedArray::mergeDeep($variables['content']['#attributes'], $variables['attributes']);
  }
}

/**
 * Theme suggestion for block contents.
 *
 * Change reuseable blocks to have a theme suggestion to inline block,
 * so we dont get different templates.
 *
 * @param array $suggestions
 *   An array of theme suggestions.
 * @param array $variables
 *   An array of variables passed to the theme hook. Note that this hook is
 *   invoked before any preprocessing.
 */
function premium_theme_helper_theme_suggestions_block_alter(array &$suggestions, array $variables) {
  $block = $variables['elements'];
  $block_type = $block['#configuration']['provider'];
  if ($block_type === 'block_content' && isset($block['content']['#block_content'])) {
    /** @var \Drupal\block_content\Entity\BlockContent $block_content_entity */
    $block_content_entity = $block['content']['#block_content'];
    $bundle = $block_content_entity->bundle();
    if ($block_content_entity->hasField('reusable') && (int) $block_content_entity->get('reusable')->value === 1) {
      $suggestions[] = 'block__inline_block__' . $bundle;
    }
  }
}

/**
 * Adding libraries to a view as pre render.
 *
 * @param \Drupal\views\ViewExecutable $view
 *   View.
 */
function premium_theme_helper_views_pre_render(ViewExecutable $view) {
  $routeName = Drupal::routeMatch()->getRouteName();
  // Check if current theme isn't a admin theme,
  // because isAdminRoute wont work here because media_library/layout_builder
  // can be used in backend/frontend so the route do not have a _admin_route.
  if ($view->id() === 'media_library' && (strpos($routeName, 'layout_builder.') !== FALSE || strpos($routeName, 'media_library.') !== FALSE)) {
    $activeTheme = Drupal::theme()->getActiveTheme()->getName();
    $systemTheme = Drupal::config('system.theme')->get('admin');
    if ($activeTheme !== $systemTheme) {
      $view->element['#attached']['library'][] = 'premium_theme/layout-builder-media';
    }
  }
}

/**
 * Form alter - Adding libraries.
 *
 * @param array $form
 *   Form.
 * @param \Drupal\Core\Form\FormStateInterface $form_state
 *   Form state.
 * @param string $form_id
 *   Form id.
 */
function premium_theme_helper_form_alter(array &$form, FormStateInterface $form_state, string $form_id) {
  if (in_array($form_id, [
    'layout_builder_add_block',
    'layout_builder_update_block',
  ])) {
    $form['#attached']['library'][] = 'premium_theme_helper/dialog';
  }
}
