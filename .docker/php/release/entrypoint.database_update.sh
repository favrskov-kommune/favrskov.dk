#!/bin/bash
# e = exit script on first non-zero return code,
# u = treat unset variables as an error,
# o = return the exit code of the last command that had a non-zero code.
set -euo pipefail

/release/mount.public_files_cache_folders.sh
/release/mount.log_folder.sh

cd /app && \
    vendor/drush/drush/drush updatedb -y
