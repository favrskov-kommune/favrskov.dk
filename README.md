# Favrskov.dk

## Requirements

This Drupal 11 project requires PHP 8.3 or later within PHP 8.x and MariaDB 10.6
or later (or another database version supported by Drupal 11). Composer resolves
dependencies against PHP 8.3.0. DDEV uses PHP 8.3, MariaDB 10.11 and the `drupal11`
project type. The legacy `.docker` and Azure pipeline setup is unused.

Include the `patches` directory when building or deploying the project.
Composer fails if a configured patch cannot be applied.

## Updating locally

With an existing local database and site settings:

```sh
ddev restart
ddev export-db --file=/tmp/favrskov-before-update.sql.gz
ddev composer install
ddev drush updatedb -y
ddev drush cache:rebuild
ddev drush status
```

## Deployment

Back up the target database before deploying, install the committed lock file
with `composer install --no-dev`, then run `drush updatedb -y` and
`drush cache:rebuild`. Use the existing deployment process for configuration
imports after checking the target environment's configuration differences.

## Recent log messages fail after upgrading to Drupal 11

A stored log entry with a NULL placeholder can crash `/admin/reports/dblog`.
The core patch for [Drupal issue #3589365](https://www.drupal.org/project/drupal/issues/3589365)
renders these values as the literal `NULL` in the overview and detail pages.
It preserves the log records and normal HTML escaping. Review this temporary
patch when upgrading core and remove it once core includes a suitable fix.
