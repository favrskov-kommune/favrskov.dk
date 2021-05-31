#!/bin/bash

# e = exit script on first non-zero return code,
# u = treat unset variables as an error,
# o = return the exit code of the last command that had a non-zero code.
set -euo pipefail

curl -N "https://${SITEMAP_DOMAIN}/sitemap.xml" \
  | grep -oP '<loc>\K[^<]*' \
  | xargs -n1 wget -q -t 1

# Run async
#  | xargs -n1 wget -q -b -O - -t 1
