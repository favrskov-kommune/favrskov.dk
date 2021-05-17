#!/bin/bash
# e = exit script on first non-zero return code,
# u = treat unset variables as an error,
# o = return the exit code of the last command that had a non-zero code.
set -euo pipefail

cd /app && \
    vendor/drush/drush/drush updatedb -y
