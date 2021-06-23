<?php

namespace Drupal\premium_theme_helper\Plugin\Block;

use Doctrine\Common\Cache\Cache;
use Drupal\Core\Cache\CacheableMetadata;
use Drupal\Core\Controller\TitleResolverInterface;
use Drupal\Core\Entity\ContentEntityInterface;
use Drupal\Core\Entity\EntityInterface;
use Drupal\Core\Entity\EntityTypeManagerInterface;
use Drupal\Core\Logger\LoggerChannelFactoryInterface;
use Drupal\Core\Routing\RouteMatchInterface;
use Drupal\Core\TypedData\Exception\MissingDataException;
use Drupal\paragraphs\Entity\Paragraph;
use Symfony\Component\DependencyInjection\ContainerInterface;
use Symfony\Component\HttpFoundation\RequestStack;

/**
 * Provides a 'Hero' block.
 *
 * @Block(
 *   id = "premium_hero_block",
 *   admin_label = @Translation("Hero block"),
 *   category= @Translation("Premium")
 * )
 */
class PageHeaderBlock extends RouteEntityBaseBlock {

  /**
   * The title resolver.
   *
   * @var \Drupal\Core\Controller\TitleResolverInterface
   */
  protected $titleResolver;

  /**
   * The current request.
   *
   * @var \Drupal\Core\Controller\TitleResolverInterface
   */
  protected $requestStack;

  /**
   * The entity type manager.
   *
   * @var \Drupal\Core\Entity\EntityTypeManagerInterface
   */
  protected $entityTypeManager;

  /**
   * Constructs a new SystemBreadcrumbBlock object.
   *
   * @param array $configuration
   *   A configuration array containing information about the plugin instance.
   * @param string $plugin_id
   *   The plugin_id for the plugin instance.
   * @param mixed $plugin_definition
   *   The breadcrumb manager.
   * @param \Drupal\Core\Controller\TitleResolverInterface $titleResolver
   *   Title resolver.
   * @param \Drupal\Core\Routing\RouteMatchInterface $routeMatch
   *   The current route match.
   * @param \Drupal\Core\Logger\LoggerChannelFactoryInterface $logger
   *   Logger.
   * @param \Symfony\Component\HttpFoundation\RequestStack $requestStack
   *   Request stack.
   * @param \Drupal\Core\Entity\EntityTypeManagerInterface $entityTypeManager
   *   Entity type manager.
   */
  public function __construct(array $configuration, $plugin_id, $plugin_definition, TitleResolverInterface $titleResolver, RouteMatchInterface $routeMatch, LoggerChannelFactoryInterface $logger, RequestStack $requestStack, EntityTypeManagerInterface $entityTypeManager) {
    parent::__construct($configuration, $plugin_id, $plugin_definition, $routeMatch, $logger);
    $this->titleResolver = $titleResolver;
    $this->requestStack = $requestStack;
    $this->entityTypeManager = $entityTypeManager;
  }

  /**
   * {@inheritdoc}
   */
  public static function create(ContainerInterface $container, array $configuration, $plugin_id, $plugin_definition) {
    /** @var \Drupal\Core\Routing\RouteMatchInterface $routeMatch */
    $routeMatch = $container->get('current_route_match');
    /** @var \Drupal\Core\Controller\TitleResolverInterface $titleResolver */
    $titleResolver = $container->get('title_resolver');
    /** @var \Drupal\Core\Logger\LoggerChannelFactoryInterface $logger */
    $logger = $container->get('logger.factory');
    /** @var \Symfony\Component\HttpFoundation\RequestStack $request_stack */
    $request_stack = $container->get('request_stack');
    /** @var \Drupal\Core\Entity\EntityTypeManagerInterface $entityTypeManager */
    $entityTypeManager = $container->get('entity_type.manager');
    return new static($configuration, $plugin_id, $plugin_definition, $titleResolver, $routeMatch, $logger, $request_stack, $entityTypeManager);
  }

  /**
   * {@inheritDoc}
   */
  public function build(): array {
    $cacheMetadata = new CacheableMetadata();
    $cacheMetadata->addCacheContexts(['route'])->addCacheTags(['languages']);
    $build = [];

    $request = $this->requestStack->getCurrentRequest();
    /** @var \Drupal\Core\Entity\ContentEntityInterface $route_entity */
    $route_entity = $this->getEntityFromRouteMatch($this->routeMatch);
    if ($route_entity instanceof ContentEntityInterface && $route_entity->hasField('field_header')) {
      $cacheMetadata->addCacheableDependency($route_entity);

      if (!$route_entity->get('field_header')->isEmpty()) {
        try {
          $pid = $route_entity->get('field_header')->first();
          if (!is_null($pid)) {
            $pid = $pid->getValue()['target_id'];
            $paragraph = Paragraph::load($pid);
            if (!is_null($paragraph)) {
              $build['header'] = $this->entityTypeManager->getViewBuilder('paragraph')->view($paragraph);
              $build['header']['#title'] = $route_entity->label();
              $cacheMetadata->addCacheableDependency($paragraph);
            }
          }
        }
        catch (MissingDataException $e) {
          $this->logger->error($e->getMessage());
        }
      }
    }

    try {
      if ($route_entity instanceof ContentEntityInterface && $route_entity->hasField('field_hide_title')) {
        $hide_title = $route_entity->get('field_hide_title')->first();
        if (!is_null($hide_title) && (int) $hide_title->getValue()['value'] === 1) {
          $cacheMetadata->addCacheableDependency($route_entity);
          $build['header'] = [];
        }
      }
    }
    catch (MissingDataException $e) {
      $this->logger->error($e->getMessage());
    }

    if (!isset($build['header'])) {
      if (!is_null($request)) {
        $title = $this->titleResolver->getTitle($request, $this->routeMatch->getRouteObject());
        $build['title'] = [
          '#theme' => 'page_title',
          '#title' => $title,
        ];
      }
    }

    $status = $request->attributes->get('exception');
    if ($status && $status->getStatusCode() !== 200) {
      $cacheMetadata->setCacheMaxAge(0);
    }

    $cacheMetadata->applyTo($build);

    return $build;
  }

}
