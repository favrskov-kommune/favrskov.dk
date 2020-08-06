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
 * Preprocess html.tpl.php
 */
function favrskovtheme_preprocess_html(&$vars) {
  drupal_add_library('system', 'ui.widget');
  drupal_add_js(libraries_get_path('swiper') . '/idangerous.swiper.min.js', array(
    'scope' => 'header',
    'group' => JS_LIBRARY,
    'every_page' => TRUE
  ));

  drupal_add_css('https://fast.fonts.net/cssapi/cb2b1123-533e-44b1-af78-e3702f6bd579.css',
    array('type' => 'external', 'group' => 'CSS_THEME', 'every_page' => TRUE, 'media' => 'projection, screen')
  );

  $jwplayer = drupal_get_js('jwplayer');
  $vars['jwplayer'] = $jwplayer;

  // Added meta tag for IE.
  $meta_ie_render_engine = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'content' =>  'IE=10',
      'http-equiv' => 'X-UA-Compatible',
    )
  );

  // Add header meta tag for IE to head
  drupal_add_html_head($meta_ie_render_engine, 'meta_ie_render_engine');

  $multisite_links = theme_get_setting('favrskovtheme_multisite_links');
  if (!empty($multisite_links)) {
    $vars['classes_array'][] = theme_get_setting('favrskovtheme_multisite_links');
  }

  $header_links = theme_get_setting('favrskovtheme_header_links');

  if (!empty($header_links)) {
    $vars['classes_array'][] = $header_links;
  }

  if (!empty($vars['background'])) {
    $vars['classes_array'][] = 'dynamic-background';
  }

  // jQuery custom content scroller
  drupal_add_js(libraries_get_path('malihu') . '/js/minified/jquery.mCustomScrollbar.min.js', array(
    'scope' => 'header',
    'group' => JS_LIBRARY,
    'every_page' => TRUE
  ));
  drupal_add_css(libraries_get_path('malihu') . '/jquery.mCustomScrollbar.min.css', array(
    'scope' => 'header',
    'group' => CSS_THEME,
    'every_page' => TRUE
  ));
}

/**
 * Theme function for facet api active links.
 *
 * @see theme_facetapi_link_active
 */
function favrskovtheme_facetapi_link_active($variables) {
  $sanitize = empty($variables['options']['html']);
  $link_text = ($sanitize) ? check_plain($variables['text']) : $variables['text'];

  $accessible_vars = array(
    'text' => $variables['text'],
    'active' => TRUE,
  );

  $replacements = array(
    '!facetapi_deactivate_widget' => theme('facetapi_deactivate_widget', $variables),
    '!facetapi_accessible_markup' => theme('facetapi_accessible_markup', $accessible_vars),
  );
  $variables['text'] = t('!facetapi_deactivate_widget !facetapi_accessible_markup', $replacements);
  $variables['options']['html'] = TRUE;
  return theme_link($variables) . '<span class = "active-filter">' . $link_text . '</span>';
}

/**
 * Overrides theme_site_map_box().
 *
 * Removes title from output.
 * @see theme_site_map_box()
 */
function favrskovtheme_site_map_box($variables) {
  $content = $variables['content'];
  $attributes = $variables['attributes'];

  $output = '';
  if (!empty($content)) {
    $output .= '<div' . drupal_attributes($attributes) . '>';
    $output .= '<div class="content">' . $content . '</div>';
    $output .= '</div>';
  }

  return $output;
}

/**
 * Overrides theme_date_display_range().
 */
function favrskovtheme_date_display_range($variables) {
  $day1 = $variables['dates']['value']['formatted_date'];
  $day2 = $variables['dates']['value2']['formatted_date'];
  $time1 = $variables['dates']['value']['formatted_time'];
  $time2 = $variables['dates']['value2']['formatted_time'];

  if ($day1 === $day2) {

    return t('!start-day / kl. !start-time - !end-time', array(
      '!start-day' => $day1,
      '!start-time' => $time1,
      '!end-time' => $time2,
    ));
  }
  else {
    return t("!start-day / kl. !start-time ", array(
      '!start-day' => $day1,
      '!start-time' => $time1,
    )) . '-<br>' .
    t("!end-day / kl. !end-time", array(
      '!end-day' => $day2,
      '!end-time' => $time2,
    ));
  }
}

