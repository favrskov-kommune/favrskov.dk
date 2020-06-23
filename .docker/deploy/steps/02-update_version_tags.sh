#!/bin/bash

cd /mnt/data/docker/favrskov/
sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=TAGGING_START/" .env
# Load the .env variables to the environment so they can be used.
if [ -f .env ]; then
    # Load Environment Variables
    export $(cat .env | grep -v '#' | awk '/=/ {print $1}')
    sed -i "s/PREVIOUS_TAG=.*/PREVIOUS_TAG=$RELEASE_TAG/" .env
    sed -i "s/RELEASE_TAG=.*/RELEASE_TAG=$1/" .env
    sed -i "s/AZURE_DEPLOY_STAGE=.*/AZURE_DEPLOY_STAGE=TAGGING_STOP/" .env
fi