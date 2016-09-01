<?php
$require_login = '';
if (!empty($content['field_require_login']['#items'][0]['value'])) {
  $require_login = 'require-login';
}

print '<div class="self-service ' . $require_login . '">';

$link = !empty($content['field_external_link']['#items'][0]) ? $content['field_external_link']['#items'][0] : array('url' => '');

$text = render($content['field_displayed_title']);
$text .= render($content['field_teaser']);
$text .= '<span class="require-type"></span>';

print l($text, $link['url'], array(
  'html' => TRUE,
  'attributes' => array(
    'title' => $content['field_image_alt_text'][0]['#markup'],
    'target' => $link['attributes']['target']
  )
));

print '</div>';