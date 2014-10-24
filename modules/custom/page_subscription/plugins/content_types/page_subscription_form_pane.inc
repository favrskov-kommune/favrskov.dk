<?php

/**
 * @file
 * Pane for Svitzer register form
 */

/**
 * Callback function to supply a list of content types.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Mailchimp Subscription Form'),
  'category' => t('ProPeople'),
  'render callback' => 'page_subscription_form_pane_render',
  'all contexts' => TRUE,
);

/**
 * Rendering of subscription form
 */
function page_subscription_form_pane_render($subtype, $conf, $args, $context) {
  ctools_add_js('page_subscription_toggle_checkboxes', 'page_subscription');

  $form = mailchimp_lists_freeform_subscribe_page();
  $interest_groups = & $form['mailchimp_lists']['mailchimp_page_subscription']['interest_groups'];

  $vocabularies = variable_get('mailchimp_groups_taxonomy_vocabularies', array());

  foreach ($vocabularies as $vocabulary) {
    if ($vocabulary) {
      $grouping_id = variable_get('mailchimp_groups_taxonomy_parent_grouping_id_' . $vocabulary, NULL);

      if ($grouping_id) {
        $interest_groups[$grouping_id]['#field_prefix'] = variable_get('mailchimp_groups_taxonomy_description_' . $vocabulary, '');
      }
      else {
        $tree = taxonomy_get_tree($vocabulary, 0, 1, TRUE);

        foreach ($tree as $term) {
          $description = field_get_items('taxonomy_term', $term, 'field_subscribe_page_description');
          $grouping_id = field_get_items('taxonomy_term', $term, 'field_mailchimp_grouping_id');
          if ($grouping_id) {
            $interest_groups[$grouping_id[0]['value']]['#field_prefix'] = $description ? $description[0]['value'] : $term->description;
          }
        }
      }
    }
  }

  $form['mailchimp_lists']['mailchimp_nyheder_fra_roskilde_kommune']['interest_groups']['#title'] = t('Newsletter');
  $form['mailchimp_lists']['mailchimp_page_subscription']['interest_groups']['#title'] = t('Page subscription');

  // SMS service on subscription form
  $form['mailchimp_lists']['sms_service'] = array(
    '#type' => 'fieldset',
    '#title' => t('SMS service'),
    '#weight' => 1,
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
    '#id' => 'sms-service',
  );

  $form['mailchimp_lists']['sms_service']['dagrenovation_og_papir'] = array(
    '#type' => 'item',
    '#title' => 'Dagrenovation og papir',
    '#markup' => '<div class="field-prefix">Du kan modtage en SMS eller e-mail fx dagen før, du får hentet <a href="http://roskilde.renoweb.dk/borger_sms.aspx" target="_blank">dagrenovation og papir</a></div>',
  );

  $form['mailchimp_lists']['sms_service']['vejarbejde_eller_andet'] = array(
    '#type' => 'item',
    '#title' => 'Vejarbejde eller andet',
    '#markup' => '<div class="field-prefix">Du kan få en SMS hvis der er <a href="http://roskilde.dk/borger/trafik/driftsstatus" target="_blank">vejarbejde eller andet</a>, der berører dig der, hvor du bor<div class="field-prefix">',
  );

  $block = new stdClass();
  $block->content = render($form);

  return $block;
}