/**
 * Overrides theme_date_display_combination().
 */
function favrskovtheme_date_display_combination($variables) {
  static $repeating_ids = array();

  $entity_type = $variables['entity_type'];
  $entity = $variables['entity'];
  $field = $variables['field'];
  $instance = $variables['instance'];
  $langcode = $variables['langcode'];
  $item = $variables['item'];
  $delta = $variables['delta'];
  $display = $variables['display'];
  $field_name = $field['field_name'];
  $formatter = $display['type'];
  $options = $display['settings'];
  $dates = $variables['dates'];
  $attributes = $variables['attributes'];
  $rdf_mapping = $variables['rdf_mapping'];
  $add_rdf = $variables['add_rdf'];
  $precision = date_granularity_precision($field['settings']['granularity']);

  $output = '';

  // If date_id is set for this field and delta doesn't match, don't display it.
  if (!empty($entity->date_id)) {
    foreach ((array) $entity->date_id as $key => $id) {
      list($module, $nid, $field_name, $item_delta, $other) = explode('.', $id . '.');
      if ($field_name == $field['field_name'] && isset($delta) && $item_delta != $delta) {
        return $output;
      }
    }
  }

  // Check the formatter settings to see if the repeat rule should be displayed.
  // Show it only with the first multiple value date.
  list($id) = entity_extract_ids($entity_type, $entity);
  if (!in_array($id, $repeating_ids) && module_exists('date_repeat_field') && !empty($item['rrule']) && $options['show_repeat_rule'] == 'show') {
    $repeat_vars = array(
      'field' => $field,
      'item' => $item,
      'entity_type' => $entity_type,
      'entity' => $entity,
    );
    $output .= theme('date_repeat_display', $repeat_vars);
    $repeating_ids[] = $id;
  }

  // If this is a full node or a pseudo node created by grouping multiple
  // values, see exactly which values are supposed to be visible.
  if (isset($entity->$field_name)) {
    $entity = date_prepare_entity($formatter, $entity_type, $entity, $field, $instance, $langcode, $item, $display);
    // Did the current value get removed by formatter settings?
    if (empty($entity->{$field_name}[$langcode][$delta])) {
      return $output;
    }
    // Adjust the $element values to match the changes.
    $element['#entity'] = $entity;
  }

  switch ($options['fromto']) {
    case 'value':
      $date1 = $dates['value']['formatted'];
      $date2 = $date1;
      break;
    case 'value2':
      $date2 = $dates['value2']['formatted'];
      $date1 = $date2;
      break;
    default:
      $date1 = $dates['value']['formatted'];
      $date2 = $dates['value2']['formatted'];
      break;
  }

  // Pull the timezone, if any, out of the formatted result and tack it back on
  // at the end, if it is in the current formatted date.
  $timezone = $dates['value']['formatted_timezone'];
  if ($timezone) {
    $timezone = ' ' . $timezone;
  }
  $date1 = str_replace($timezone, '', $date1);
  $date2 = str_replace($timezone, '', $date2);
  $time1 = preg_replace('`^([\(\[])`', '', $dates['value']['formatted_time']);
  $time1 = preg_replace('([\)\]]$)', '', $time1);
  $time2 = preg_replace('`^([\(\[])`', '', $dates['value2']['formatted_time']);
  $time2 = preg_replace('([\)\]]$)', '', $time2);

  // A date with a granularity of 'hour' has a time string that is an integer
  // value. We can't use that to replace time strings in formatted dates.
  $has_time_string = date_has_time($field['settings']['granularity']);
  if ($precision == 'hour') {
    $has_time_string = FALSE;
  }

  // No date values, display nothing.
  if (empty($date1) && empty($date2)) {
    $output .= '';
  }
  // Start and End dates match or there is no End date, display a complete
  // single date.
  elseif ($date1 == $date2 || empty($date2)) {
    $output .= theme('date_display_single', array(
      'date' => $date1,
      'timezone' => $timezone,
      'attributes' => $attributes,
      'rdf_mapping' => $rdf_mapping,
      'add_rdf' => $add_rdf,
      'dates' => $dates,
    ));
  }

  else {
    $output .= theme('date_display_range', array(
      'date1' => $date1,
      'date2' => $date2,
      'timezone' => $timezone,
      'attributes' => $attributes,
      'rdf_mapping' => $rdf_mapping,
      'add_rdf' => $add_rdf,
      'dates' => $dates,
    ));
  }

  return $output;
}

