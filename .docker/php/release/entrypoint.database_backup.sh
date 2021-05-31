#!/bin/bash

# Variables:
# $1 = release tag
# $2 = backup folder

# e = exit script on first non-zero return code,
# u = treat unset variables as an error,
# o = return the exit code of the last command that had a non-zero code.
set -euo pipefail

filename=backup_${DB_SCHEMA}_${VERSION}_`date +%Y-%m-%d_%H-%M-%S`.sql
cd /app \
    && vendor/drush/drush/drush sql:dump --structure-tables-list=cache,cache_* > /tmp/${filename} \
    && mv /tmp/${filename} /mnt/backup/database/${filename}

# TODO: clean up old stuff
