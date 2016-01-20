<?php

/**
 * Implements hook_token_info().
 */
function favrskov_helper_token_info() {
  $info = array();

  $info['types']['favrskov_tokens'] = array(
    'name' => t('Favrskov.dk tokens'),
    'description' => t('Custom tokens for Favrskov.dk.'),
  );

  $info['tokens']['favrskov_tokens']['news_path_alias_taxonomy'] = array(
    'name' => t('News path alias taxonomy name'),
    'description' => t('Specifies correct subject-area taxonomy name for generating correct path alias.'),
  );

  $info['tokens']['favrskov_tokens']['article_path_alias_taxonomy'] = array(
    'name' => t('Article path alias taxonomy name'),
    'description' => t('Specifies correct subject-area taxonomy name for generating correct path alias.'),
  );

  return $info;
}

/**
 * Implements hook_tokens().
 */
function favrskov_helper_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $replacements = array();

  if (!empty($data['node']) && $type == 'favrskov_tokens') {
    foreach ($tokens as $name => $original) {
      switch ($name) {
        case 'news_path_alias_taxonomy':
          $replacements[$original] = '';

          // If we have 1-level subject area taxonomy item we get empty string.
          // If we have 2-level or 3-level subject area taxonomy item we choose
          // 2nd level taxonomy item as a replacement.
          // If we haven`t subject area taxonomy item we get empty string.

          $tid = $data['node']->field_taxonomy_subject_area[LANGUAGE_NONE][0]['tid'];

          if ($tid) {
            $parents_all = taxonomy_get_parents_all($tid);

            if (count($parents_all) > 1) {
              array_pop($parents_all);
              $term = end($parents_all);

              if (module_exists('pathauto')) {
                $replacements[$original] = pathauto_cleanstring($term->name);
              }
              else {
                $name = str_replace(' ', '-', $term->name);
                $replacements[$original] = drupal_strtolower($name);
              }
            }
          }

          break;
        case 'article_path_alias_taxonomy':
          $tid = $data['node']->field_taxonomy_subject_area[LANGUAGE_NONE][0]['tid'];

          if ($tid) {
            $parents_all = taxonomy_get_parents_all($tid);

            $parents_all = array_filter($parents_all, function ($term) {
              if ($term->name == 'Favrskov.dk') {
                return FALSE;
              }

              if (module_exists('pathauto')) {
                $term->cleaned_name = pathauto_cleanstring($term->name);
              }

              return TRUE;
            });


            $parents_all = array_reverse($parents_all);
            $cleaned_alias = '';
            $term_num = 0;

            foreach ($parents_all as $term) {
              $cleaned_term_name = $term->cleaned_name;

              if ($term_num > 0) {
                $cleaned_alias .= 'favrskovtokensseparator' . $cleaned_term_name;
              }
              else {
                $cleaned_alias .= $cleaned_term_name;
              }

              $term_num++;
            }

            $replacements[$original] = $cleaned_alias;

            break;
          }
      }
    }
  }

  return $replacements;
}
