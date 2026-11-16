<?php
namespace Deployer;


desc('Enable maintenance mode');
task('deploy:maintenance_mode:enable', function () {
  if(get('drupal_core_version') == 7) {
    run("cd {{drush_exec_path_absolute}} && vendor/drush/drush/drush vset --exact maintenance_mode 1");
    run("cd {{drush_exec_path_absolute}} && vendor/drush/drush/drush cc all");
  } else {
    // Rebuild routes for the current code before a command that fully bootstraps Drupal.
    run("cd {{drush_exec_path_absolute}} && vendor/drush/drush/drush cr");
    run("cd {{drush_exec_path_absolute}} && vendor/drush/drush/drush sset system.maintenance_mode 1");
    run("cd {{drush_exec_path_absolute}} && vendor/drush/drush/drush cr");
  }
})
  ->hidden();


desc('Disable maintenance mode');
task('deploy:maintenance_mode:disable', function () {
  if(get('drupal_core_version') == 7) {
    run("cd {{drush_exec_path_absolute}} && vendor/drush/drush/drush vset --exact maintenance_mode 0");
    run("cd {{drush_exec_path_absolute}} && vendor/drush/drush/drush cc all");
  } else {
    // A rollback can leave route caches from a different release.
    run("cd {{drush_exec_path_absolute}} && vendor/drush/drush/drush cr");
    run("cd {{drush_exec_path_absolute}} && vendor/drush/drush/drush sset system.maintenance_mode 0");
    run("cd {{drush_exec_path_absolute}} && vendor/drush/drush/drush cr");
  }
})
  ->hidden();


