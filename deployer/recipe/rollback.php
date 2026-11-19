<?php
namespace Deployer;

desc('Remember the active release before publishing');
task('deploy:remember_current_release', function () {
  set('deploy_original_release', null);
  if (test('[ -L {{current_path}} ]')) {
    set('deploy_original_release', basename(run('readlink {{current_path}}')));
  }
  set('deploy_published_release', basename(get('release_path')));
})
  ->hidden();

desc('Rollback only a release published by this deployment');
task('deploy:rollback', function () {
  $original_release = get('deploy_original_release', null);
  if ($original_release === null) {
    writeln('No release rollback necessary: publishing was not reached or no previous release exists.');
    return;
  }

  $current_release = basename(run('readlink {{current_path}}'));
  if ($current_release === $original_release) {
    writeln('No release rollback necessary: the original release is still active.');
    return;
  }
  if ($current_release !== get('deploy_published_release', null)) {
    writeln('Skipping release rollback: the active release was changed outside this deployment.');
    return;
  }

  // Restore the release that was actually active, rather than selecting from the release history.
  set('rollback_candidate', $original_release);
  invoke('rollback');
})
  ->hidden();

before('deploy:symlink', 'deploy:remember_current_release');
