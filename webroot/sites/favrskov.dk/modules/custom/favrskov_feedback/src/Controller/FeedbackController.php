<?php
namespace Drupal\favrskov_feedback\Controller;

use Drupal\Core\Ajax\AjaxResponse;
use Drupal\Core\Ajax\ReplaceCommand;
use Drupal\Core\Controller\ControllerBase;
use Drupal\Core\Entity\EntityTypeManager;
use Drupal\favrskov_feedback\FeedbackFormBuilder;
use Symfony\Component\DependencyInjection\ContainerInterface;

class FeedbackController extends ControllerBase {

  /**
   * FeedbackController constructor.
   *
   * @param EntityTypeManager $entityTypeManager
   */
  public function __construct(EntityTypeManager $entityTypeManager) {
    $this->entityTypeManager = $entityTypeManager;
  }

  /**
   * {@inheritdoc}
   *
   * @param ContainerInterface $container
   *   The Drupal service container.
   *
   * @return static
   */
  public static function create(ContainerInterface $container) {
    return new static(
      $container->get('entity_type.manager')
    );
  }

  public function test() {
    $build['form'] = [
      '#lazy_builder' => [
        FeedbackFormBuilder::class . '::getFeedbackForm', [],
      ],
      '#create_placeholder' => TRUE,
    ];
    return $build;
  }

  public function form($answer) {
    $response = new AjaxResponse();

    $webform = atom_view('feedback.' . $answer . '.form')->toValue();
    if (empty($webform)) {
      return $response->setStatusCode(204);
    } else {
      $webform = $webform[array_key_first($webform)];
      $build = $this->entityTypeManager
        ->getViewBuilder('webform')
        ->view($webform);
      $response->addCommand(new ReplaceCommand('.js-footer__feedback-form form', $build));
    }
    return $response;
  }

}
