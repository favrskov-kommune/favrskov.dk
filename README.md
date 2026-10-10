# Favrskov.dk

## FAVRDK-447: Drupal 10 update

This is the first stage of the Drupal 11 upgrade. Drupal core and its Composer
plugins are locked to [10.6.18](https://www.drupal.org/project/drupal/releases/10.6.18),
the latest stable Drupal 10 release verified on 10 October 2026. The `^10.6.18`
constraints allow further Drupal 10 updates while keeping the major upgrade separate.

The project now requires PHP 8.3 or later within PHP 8.x. Composer resolves
dependencies against PHP 8.3.0, and DDEV uses PHP 8.3 with the `drupal10` project
type. Ensure the active hosting environment also uses PHP 8.3 before installing
this lock file. The legacy `.docker` and Azure pipeline setup is unused.

The update also includes security fixes in Paragraphs 1.23.0, Role Delegation
1.6.0, Webform 6.2.12, and PsySH 0.12.24. Webform stays on the 6.2 release line
for this stage. Other contributed module versions are unchanged.

The Layout Builder section-reordering patch is retained. The old Paragraphs
access workaround is replaced by a saved upstream fix from
[issue #3090200, MR !265](https://www.drupal.org/project/paragraphs/issues/3090200).
Its source and snapshot date are recorded in
`patches/paragraphs-parent-revision-3090200.patch`. Include the `patches` directory
when building or deploying the project. Composer now fails if a patch cannot be
applied.

## Applying this stage locally

With an existing local database and site settings:

```sh
ddev restart
ddev export-db --file=/tmp/favrskov-before-drupal10.sql.gz
ddev composer install
ddev drush updatedb -y
ddev drush cache:rebuild
ddev drush status
```

Back up the target database before deploying, install the committed lock file
with `composer install --no-dev`, then run `drush updatedb -y` and
`drush cache:rebuild`. Use the existing deployment process for configuration
imports after checking the target environment's configuration differences.

## Verification

- A fresh `composer install --no-dev` passed in a temporary DDEV directory,
  including every configured patch and the merged Webform library requirements.
- Composer validation and platform requirements passed. Validation still reports
  the existing missing-license and pinned `novicell/status_feed` warnings.
- `composer audit --locked --abandoned=report` found no vulnerability advisories.
  The existing `doctrine/cache` dependency is still reported as abandoned.
- The local database update `system_update_10600` completed, and no updates remain.
- Anonymous homepage, login, search, page, news, and parcelling requests passed.
  Authenticated content and Webform administration, node editing, Layout Builder,
  and the section-reordering form passed HTTP checks.
- The upstream Paragraphs access kernel suite passed: 12 tests, 212 assertions.
  It ran with Drupal core-dev 10.6.18 in the temporary install against SQLite,
  independently of the site's database. Test dependencies were not added to this
  project's Composer requirements.

The local database already contained configuration drift, orphaned schema
entries for `oembed_providers` and `upgrade_status`, mismatched Paragraph field
definitions, and a missing private-files directory. These pre-existing items
were not imported, deleted, or exported into the branch as part of this update.

## Next Drupal 11 stage

Check deprecated APIs and Drupal 11 compatibility in custom and contributed
extensions, move Webform to a Drupal 11-compatible release, complete the
Swift Mailer migration, and review the enabled deprecated
`layout_builder_expose_all_field_blocks` module. CKEditor 5 is already enabled;
the unused CKEditor 4 Composer dependency still needs review.

The local MariaDB 10.3 runtime also needs an upgrade before Drupal 11. Since this
stage applies Drupal 10.6's update marker, the subsequent core upgrade must target
Drupal 11.3 or later.
