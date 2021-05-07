<?php
namespace Drupal\favrskov_feedback\Controller;

use Drupal;
use Drupal\Core\Ajax\AjaxResponse;
use Drupal\Core\Ajax\ReplaceCommand;
use Drupal\Core\Controller\ControllerBase;
use Drupal\Core\Serialization\Yaml;
use Drupal\webform\Entity\Webform;

class FeedbackController extends ControllerBase {

  public function test() {
    $build['form'] = [
      '#lazy_builder' => [
        'favrskov.feedback.builder:getFeedbackForm', [],
      ],
      '#create_placeholder' => TRUE,
    ];
    return $build;
  }

  public function form($answer) {
    $response = new AjaxResponse();

    $webform = atom_view('feedback.' . $answer)->toValue();
    if (empty($webform)) {
      return $response->setStatusCode(204);
    } else {
      $webform = $webform[array_key_first($webform)];
      $build = Drupal::entityTypeManager()
        ->getViewBuilder('webform')
        ->view($webform);
      $response->addCommand(new ReplaceCommand('.layout-content', $build));
    }
    return $response;
  }

}
