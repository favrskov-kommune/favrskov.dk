<?php
namespace Drupal\favrskov_plugins\Plugin\Field\FieldFormatter;

use Drupal\Core\Field\FieldItemListInterface;
use Drupal\Core\Field\FormatterBase;

/**
 * Plugin implementation of the 'favrskov_cdn_video_formatter' formatter.
 *
 * @FieldFormatter(
 *   id = "favrskov_cdn_video_formatter",
 *   label = @Translation("Favrskov CDN Video formatter"),
 *   field_types = {
 *     "string"
 *   }
 * )
 */
class FavrskovCDNVideoFormatter extends FormatterBase {

  /**
   * {@inheritdoc}
   */
  public function viewElements(FieldItemListInterface $items, $langcode) {
    $elements = [];

    foreach ($items as $delta => $item) {
      // If the video does not contain video extension render it in an iframe.
      if (!preg_match('/\.(mp4|webm|ogg)$/', $item->value)) {
        $elements[$delta] = [
          '#type' => 'html_tag',
          '#tag' => 'iframe',
          '#attributes' => [
            'src' => str_replace('/watch', '/iframe', $item->value),
            'style' => "border: none",
            'height' => "720",
            'width' => "1280",
            'allow' => "accelerometer; gyroscope; autoplay; encrypted-media; picture-in-picture;",
            'allowfullscreen' => "true"
          ],
        ];
      } else {
        $elements[$delta] = [
          '#type' => 'html_tag',
          '#tag' => 'video',
          '#attributes' => [
            'width' => '560',
            'height' => '315',
            'controls' => '',
          ],
          'source' => [
            '#type' => 'html_tag',
            '#tag' => 'source',
            '#attributes' => [
              'src' => $item->value,
              'type' => 'video/mp4',
            ],
          ]
        ];
      }
    }

    return $elements;
  }

}
