<?php

namespace Drupal\premium_theme_helper\Plugin\Block;

use Drupal\Core\Breadcrumb\BreadcrumbBuilderInterface;
use Drupal\Core\Cache\CacheableMetadata;
use Drupal\Core\Entity\ContentEntityInterface;
use Drupal\Core\Routing\RouteMatchInterface;
use Drupal\Core\Logger\LoggerChannelFactoryInterface;
use Drupal\Core\TypedData\Exception\MissingDataException;
use Symfony\Component\DependencyInjection\ContainerInterface;

/**
 * Provides a 'Breadcrumb' block.
 *
 * @Block(
 *   id = "premium_breadcrumb_block",
 *   admin_label = @Translation("Breadcrumb block"),
 *   category= @Translation("Premium")
 * )
 */
class BreadcrumbBlock extends RouteEntityBaseBlock {

  /**
   * The breadcrumb manager.
   *
   * @var \Drupal\Core\Breadcrumb\BreadcrumbBuilderInterface
   */
  protected $breadcrumbManager;

  /**
   * Constructs a new SystemBreadcrumbBlock object.
   *
   * @param array $configuration
   *   A configuration array containing information about the plugin instance.
   * @param string $plugin_id
   *   The plugin_id for the plugin instance.
   * @param mixed $plugin_definition
   *   The plugin implementation definition.
   * @param \Drupal\Core\Breadcrumb\BreadcrumbBuilderInterface $breadcrumb_manager
   *   The breadcrumb manager.
   * @param \Drupal\Core\Routing\RouteMatchInterface $routeMatch
   *   The current route match.
   * @param \Drupal\Core\Logger\LoggerChannelFactoryInterface $logger
   *   Logger.
   */
  public function __construct(array $configuration, $plugin_id, $plugin_definition, BreadcrumbBuilderInterface $breadcrumb_manager, RouteMatchInterface $routeMatch, LoggerChannelFactoryInterface $logger) {
    parent::__construct($configuration, $plugin_id, $plugin_definition, $routeMatch, $logger);
    $this->breadcrumbManager = $breadcrumb_manager;
  }

  /**
   * {@inheritdoc}
   */
  public static function create(ContainerInterface $container, array $configuration, $plugin_id, $plugin_definition) {
    /** @var \Drupal\Core\Routing\RouteMatchInterface $routeMatch */
    $routeMatch = $container->get('current_route_match');
    /** @var \Drupal\Core\Breadcrumb\BreadcrumbBuilderInterface $breadcrumb */
    $breadcrumb = $container->get('breadcrumb');
    /** @var \Drupal\Core\Logger\LoggerChannelFactoryInterface $logger */
    $logger = $container->get('logger.factory');
    return new static($configuration, $plugin_id, $plugin_definition, $breadcrumb, $routeMatch, $logger);
  }

  /**
   * {@inheritDoc}
   */
  public function build(): array {
    $build = $this->breadcrumbManager->build($this->routeMatch)->toRenderable();
    $cacheMetadata = CacheableMetadata::createFromRenderArray($build);

    /** @var \Drupal\Core\Entity\ContentEntityInterface $route_entity */
    $route_entity = $this->getEntityFromRouteMatch($this->routeMatch);
    if (!is_null($route_entity) && $route_entity instanceof ContentEntityInterface && $route_entity->hasField('field_hide_breadcrumb')) {
      try {
        $data = $route_entity->get('field_hide_breadcrumb')->first();
        if (!is_null($data) && (int) $data->getValue()['value'] === 1) {
          $cacheMetadata->setCacheContexts(['route'])->setCacheTags([]);
          $build = [];
        }
      }
      catch (MissingDataException $e) {
        $this->logger->error($e->getMessage());
      }
      $cacheMetadata->addCacheableDependency($route_entity);
    }

    $breadcrumb_json_data = [
      '@context' => 'http://schema.org',
      '@type' => 'BreadcrumbList',
      'itemListElement' => [],
    ];
    $links = $this->breadcrumbManager->build($this->routeMatch)->getLinks();
    if (!empty($links)) {
      foreach ($links as $key => $item) {
        $breadcrumb_json_data['itemListElement'] = [
          '@type' => 'ListItem',
          'position' => $key,
          'item' => [
            '@id' => $item->getUrl()->toString(),
            'name' => $item->getText(),
          ],
        ];
      }
    }
    $build['breadcrumb_json_data'] = [
      '#type' => 'html_tag',
      '#tag' => 'script',
      '#attributes' => [
        'type' => 'application/ld+json',
      ],
      '#value' => json_encode($breadcrumb_json_data),
    ];
    $status = \Drupal::requestStack()->getCurrentRequest()->attributes->get('exception');
    if ($status && $status->getStatusCode() != 200) {
      $cacheMetadata->setCacheMaxAge(0);
    }

    $cacheMetadata->applyTo($build);

    return $build;
  }

}
