<?php
/**
 * @file
 * panel_footer_mini_panel.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function panel_footer_mini_panel_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer_mini_panel';
  $mini->category = 'Header and Footer';
  $mini->admin_title = 'Footer mini panel';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'footer';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 4,
          1 => 1,
          2 => 'main',
          3 => 3,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '25',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'shortcuts',
        ),
        'parent' => 'main',
      ),
      1 => array(
        'type' => 'column',
        'width' => 25,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
        ),
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'contact',
        ),
        'parent' => '1',
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'width' => '25',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 6,
        ),
        'class' => '',
      ),
      4 => array(
        'type' => 'column',
        'width' => 25,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 5,
        ),
        'class' => '',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'logo',
        ),
        'parent' => '4',
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'visit_also',
        ),
        'parent' => '3',
        'class' => '',
      ),
      'logo' => array(
        'type' => 'region',
        'title' => 'Logo',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
      ),
      'contact' => array(
        'type' => 'region',
        'title' => 'Contacts',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'shortcuts' => array(
        'type' => 'region',
        'title' => 'Shortcuts',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'visit_also' => array(
        'type' => 'region',
        'title' => 'Visit also',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'logo' => NULL,
      'contact' => NULL,
      'shortcuts' => NULL,
      'other' => NULL,
      'visit_also' => NULL,
      'header' => NULL,
      'contacts' => NULL,
      'navigation' => NULL,
      'social' => NULL,
      'policy' => NULL,
    ),
    'header' => array(
      'style' => 'naked',
    ),
    'contacts' => array(
      'style' => 'naked',
    ),
    'navigation' => array(
      'style' => 'naked',
    ),
    'social' => array(
      'style' => 'naked',
    ),
    'policy' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '428b3416-8c56-439d-bd9f-302e19fc893c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a68f9ce5-c5b9-4de8-a397-de2141f76c90';
    $pane->panel = 'contacts';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Address',
      'title' => '',
      'body' => '<article role="article">
<h1>Åbningstider</h1>

<p class="small-height">Besøgstid:<br />
<span class="first-span">Mandag</span> 9.30-15.00<br />
<span class="first-span">Tirsdag</span> 9.30-15.00<br />
<span class="first-span">Onsdag</span> Lukket<br />
<span class="first-span">Torsdag</span> 12.00-17.00<br />(Borgerservice til kl.18.00)<br />
<span class="first-span">Fredag</span> 9.30-12.00
</p>

<p>Telefontid:<br />
<span class="first-span">Mandag</span> 9.00-15.00<br />
<span class="first-span">Tirsdag</span> 9.00-15.00<br />
<span class="first-span">Onsdag</span> Lukket<br />
<span class="first-span">Torsdag</span> 9.00-17.00<br />
<span class="first-span">Fredag</span> 9.00-12.00
</p>
</article>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'social-links',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a68f9ce5-c5b9-4de8-a397-de2141f76c90';
    $display->content['new-a68f9ce5-c5b9-4de8-a397-de2141f76c90'] = $pane;
    $display->panels['contacts'][0] = 'new-a68f9ce5-c5b9-4de8-a397-de2141f76c90';
    $pane = new stdClass();
    $pane->pid = 'new-07492029-c139-4712-a651-2779573cbeab';
    $pane->panel = 'header';
    $pane->type = 'footer_logo';
    $pane->subtype = 'footer_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '07492029-c139-4712-a651-2779573cbeab';
    $display->content['new-07492029-c139-4712-a651-2779573cbeab'] = $pane;
    $display->panels['header'][0] = 'new-07492029-c139-4712-a651-2779573cbeab';
    $pane = new stdClass();
    $pane->pid = 'new-a23bf52e-f7c1-4702-9df9-9c2d54db75c5';
    $pane->panel = 'navigation';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Links',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a23bf52e-f7c1-4702-9df9-9c2d54db75c5';
    $display->content['new-a23bf52e-f7c1-4702-9df9-9c2d54db75c5'] = $pane;
    $display->panels['navigation'][0] = 'new-a23bf52e-f7c1-4702-9df9-9c2d54db75c5';
    $pane = new stdClass();
    $pane->pid = 'new-bd9119fe-56db-475e-bac8-01d7696cb28a';
    $pane->panel = 'policy';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<ul>
	<li><a class="ext" href="http://google.com" target="_blank">EAN-Numbers</a></li>
	<li><a class="ext" href="https://google.com" target="_blank">Cookie Policy</a></li>
</ul>
',
      'format' => 'video_html',
      'substitute' => TRUE,
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
    $pane->uuid = 'bd9119fe-56db-475e-bac8-01d7696cb28a';
    $display->content['new-bd9119fe-56db-475e-bac8-01d7696cb28a'] = $pane;
    $display->panels['policy'][0] = 'new-bd9119fe-56db-475e-bac8-01d7696cb28a';
    $pane = new stdClass();
    $pane->pid = 'new-6415dea8-8332-4f2b-b8af-8f0c4d558644';
    $pane->panel = 'social';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Contacts',
      'title' => 'Contact',
      'body' => '<article role="article">
<h1>Kontakt</h1>

<p class="small-height">Hovednummer:<br />
<a href="tel:89641010">89 64 10 10</a></p>

<p class="small-height">Den Digitale Hotline:<br />
<a href="tel:70200000">70 20 00 00</a></p>

<p class="small-height">Adresse:<br />
Skovej 20,<br />8382 Hinnerup</p>

<p class="small-height">Skriv til os pa mail:<br />
<a href="mail:favrskov@favrskov.dk">favrskov@favrskov.dk</a></p>

<p class="small-height">CVR:<br />
29 18 97 14</p>

</article>',
      'format' => 'full_html',
      'substitute' => TRUE,
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
    $pane->uuid = '6415dea8-8332-4f2b-b8af-8f0c4d558644';
    $display->content['new-6415dea8-8332-4f2b-b8af-8f0c4d558644'] = $pane;
    $display->panels['social'][0] = 'new-6415dea8-8332-4f2b-b8af-8f0c4d558644';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer_mini_panel'] = $mini;

  return $export;
}
