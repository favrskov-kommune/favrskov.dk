#!/bin/bash

# ===================================================================
# There are several special environment variables available during
# the rollback procedure.
# -------------------------------------------------------------------
# These variables are all booleans, meaning that they can be compared
# to "true"/"false".
# -------------------------------------------------------------------
# DATABASE_UPDATE     | Whether database updates should be run during
#                     | deploy
# CONFIG_IMPORT       | Whether config should be imported during the
#                     | deploy
# LOCALE_UPDATE       | Whether locale updates should be run during
#                     | deploy
# UNSET_MAINTENANCE   | Whether maintenance mode should be turned off
#                     | after a finished deploy
# -------------------------------------------------------------------
# IMAGE_PULL_START    | Whether the image pull has started
# IMAGE_PULL_FINISH   | Whether the image pull finished
# MAINTENANCE_ON      | Whether maintenance mode was turned on
# MAINTENANCE_OFF     | Whether maintenance mode was turned off
# DB_BACKUP_START     | Whether the database backup was started
# DB_BACKUP_FINISH    | Whether the database backup finished
# UPDB_START          | Whether the drush updb command was started
# UPDB_FINISH         | Whether the drush updb command finished
# CIM_START           | Whether the drush cim command was started
# CIM_FINISH          | Whether the drush cim command finished
# LOCALE_START        | Whether the drush locale commands was started
# LOCALE_FINISH       | Whether the drush locale commands finished
# ===================================================================
# These variables are strings, and might be empty if the step they
# originate from was never finished.
# -------------------------------------------------------------------
# IMAGE_ROLLBACK_TAG  | The tag to roll the image back to
# IMAGE_ORIGINAL_TAG  | The tag of the version prior to release
# IMAGE_RELEASE_TAG   | The tag that was attempted to be released
# STEP_LABEL          | The human-readable label of the step reached
# DEPLOY_ENV          | The environment being deployed (prod/staging)
# ===================================================================
# Slack notification channels are also added as environment variables.
# This will allow for sending important rollback updates to slack.
# -------------------------------------------------------------------
# NOTIF_DRUPAL_DEPLOY | The #notif-drupal-deploy channel
# NOTIF_DEPLOYMENTS   | The #notif-deployments channel
# ===================================================================

SLACK_SITE_URL="https:\/\/staging-streamingguide.kino.dk\/"
BRANCH="staging"
if [ $DEPLOY_ENV = "prod" ]; then
  SLACK_SITE_URL="https:\/\/streamingguide.kino.dk\/"
  BRANCH="master"
fi

# Notify that deployment failed and rollback has started.
curl -X POST -H 'Content-type: application/json' --data-urlencode '{"attachments": [{"title": "Streaming Guide", "title_link": "'${SLACK_SITE_URL}'", "text": ":bangbang: Deployment of `'${BRANCH}'` branch failed during $STEP_LABEL, starting rollback...","color": "CF423F","mrkdwn_in": ["title","text"]}]}' ${NOTIF_DRUPAL_DEPLOY}

if [ ! -z "IMAGE_PULL_START" ] || [ ! -z "IMAGE_PULL_FINISH" ]; then
  curl -X POST -H 'Content-type: application/json' --data-urlencode '{"text": [{"title": "Streaming Guide", "title_link": "'${SLACK_SITE_URL}'", "text": "Updated image pull failed, manual rollback might be required.","color": "CF423F","mrkdwn_in": ["title","text"]}]}' ${NOTIF_DRUPAL_DEPLOY}
  exit
fi

if [ ! -z "IMAGE_ROLLBACK_TAG" ] || [ ! -z "IMAGE_ORIGINAL_TAG" ] || [ ! -z "IMAGE_RELEASE_TAG" ]; then
  curl -X POST -H 'Content-type: application/json' --data-urlencode '{"text": [{"title": "Streaming Guide", "title_link": "'${SLACK_SITE_URL}', "text": "Missing image tag variables, manual rollback might be required.","color": "CF423F","mrkdwn_in": ["title","text"]}]}' ${NOTIF_DRUPAL_DEPLOY}
  exit
fi

# If maintenance mode was never turned on, we never got to the database backup and should be able
# to safely roll back the image.
# Same goes if database backup never finished.
if [ $MAINTENANCE_ON = false ] || [ $DB_BACKUP_FINISH = false ]; then
  docker image tag novicell.azurecr.io/streaminguiden-apache:${IMAGE_ROLLBACK_TAG} novicell.azurecr.io/streaminguiden-apache:${IMAGE_ORIGINAL_TAG}
  docker-compose up -d
  curl -X POST -H 'Content-type: application/json' --data-urlencode '{"text": [{"title": "Streaming Guide", "title_link": "'${SLACK_SITE_URL}'", "text": "Reset docker images back to pre-release.","color": "CF423F","mrkdwn_in": ["title","text"]}]}' ${NOTIF_DRUPAL_DEPLOY}
fi

# If database backup finished then reset image and import backup.
if [ $DB_BACKUP_FINISH = true ]; then
  docker image tag novicell.azurecr.io/streaminguiden-apache:${IMAGE_ROLLBACK_TAG} novicell.azurecr.io/streaminguiden-apache:${IMAGE_ORIGINAL_TAG}
  docker-compose up -d
  curl -X POST -H 'Content-type: application/json' --data-urlencode '{"text": [{"title": "Streaming Guide", "title_link": "'${SLACK_SITE_URL}'", "text": "Reset docker images back to pre-release.","color": "CF423F","mrkdwn_in": ["title","text"]}]}' ${NOTIF_DRUPAL_DEPLOY}

  docker exec streamingguiden_php-staging_1 sh -c "/app/vendor/drush/drush/drush sql:drop"
  export LATEST_DB_BACKUP=`ls -Art /var/www/streamingguiden/${DEPLOY_ENV}/dumps | tail -n 1`
  docker exec streamingguiden_php-staging_1 sh -c "/app/vendor/drush/drush/drush sql:cli" < ${DEPLOY_ENV}/dumps/${LATEST_DB_BACKUP}
  curl -X POST -H 'Content-type: application/json' --data-urlencode '{"text": [{"title": "Streaming Guide", "title_link": "'${SLACK_SITE_URL}'", "text": "Database backup restored.","color": "CF423F","mrkdwn_in": ["title","text"]}]}' ${NOTIF_DRUPAL_DEPLOY}

  docker exec streamingguiden_php-staging_1 sh -c "/app/vendor/drush/drush/drush sset system.maintenance_mode FALSE"
  docker exec streamingguiden_php-staging_1 sh -c "/app/vendor/drush/drush/drush cr"
fi
