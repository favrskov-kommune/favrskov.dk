<?php

namespace Drupal\favrskov_news\Breadcrumb;

use Drupal\Core\Breadcrumb\Breadcrumb;
use Drupal\Core\Breadcrumb\BreadcrumbBuilderInterface;
use Drupal\Core\Link;
use Drupal\Core\Routing\AdminContext;
use Drupal\Core\Routing\RouteMatchInterface;
use Drupal\Core\Url;
use Symfony\Component\Routing\Route;

class BreadcrumbBuilder implements BreadcrumbBuilderInterface {

  /**
   * The admin context service.
   *
   * @var \Drupal\Core\Routing\AdminContext
   */
  protected $adminContext;

  /**
   * HierarchyBasedBreadcrumbBuilder constructor.
   *
   * @param AdminContext $admin_context
   *   The admin context service.
   */
  public function __construct(
    AdminContext $admin_context
  ) {
    $this->adminContext = $admin_context;
  }

  /**
   * Whether this breadcrumb builder should be used to build the breadcrumb.
   *
   * @param \Drupal\Core\Routing\RouteMatchInterface $route_match
   *   The current route match.
   *
   * @return bool
   *   TRUE if this builder should be used or FALSE to let other builders
   *   decide.
   */
  public function applies(RouteMatchInterface $route_match) {
    if ($this->adminContext->isAdminRoute($route_match->getRouteObject())) {
      return FALSE;
    }

    $route_entity = $this->getEntityFromRouteMatch($route_match);
    if (!$route_entity || $route_entity->getEntityTypeId() != 'node' || $route_entity->bundle() != 'news') {
      return FALSE;
    }

    return TRUE;
  }

  public function build(RouteMatchInterface $route_match) {
    $breadcrumb = new Breadcrumb();
    $breadcrumb->addCacheContexts(['route']);
    /** @var \Drupal\Core\Entity\ContentEntityInterface $route_entity */
    $route_entity = $this->getEntityFromRouteMatch($route_match);
    if ($route_entity && $route_entity->getEntityTypeId() == 'node' && $route_entity->bundle() == 'news') {
      $breadcrumb->addCacheTags(['node:' . $route_entity->id()]);

      $links = [];
      $links[] = Link::createFromRoute(t('Frontpage'), '<front>');
      $links[] = new Link('Nyheder', Url::fromUserInput('/nyheder'));
      $links[] = Link::createFromRoute($route_entity->label(), '<none>');

      $breadcrumb->setLinks($links);
    }
    return $breadcrumb;
  }

  /**
   * Return the entity type id from a route object.
   *
   * @param \Symfony\Component\Routing\Route $route
   *   The route object.
   *
   * @return string|null
   *   The entity type id, null if it doesn't exist.
   */
  protected function getEntityTypeFromRoute(Route $route) {
    if (!empty($route->getOptions()['parameters'])) {
      foreach ($route->getOptions()['parameters'] as $option) {
        if (isset($option['type']) && strpos($option['type'], 'entity:') === 0) {
          return substr($option['type'], strlen('entity:'));
        }
      }
    }

    return NULL;
  }

  /**
   * Returns an entity parameter from a route match object.
   *
   * @param \Drupal\Core\Routing\RouteMatchInterface $route_match
   *   The route match.
   *
   * @return \Drupal\Core\Entity\EntityInterface|null
   *   The entity, or null if it's not an entity route.
   */
  protected function getEntityFromRouteMatch(RouteMatchInterface $route_match) {
    $route = $route_match->getRouteObject();
    if (!$route) {
      return NULL;
    }

    $entity_type_id = $this->getEntityTypeFromRoute($route);
    if ($entity_type_id) {
      return $route_match->getParameter($entity_type_id);
    }

    return NULL;
  }
}
