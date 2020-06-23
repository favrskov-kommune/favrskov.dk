#!/bin/bash

cd /mnt/data/docker/favrskov/
# Local .env
if [ -f .env ]; then
    # Load Environment Variables
    export $(cat .env | grep -v '#' | awk '/=/ {print $1}')
    # Do rollback here
fi