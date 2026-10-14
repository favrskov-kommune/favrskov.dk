# Favrskov.dk

## Requirements

This Drupal 11 project requires PHP 8.3 or later within PHP 8.x and MariaDB 10.6
or later (or another database version supported by Drupal 11). Composer resolves
dependencies against PHP 8.3.0. DDEV uses PHP 8.3, MariaDB 10.11 and the `drupal11`
project type. The legacy `.docker` and Azure pipeline setup is unused.

Include the `patches` directory when building or deploying the project.
Composer fails if a configured patch cannot be applied.

## Updating locally

Deploy `feature/FAVRDK-447` first and complete its database updates and
configuration import. That Drupal 10 deployment enables Symfony Mailer and
uninstalls SwiftMailer while its Composer package is still available.

For the first upgrade from Drupal 10.6, back up the database and migrate DDEV's
database while still on the Drupal 10 branch:

```sh
ddev export-db --file=/tmp/favrskov-before-drupal11.sql.gz
ddev utility migrate-database mariadb:10.11
```

After checking out the Drupal 11 branch, run the preparation script **before
Composer replaces the Drupal 10 dependencies**. It removes the obsolete File
Delete UI module while preserving file deletion permissions, and switches the
Layout Builder modal theme to Claro. It refuses to proceed while SwiftMailer
is still installed:

```sh
ddev drush php:script scripts/drupal11-pre-upgrade.php
```

With an existing local database and site settings:

```sh
ddev restart
ddev export-db --file=/tmp/favrskov-before-update.sql.gz
ddev composer install --prefer-dist
ddev drush updatedb -y
ddev drush cache:rebuild
ddev drush status
```

Review changes with `ddev drush config:status`, then import the upgrade's
configuration with `ddev drush config:import -y` and rebuild caches.

## Deployment

Deploy the Drupal 10 mail migration from `feature/FAVRDK-447` first, including
`drush updatedb -y` and configuration import. Verify mail delivery before
proceeding to Drupal 11.

Ensure PHP and the database meet the requirements above and back up the target
database. For the first Drupal 11 deployment, run
`drush php:script scripts/drupal11-pre-upgrade.php` with the Drupal 10 dependencies
still installed. Then install the committed lock file with
`composer install --no-dev --prefer-dist`. Run `drush updatedb -y`, import
configuration with the existing deployment process, and run `drush cache:rebuild`.

Configuration import enables Gin LB and Premium Gin and applies their settings.
Check the target environment's configuration differences before importing.
