<?php

namespace Drupal\ftf_parcelling\Form;

use Drupal\Core\Form\FormBase;
use Drupal\ftf_parcelling\Service\ParcelImportService;
use Symfony\Component\DependencyInjection\ContainerInterface;

class ParcelImportForm extends FormBase {

  /**
   * @var \Drupal\ftf_parcelling\Service\ParcelImportService
   */
  protected $parcel_import_service;

  /**
   * ParcelImportForm constructor.
   *
   * @param \Drupal\ftf_parcelling\Service\ParcelImportService $parcel_import_service
   */
  public function __construct(ParcelImportService $parcel_import_service) {
    $this->parcel_import_service = $parcel_import_service;
  }

  /**
   * @param \Symfony\Component\DependencyInjection\ContainerInterface $container
   *
   * @return \Drupal\Core\Form\FormBase|static
   */
  public static function create(ContainerInterface $container) {
    return new static(
      $container->get('ftf_parcelling.parcel_import')
    );
  }

  /**
   * Returns a unique string identifying the form.
   *
   * The returned ID should be a unique string that can be a valid PHP function
   * name, since it's used in hook implementation names such as
   * hook_form_FORM_ID_alter().
   *
   * @return string
   *   The unique string identifying the form.
   */
  public function getFormId() {
    return 'parcel_import_form';
  }

  /**
   * Form constructor.
   *
   * @param array $form
   *   An associative array containing the structure of the form.
   * @param \Drupal\Core\Form\FormStateInterface $form_state
   *   The current state of the form.
   *
   * @return array
   *   The form structure.
   */
  public function buildForm(array $form, \Drupal\Core\Form\FormStateInterface $form_state) {
    // just to make sure noone ever accidentally uses this or
    // out of curiosity i have commented it out
    /*
    $form['delete'] = [
      '#type' => 'checkbox',
      '#title' => $this->t('Delete all courses'),
    ];
    */

    $form['import'] = [
      '#type' => 'submit',
      '#value' => 'Import Parcel Data',
    ];


    return $form;
  }

  /**
   * Form submission handler.
   *
   * @param array $form
   *   An associative array containing the structure of the form.
   * @param \Drupal\Core\Form\FormStateInterface $form_state
   *   The current state of the form.
   */
  public function submitForm(array &$form, \Drupal\Core\Form\FormStateInterface $form_state) {

    // Delete courses before importing
    if ($form_state->getValue('delete')) {
      //delete parcel data
    }
    else {
      $response = $this->parcel_import_service->startImport();

      if ($response['status']) {
        \Drupal::messenger()->addStatus($response['message']);
      }
    }
  }

}
