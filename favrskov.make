api = 2
core = 7.x

; Contrib modules

projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = 3.0-rc4

projects[ctools][subdir] = contrib
projects[ctools][version] = 1.7
;projects[ctools][patch][1925018] = https://drupal.org/files/ctools-n1925018-12.patch

projects[views][subdir] = contrib
projects[views][version] = 3.11
;projects[views][patch][2065975] = https://drupal.org/files/ajax_pager_does_not_work_in_view_pane-2065975-1.patch

projects[views_field_view][subdir] = contrib
projects[views_field_view][version] = 1.1

projects[draggableviews][subdir] = contrib
;projects[draggableviews][version] = 2.0
projects[draggableviews][version] = 2.1

projects[media][subdir] = contrib
projects[media][version] =2.0-alpha2
projects[media][patch][1870538] = https://drupal.org/files/media-permission_check_multiple_upload-1870538-10.patch

projects[file_entity][subdir] = contrib
projects[file_entity][version] = 2.x-dev

projects[views_tree][subdir] = contrib
projects[views_tree][version] = 2.0

projects[multiform][subdir] = contrib
;projects[multiform][version] = 1.0
projects[multiform][version] = 1.1

projects[media_browser_plus][subdir] = contrib
projects[media_browser_plus][download][type] = "git"
projects[media_browser_plus][download][url] = "http://git.drupal.org/project/media_browser_plus.git"
projects[media_browser_plus][download][branch] = "7.x-3.x"
projects[media_browser_plus][patch][2387943] = https://www.drupal.org/files/issues/2387943-subfolder-search-12.patch

projects[media_crop][subdir] = contrib
projects[media_crop][version] = 1.x-dev
projects[media_crop][patch][2075161] = https://drupal.org/files/wysiwyg-dependece-remove_2075161_1.patch
projects[media_crop][patch][2077823] = https://drupal.org/files/image-crop-functionality-for-gifs-2077823.patch
; TODO add library

projects[ckeditor][subdir] = contrib
projects[ckeditor][version] = 1.16
; next one is required for spans
projects[ckeditor][patch][1898958] = https://drupal.org/files/ckeditor-support-document-tokens-1898958-3.patch
projects[ckeditor][patch][1898958] = https://www.drupal.org/files/ckeditor-media-plugin-files-1898958-4.patch
;projects[ckeditor][patch][1914904] = https://drupal.org/files/ckeditor-media_ie_fix-1914904-4.patch

projects[feeds][subdir] = contrib
projects[feeds][version] = 2.0-alpha8
projects[feeds][patch][1107522] = https://drupal.org/files/ignore-empty-taxonomy-terms-1107522-63.patch
projects[feeds][patch][2085701] = https://drupal.org/files/strings_are_imported_as_null_for_textfields-2085701.patch
projects[feeds][patch][1470530] = https://drupal.org/files/issues/unpublish-delete-entities-not-in-feed-1470530-134.patch

projects[feeds_tamper][subdir] = contrib
;projects[feeds_tamper][version] = 1.0-beta4
projects[feeds_tamper][version] = 1.0

projects[feeds_xpathparser][subdir] = contrib
projects[feeds_xpathparser][version] = 1.0-beta4

projects[feeds_fetcher_directory][subdir] = contrib
projects[feeds_fetcher_directory][version] = 2.0-beta5
projects[feeds_fetcher_directory][patch][2023775] = https://drupal.org/files/feeds_fetcher_directory-config-form-validate-errors.patch

projects[feeds_ex][subdir] = contrib
projects[feeds_ex][version] = 1.0-beta2

projects[elysia_cron][subdir] = contrib
projects[elysia_cron][version] = 2.1

projects[piwik][subdir] = contrib
projects[piwik][version] = 2.7

projects[piwik_stats][subdir] = contrib
projects[piwik_stats][version] = 2.x-dev
projects[piwik_stats][patch][2217169] = https://www.drupal.org/files/issues/2217169-filter_limit.patch
projects[piwik_stats][patch][2171029] = https://www.drupal.org/files/issues/piwik_stats-cron-lost-data-2171029-2.patch

projects[references_dialog][subdir] = contrib
;projects[references_dialog][version] = 1.0-alpha4
projects[references_dialog][version] = 1.0-beta1
projects[references_dialog][patch][2315905] = https://www.drupal.org/files/issues/references_dialog_beta1-fix_theme_links-2315905-20.patch

projects[entity][subdir] = contrib
;projects[entity][version] = 1.5
projects[entity][version] = 1.6

