#!/bin/bash

cd /mnt/data/docker/favrskov/
sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=TAGGING_START/" .env
while read line; do export $line; done < .env
sed -i "s/PREVIOUS_TAG=.*/PREVIOUS_TAG=$RELEASE_TAG/" .env
sed -i "s/RELEASE_TAG=.*/RELEASE_TAG=$1/" .env
sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=TAGGING_STOP/" .env