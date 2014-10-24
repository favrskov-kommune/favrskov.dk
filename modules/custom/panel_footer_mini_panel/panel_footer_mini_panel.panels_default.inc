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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'contacts';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Contacts',
      'title' => 'Contact',
      'body' => '<article role="article">
<h1>Kontakt</h1>
<p>
  Roskilde Kommune <br>
  Rådhusbuen<br>
  Postboks 100<br>
 4000 Roskilde 
</p>
<div class="contacts-data">
<span class="tel">tel Tell 46 31 30 00</span>
<a href="mailto:kommunen@roskilde.dk">kommunen@roskilde.dk</a>
</div>
</article>',
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
    $display->content['new-1'] = $pane;
    $display->panels['contacts'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Footer logo',
      'title' => '',
      'body' => '<a href="/" class="back-homepage">Roskilde komunne</a>
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
    $display->content['new-2'] = $pane;
    $display->panels['header'][0] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
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
    $display->content['new-3'] = $pane;
    $display->panels['navigation'][0] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
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
    $display->content['new-4'] = $pane;
    $display->panels['policy'][0] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'social';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Social',
      'title' => '',
      'body' => '<ul class="social-links">
	<li class="facebook"><a class="icon-facebook" href="http://www.facebook.com/roskildekommune" target="_blank">Facebook</a></li>
	<li class="twitter"><a class="icon-twitter" href="https://twitter.com/roskildekommune" target="_blank">Twitter</a></li>
	<li class="youtube"><a class="icon-youtube" href="http://www.youtube.com/roskildekommune" target="_blank">Youtube</a></li>
        <li class="instagram"><a class="icon-instagram" href="http://instagram.com/roskilde_kommune" target="_blank">Instagram</a></li>
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'social-links',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['social'][0] = 'new-5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer_mini_panel'] = $mini;

  return $export;
}
