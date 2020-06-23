#!/bin/bash

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