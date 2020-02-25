<?php
/**
 * @file
 * Ctools plugin for displaying tweets, facebook posts and instagram pictures.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Combi pane'),
  'category' => t('ProPeople'),
  'render callback' => 'pane_social_combi_render_pane',
  'edit form' => 'pane_social_combi_pane_edit_form',
  'all contexts' => TRUE,
  'defaults' => array(
    'show_instagram' => 1,
    'instagram_user' => '',
    'instagram_tag' => '',
    'show_twitter' => 1,
    'twitter_user' => '',
    'twitter_tag' => '',
    'show_facebook' => 1,
    'facebook_user' => '',
    'facebook_scope' => 0,
    'row_count' => 2,
    'col_count' => 10,
    'cache_time' => 450,
  )
);


/**
 * Edit form callback for our ctools content type.
 *
 * Allow to choose sources (facebook, twitter, instagram) to load content from
 * and configuration for each source.
 */
function pane_social_combi_pane_edit_form($form, &$form_state) {

  $conf = $form_state['conf'];

  $form['instagram'] = array(
    '#type' => 'fieldset',
    '#title' => t('Instagram'),
  );

  $form['instagram']['show_instagram'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show instagram pictures'),
    '#default_value' => $conf['show_instagram'],
  );

  $form['instagram']['instagram_user'] = array(
    '#type' => 'textfield',
    '#title' => t('User names (delimited by comma)'),
    '#default_value' => $conf['instagram_user'],
    '#states' => array(
      'visible' => array(
        ':input[name="show_instagram"]' => array('checked' => TRUE),
      ),
//      'enabled' => array(
//        ':input[name="instagram_tag"]' => array('empty' => TRUE),
//      ),
    ),
  );

  $form['instagram']['instagram_tag'] = array(
    '#type' => 'textfield',
    '#title' => t('Hash tags(delimited by comma)'),
    '#default_value' => $conf['instagram_tag'],
    '#states' => array(
//      'enabled' => array(
//        ':input[name="instagram_user"]' => array('empty' => TRUE),
//      ),
      'visible' => array(
        ':input[name="show_instagram"]' => array('checked' => TRUE),
      ),
    ),
  );

  $form['twitter'] = array(
    '#type' => 'fieldset',
    '#title' => t('Twitter'),
  );

  $form['twitter']['show_twitter'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show twitter messages'),
    '#default_value' => $conf['show_twitter'],
  );

  $form['twitter']['twitter_user'] = array(
    '#type' => 'textfield',
    '#title' => t('User names (delimited by comma)'),
    '#default_value' => $conf['twitter_user'],
    '#states' => array(
//      'enabled' => array(
//        ':input[name="twitter_tag"]' => array('empty' => TRUE),
//      ),
      'visible' => array(
        ':input[name="show_twitter"]' => array('checked' => TRUE),
      ),
    ),
  );

  $form['twitter']['twitter_tag'] = array(
    '#type' => 'textfield',
    '#title' => t('Hash tags(delimited by comma)'),
    '#default_value' => $conf['twitter_tag'],
    '#states' => array(
//      'enabled' => array(
//        ':input[name="twitter_user"]' => array('empty' => TRUE),
//      ),
      'visible' => array(
        ':input[name="show_twitter"]' => array('checked' => TRUE),
      ),
    ),
  );

  $form['facebook'] = array(
    '#type' => 'fieldset',
    '#title' => t('Facebook'),
  );

  $form['facebook']['show_facebook'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show facebook posts'),
    '#default_value' => $conf['show_facebook'],
  );

  $form['facebook']['facebook_user'] = array(
    '#type' => 'textfield',
    '#title' => t('Facebook user ids (delimited by comma)'),
    '#default_value' => $conf['facebook_user'],
    '#states' => array(
      'visible' => array(
        ':input[name="show_facebook"]' => array('checked' => TRUE),
      ),
    ),
  );

  $form['facebook']['facebook_scope'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show another users messages'),
    '#default_value' => $conf['facebook_scope'],
    '#states' => array(
      'visible' => array(
        ':input[name="show_facebook"]' => array('checked' => TRUE),
      ),
    ),
  );

  $form['row_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Row count'),
    '#element_validate' => array ('element_validate_integer_positive'),
    '#default_value' => $conf['row_count']
  );

  $form['col_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Columns count'),
    '#element_validate' => array ('pane_social_combi_pane_validate_col_count'),
    '#default_value' => $conf['col_count']
  );


  $form['cache_time'] = array(
    '#type' => 'textfield',
    '#title' => t('Cache time (seconds)'),
    '#element_validate' => array ('element_validate_integer_positive'),
    '#default_value' => (!empty($conf['cache_time']) ? $conf['cache_time'] : 300),
  );
  return $form;
}

/**
 * Validate function for columns count. Must be greater than 4.
 */
function pane_social_combi_pane_validate_col_count($element, &$form_state){
  $value = $element['#value'];
  if ($value !== '' && (!is_numeric($value) || intval($value) != $value || $value <= 0) || $value < 5) {
    form_error($element, t('%name must be a positive integer greater than 4.', array('%name' => $element['#title'])));
  }
}

/**
 * The submit ctools plugin form stores the data in $conf.
 */
function pane_social_combi_pane_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    $form_state['conf'][$key] = $form_state['input'][$key];
  }
  cache_clear_all('combi_boxes', 'cache');
}

/**
 * Render callback of our ctools plugin.
 * Uses cache of data for 5 mins.
 */
function pane_social_combi_render_pane($subtype, $conf, $args, $contexts) {
  $block = new stdClass();
  $block->content = '';

  $hash = md5(serialize($conf));
  $cache = cache_get('combi_boxes_' . $hash);

  if ($cache && (int) $cache->created + $conf['cache_time'] > time()) {
    $data = $cache->data;
  }
  else {
    $data = pane_social_get_merged_social_data($conf);
    cache_set('combi_boxes_' . $hash, $data, 'cache');
  }

  $block->content .= "<div class='combi swiper-container'>";
  $block->content .= "<a href='#' class='arrow-left nav-btn'></a>";
  $block->content .= "<a href='#' class='arrow-right nav-btn'></a>";
  $block->content .= "<ul class='combi-row swiper-wrapper'>";

  for ($i = 0; $i < $conf['col_count']; $i++) {
    $block->content .= "<li class='swiper-slide'>";
    for ($j = 0; $j < $conf['row_count']; $j++) {
      if (isset($data[$j * $conf['col_count'] + $i])) {
        $block->content .= theme('combi_box', array('box' => $data[$i*$conf['row_count'] + $j]));
      }
    }
  }
  $block->content .= "</li>";
  $block->content .= "</ul>";
  $block->content .= "</div>";

  return $block;
}
