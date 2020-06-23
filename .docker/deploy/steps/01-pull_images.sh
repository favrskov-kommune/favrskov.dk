#!/bin/bash

cd /mnt/data/docker/favrskov/
sed -i "s/AZURE_DEPLOY_STATUS=.*/AZURE_DEPLOY_STATUS=STARTED/" .env
sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=IMAGE_PULL_START/" .env
docker pull -q favrskov.azurecr.io/favrskov-apache:$1
docker pull -q favrskov.azurecr.io/favrskov-php:$1
sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=IMAGE_PULL_STOP/" .env