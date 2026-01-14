<?php

namespace Drupal\promote_disable\Form;

use Drupal\Core\Config\ConfigFactoryInterface;
use Drupal\Core\Form\ConfigFormBase;
use Drupal\Core\Form\FormStateInterface;
use Drupal\node\Entity\NodeType;
use Symfony\Component\DependencyInjection\ContainerInterface;

/**
 * Class PromoteDisableForm.
 *
 * @package Drupal\promote_disable\Form
 */
class PromoteDisableForm extends ConfigFormBase {

  /**
   * The configuration factory.
   *
   * @var \Drupal\Core\Config\Config
   */
  protected $config;

  /**
   * The content type being tested.
   *
   * @var \Drupal\node\Entity\NodeType
   */
  protected $contentType;

  /**
   * {@inheritdoc}
   */
  public function __construct(ConfigFactoryInterface $config_factory) {
    $this->config = $config_factory->getEditable('promote_disable.settings');
  }

  /**
   * {@inheritdoc}
   */
  public static function create(ContainerInterface $container) {
    return new static(
    // Load the service required to construct this class.
      $container->get('config.factory')
    );
  }

  /**
   * {@inheritdoc}
   */
  public function getFormId() {
    return 'promote_disable_form';
  }

  /**
   * {@inheritdoc}
   */
  protected function getEditableConfigNames() {
    return ['promote_disable.settings'];
  }

  /**
   * {@inheritdoc}
   */
  public function buildForm(array $form, FormStateInterface $form_state) {
    $node_types = $this->promoteDisableNodeTypes();
    $form['promote_to_front_page'] = [
      '#type' => 'details',
      '#title' => $this->t('Promote to front page'),
      '#open' => TRUE,
    ];

    $form['promote_to_front_page']['promote_disable_node_types'] = [
      '#type' => 'select',
      '#multiple' => TRUE,
      '#size' => count($node_types),
      '#title' => $this->t('Content types'),
      '#default_value' => $this->config->get('promote_disable_node_types'),
      '#options' => $node_types,
      '#description' => $this->t('Select the content types on which you would like to disable the "Promoted to front page" option.'),
    ];

    $form['sticky'] = [
      '#type' => 'details',
      '#title' => $this->t('Make content sticky'),
      '#open' => TRUE,
    ];

    $form['sticky']['promote_disable_sticky_node_types'] = [
      '#type' => 'select',
      '#multiple' => TRUE,
      '#size' => count($node_types),
      '#title' => $this->t('Content types'),
      '#default_value' => $this->config->get('promote_disable_sticky_node_types'),
      '#options' => $node_types,
      '#description' => $this->t('Select the content types on which you would like to disable the "Sticky option.'),
    ];
    return parent::buildForm($form, $form_state);
  }

  /**
   * {@inheritdoc}
   */
  public function submitForm(array &$form, FormStateInterface $form_state) {
    $this->config->set('promote_disable_node_types', $form_state->getValue('promote_disable_node_types'));
    $this->config->set('promote_disable_sticky_node_types', $form_state->getValue('promote_disable_sticky_node_types'));
    $this->config->save();
  }

  /**
   * Simple function to return a FAPI select options array.
   */
  public function promoteDisableNodeTypes() {
    $node_types = NodeType::loadMultiple();
    // If you need to display them in a drop down.
    $options = [];
    foreach ($node_types as $node_type) {
      $options[$node_type->id()] = $node_type->label();
    }
    asort($options);
    return $options;

  }

}
