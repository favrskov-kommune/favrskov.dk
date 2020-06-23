#!/bin/bash
# Variables:
# $1 = release tag
# $2 = branch name (for feature/some-feature the name would be "some-feature")
# $3 = webhook for #notif-drupal-deploy channel
# $4 = webhook for #notif-deployments channel
# $5 = webhook for #notif-php-devops channel
# $6 = webhook for #notif-php-test channel

echo "notif-php-test: $6"

cd /mnt/data/docker/favrskov/
sed -i "s/AZURE_DEPLOY_STATUS=.*/AZURE_DEPLOY_STATUS=STARTED/" .env
sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=IMAGE_PULL_START/" .env
docker pull favrskov.azurecr.io/favrskov-apache:$1
docker pull favrskov.azurecr.io/favrskov-php:$1
sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=IMAGE_PULL_STOP/" .env