projects[rabbit_hole][subdir] = contrib
projects[rabbit_hole][version] = 2.23

projects[linkit][subdir] = contrib
projects[linkit][version] = 2.7

projects[linkit_target][subdir] = contrib
projects[linkit_target][version] = 1.0

projects[linkit_views][subdir] = contrib
projects[linkit_views][version] = 1.2

projects[linkit_panel_pages][subdir] = contrib
projects[linkit_panel_pages][version] = 2.0

projects[panelizer][subdir] = contrib
projects[panelizer][version] = 3.1

projects[devel][subdir] = contrib
;projects[devel][version] = 1.3
projects[devel][version] = 1.5

projects[breakpoints][subdir] = contrib
;projects[breakpoints][version] = 1.1
projects[breakpoints][version] = 1.2

projects[picture][subdir] = contrib
;projects[picture][version] = 1.1
projects[picture][version] = 1.5

projects[panels][subdir] = contrib
;projects[panels][version] = 3.3
projects[panels][version] = 3.4
;projects[panels][patch][1772846] = http://drupal.org/files/1772846-links-hooks_0.patch
;projects[panels][patch][1841960] = http://drupal.org/files/1841960-1-panels-panels_ipe_strict_warning_render_pane_content.patch
;projects[panels][patch][1772834] = http://drupal.org/files/1772834-fix-lost-context-6.patch
;projects[panels][patch][1613402] = https://drupal.org/files/panels_ipe_fix_ajax_1613402-9.patch
projects[panels][patch][2057897] = https://drupal.org/files/display_pane_admin_titles-2057897.patch
projects[panels][patch][2226011] = https://drupal.org/files/issues/panels-ipe-js-loop-2226011-4.patch

projects[features][subdir] = contrib
projects[features][version] = 2.5

projects[job_scheduler][subdir] = contrib
projects[job_scheduler][version] = 2.0-alpha3

projects[jquery_update][subdir] = contrib
;projects[jquery_update][version] = 2.3
projects[jquery_update][version] = 2.4

projects[module_filter][subdir] = contrib
projects[module_filter][version] = 2.0

projects[transliteration][subdir] = contrib
;projects[transliteration][version] = 3.1
projects[transliteration][version] = 3.2

projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0

projects[date][subdir] = contrib
projects[date][version] = 2.8

projects[link][subdir] = contrib
;projects[link][version] = 1.1
projects[link][version] = 1.2
;projects[link][patch][1914286] = https://drupal.org/files/Fixed_title_value_in_link_field_update_instance_undefined-1914286-3.patch

projects[potx][subdir] = contrib
projects[potx][version] = 1.0

projects[references][subdir] = contrib
projects[references][version] = 2.1

projects[coder][subdir] = contrib
;projects[coder][version] = 2.0-beta2
projects[coder][version] = 2.2

projects[coder_tough_love][subdir] = contrib
projects[coder_tough_love][version] = 1.0

projects[webform][subdir] = contrib
projects[webform][version] = 3.23
projects[webform][patch][] = https://raw.githubusercontent.com/geo0000/custom-patches/master/webform-submission-mail-subject-tokens.patch
projects[webform][patch][] = https://raw.githubusercontent.com/geo0000/custom-patches/master/webform-email-response-url-token.patch

projects[metatag][subdir] = contrib
;projects[metatag][version] = 1.0-beta7
projects[metatag][version] = 1.0-rc1
;projects[metatag][version] = 1.0-rc2
;projects[metatag][patch][1970064] = https://drupal.org/files/metatag-notice-1970064-13.patch

projects[redirect][subdir] = contrib
projects[redirect][version] = 1.0-rc1

projects[path_redirect_import][subdir] = contrib
projects[path_redirect_import][version] = 1.0-rc4

projects[globalredirect][subdir] = contrib
projects[globalredirect][version] = 1.5

projects[pathauto][subdir] = contrib
projects[pathauto][version] = 1.2

projects[linkchecker][subdir] = contrib
;projects[linkchecker][version] = 1.x-dev
projects[linkchecker][version] = 1.2

projects[xmlsitemap][subdir] = contrib
;projects[xmlsitemap][version] = 2.0-rc2
projects[xmlsitemap][version] = 2.0

projects[site_map][subdir] = contrib
;projects[site_map][version] = 1.0
projects[site_map][version] = 1.2

projects[site_verify][subdir] = contrib
;projects[site_verify][version] = 1.0
projects[site_verify][version] = 1.1