/**
 * Overrides theme_date_display_single().
 */
function favrskovtheme_date_display_single($variables) {
  if ($variables['dates']['format'] === 'l d. M Y G') {
    $day = $variables['dates']['value']['formatted_date'];
    $time = $variables['dates']['value']['formatted_time'];

    return t('!start-day / kl. !start-time', array(
      '!start-day' => $day,
      '!start-time' => $time,
    ));

  }

  if ($variables['dates']['format'] === 'd M') {
    $day = t(date_format($variables['dates']['value']['db']['object'], 'd'));
    $month = t(date_format($variables['dates']['value']['db']['object'], 'M'));

    return '<time datetime="' . $variables['attributes']['content'] . '"><span class="day">' . $day . '</span><span class="month">' . $month . '</span></time>';
  }
  return theme_date_display_single($variables);
}

/**
 * Implements theme_breadcrumb().
 *
 * Remove Home and change breadcrubs delimiter.
 */
function favrskovtheme_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];

  if (!empty($breadcrumb)) {
    array_shift($breadcrumb);

    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

    $output .= '<div class="breadcrumb">' . implode(' / ', $breadcrumb) . '</div>';
    return $output;
  }
}

/**
 * Implements hook_css_alter()
 */
function favrskovtheme_css_alter(&$css) {
  $exclude = array();

  if (module_exists('views')) {
    $exclude[drupal_get_path('module', 'views') . '/css/views.css'] = FALSE;
  }

  if (module_exists('os2web_borger_dk_articles')) {
    $exclude[drupal_get_path('module', 'os2web_borger_dk_articles') . '/css/os2web_borger_dk_articles.css'] = FALSE;
  }

  if (module_exists('print')) {
    $exclude[drupal_get_path('module', 'print') . '/css/printlinks.css'] = FALSE;
  }

  if (module_exists('field_collection')) {
    $exclude[drupal_get_path('module', 'field_collection') . '/field_collection.theme.css'] = FALSE;
  }

  if (module_exists('eu_cookie_compliance')) {
    $exclude[drupal_get_path('module', 'eu_cookie_compliance') . '/css/eu_cookie_compliance.css'] = FALSE;
  }

  $css = array_diff_key($css, $exclude);
}

/**
 * Implements hook_js_alter()
 */
function favrskovtheme_js_alter(&$js) {
  $exclude = array();

  if (module_exists('os2web_borger_dk_articles')) {
    $exclude[drupal_get_path('module', 'os2web_borger_dk_articles') . '/js/os2web_borger_dk_articles.js'] = FALSE;
  }

  if (module_exists('comment_notify')) {
    $exclude[drupal_get_path('module', 'comment_notify') . '/comment_notify.js'] = FALSE;
  }

  $js = array_diff_key($js, $exclude);

  $override_file = drupal_get_path('module', 'views_load_more') . '/views_load_more.js';
  if(isset($js[$override_file])) {
    $js[$override_file]['data'] = drupal_get_path('theme', 'favrskovtheme') . '/js/override_views_load_more.js';
  }
//  dpm($js);
//  dpm(drupal_get_path('module', 'views_load_more') . '/views_load_more.js');
//  dpm(drupal_get_path('theme', 'favrskovtheme') . '/js/override_views_load_more.js');
}

