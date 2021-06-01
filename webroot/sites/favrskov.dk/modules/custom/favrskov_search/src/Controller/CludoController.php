<?php

namespace Drupal\favrskov_search\Controller;

use Drupal\Core\Controller\ControllerBase;

class CludoController extends ControllerBase {

  public function search() {
    return [
      '#theme' => 'cludo'
    ];
  }

}
