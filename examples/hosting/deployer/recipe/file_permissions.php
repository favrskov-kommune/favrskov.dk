<?php
namespace Deployer;


desc('Set file permissions before cleanup');
task('deploy:file_permissions', function () {

  $releases = get('releases_list');
  $keep = get('keep_releases');

  if ($keep === -1) {
    // Keep unlimited releases.
    return;
  }

  while ($keep > 0) {
    array_shift($releases);
    --$keep;
  }

  foreach ($releases as $release) {
    if (is_dir("{{deploy_path}}/releases/$release/{{docroot}}/sites/{{drupal_site}}")) {
      run("chmod 0755 {{deploy_path}}/releases/$release/{{docroot}}/sites/{{drupal_site}}");
    }
    if (file_exists("{{deploy_path}}/releases/$release/{{docroot}}/sites/{{drupal_site}}/settings.php")) {
      run("chmod 0644 {{deploy_path}}/releases/$release/{{docroot}}/sites/{{drupal_site}}/settings.php");
    }
  }

})
  ->shallow()
  ->setPrivate();


