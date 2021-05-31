#!/bin/bash

# Variables:
# $1 = release tag
# $2 = backup folder

# e = exit script on first non-zero return code,
# u = treat unset variables as an error,
# o = return the exit code of the last command that had a non-zero code.
set -euo pipefail

filelist=$(ls -r /mnt/backup/database/backup_${DB_SCHEMA}_${VERSION}_* 2>/dev/null || echo "" | head -6);
filename=$(echo "$filelist" | head -n 1);

if [ "$filename" != "" ] ; then \
  cd /app && \
      vendor/drush/drush/drush sql-cli < /mnt/backup/database/${filename}
fi
