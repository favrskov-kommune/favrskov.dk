<?php
/**
 * @file
 * panel_news_page.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function panel_news_page_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'custom_share_used_on_news_pages';
  $content->admin_title = 'Custom share used on news pages';
  $content->admin_description = 'Custom share facebook, google plus, twitter';
  $content->category = 'HTML blocks';
  $content->settings = array(
    'admin_title' => 'Custom share used on news pages',
    'title' => '',
    'body' => '<a class="toggle-share" href="#">' . t('Share') . '</a>
<div class="addthis_toolbox addthis_default_style addthis_32x32_style">
<a class="addthis_button_facebook"></a>
<a class="addthis_button_google_plusone_share"></a>
<a class="addthis_button_twitter"></a>
</div>
<a class="print_data" href="#">' . t('Print') . '</a>
<script type="text/javascript">var addthis_config = {"data_track_addressbar":false};</script>
<script type="text/javascript" src="//s7.addthis.com/js/300/addthis_widget.js#pubid=ra-520e4c8a1550db4c"></script>',
    'format' => 'video_html',
    'substitute' => 1,
  );
  $export['custom_share_used_on_news_pages'] = $content;

  return $export;
}
