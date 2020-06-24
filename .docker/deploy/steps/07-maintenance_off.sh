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
sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=MAINTENANCE_OFF_START/" .env

docker-compose exec php bash -c "cd sites/default/ && drush vset maintenance_mode 0"
docker-compose exec php bash -c "cd sites/default/ && drush cc all"

curl -s -X POST -H 'Content-type: application/json' --data "{\"attachments\": [{\"title\": \"Favrskov.dk\", \"title_link\": \"$7\", \"text\": \":tada: Release of branch \`$2\` to <$7|$8> successful!\",\"color\": \"4AB441\",\"mrkdwn_in\": [\"title\",\"text\"]}]}" $3

# If master branch also notify in #notif-deployments
if [ $2 = "master" ]; then
    curl -s -X POST -H 'Content-type: application/json' --data "{\"attachments\": [{\"title\": \"Favrskov.dk\", \"title_link\": \"$7\", \"text\": \":tada: Release of branch \`$2\` to <$7|$8> successful!\",\"color\": \"4AB441\",\"mrkdwn_in\": [\"title\",\"text\"]}]}" $4
fi

sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=MAINTENANCE_OFF_STOP/" .env