/**
 * Overrides theme_file_link().
 */
function favrskovtheme_file_link($variables) {
  $file = $variables['file'];
  $icon_directory = $variables['icon_directory'];

  $url = file_create_url($file->uri);
  $icon = theme('file_icon', array('file' => $file, 'icon_directory' => $icon_directory));

  // Set options as per anchor format described at
  // http://microformats.org/wiki/file-format-examples
  $options = array(
    'attributes' => array(
      'type' => $file->filemime . '; length=' . $file->filesize,
    ),
  );

  // Use the description as the link text if available.
  if (empty($file->field_link_title)) {
    $link_text = $file->filename;
  }
  else {
    $link_text = $file->field_link_title['und'][0]['value'];
    $options['attributes']['title'] = check_plain($file->filename);
  }

  //open files of particular mime types in new window
  $new_window_mimetypes = array('application/pdf');
  if (in_array($file->filemime, $new_window_mimetypes)) {
    $options['attributes']['target'] = '_blank';
  }

  if (isset($variables['file']->target)) {
    $options['attributes']['target'] = $variables['file']->target;
  }

  return '<span class="file">' . $icon . ' ' . l($link_text, $url, $options) . '</span>';
}

/**
 * Implements template_preprocess_views_view_table().
 */
function favrskovtheme_preprocess_views_view_table(&$vars) {
  $view = $vars['view'];

  if ($view->name == 'job' && $view->current_display == 'job_listing_by_table') {
    drupal_add_js(drupal_get_path('theme', 'favrskovtheme') . '/js/job-list-clickable.js');
  }

  // Count of nodes in each category and concatenate with title to create
  // job list table title
  $categories = array();
  foreach ($vars['rows'] as $row_count => $row) {
    $categories[] = $row['field_job_category'];
  }

  $categories_count = count($categories);
  $vars['category_title'] = $vars['title'] . " " . "(" . $categories_count . ")";

  // We need the raw data for this grouping, which is passed in as $vars['rows'].
  // However, the template also needs to use for the rendered fields.  We
  // therefore swap the raw data out to a new variable and reset $vars['rows']
  // so that it can get rebuilt.
  // Store rows so that they may be used by further preprocess functions.
  $result = $vars['result'] = $vars['rows'];
  $vars['rows'] = array();
  $vars['field_classes'] = array();
  $vars['header'] = array();

  $options = $view->style_plugin->options;
  $handler = $view->style_plugin;

  $default_row_class = isset($options['default_row_class']) ? $options['default_row_class'] : TRUE;
  $row_class_special = isset($options['row_class_special']) ? $options['row_class_special'] : TRUE;

  $fields = & $view->field;
  $columns = $handler->sanitize_columns($options['columns'], $fields);

  $active = !empty($handler->active) ? $handler->active : '';
  $order = !empty($handler->order) ? $handler->order : 'asc';

  $query = tablesort_get_query_parameters();
  if (isset($view->exposed_raw_input)) {
    $query += $view->exposed_raw_input;
  }

  // Fields must be rendered in order as of Views 2.3, so we will pre-render
  // everything.
  $renders = $handler->render_fields($result);

  foreach ($columns as $field => $column) {
    // Create a second variable so we can easily find what fields we have and what the
    // CSS classes should be.
    $vars['fields'][$field] = drupal_clean_css_identifier($field);
    if ($active == $field) {
      $vars['fields'][$field] .= ' active';
    }

    // render the header labels
    if ($field == $column && empty($fields[$field]->options['exclude'])) {
      $label = check_plain(!empty($fields[$field]) ? $fields[$field]->label() : '');
      if (empty($options['info'][$field]['sortable']) || !$fields[$field]->click_sortable()) {
        $vars['header'][$field] = $label;
      }
      else {
        $initial = !empty($options['info'][$field]['default_sort_order']) ? $options['info'][$field]['default_sort_order'] : 'asc';

        if ($active == $field) {
          $initial = ($order == 'asc') ? 'desc' : 'asc';
        }

        $title = t('sort by @s', array('@s' => $label));
        if ($active == $field) {
          $label .= theme('tablesort_indicator', array('style' => $initial));
        }

        $query['order'] = $field;
        $query['sort'] = $initial;
        $link_options = array(
          'html' => TRUE,
          'attributes' => array('title' => $title),
          'query' => $query,
        );
        $vars['header'][$field] = l($label, $_GET['q'], $link_options);
      }

      $vars['header_classes'][$field] = '';
      // Set up the header label class.
      if ($fields[$field]->options['element_default_classes']) {
        $vars['header_classes'][$field] .= "views-field views-field-" . $vars['fields'][$field];
      }
      $class = $fields[$field]->element_label_classes(0);
      if ($class) {
        if ($vars['header_classes'][$field]) {
          $vars['header_classes'][$field] .= ' ';
        }
        $vars['header_classes'][$field] .= $class;
      }
      // Add a CSS align class to each field if one was set
      if (!empty($options['info'][$field]['align'])) {
        $vars['header_classes'][$field] .= ' ' . drupal_clean_css_identifier($options['info'][$field]['align']);
      }

      // Add a header label wrapper if one was selected.
      if ($vars['header'][$field]) {
        $element_label_type = $fields[$field]->element_label_type(TRUE, TRUE);
        if ($element_label_type) {
          $vars['header'][$field] = '<' . $element_label_type . '>' . $vars['header'][$field] . '</' . $element_label_type . '>';
        }
      }

    }

    // Add a CSS align class to each field if one was set
    if (!empty($options['info'][$field]['align'])) {
      $vars['fields'][$field] .= ' ' . drupal_clean_css_identifier($options['info'][$field]['align']);
    }

    // Render each field into its appropriate column.
    foreach ($result as $num => $row) {
      // Add field classes
      $vars['field_classes'][$field][$num] = '';
      if ($fields[$field]->options['element_default_classes']) {
        $vars['field_classes'][$field][$num] = "views-field views-field-" . $vars['fields'][$field];
      }
      if ($classes = $fields[$field]->element_classes($num)) {
        if ($vars['field_classes'][$field][$num]) {
          $vars['field_classes'][$field][$num] .= ' ';
        }

        $vars['field_classes'][$field][$num] .= $classes;
      }
      $vars['field_attributes'][$field][$num] = array();

      if (!empty($fields[$field]) && empty($fields[$field]->options['exclude'])) {
        $field_output = $renders[$num][$field];
        $element_type = $fields[$field]->element_type(TRUE, TRUE);

        // Custom render settings for newsletter tables
        $field_prefix = '';
        $field_suffix = '';
        $element_style = '';
        if ($view->name == 'view_newsletter' && $view->current_display == 'related_news_list') {
          switch ($field) {
            case 'title':
              $element_type = 'h3';
              $element_style = 'style="width:255px; margin:0; font-size:22px; font-weight:bold; font-family:Trebuchet MS, Arial, Helvetica, sans-serif; line-height:120%;"';
              $field_output = substr_replace($field_output, 'style="color:#586464; text-decoration:none;" ', 3, 0);
              break;
            case 'field_teaser':
              $element_type = 'p';
              $element_style = 'style="color:#666; font-size:16px; line-height:145%;"';
              break;
          }
        }
        elseif ($view->name == 'view_newsletter' && $view->current_display == 'related_events_list') {
          switch ($field) {
            case 'field_kultunaut_event_start_date':
              $element_type = 'h3';
              $element_style = 'style="float:left; display: block; width:50px; padding:8px 0 12px; background:#a00a14; margin:0; color:#fff; text-align:center; text-transform:uppercase; font-size:16px; font-weight:bold; font-family:Trebuchet MS, Arial, Helvetica, sans-serif; line-height:18px;"';
              $field_output = substr_replace($field_output, 'style="display: block;" ', 49, 0);
              $field_output = substr_replace($field_output, 'style="display: block;" ', 76, 0);
              break;
            case 'field_kultunaut_event_category':
              $element_type = 'h3';
              $element_style = 'style="border-top:8px solid #ccc; margin:24px 0 0 62px; text-align:right; font-size:14px; font-weight:normal; color:#999; padding-top:5px;"';
              $field_suffix = '</h3>';
              break;
            case 'title':
              $element_type = 'h4';
              $element_style = 'style="margin:0 0 13px; padding:20px 25px 0; font-size:24px; font-weight:bold; font-family:Trebuchet MS, Arial, Helvetica, sans-serif; color:#666;"';
              $field_output = substr_replace($field_output, 'style="text-decoration:none; color:#666;" ', 3, 0);
              break;
            case 'body':
              $field_prefix = '<p style="margin:0; padding:0 25px; line-height:140%; font-size:16px; color:#666;">';
              $element_type = '';
              $element_style = '';
              $field_suffix = '<br/><br/>';
              break;
            case 'field_kultunaut_event_date':
              $field_prefix = '<strong>';
              $element_type = '';
              $element_style = '';
              $field_suffix = ', ';
              break;
            case 'field_kultunaut_event_time':
              $element_type = '';
              $element_style = '';
              $field_suffix = '<br/>';
              break;
            case 'field_kultunaut_event_location':
              $element_type = '';
              $element_style = '';
              $field_suffix = '</strong></p>';
              break;
          }
        }
        elseif ($view->name == 'view_newsletter' && $view->current_display == 'related_links_list') {
          if (!empty($renders[$num]['field_related_links_content'])) {
            $renders[$num]['field_related_links_link'] = '';
          }
          if (!empty($field_output)) {
            $element_type = 'li';
            $element_style = 'style="font-size:16px; line-height:210%;"';
            $field_output = substr_replace($field_output, 'style="color:#a00a14; font-weight:bold; text-decoration:none;"" ', 3, 0);
            $field_output = '<img src="https://gallery.mailchimp.com/a1a119610f0500f5d6b47c1ec/images/arrow.1.png" width="9" height="14" style="vertical-align:middle; padding-right:8px;" alt="Arrow">' . $field_output;
          }
        }

        if ($element_type) {
          if ($element_style) {
            $field_output = '<' . $element_type . ' ' . $element_style . '>' . $field_output . '</' . $element_type . '>';
          }
          else {
            $field_output = '<' . $element_type . '>' . $field_output . '</' . $element_type . '>';
          }
        }

        if ($field_prefix) {
          $field_output = $field_prefix . $field_output;
        }

        if ($field_suffix) {
          $field_output = $field_output . $field_suffix;
        }

        // Don't bother with separators and stuff if the field does not show up.
        if (empty($field_output) && !empty($vars['rows'][$num][$column])) {
          continue;
        }

        // Place the field into the column, along with an optional separator.
        if (!empty($vars['rows'][$num][$column])) {
          if (!empty($options['info'][$column]['separator'])) {
            $vars['rows'][$num][$column] .= filter_xss_admin($options['info'][$column]['separator']);
          }
        }
        else {
          $vars['rows'][$num][$column] = '';
        }

        $vars['rows'][$num][$column] .= $field_output;
      }
    }

    // Remove columns if the option is hide empty column is checked and the field is not empty.
    if (!empty($options['info'][$field]['empty_column'])) {
      $empty = TRUE;
      foreach ($vars['rows'] as $num => $columns) {
        $empty &= empty($columns[$column]);
      }
      if ($empty) {
        foreach ($vars['rows'] as $num => &$column_items) {
          unset($column_items[$column]);
          unset($vars['header'][$column]);
        }
      }
    }
  }

  // Hide table header if all labels are empty.
  if (!array_filter($vars['header'])) {
    $vars['header'] = array();
  }

  $count = 0;
  foreach ($vars['rows'] as $num => $row) {
    $vars['row_classes'][$num] = array();
    if ($row_class_special) {
      $vars['row_classes'][$num][] = ($count++ % 2 == 0) ? 'odd' : 'even';
    }
    if ($row_class = $handler->get_row_class($num)) {
      $vars['row_classes'][$num][] = $row_class;
    }
  }

  if ($row_class_special) {
    $vars['row_classes'][0][] = 'views-row-first';
    $vars['row_classes'][count($vars['row_classes']) - 1][] = 'views-row-last';
  }

  $vars['classes_array'] = array('views-table');
  if (empty($vars['rows']) && !empty($options['empty_table'])) {
    $vars['rows'][0][0] = $view->display_handler->render_area('empty');
    // Calculate the amounts of rows with output.
    $vars['field_attributes'][0][0]['colspan'] = count($vars['header']);
    $vars['field_classes'][0][0] = 'views-empty';
  }

  if (!empty($options['sticky'])) {
    drupal_add_js('misc/tableheader.js');
    $vars['classes_array'][] = "sticky-enabled";
  }
  $vars['classes_array'][] = 'cols-' . count($vars['header']);

  // Add the summary to the list if set.
  if (!empty($handler->options['summary'])) {
    $vars['attributes_array'] = array('summary' => filter_xss_admin($handler->options['summary']));
  }

  // Add the caption to the list if set.
  if (!empty($handler->options['caption'])) {
    $vars['caption'] = filter_xss_admin($handler->options['caption']);
  }
  else {
    $vars['caption'] = '';
  }
}

