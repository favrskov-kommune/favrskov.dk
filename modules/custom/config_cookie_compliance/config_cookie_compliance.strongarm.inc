<?php
/**
 * @file
 * config_cookie_compliance.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function config_cookie_compliance_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_da';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 1,
    'popup_position' => 1,
    'popup_agree_button_message' => t('OK, I agree'),
    'popup_disagree_button_message' => t('No, give me more info'),
    'popup_info' => array(
      'value' => '<h2>Vi anvender cookies på denne hjemmeside til at forbedre din brugeroplevelse</h2>

<p>Ved at klikke på et link på denne side, giver du os tilladelse til at&nbsp; sætte cookies</p>
',
      'format' => 'full_html',
    ),
    'popup_agreed_enabled' => 1,
    'popup_hide_agreed' => 0,
    'popup_find_more_button_message' => t('More info about cookies'),
    'popup_hide_button_message' => t('Hide this message'),
    'popup_agreed' => array(
      'value' => '<h2>Tak for at acceptere cookies</h2>

<p>Du kan skjule denne meddelelse, eller finde ud af mere om cookies</p>
',
      'format' => 'full_html',
    ),
    'popup_link' => 'http://www.ico.org.uk/for_organisations/privacy_and_electronic_communications/the_guide/cookies',
    'popup_link_new_window' => 1,
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => 'a00a14',
    'popup_text_hex' => 'ffffff',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => 'admin/*',
  );
  $export['eu_cookie_compliance_da'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_en';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 1,
    'popup_position' => 1,
    'popup_agree_button_message' => 'OK, I agree',
    'popup_disagree_button_message' => 'No, give me more info',
    'popup_info' => array(
      'value' => '<h2>We use cookies on this site to enhance your user experience</h2>

<p>By clicking any link on this page you are giving your consent for us to set cookies.</p>
',
      'format' => 'full_html',
    ),
    'popup_agreed_enabled' => 1,
    'popup_hide_agreed' => 0,
    'popup_find_more_button_message' => 'More info about cookies',
    'popup_hide_button_message' => 'Hide this message',
    'popup_agreed' => array(
      'value' => '<h2>Thank you for accepting cookies</h2>

<p>You can now hide this message or find out more about cookies.</p>
',
      'format' => 'full_html',
    ),
    'popup_link' => 'http://www.ico.org.uk/for_organisations/privacy_and_electronic_communications/the_guide/cookies',
    'popup_link_new_window' => 1,
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => 'a00a14',
    'popup_text_hex' => 'ffffff',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => 'admin/*',
  );
  $export['eu_cookie_compliance_en'] = $strongarm;

  return $export;
}
