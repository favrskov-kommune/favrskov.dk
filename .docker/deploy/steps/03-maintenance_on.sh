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
sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=MAINTENANCE_ON_START/" .env

curl -s -X POST -H 'Content-type: application/json' --data "{\"attachments\": [{\"title\": \"Favrskov.dk\", \"title_link\": \"$7\", \"text\": \":azure-logo: Starting release of `$2` to <$7|$8>\",\"color\": \"E6E6E6\",\"mrkdwn_in\": [\"title\",\"text\"]}]}" $6

docker-compose exec php bash -c "cd sites/default/ && drush vset maintenance_mode 1"
docker-compose exec php bash -c "cd sites/default/ && drush cc all"

sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=MAINTENANCE_ON_STOP/" .env