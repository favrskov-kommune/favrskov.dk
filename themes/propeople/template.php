<?php

/**
 * @file
 * Process theme data.
 *
 * Use this file to run your theme specific implimentations of theme functions,
 * such preprocess, process, alters, and theme function overrides.
 *
 * Preprocess and process functions are used to modify or create variables for
 * templates and theme functions. They are a common theming tool in Drupal, often
 * used as an alternative to directly editing or adding code to templates. Its
 * worth spending some time to learn more about these functions - they are a
 * powerful way to easily modify the output of any template variable.
 *
 * Preprocess and Process Functions SEE: http://drupal.org/node/254940#variables-processor
 * 1. Rename each function and instance of "adaptivetheme_subtheme" to match
 *    your subthemes name, e.g. if your theme name is "footheme" then the function
 *    name will be "footheme_preprocess_hook". Tip - you can search/replace
 *    on "adaptivetheme_subtheme".
 * 2. Uncomment the required function to use.
 */

/**
 * Implements template_preprocess_html().
 */
function propeople_preprocess_html(&$variables) {
  $variables['html5shiv'] = _propeople_html5shiv();
  $variables['mediaqueryshiv'] = _propeople_mediaqueryshiv();
}

/**
 * Implements template_preprocess_page().
 */
function propeople_preprocess_page(&$variables) {
  if (isset($variables['node_title'])) {
    $variables['title'] = $variables['node_title'];
  }


  // Since the title and the shortcut link are both block level elements,
  // positioning them next to each other is much simpler with a wrapper div.
  if (!empty($variables['title_suffix']['add_or_remove_shortcut']) && $variables['title']) {
    // Add a wrapper div using the title_prefix and title_suffix render elements.
    $variables['title_prefix']['shortcut_wrapper'] = array(
      '#markup' => '<div class="shortcut-wrapper clearfix">',
      '#weight' => 100,
    );
    $variables['title_suffix']['shortcut_wrapper'] = array(
      '#markup' => '</div>',
      '#weight' => -99,
    );
    // Make sure the shortcut link is the first item in title_suffix.
    $variables['title_suffix']['add_or_remove_shortcut']['#weight'] = -100;
  }

  // Add rendered main menu, if available.
  // Borrowed from Easy Clean.
  // @link http://drupal.org/project/easy_clean
  if (isset($variables['main_menu'])) {
    $variables['primary_nav'] = theme('links__system_main_menu', array(
      'links' => $variables['main_menu'],
      'attributes' => array(
        'class' => array('links', 'inline', 'main-menu'),
      ),
      'heading' => array(
        'text' => t('Main menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      )
      ));
  }
  else {
    $variables['primary_nav'] = FALSE;
  }

  // Add rendered secondary menu, if available.
  // Borrowed from Easy Clean.
  // @link http://drupal.org/project/easy_clean
  if (isset($variables['secondary_menu'])) {
    $variables['secondary_nav'] = theme('links__system_secondary_menu', array(
      'links' => $variables['secondary_menu'],
      'attributes' => array(
        'class' => array('links', 'inline', 'secondary-menu'),
      ),
      'heading' => array(
        'text' => t('Secondary menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      )
      ));
  }
  else {
    $variables['secondary_nav'] = FALSE;
  }

  // Add extra theme hook suggestions.
  if (isset($variables['node'])) {
    $variables['theme_hook_suggestions'][] = "page__node__type__{$variables['node']->type}";
  }
}

// Rebuild the theme registry during theme development.
// Borrowed from Basic.
// @link http://drupal.org/project/basic
if (theme_get_setting('propeople_clear_registry')) {
  // Rebuild .info data.
  system_rebuild_theme_data();
  // Rebuild theme registry.
  drupal_theme_rebuild();
}


/**
 * Determine whether to use an HTML5Shiv and which version.
 *
 * @return string|NULL
 */
function _propeople_html5shiv() {

  if (theme_get_setting('propeople_shiv')) {
    if (theme_get_setting('propeople_shiv_google')) {
      // Borrowed from Responsive HTML5 Boilerplate.
      // @link http://drupal.org/project/html5_boilerplate
      // Omit the protocol from embedded resources.
      // @link http://google-styleguide.googlecode.com/svn/trunk/htmlcssguide.xml#Protocol
      return '<!--[if lt IE 9]><script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script><![endif]-->';
    }
    else {
      return '<!--[if lt IE 9]><script src="' . base_path() . drupal_get_path('theme', 'propeople') . '/js/opt/html5shiv.js"></script><![endif]-->';
    }
  }
}

/**
 * Determine whether to use a Media Query shiv and which one.
 *
 * @return string|NULL
 */
function _propeople_mediaqueryshiv() {

  if (theme_get_setting('propeople_polyfill_mediaquery')) {
    // Use css3-mediaqueries-js.
    if (theme_get_setting('propeople_polyfill_mediaquery_type') == 1) {
      return '<!--[if lt IE 9]><script type="text/javascript" src="' . base_path() . drupal_get_path('theme', 'propeople') . '/js/opt/css3-mediaqueries.js"></script><![endif]-->';
    }
    // Use respond.js.
    else {
      return '<!--[if lt IE 9]><script type="text/javascript" src="' . base_path() . drupal_get_path('theme', 'propeople') . '/js/opt/respond.min.js"></script><![endif]-->';
    }
  }
}

/**
 * Implementation of hook_css_alter()
 */
function propeople_css_alter(&$css) {
  $exclude = array(
    'modules/field/theme/field.css' => FALSE,
    'modules/aggregator/aggregator.css' => FALSE,
    'modules/block/block.css' => FALSE,
    'modules/book/book.css' => FALSE,
//    'modules/comment/comment.css' => FALSE,
    'modules/dblog/dblog.css' => FALSE,
    'modules/file/file.css' => FALSE,
    'modules/filter/filter.css' => FALSE,
    'modules/forum/forum.css' => FALSE,
    'modules/help/help.css' => FALSE,
    'modules/menu/menu.css' => FALSE,
    'modules/node/node.css' => FALSE,
    'modules/openid/openid.css' => FALSE,
    'modules/poll/poll.css' => FALSE,
    'modules/profile/profile.css' => FALSE,
    'modules/search/search.css' => FALSE,
    'modules/statistics/statistics.css' => FALSE,
    'modules/syslog/syslog.css' => FALSE,
    'modules/system/admin.css' => FALSE,
    'modules/system/maintenance.css' => FALSE,
    'modules/system/system.css' => FALSE,
    'modules/system/system.admin.css' => FALSE,
    'modules/system/system.maintenance.css' => FALSE,
    'modules/system/system.menus.css' => FALSE,
    'modules/system/system.theme.css' => FALSE,
    // 'modules/system/system.base.css' => FALSE,
    'modules/system/system.messages.css' => FALSE,
    'modules/taxonomy/taxonomy.css' => FALSE,
    'modules/tracker/tracker.css' => FALSE,
    'modules/update/update.css' => FALSE,
    'modules/user/user.css' => FALSE,
    'misc/vertical-tabs.css' => FALSE,
    'misc/ui/jquery.ui.theme.css' => FALSE,
    'modules/contrib/views/css/views.css' => FALSE,
    'misc/ui/jquery.ui.tabs.css' => FALSE,
  );

  $css = array_diff_key($css, $exclude);
  if (drupal_is_front_page()) {
    $exclude = array(
      'modules/contrib/date/date_api/date.css' => FALSE,
      'modules/contrib/mollom/mollom.css' => FALSE,
      'modules/contrib/lazyloader/lazyloader.css' => FALSE,
      'modules/contrib/ctools/css/ctools.css' => FALSE,
    );
    $css = array_diff_key($css, $exclude);
    uasort($css, 'drupal_sort_css_js');
    $i = 0;
    foreach ($css as $name => $style) {
      $css[$name]['weight'] = $i++;
      $css[$name]['group'] = CSS_DEFAULT;
    }
    //dpm($css);
  }
}
