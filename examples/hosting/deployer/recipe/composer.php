<?php
/* (c) Mikkel Mandal <mma@novicell.dk>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

namespace Deployer;

desc('Run composer install');
task('deploy:composer:install', function () {
  if(get('use_composer', false)) {
    run('cd {{release_path}} && COMPOSER_MEMORY_LIMIT=-1 composer install --no-dev --no-interaction');
  }
})
  ->setPrivate();


