#!/bin/bash
# Variables:
# $1 = release tag
# $2 = branch name (for feature/some-feature the name would be "some-feature")
# $3 = webhook for #notif-drupal-deploy channel
# $4 = webhook for #notif-deployments channel
# $5 = webhook for #notif-php-devops channel
# $6 = webhook for #notif-php-test channel

cd /mnt/data/docker/favrskov/
sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=MAINTENANCE_OFF_START/" .env
docker-compose exec php bash -c "cd sites/default/ && drush vset maintenance_mode 0"
docker-compose exec php bash -c "cd sites/default/ && drush cc all"
sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=MAINTENANCE_OFF_STOP/" .env