/**
 * Overrides favrskovtheme_apachesolr_search_snippets__file().
 */
function favrskovtheme_apachesolr_search_snippets__file($vars) {
  $snippets = $vars['flattened_snippets'];
  return implode(' ... ', $snippets) . ' ... ';
}

/**
 * Implements hook_preprocess_comment().
 *
 * Removes reply button on comments and changes format of date displaying in comment.
 */
function favrskovtheme_preprocess_comment(&$variables) {
//  unset($variables['content']['links']['comment']['#links']['comment-reply']);
  $variables['created'] = format_date($variables['elements']['#comment']->created, 'custom', 'd. F Y - H:i');
  $variables['submitted'] = t('Submitted by !username on !datetime', array(
    '!username' => $variables['author'],
    '!datetime' => $variables['created']
  ));
}

/**
 * Implements hook_preprocess_table().
 *
 * Adds class 'responsive' to the table if it is tablefield instance and includes a script for responsive.
 */
function favrskovtheme_preprocess_table(&$variables) {
  if (isset($variables['attributes']) && isset($variables['attributes']['class']) && in_array('tablefield', $variables['attributes']['class'])) {
    $variables['attributes']['class'][] = 'responsive';
    drupal_add_js(drupal_get_path('theme', 'favrskovtheme') . '/responsive_tables/responsive-tables.js');
    drupal_add_css(drupal_get_path('theme', 'favrskovtheme') . '/responsive_tables/responsive-tables.css');
  }
}