projects[diff][subdir] = contrib
projects[diff][version] = 3.2

projects[token][subdir] = contrib
projects[token][version] = 1.5
projects[token][patch][2050421] = "https://drupal.org/files/term-token-real-root-2050421-1.patch"

projects[field_collection][subdir] = contrib
projects[field_collection][version] = 1.0-beta8
projects[field_collection][patch][1063434] = https://drupal.org/files/field_collection-feeds-1063434-121.patch

projects[scheduler][subdir] = contrib
projects[scheduler][version] = 1.3

projects[libraries][subdir] = contrib
;projects[libraries][version] = 2.1
projects[libraries][version] = 2.2

projects[views_ui_basic][subdir] = contrib
projects[views_ui_basic][version] = 1.2
projects[views_ui_basic][patch][1995896] = "https://drupal.org/files/undefined_index_title_1995896.patch"

; Missing module on drupal.org
projects[views_ifempty][subdir] = contrib
projects[views_ifempty][version] = 1.x-dev
projects[views_ifempty][subdir] = contrib
;projects[views_ifempty][download][type] = "git"
;projects[views_ifempty][download][url] = "https://github.com/geo0000/views_ifempty.git"
;projects[views_ifempty][download][branch] = "master"

projects[views_rss][subdir] = contrib
projects[views_rss][version] = 2.0-rc3

projects[features_extra][subdir] = contrib
projects[features_extra][version] = 1.0-beta1

projects[nodequeue][subdir] = contrib
projects[nodequeue][version] = 2.x-dev

projects[apachesolr][subdir] = contrib
;projects[apachesolr][version] = 1.3
projects[apachesolr][version] = 1.6

projects[apachesolr_autocomplete][subdir] = contrib
;projects[apachesolr_autocomplete][version] = 1.3
projects[apachesolr_autocomplete][version] = 1.4

projects[apachesolr_exclude_node][subdir] = contrib
;projects[apachesolr_exclude_node][version] = 1.1
projects[apachesolr_exclude_node][version] = 1.3

projects[apachesolr_sort][subdir] = contrib
projects[apachesolr_sort][version] = 1.x-dev

projects[apachesolr_panels][subdir] = contrib
projects[apachesolr_panels][version] = 1.1

projects[apachesolr_multilingual][subdir] = contrib
;projects[apachesolr_multilingual][version] = 1.0-beta2
projects[apachesolr_multilingual][version] = 1.0

projects[apachesolr_confgen][subdir] = contrib
;projects[apachesolr_confgen][version] = 1.0-beta1
projects[apachesolr_confgen][version] = 1.0

projects[apachesolr_views][subdir] = contrib
projects[apachesolr_views][version] = 1.0-beta2
projects[apachesolr_views][patch][1807028] = https://drupal.org/files/1807028-exposed-filters-are-only-text-fields-7.patch

projects[apachesolr_attachments][subdir] = contrib
projects[apachesolr_attachments][version] = 1.3
projects[apachesolr_attachments][patch][1854088] = https://drupal.org/files/bypass_deadlocks_on_mass_update-1854088-2.patch
projects[apachesolr_attachments][patch][2195095] = https://www.drupal.org/files/issues/apachesolr-attachments-issue-2195095-6.patch

projects[facetapi][subdir] = contrib
;projects[facetapi][version] = 1.3
projects[facetapi][version] = 1.5

projects[i18n][subdir] = contrib
projects[i18n][version] = 1.x-dev

projects[variable][subdir] = contrib
;projects[variable][version] = 2.2
projects[variable][version] = 2.5
;projects[variable][patch][1612484] = https://drupal.org/files/1612484-features_export_notice-14.patch

projects[querypath][subdir] = contrib
projects[querypath][version] = 2.1


projects[email][subdir] = contrib
;projects[email][version] = 1.2
projects[email][version] = 1.3

projects[menu_block][subdir] = contrib
;projects[menu_block][version] = 2.3
projects[menu_block][version] = 2.4

projects[panels_breadcrumbs][subdir] = contrib
projects[panels_breadcrumbs][version] = 2.1
projects[panels_breadcrumbs][patch][2134071] = https://drupal.org/files/issues/panels_breadcrumbs-php-warning.patch

projects[placeholder][subdir] = contrib
projects[placeholder][version] = 1.0

projects[better_exposed_filters][subdir] = contrib
;projects[better_exposed_filters][version] = 3.0-beta3
projects[better_exposed_filters][version] = 3.0-beta4

