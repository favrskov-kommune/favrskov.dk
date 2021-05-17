#!/bin/bash

# Variables:
# $1 = release tag
# $2 = backup folder

# e = exit script on first non-zero return code,
# u = treat unset variables as an error,
# o = return the exit code of the last command that had a non-zero code.
set -euo pipefail

#mkdir -p dumps
#filename=sows_`date +%d-%m-%Y_%H-%M-%S`.sql
#mysqldump -h $DB_HOST -u"$DB_USER"'@'"$DB_HOST" -p$DB_PASS $DB_SCHEMA --single-transaction --quick > dumps/${filename}
#ls -la dumps/

filename=backup_${DB_SCHEMA}_${VERSION}_`date +%Y-%m-%d_%H-%M-%S`.sql
cd /app \
    && vendor/drush/drush/drush sql:dump --structure-tables-list=cache,cache_* > /tmp/${filename} \
    && mv /tmp/${filename} /mnt/backup/database/${filename}

# TODO: clean up old stuff
