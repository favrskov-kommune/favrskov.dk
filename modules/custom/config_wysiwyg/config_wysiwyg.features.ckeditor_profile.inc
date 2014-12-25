<?php
/**
 * @file
 * config_wysiwyg.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function config_wysiwyg_ckeditor_profile_defaults() {
  $data = array(
    'Advanced' => array(
      'name' => 'Advanced',
      'settings' => array(
        'ss' => 2,
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'toolbar' => '[
    [\'Source\'],
    [\'Cut\',\'Copy\',\'Paste\',\'PasteText\',\'PasteFromWord\',\'-\',\'SpellChecker\',\'Scayt\'],
    [\'Undo\',\'Redo\',\'Find\',\'Replace\',\'-\',\'SelectAll\',\'RemoveFormat\'],
    [\'Media\',\'SpecialChar\'],
    [\'Maximize\',\'ShowBlocks\'],
    \'/\',
    [\'Format\'],
    [\'Bold\',\'Italic\',\'Underline\',\'Strike\',\'-\',\'Subscript\',\'Superscript\'],
    [\'NumberedList\',\'BulletedList\',\'-\',\'Outdent\',\'Indent\',\'Blockquote\'],
    [\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\',\'JustifyBlock\',\'-\',\'BidiLtr\',\'BidiRtl\'],
    [\'Link\',\'Unlink\',\'Anchor\',\'linkit\']
]',
        'expand' => 't',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'none',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 't',
        'theme_config_js' => 't',
        'js_conf' => '',
        'loadPlugins' => array(
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
          'linkit' => array(
            'name' => 'linkit',
            'desc' => 'Support for Linkit module',
            'path' => '%base_path%profiles/favrskov/modules/contrib/linkit/editors/ckeditor/',
            'buttons' => array(
              'linkit' => array(
                'label' => 'Linkit',
                'icon' => 'linkit.png',
              ),
            ),
          ),
          'media' => array(
            'name' => 'media',
            'desc' => 'Plugin for inserting images from Drupal media module',
            'path' => '%plugin_dir%media/',
            'buttons' => array(
              'Media' => array(
                'label' => 'Media',
                'icon' => 'images/icon.gif',
              ),
            ),
            'default' => 'f',
          ),
          'picture_ckeditor' => array(
            'name' => 'picture_ckeditor',
            'desc' => 'Support responsive images with the Picture module.',
            'buttons' => FALSE,
            'path' => '%base_path%profiles/favrskov/modules/contrib/picture/plugins/',
            'default' => 't',
          ),
        ),
      ),
      'input_formats' => array(
        'full_html' => 'Full HTML',
      ),
    ),
    'CKEditor Global Profile' => array(
      'name' => t('CKEditor Global Profile'),
      'settings' => array(
        'skin' => 'moono',
        'ckeditor_path' => '%b/profiles/favrskov/libraries/ckeditor',
        'ckeditor_local_path' => '',
        'ckeditor_plugins_path' => '%b/profiles/favrskov/libraries/ckeditor/plugins',
        'ckeditor_plugins_local_path' => '',
        'ckfinder_path' => '%m/ckfinder',
        'ckfinder_local_path' => '',
        'ckeditor_aggregate' => 'f',
        'toolbar_wizard' => 't',
        'loadPlugins' => array(),
      ),
      'input_formats' => array(),
    ),
    'Full' => array(
      'name' => 'Full',
      'settings' => array(
        'ss' => 2,
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'toolbar' => '[
    [\'Source\',\'Bold\',\'NumberedList\',\'BulletedList\',\'Undo\',\'Redo\'],
    [\'Cut\',\'Copy\',\'Paste\',\'PasteText\',\'PasteFromWord\',\'SpecialChar\',\'Replace\',\'Find\',\'SelectAll\',\'Format\',\'RemoveFormat\',\'Media\',\'-\'],
    \'/\',
    [\'Scayt\',\'SpellChecker\',\'Link\',\'linkit\',\'Maximize\',\'Iframe\',\'NodeEmbed\']
]',
        'expand' => 't',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'self',
        'css_path' => '%t/css/ckeditor.css',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 't',
        'theme_config_js' => 't',
        'js_conf' => '',
        'loadPlugins' => array(
          'NodeEmbed' => array(
            'name' => 'NodeEmbed',
            'desc' => 'Plugin file: NodeEmbed',
            'path' => '%plugin_dir_extra%NodeEmbed/',
            'buttons' => array(
              'NodeEmbed' => array(
                'label' => 'NodeEmbed',
                'icon' => 'images/icon.gif',
              ),
            ),
            'default' => 'f',
          ),
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
          'iframedialog' => array(
            'name' => 'iframedialog',
            'desc' => 'Plugin file: iframedialog',
            'path' => '%plugin_dir_extra%iframedialog/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'linkit' => array(
            'name' => 'linkit',
            'desc' => 'Support for Linkit module',
            'path' => '%base_path%profiles/favrskov/modules/contrib/linkit/editors/ckeditor/',
            'buttons' => array(
              'linkit' => array(
                'label' => 'Linkit',
                'icon' => 'linkit.png',
              ),
            ),
          ),
          'media' => array(
            'name' => 'media',
            'desc' => 'Plugin for inserting images from Drupal media module',
            'path' => '%plugin_dir%media/',
            'buttons' => array(
              'Media' => array(
                'label' => 'Media',
                'icon' => 'images/icon.gif',
              ),
            ),
            'default' => 'f',
          ),
        ),
      ),
      'input_formats' => array(
        'filtered_html' => 'Filtered HTML',
      ),
    ),
  );
  return $data;
}
