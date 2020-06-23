#!/bin/bash
# Variables:
# $1 = release tag
# $2 = branch name (for feature/some-feature the name would be "some-feature")
# $3 = webhook for #notif-drupal-deploy channel
# $4 = webhook for #notif-deployments channel
# $5 = webhook for #notif-php-devops channel
# $6 = webhook for #notif-php-test channel
# $7 = deployed site URL
# $8 = deployed site domain

cd /mnt/data/docker/favrskov/
sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=CLEANUP_START/" .env
# Load the .env variables to the environment so they can be used.
if [ -f .env ]; then
    # Load Environment Variables
    export $(cat .env | grep -v '#' | awk '/=/ {print $1}')
    docker rmi favrskov.azurecr.io/favrskov-php:$PREVIOUS_TAG
    docker rmi favrskov.azurecr.io/favrskov-apache:$PREVIOUS_TAG
    sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=CLEANUP_STOP/" .env
    sed -i "s/AZURE_DEPLOY_STATUS=.*/AZURE_DEPLOY_STATUS=DONE/" .env
fi