projects[views_load_more][subdir] = contrib
projects[views_load_more][download][type] = "git"
projects[views_load_more][download][url] = "http://git.drupal.org/project/views_load_more.git"
projects[views_load_more][download][branch] = "7.x-1.x"

projects[path_redirect_import][subdir] = contrib
projects[path_redirect_import][version] = 1.0-rc4
projects[login_destination][subdir] = contrib
projects[login_destination][version] = 1.1

projects[views_bulk_operations][subdir] = contrib
;projects[views_bulk_operations][version] = 3.1
projects[views_bulk_operations][version] = 3.2

projects[admin_views][subdir] = contrib
projects[admin_views][version] = 1.3
projects[admin_views][patch][] = https://raw.githubusercontent.com/geo0000/custom-patches/master/admin_views-content_domain_filter.patch

projects[total_control][subdir] = contrib
projects[total_control][version] = 2.4
projects[total_control][patch][] = https://raw.githubusercontent.com/geo0000/custom-patches/master/total_control-content_domain_filter.patch

projects[clientside_validation][subdir] = contrib
projects[clientside_validation][version] = 1.37

projects[override_node_options][subdir] = contrib
projects[override_node_options][version] = 1.12

projects[fapi_validation][subdir] = contrib
;projects[fapi_validation][version] = 2.1
projects[fapi_validation][version] = 2.2

projects[os2web_borger_dk_articles][type] = "module"
projects[os2web_borger_dk_articles][subdir] = contrib
projects[os2web_borger_dk_articles][download][type] = "git"
projects[os2web_borger_dk_articles][download][url] = "https://github.com/PropeopleDK/os2web_borger_dk_articles.git"
projects[os2web_borger_dk_articles][download][branch] = "develop"

projects[better_formats][subdir] = contrib
projects[better_formats][version] = 1.0-beta1

projects[multiple_selects][subdir] = contrib
projects[multiple_selects][version] = 1.2

projects[apachesolr_stats][subdir] = contrib
projects[apachesolr_stats][version] = 1.0-alpha1
;projects[apachesolr_stats][version] = 1.0-beta1

projects[memcache][subdir] = contrib
;projects[memcache][version] = 1.0
projects[memcache][version] = 1.2

projects[token_custom][subdir] = contrib
projects[token_custom][version] = 2.0-beta3

projects[token_filter][subdir] = contrib
projects[token_filter][version] = 1.x-dev

projects[smart_trim][subdir] = contrib
projects[smart_trim][version] = 1.5

projects[taxonomy_formatter][subdir] = contrib
projects[taxonomy_formatter][version] = 1.4

projects[node_embed][subdir] = contrib
projects[node_embed][version] = 1.1

projects[colorfield][subdir] = contrib
;projects[colorfield][version] = 1.0
projects[colorfield][version] = 1.1

projects[encrypt][subdir] = contrib
projects[encrypt][version] = 1.1

projects[webform_encrypt][subdir] = contrib
projects[webform_encrypt][version] = 1.0
projects[webform_encrypt][patch][1344804] = https://drupal.org/files/issues/1344804-12.patch

projects[term_merge][subdir] = contrib
projects[term_merge][version] = 1.2

projects[taxonomy_manager][subdir] = contrib
projects[taxonomy_manager][version] = 1.0

projects[menu_node][subdir] = contrib
projects[menu_node][version] = 1.2
projects[menu_node][patch][2118693] = https://drupal.org/files/menu_node-nodesymlinks-2118693-0.patch

projects[menu_node_views][subdir] = contrib
projects[menu_node_views][version] = 1.x-dev

projects[menu_attributes][subdir] = contrib
projects[menu_attributes][version] = 1.0-rc2

; Domain modules
projects[domain][subdir] = contrib
;projects[domain][version] = 3.10
projects[domain][version] = 3.11
projects[domain][patch][804926] = https://www.drupal.org/files/issues/domain-vbo-804926-34.patch

projects[domain_ctools][subdir] = contrib
projects[domain_ctools][version] = 1.3

projects[domain_menu_block][subdir] = contrib
projects[domain_menu_block][version] = 1.0-beta2

projects[domain_views][subdir] = contrib
projects[domain_views][version] = 1.5
;projects[domain_views][patch][1276694] = domains_views_current_domain-1276694-19.patch

