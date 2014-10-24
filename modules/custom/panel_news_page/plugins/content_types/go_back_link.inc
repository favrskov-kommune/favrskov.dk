<?php
/**
 * Callback function to supply a list of content types.
 */
function panel_news_page_go_back_link_ctools_content_types() {
  return array(
    'title' => t('Go back link'),
    'single' => TRUE,
    'content_types' => array(),
    'render callback' => 'panel_news_page_go_back_link_render',
    'edit form' => 'panel_news_page_go_back_link_edit_form',
    'category' => t('ProPeople'),
    'defaults' => array(
      'link' => '',
    )
  );
}


/**
 * Run-time rendering of the Go back link pane
 */
function panel_news_page_go_back_link_render($subtype, $conf, $args, $context) {
  $block = new stdClass();

  $block->content = l(
    t('Go back'),
    preg_replace_callback(
      '(\[arg:(\d)\])',
      function($match) {return arg($match[1]);},
      $conf['link']
    ),
    array(
      'attributes' => array(
        'class' => array(
          'go-back-link'
        )
      )
    )
  );

  drupal_add_js(drupal_get_path('module', 'panel_news_page') . '/js/go_back_link.js');

  return $block;
}

/**
 * Go back pane settings form
 */
function panel_news_page_go_back_link_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['link'] = array(
    '#type' => 'textfield',
    '#title' => t('Link'),
    '#default_value' => $conf['link'],
    '#description' => t('Please, insert relative link. You can use [arg:%] as token')
  );

  return $form;
}

/**
 * The submit ctools plugin form stores the data in $conf.
 */
function panel_news_page_go_back_link_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    $form_state['conf'][$key] = $form_state['input'][$key];
  }
}