/**
 * Implements hook_preprocess_node().
 *
 * Adds node template suggestions for different view modes of node.
 */
function favrskovtheme_preprocess_node(&$vars) {
  $vars['theme_hook_suggestions'][] = 'node__' . $vars['type'] . '__' . $vars['view_mode'];
}

/**
 * Overrides theme_os2web_case_publishing_documents_list().
 *
 * Theming of the case list of documents.
 * Used by the Display Documents List.
 */
function favrskovtheme_os2web_case_publishing_documents_list($variables) {
  $files = $variables['files'];
  $options = $variables['options'];
  $attributes = $variables['attributes'];
  $output = '';

  if (count($files) > 0) {
    $output = '';
    $output .= '<ul' . drupal_attributes($attributes) . '>';

    $num_links = count($files);
    $i = 1;

    foreach ($files as $key => $file) {
      if (is_array($file)) {
        $file = (object) $file;
      }
      $class = array();
      // Add first and last classes to the list of links to help out themers.
      if ($i == 1) {
        $class[] = 'first';
      }
      if ($i == $num_links) {
        $class[] = 'last';
      }
      $output .= '<li' . drupal_attributes(array('class' => $class)) . '>';

      $ext = substr($file->uri, strrpos($file->uri, '.') + 1);
      $link['title'] = !empty($file->description) ? $file->description : $file->filename;
      $link['title'] .= ' (' . $ext . ')';
      $link['href'] = file_create_url($file->uri);
      $link['options'] = array(
        'attributes' => array(
          'type' => $file->filemime . '; length=' . $file->filesize,
          'target' => $options['target'],
          'title' => check_plain($file->filename),
        ),
      );

      // Pass in $link as $options, they share the same keys.
      $output .= l($link['title'], $link['href'], $link['options']);

      $i++;
      $output .= "</li>\n";
    }

    $output .= '</ul>';
  }

  return $output;
}

