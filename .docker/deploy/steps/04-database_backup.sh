#!/bin/bash

cd /mnt/data/docker/favrskov/
sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=DATABASE_BACKUP_START/" .env
docker-compose exec php bash -c "cd sites/default/ && drush sql-dump --gzip --structure-tables-list=cache,cache_*" > dumps/drupal_`date +%d-%m-%Y_%H-%M-%S`.sql.gz
cd /mnt/data/docker/favrskov/dumps
ls -tp | grep -v '/$' | tail -n +8 | xargs -I {} rm -- {}
cd /mnt/data/docker/favrskov/
sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=DATABASE_BACKUP_STOP/" .env