projects[nodesymlinks][subdir] = contrib
projects[nodesymlinks][version] = 1.0-rc1
projects[nodesymlinks][patch][2076405] = https://drupal.org/files/issues/nodesymlinks-2076405-2-empty_page_callback.patch

projects[ct_per_menu][subdir] = contrib
projects[ct_per_menu][version] = 1.0

projects[menu_admin_per_menu][subdir] = contrib
projects[menu_admin_per_menu][version] = 1.0

projects[domain_xmlsitemap][subdir] = contrib
projects[domain_xmlsitemap][version] = 1.0-beta2

projects[maxlength][subdir] = contrib
projects[maxlength][version] = 3.0-beta1
projects[maxlength][patch][1761480] = https://drupal.org/files/line_breaks_in_text-1761480.patch
projects[maxlength][patch][2032655] = https://drupal.org/files/maxlength-calculate_keyup_change-2032655-2.patch

projects[autoarch][subdir] = contrib
projects[autoarch][version] = 1.0
projects[autoarch][patch][2043089] = https://drupal.org/files/0001-Issue-2043089.-Fixing-wrong-config-menu-item.patch

projects[cnr][subdir] = contrib
projects[cnr][version] = 4.x-dev

projects[eu-cookie-compliance][subdir] = contrib
projects[eu-cookie-compliance][version] = 1.13
projects[eu-cookie-compliance][patch][2289733] = https://www.drupal.org/files/issues/leave-uid1-alone-2289733-1.patch

projects[node_view_permissions][subdir] = contrib
;projects[node_view_permissions][version] = 1.2
projects[node_view_permissions][version] = 1.5

projects[themekey][subdir] = contrib
;projects[themekey][version] = 3.2
projects[themekey][version] = 3.3

projects[mailchimp][subdir] = contrib
projects[mailchimp][version] = 2.12
projects[mailchimp][patch][1689730] = https://drupal.org/files/1689730-mailchimp_translate_error_codes_from_api-2.patch
projects[mailchimp][patch][] = https://raw.githubusercontent.com/geo0000/custom-patches/master/mailchimp-subscribe-form-groups-check.patch
projects[mailchimp][patch][823916] = https://www.drupal.org/files/mailchimp_domain_support-823916-11.patch

projects[entityreference][subdir] = contrib
;projects[entityreference][version] = 1.0
projects[entityreference][version] = 1.1

projects[video_embed_field][subdir] = contrib
;projects[video_embed_field][version] = 2.0-beta5
projects[video_embed_field][version] = 2.0-beta7

projects[rules][subdir] = contrib
;projects[rules][version] = 2.6
projects[rules][version] = 2.7

projects[addressfield][subdir] = contrib
projects[addressfield][version] = 1.0-beta5

projects[field_group][subdir] = contrib
;projects[field_group][version] = 1.3
;projects[field_group][version] = 1.4

projects[tablefield][subdir] = contrib
projects[tablefield][version] = 2.3
projects[tablefield][patch][2200577] = "https://drupal.org/files/issues/converting_non_utf8_files_to_utf8-2200577-1.patch"
;projects[tablefield][patch][] = "https://raw.githubusercontent.com/geo0000/custom-patches/master/dont-display-empty-table.patch"

projects[mollom][subdir] = contrib
;projects[mollom][version] = 2.9
projects[mollom][version] = 2.10

projects[node_clone][subdir] = contrib
projects[node_clone][version] = 1.0-rc2

projects[jquery_colorpicker][subdir] = contrib
projects[jquery_colorpicker][version] = 1.0-rc2
projects[jquery_colorpicker][patch][] = "https://raw.githubusercontent.com/geo0000/custom-patches/master/jquery_colorpicker-states-fix-0.patch"


projects[jslider_field][subdir] = contrib
projects[jslider_field][version] = 1.0-alpha3

projects[pathologic][subdir] = contrib
projects[pathologic][version] = 2.12

;projects[google_analytics][subdir] = contrib
;projects[google_analytics][version] = 1.4

projects[taxonomy_container][subdir] = contrib
projects[taxonomy_container][version] = 1.1

projects[webform_features][subdir] = contrib
projects[webform_features][version] = 3.0-beta3

projects[mailsystem][subdir] = contrib
projects[mailsystem][version] = 2.34

projects[mimemail][subdir] = contrib
projects[mimemail][version] = 1.0-beta3

projects[ajax_comments][subdir] = contrib
;projects[ajax_comments][version] = 1.0-alpha2
projects[ajax_comments][version] = 1.0-beta1
;TODO - repair this patch
;projects[ajax_comments][patch][541078] = https://drupal.org/files/issues/ajax_comments-mollom-541078-16.patch

