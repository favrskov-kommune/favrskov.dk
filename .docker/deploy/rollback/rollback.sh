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

curl -s -X POST -H 'Content-type: application/json' --data "{\"attachments\": [{\"title\": \"Favrskov.dk\", \"title_link\": \"$7\", \"text\": \":bangbang: Release of \`$2\` to <$7|$8> failed, starting rollback.\",\"color\": \"CF423F\",\"mrkdwn_in\": [\"title\",\"text\"]}]}" $6

cd /mnt/data/docker/favrskov/
# Local .env
if [ -f .env ]; then
    # Load Environment Variables
    export $(cat .env | grep -v '#' | awk '/=/ {print $1}')
    # Do rollback here
    curl -s -X POST -H 'Content-type: application/json' --data "{\"attachments\": [{\"title\": \"Favrskov.dk\", \"title_link\": \"$7\", \"text\": \":white_check_mark: Release of \`$2\` to <$7|$8> successfully rolled back.\",\"color\": \"4AB441\",\"mrkdwn_in\": [\"title\",\"text\"]}]}" $6
fi