/**
 * Implements hook_preprocess_webform_confirmation().
 *
 * Change link title for hearing responses.
 */
function favrskovtheme_preprocess_webform_confirmation (&$variables, $hook) {
  // Default for all webforms
  $variables['link_url'] = url('node/'. $variables['node']->nid);
  $variables['link_title'] = t('Go back to the form');
  $variables['link_tip'] = t('Go back to the form');
}

/*
 * Override field theme. Display translated label
 */
function favrskovtheme_field($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . t($variables['label']) . ':&nbsp;</div>';
  }

  // Render the items.
  $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
  foreach ($variables['items'] as $delta => $item) {
    $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
  }
  $output .= '</div>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}

/**
 * Override output of text data for webform file component
 */
function favrskovtheme_webform_display_file($variables) {
  $element = $variables['element'];
  $file = $element['#value'];
  // check target
  $attr = array();
  if (isset($element['#webform_component']['extra']['new_window']) && $element['#webform_component']['extra']['new_window']) {
    $attr['attributes'] = array('target' => '_blank');
  }
  $url = !empty($file) ? webform_file_url($file->uri) : t('no upload');
  return !empty($file) ? ($element['#format'] == 'text' ? $url : l($file->filename, $url, $attr)) : ' ';
}

/**
 * Implements hook_preprocess_views_view().
 *
 * Allow to override pane titles in panels for views.
 */