projects[comment_notify][subdir] = contrib
projects[comment_notify][version] = 1.2

projects[synonyms][subdir] = contrib
projects[synonyms][version] = 1.1

projects[dynamic_background][subdir] = contrib
projects[dynamic_background][version] = 2.0-rc4
projects[dynamic_background][patch][1904738] = "https://drupal.org/files/issues/dynamic_background-domain-1904738-4.patch"

projects[content_reminder][subdir] = contrib
projects[content_reminder][version] = 1.0
projects[content_reminder][patch][2342697] = "https://www.drupal.org/files/issues/content_reminder-set_focus_only_once-2342697-1-D7.patch"

projects[workbench_moderation][subdir] = contrib
projects[workbench_moderation][version] = 1.3
projects[workbench_moderation][patch][1314508] = "https://www.drupal.org/files/1314508-workbench-moderation-features.patch"

projects[taxonomy_access_fix][subdir] = contrib
projects[taxonomy_access_fix][version] = 2.1

projects[simplesamlphp_auth][subdir] = contrib
projects[simplesamlphp_auth][version] = 2.0-alpha2

projects[securepages][subdir] = contrib
projects[securepages][version] = 1.0-beta2

projects[varnish][subdir] = contrib
projects[varnish][version] = 1.0-beta3

; Libraries
libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] =
"http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.3/ckeditor_4.3_full.zip"
libraries[ckeditor][destination] = libraries
libraries[ckeditor][directory_name] = ckeditor

libraries[imgareaselect][download][type] = get
libraries[imgareaselect][download][url] =
"http://odyniec.net/projects/imgareaselect/jquery.imgareaselect-0.9.10.zip"
libraries[imgareaselect][destination] = libraries
libraries[imgareaselect][directory_name] = jquery.imgareaselect

libraries[selectboxit][download][type] = get
libraries[selectboxit][download][url] =
"https://raw.github.com/gfranko/jquery.selectBoxIt.js/master/src/javascripts/jquery.selectBoxIt.min.js"
libraries[selectboxit][destination] = libraries
libraries[selectboxit][directory_name] = selectboxit

libraries[swiper][download][type] = get
libraries[swiper][download][url] =
"https://raw.githubusercontent.com/undertext/Swiper/master/dist/idangerous.swiper.min.js"
libraries[swiper][destination] = libraries
libraries[swiper][directory_name] = swiper

libraries[iframedialog][download][type] = get
libraries[iframedialog][download][url] =
"http://download.ckeditor.com/iframedialog/releases/iframedialog_4.2.zip"
libraries[iframedialog][destination] = libraries/ckeditor/plugins
libraries[iframedialog][directory_name] = iframedialog

libraries[placeholder][download][type] = get
libraries[placeholder][download][url] =
"https://github.com/mathiasbynens/jquery-placeholder/archive/v1.8.7.zip"
libraries[placeholder][destination] = libraries
libraries[placeholder][directory_name] = placeholder

libraries[mailchimp][download][type] = get
libraries[mailchimp][download][url] =
"http://apidocs.mailchimp.com/api/downloads/mailchimp-api-class.zip"
libraries[mailchimp][destination] = libraries
libraries[mailchimp][directory_name] = mailchimp

libraries[colorpicker][download][type] = get
libraries[colorpicker][download][url] =
"http://www.eyecon.ro/colorpicker/colorpicker.zip"
libraries[colorpicker][destination] = libraries
libraries[colorpicker][directory_name] = colorpicker

libraries[malihu][download][type] = get
libraries[malihu][download][url] =
"https://github.com/malihu/malihu-custom-scrollbar-plugin/archive/master.zip"
libraries[malihu][destination] = libraries
libraries[malihu][directory_name] = malihu

libraries[jsonpath][download][type] = file
libraries[jsonpath][download][url] = https://jsonpath.googlecode.com/svn/trunk/src/php/jsonpath.php
libraries[jsonpath][destination] = libraries
libraries[jsonpath][directory_name] = jsonpath

; Contrib themes
projects[adaptivetheme][subdir] = contrib
projects[adaptivetheme][version] = 3.1

; Translations
translations[] = da

; Patches
projects[drupal][type] = core
projects[drupal][version] = 7.38
projects[drupal][patch][1078878] = "https://drupal.org/files/issues/1078878-DisableAutoCreation-D7-UTF-8.patch"
