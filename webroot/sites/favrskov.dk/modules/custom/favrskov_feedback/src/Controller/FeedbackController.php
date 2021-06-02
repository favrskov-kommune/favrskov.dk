<?php
namespace Drupal\favrskov_feedback\Controller;

use Drupal\Core\Ajax\AjaxResponse;
use Drupal\Core\Ajax\ReplaceCommand;
use Drupal\Core\Controller\ControllerBase;

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
