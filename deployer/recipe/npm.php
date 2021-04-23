<?php
/* (c) Mikkel Mandal <mma@novicell.dk>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

namespace Deployer;

desc('Run npm commands');
task('deploy:npm:install', function () {
  if(get('use_npm', false)) {
    run('cd {{theme_exec_path_absolute}} && npm ci && npm run build:prod');
  }
})
  ->setPrivate();


