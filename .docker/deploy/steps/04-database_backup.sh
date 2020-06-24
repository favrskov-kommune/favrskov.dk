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

cd /mnt/data/docker/favrskov/
sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=DATABASE_BACKUP_START/" .env

filename="drupal_`date +%d-%m-%Y_%H-%M-%S`.sql.gz"
docker-compose exec php bash -c "cd sites/default/ && drush sql-dump --gzip --structure-tables-list=cache,cache_*" > dumps/${filename}
cd /mnt/data/docker/favrskov/dumps
ls -tp | grep -v '/$' | tail -n +8 | xargs -I {} rm -- {}
cd /mnt/data/docker/favrskov/

sed -i "s/AZURE_DEPLOY_DB_BACKUP=.*/AZURE_DEPLOY_DB_BACKUP=${filename}/" .env

sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=DATABASE_BACKUP_STOP/" .env