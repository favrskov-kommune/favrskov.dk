<?php
namespace Drupal\favrskov_feedback\Form;

use Drupal;
use Drupal\Core\Form\FormBase;
use Drupal\Core\Form\FormStateInterface;

class FeedbackForm extends FormBase {

  public function getFormId() {
    return 'favrskov.feedback.form';
  }

  public function buildForm(array $form, FormStateInterface $form_state) {
    $form['test'] = [
      '#type' => 'textfield',
      '#default_value' => 'test'
    ];
    $form['submit'] = [
      '#type' => 'submit'
    ];
    honeypot_add_form_protection($form, $form_state, array('honeypot', 'time_restriction'));
    return $form;
  }

  public function submitForm(array &$form, FormStateInterface $form_state) {
    Drupal::messenger()->addMessage($form_state->getValue('test'));
  }

}
