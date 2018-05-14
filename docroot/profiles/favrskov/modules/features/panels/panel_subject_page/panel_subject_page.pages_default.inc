<?php
/**
 * @file
 * panel_subject_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panel_subject_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Subject page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Taxonomy term from Node (on Node: Taxonomy, Subject Area [field_taxonomy_subject_area])',
        'keyword' => 'taxonomy_term_subject_area',
        'name' => 'entity_from_field:field_taxonomy_subject_area-node-taxonomy_term',
        'delta' => '0',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'subjectpage' => 'subjectpage',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'subjectpage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'header' => NULL,
      'region-two' => NULL,
      'region-three' => NULL,
      'region-four' => NULL,
      'region-five' => NULL,
      'region-six' => NULL,
      'region-seven' => NULL,
      'region-eight' => NULL,
      'popular' => NULL,
      'teasers' => NULL,
      'news' => NULL,
      'footer' => NULL,
      'test' => NULL,
      'popular_img' => NULL,
    ),
    'popular' => array(
      'style' => 'naked',
    ),
    'header' => array(
      'style' => 'naked',
    ),
    'teasers' => array(
      'style' => 'naked',
    ),
    'footer' => array(
      'style' => 'naked',
    ),
    'news' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0460192c-e6d3-418a-bed5-be1faa2bcef2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0bcc4976-4b3c-43e5-b859-50dfd777d384';
    $pane->panel = 'footer';
    $pane->type = 'panels_mini';
    $pane->subtype = 'footer_mini_panel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0bcc4976-4b3c-43e5-b859-50dfd777d384';
    $display->content['new-0bcc4976-4b3c-43e5-b859-50dfd777d384'] = $pane;
    $display->panels['footer'][0] = 'new-0bcc4976-4b3c-43e5-b859-50dfd777d384';
    $pane = new stdClass();
    $pane->pid = 'new-76d7f834-5445-4adc-9710-caf25cec7dd6';
    $pane->panel = 'header';
    $pane->type = 'panels_mini';
    $pane->subtype = 'header_mini_panel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '76d7f834-5445-4adc-9710-caf25cec7dd6';
    $display->content['new-76d7f834-5445-4adc-9710-caf25cec7dd6'] = $pane;
    $display->panels['header'][0] = 'new-76d7f834-5445-4adc-9710-caf25cec7dd6';
    $pane = new stdClass();
    $pane->pid = 'new-d06ea8dc-2a04-421f-b2d6-21f179c3910b';
    $pane->panel = 'popular';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'panels_breadcrumbs_admin_title' => '',
      'panels_breadcrumbs_state' => 0,
      'panels_breadcrumbs_titles' => '',
      'panels_breadcrumbs_paths' => '',
      'panels_breadcrumbs_home' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd06ea8dc-2a04-421f-b2d6-21f179c3910b';
    $display->content['new-d06ea8dc-2a04-421f-b2d6-21f179c3910b'] = $pane;
    $display->panels['popular'][0] = 'new-d06ea8dc-2a04-421f-b2d6-21f179c3910b';
    $pane = new stdClass();
    $pane->pid = 'new-3278b9da-ff44-46a6-8319-952ba4e98d90';
    $pane->panel = 'popular';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3278b9da-ff44-46a6-8319-952ba4e98d90';
    $display->content['new-3278b9da-ff44-46a6-8319-952ba4e98d90'] = $pane;
    $display->panels['popular'][1] = 'new-3278b9da-ff44-46a6-8319-952ba4e98d90';
    $pane = new stdClass();
    $pane->pid = 'new-a86a9aab-e970-461a-a07b-5298e510004f';
    $pane->panel = 'popular';
    $pane->type = 'views_panes';
    $pane->subtype = 'subject_subpages-popular_pages_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'relationship_entity_from_field:field_taxonomy_subject_area-node-taxonomy_term_1',
      ),
      'arguments' => array(
        'name' => '%node:field_taxonomy_subject_area',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a86a9aab-e970-461a-a07b-5298e510004f';
    $display->content['new-a86a9aab-e970-461a-a07b-5298e510004f'] = $pane;
    $display->panels['popular'][2] = 'new-a86a9aab-e970-461a-a07b-5298e510004f';
    $pane = new stdClass();
    $pane->pid = 'new-85678be2-86ab-47ee-b0f1-f4b1750300b5';
    $pane->panel = 'popular_img';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_top_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'picture',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'subject_image',
        'image_link' => '',
        'file_view_mode' => 'default',
        'picture_group' => 'subject_image',
        'fallback_image_style' => 'subject_custom_user_full_1x',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '85678be2-86ab-47ee-b0f1-f4b1750300b5';
    $display->content['new-85678be2-86ab-47ee-b0f1-f4b1750300b5'] = $pane;
    $display->panels['popular_img'][0] = 'new-85678be2-86ab-47ee-b0f1-f4b1750300b5';
    $pane = new stdClass();
    $pane->pid = 'new-aeb9d1fd-71d5-4004-ae03-c5e0bd436c14';
    $pane->panel = 'teasers';
    $pane->type = 'views_panes';
    $pane->subtype = 'subject_subpages-subject_subpages_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'relationship_entity_from_field:field_taxonomy_subject_area-node-taxonomy_term_1',
      ),
      'arguments' => array(
        'name' => '%node:field_taxonomy_subject_area',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'aeb9d1fd-71d5-4004-ae03-c5e0bd436c14';
    $display->content['new-aeb9d1fd-71d5-4004-ae03-c5e0bd436c14'] = $pane;
    $display->panels['teasers'][0] = 'new-aeb9d1fd-71d5-4004-ae03-c5e0bd436c14';
    $pane = new stdClass();
    $pane->pid = 'new-26536640-f940-486a-8ea0-13c2e1a3b112';
    $pane->panel = 'teasers';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '4',
      'offset' => '0',
      'path' => 'nyheder',
      'arguments' => array(
        'name' => '',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'content',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '26536640-f940-486a-8ea0-13c2e1a3b112';
    $display->content['new-26536640-f940-486a-8ea0-13c2e1a3b112'] = $pane;
    $display->panels['teasers'][1] = 'new-26536640-f940-486a-8ea0-13c2e1a3b112';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}
