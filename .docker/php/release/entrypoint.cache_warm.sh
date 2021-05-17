#!/bin/bash

# e = exit script on first non-zero return code,
# u = treat unset variables as an error,
# o = return the exit code of the last command that had a non-zero code.
set -euo pipefail

export OLD_DOMAIN="http:\/\/favrskov.dk" \
  && export DEFAULT_DOMAIN='favrskov.dk' \
  && export SITEMAP_DOMAIN="${SITEMAP_DOMAIN:-$DEFAULT_DOMAIN}" \
  && curl -N "https://${SITEMAP_DOMAIN}/sitemap.xml" -o /tmp/website-sitemap \
  && sed -i -e "s/${OLD_DOMAIN}/https:\/\/${SITEMAP_DOMAIN}/g" /tmp/website-sitemap \
  && cat /tmp/website-sitemap \
    | grep -oP '<loc>\K[^<]*' \
    | xargs -n1 wget -q -b -O - -t 1
