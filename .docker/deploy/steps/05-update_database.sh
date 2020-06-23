#!/bin/bash

cd /mnt/data/docker/favrskov/
sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=DATABASE_UPDATE_START/" .env
docker-compose exec php bash -c "cd sites/default/ && drush updb -y"
sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=DATABASE_UPDATE_STOP/" .env