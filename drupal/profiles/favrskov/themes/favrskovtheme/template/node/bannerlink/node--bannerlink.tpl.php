<?php

$class = !empty($content['field_banner_link_color']) ? $content['field_banner_link_color']['#items'][0]['value'] : '';
print '<div class="banner-link self-service ' . $class . '">';

$link = !empty($content['field_external_link']['#items'][0]) ? $content['field_external_link']['#items'][0] : array('url' => '');

$text = render($content['field_displayed_title']);
$text .= render($content['field_teaser']);

$text .= '<span class="banner-link-icon">';
$text .= '</span>';
$text .= '<span class="require-type"></span>';

print l($text, $link['url'], array(
  'html' => TRUE,
  'attributes' => array(
    'title' => empty($content['field_image_alt_text'][0]['#markup']) ? '' : $content['field_image_alt_text'][0]['#markup'],
    'target' => empty($link['attributes']['target']) ? '_self' : $link['attributes']['target']
  )
));

print '</div>';
