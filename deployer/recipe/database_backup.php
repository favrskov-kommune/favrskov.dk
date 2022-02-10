<?php
namespace Deployer;


task('deploy:db:set_backup_file', function () {
  set('sql_backup_folder_path', '{{deploy_path}}/sql');
  $release = get('release_name');
  set('current_sql_backup', get('sql_backup_folder_path').'/backup_'.$release.'.sql');
})
  ->once()
  ->shallow()
  ->setPrivate();

desc('Dump current database');
task('deploy:db:dump', function () {
  $current_sql_backup = get('current_sql_backup');

  run('if [ ! -d ' . get('sql_backup_folder_path') . ' ]; then mkdir -p ' . get('sql_backup_folder_path') . '; fi');
  if(get('drupal_core_version') == 7) {
    $command_cache_clear = 'cc all';
  } else {
    $command_cache_clear = 'cr';
  }
  run('cd {{drush_exec_path_absolute}} && drush '.$command_cache_clear.' && drush sql-dump --structure-tables-list=cache,cache_* > ' . $current_sql_backup);
})
  ->setPrivate();

desc('Rollback database');
task('deploy:db:rollback', function () {
  $rollback_db = get('rollback_db');

  $current_sql_backup = get('current_sql_backup');
  $new_sql_backup = str_replace('/backup_', '/rollback_'.date('YmdHis').'_backup_', $current_sql_backup);

  if($rollback_db == 'true') {

    if(!empty($current_sql_backup)){
      run('if [ -f ' . $current_sql_backup . ' ]; then cd {{drush_exec_path_absolute}} && drush sql-drop -y && drush sql-cli < '.$current_sql_backup.' && mv '.$current_sql_backup.' '.$new_sql_backup.'; fi');
      writeln('Database rolled back to: '.$current_sql_backup);
      writeln('Backup file was renamed: '.$new_sql_backup);
    } else {
      writeln('No available database backup: '.$current_sql_backup);
    }
  } else {
    if(!empty($current_sql_backup)){
      run('if [ -f ' . $current_sql_backup . ' ]; then mv '.$current_sql_backup.' '.$new_sql_backup.'; fi');
      writeln('No database rollback necessary.');
      writeln('Backup file was renamed: '.$new_sql_backup);
    } else {
      writeln('No available database backup: '.$current_sql_backup);
    }

  }

})
  ->setPrivate();

desc('Cleanup old database backups');
task('deploy:db:cleanup', function () {
  $releases = get('releases_list');
  $keep = get('keep_releases');
  $sudo  = get('cleanup_use_sudo') ? 'sudo' : '';

  if ($keep === -1) {
    // Keep unlimited releases.
    return;
  }

  while ($keep > 0) {
    array_shift($releases);
    --$keep;
  }

  foreach ($releases as $release) {
    $sql_backup = get('sql_backup_folder_path').'/backup_'.$release.'.sql';
    run('if [ -f ' . $sql_backup . ' ]; then '.$sudo.' rm -rf '.$sql_backup.'; fi');
  }
})
  ->setPrivate();

before('deploy:db:dump','deploy:db:set_backup_file');
before('deploy:db:rollback','deploy:db:set_backup_file');
before('deploy:db:cleanup','deploy:db:set_backup_file');
