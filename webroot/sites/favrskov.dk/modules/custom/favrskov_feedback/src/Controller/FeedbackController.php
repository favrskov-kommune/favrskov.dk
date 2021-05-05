<?php
namespace Drupal\favrskov_feedback\Controller;

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

  }

}
