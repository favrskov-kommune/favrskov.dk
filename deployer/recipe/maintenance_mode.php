<?php
namespace Deployer;


desc('Enable maintenance mode');
task('deploy:maintenance_mode:enable', function () {
  if(get('drupal_core_version') == 7) {
    run("cd {{drush_exec_path_absolute}} && drush vset --exact maintenance_mode 1");
    run("cd {{drush_exec_path_absolute}} && drush cc all");
  } else {
    run("cd {{drush_exec_path_absolute}} && drush sset system.maintenance_mode 1");
    run("cd {{drush_exec_path_absolute}} && drush cr");
  }
})
  ->setPrivate();


desc('Disable maintenance mode');
task('deploy:maintenance_mode:disable', function () {
  if(get('drupal_core_version') == 7) {
    run("cd {{drush_exec_path_absolute}} && drush vset --exact maintenance_mode 0");
    run("cd {{drush_exec_path_absolute}} && drush cc all");
  } else {
    run("cd {{drush_exec_path_absolute}} && drush sset system.maintenance_mode 0");
    run("cd {{drush_exec_path_absolute}} && drush cr");
  }
})
  ->setPrivate();


