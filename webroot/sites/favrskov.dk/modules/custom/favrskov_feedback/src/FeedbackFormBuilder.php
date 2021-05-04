<?php
namespace Drupal\favrskov_feedback;

use Drupal;
use Drupal\Core\Security\TrustedCallbackInterface;

class FeedbackFormBuilder implements TrustedCallbackInterface {

  public function getFeedbackForm() {
    return Drupal::formBuilder()
      ->getForm('Drupal\favrskov_feedback\Form\FeedbackForm');
  }

  public static function trustedCallbacks() {
    return ['getFeedbackForm'];
  }

}
