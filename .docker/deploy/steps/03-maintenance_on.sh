#!/bin/bash

cd /mnt/data/docker/favrskov/
sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=MAINTENANCE_ON_START/" .env
docker-compose exec php bash -c "cd sites/default/ && drush vset maintenance_mode 1"
docker-compose exec php bash -c "cd sites/default/ && drush cc all"
sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=MAINTENANCE_ON_STOP/" .env