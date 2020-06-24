#!/bin/bash
# Variables:
# $1 = release tag
# $2 = branch name (for feature/some-feature the name would be "some-feature")
# $3 = webhook for #notif-drupal-deploy channel
# $4 = webhook for #notif-deployments channel
# $5 = webhook for #notif-php-devops channel
# $6 = webhook for #notif-drupal-test channel
# $7 = deployed site URL
# $8 = deployed site domain

curl -s -X POST -H 'Content-type: application/json' --data "{\"attachments\": [{\"title\": \"Favrskov.dk\", \"title_link\": \"$7\", \"text\": \":bangbang: Release of branch \`$2\` to <$7|$8> failed, starting rollback.\",\"color\": \"CF423F\",\"mrkdwn_in\": [\"title\",\"text\"]}]}" $3

cd /mnt/data/docker/favrskov/
# Local .env
if [ -f .env ]; then
    # Load Environment Variables
    export $(cat .env | grep -v '#' | awk '/=/ {print $1}')
    # Do rollback here

    case "$AZURE_DEPLOY_STAGE" in
        "IMAGE_PULL_START")
            restore_image=false
            restore_database=false
            restore_tags=false
        ;;
        "IMAGE_PULL_STOP" | "TAGGING_START")
            restore_image=false
            restore_database=false
            restore_tags=false
        ;;
        "TAGGING_STOP" | "MAINTENANCE_ON_START")
            restore_image=false
            restore_database=false
            restore_tags=true
        ;;
        "MAINTENANCE_ON_STOP" | "DATABASE_BACKUP_START")
            restore_image=false
            restore_database=false
            restore_tags=true
        ;;
        "DATABASE_BACKUP_STOP" | "IMAGE_SWITCH_START")
            restore_image=false
            restore_database=true
            restore_tags=true
        ;;
        "*")
            restore_image=true
            restore_database=true
            restore_tags=true
        ;;
    esac

    restore_tag=$PREVIOUS_TAG

    if $restore_tags ; then
        sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=TAG_RESTORE_START/" .env

        if [ -z "$PREVIOUS_TAG" ]; then
            curl -s -X POST -H 'Content-type: application/json' --data "{\"attachments\": [{\"title\": \"Favrskov.dk\", \"title_link\": \"$7\", \"text\": \":x: Rollback of branch \`$2\` to <$7|$8> failed, missing previous version, manual rollback required!!.\",\"color\": \"CF423F\",\"mrkdwn_in\": [\"title\",\"text\"]}]}" $3
            return false
        fi

        sed -i "s/RELEASE_TAG=.*/RELEASE_TAG=$PREVIOUS_TAG/" .env
        sed -i "s/PREVIOUS_TAG=.*/PREVIOUS_TAG=/" .env

        sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=TAG_RESTORE_STOP/" .env
    fi

    if $restore_database ; then
        sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=DATABASE_RESTORE_START/" .env

        if [ -z "AZURE_DEPLOY_DB_BACKUP" ]; then
            curl -s -X POST -H 'Content-type: application/json' --data "{\"attachments\": [{\"title\": \"Favrskov.dk\", \"title_link\": \"$7\", \"text\": \":x: Rollback of branch \`$2\` to <$7|$8> failed, missing database backup, manual rollback required!!.\",\"color\": \"CF423F\",\"mrkdwn_in\": [\"title\",\"text\"]}]}" $3
            return false
        fi

        docker-compose exec php sh -c "drush sql-drop"
        docker-compose exec php sh -c "drush sql-cli" < dumps/${AZURE_DEPLOY_DB_BACKUP}

        sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=DATABASE_RESTORE_STOP/" .env
    fi

    if $restore_image ; then
        sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=IMAGE_RESTORE_START/" .env

        if [ -z "$restore_tag" ]; then
            curl -s -X POST -H 'Content-type: application/json' --data "{\"attachments\": [{\"title\": \"Favrskov.dk\", \"title_link\": \"$7\", \"text\": \":x: Rollback of branch \`$2\` to <$7|$8> failed, missing previous version, manual rollback required!!.\",\"color\": \"CF423F\",\"mrkdwn_in\": [\"title\",\"text\"]}]}" $3
            return false
        fi

        docker pull favrskov.azurecr.io/favrskov-apache:$restore_tag
        docker pull favrskov.azurecr.io/favrskov-php:$restore_tag

        sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=IMAGE_RESTORE_STOP/" .env
    fi

    # Finishing with a notification
    curl -s -X POST -H 'Content-type: application/json' --data "{\"attachments\": [{\"title\": \"Favrskov.dk\", \"title_link\": \"$7\", \"text\": \":white_check_mark: Release of branch \`$2\` to <$7|$8> successfully rolled back.\",\"color\": \"4AB441\",\"mrkdwn_in\": [\"title\",\"text\"]}]}" $3

    # If master branch also notify in #notif-deployments
    if [ $2 = "master" ]; then
        curl -s -X POST -H 'Content-type: application/json' --data "{\"attachments\": [{\"title\": \"Favrskov.dk\", \"title_link\": \"$7\", \"text\": \":white_check_mark: Release of branch \`$2\` to <$7|$8> successfully rolled back.\",\"color\": \"4AB441\",\"mrkdwn_in\": [\"title\",\"text\"]}]}" $4
    fi
fi