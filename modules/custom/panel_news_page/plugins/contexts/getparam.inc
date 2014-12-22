<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t("Get parameter"),
  'description' => t('Get parameter from URL'),
  'context' => 'panel_blog_page_getparam_context_create', // func to create context
  'context name' => 'getparam',
  'edit form' => 'panel_blog_page_getparam_context_settings_form',
  'keyword' => 'getparam',
  // Provides a list of items which are exposed as keywords.
  'convert list' => 'panel_blog_page_getparam_context_convert_list',
  // Convert keywords into data.
  'convert' => 'panel_blog_page_getparam_context_convert',
);

/**
 * Creates context for get parameter.
 */
function panel_blog_page_getparam_context_create($empty, $data = NULL, $conf = FALSE) {
  $context = new ctools_context('getparam');
  $context->plugin = 'getparam';
  if ($empty) {
    return $context;
  }
  if ($conf) {
    $getparam = is_array($data) && isset($data['param_name']) ? $data['param_name'] : '';
    $getparam_value = isset ($_GET[$getparam]) ? $_GET[$getparam] : 'all';
    $context->data = $getparam_value;
    return $context;
  }
}

/**
 * Configuration form for plugin.
 */
function panel_blog_page_getparam_context_settings_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $param = !empty($conf['param_name']) ? $conf['param_name'] : '';
  $form['param_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Name of get parameter'),
    '#size' => 50,
    '#default_value' => $param,
  );
  return $form;
}

/**
 * Configuration form submit.
 */
function panel_blog_page_getparam_context_settings_form_submit($form, &$form_state) {
  $form_state['conf']['param_name'] = $form_state['values']['param_name'];
}

/**
 * Return list of available substitutions.
 */
function panel_blog_page_getparam_context_convert_list() {
  return array(
    'value' => t('Value'),
  );
}

/**
 * Return actual values of substitutions declared by plugin.
 */
function panel_blog_page_getparam_context_convert($context, $type) {
  switch ($type) {
    case 'value':
      return $context->data;
  }
}