function favrskovtheme_preprocess_views_view(&$vars) {
  $view = $vars['view'];
  $display_title = '';

  if (!empty($view->display_handler->options['pane_conf'])) {
    $is_override_title = !empty($view->display_handler->options['pane_conf']['override_title']) ? $view->display_handler->options['pane_conf']['override_title'] : 0;
    if ($is_override_title == 1) {
      $display_title = $view->display_handler->options['pane_conf']['override_title_text'];
    }
    else {
      $display_title = $view->get_title();
    }
    $vars['display_title'] = $display_title;
  }
  $vars['display_title'] = $display_title;
}

/**
 *  Implements hook_theme().
 */
function favrskovtheme_theme() {
  $items = array();

  $items['user_login'] = array(
    'render element' => 'form',
    'path' => drupal_get_path('theme', 'favrskovtheme') . '/template/user',
    'template' => 'user-login',
  );

  $items['user_pass'] = array(
    'render element' => 'form',
    'path' => drupal_get_path('theme', 'favrskovtheme') . '/template/user',
    'template' => 'user-pass',
  );

  return $items;
}

/**
 * Implements hook_preprocess_HOOK().
 */
function favrskovtheme_preprocess_panels_pane(&$variables) {
//  dpm($variables);
  $pane = $variables['pane'];
  if($pane->type == 'footer_logo' || $pane->type == 'page_logo') {
    $content = $variables['content'];
    $content = str_replace('alt="Hjem"', 'alt="Favrskov Kommune"', $content);
    $variables['content'] = $content;
  }
}
