# Favrskov.dk

## Requirements

This Drupal 10 project requires PHP 8.3 or later within PHP 8.x. Composer resolves
dependencies against PHP 8.3.0, and DDEV uses PHP 8.3 with the `drupal10` project
type. Ensure the active hosting environment also uses PHP 8.3 before installing
this lock file. The legacy `.docker` and Azure pipeline setup is unused.

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

## Preparing mail delivery for Drupal 11

Deploy this Drupal 10 release before the Drupal 11 release. `drush updatedb -y`
runs the mail migration: it enables Symfony Mailer if needed, verifies the
default transport, and uninstalls SwiftMailer. Import configuration afterwards
so the old mail plugin settings are not restored.

SwiftMailer remains in Composer for this deployment so its uninstall hooks are
available. The Drupal 11 release removes the package. Verify mail delivery after
this deployment before proceeding to Drupal 11.
