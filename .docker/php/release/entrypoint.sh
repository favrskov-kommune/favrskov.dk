#!/bin/bash

/release/mount_drupal_folders.sh

# Configure NewRelic
if [ "$NEWRELIC_LICENSE_KEY" != "" -a "$NEWRELIC_PROJECT_NAME" != "" ] ; then sed -i \
      -e "s/REPLACE_WITH_REAL_KEY/${NEWRELIC_LICENSE_KEY}/" \
      -e "s/newrelic.appname = \"PHP Application\"/newrelic.appname = \"${NEWRELIC_PROJECT_NAME}\"/" \
      -e "s/;newrelic.daemon.app_connect_timeout =.*/newrelic.daemon.app_connect_timeout=15s/" \
      -e "s/;newrelic.daemon.start_timeout =.*/newrelic.daemon.start_timeout=5s/" \
      /usr/local/etc/php/conf.d/newrelic.ini ;
fi

if [ "$SMTP_PORT" != "" -a "$SMTP_HOST" != "" -a "$SMTP_AUTH_USERNAME" != "" -a "$SMTP_AUTH_PASSWORD" != "" ] ; then sed -i \
      -e "s/REPLACE_WITH_REAL_SMTP_PORT/${SMTP_PORT}/" \
      -e "s/REPLACE_WITH_REAL_SMTP_HOST/${SMTP_HOST}/" \
      -e "s/REPLACE_WITH_REAL_SMTP_AUTH_USERNAME/${SMTP_AUTH_USERNAME}/" \
      -e "s/REPLACE_WITH_REAL_SMTP_AUTH_PASSWORD/${SMTP_AUTH_PASSWORD}/" \
      /usr/local/etc/smtp/msmtp.conf ;
fi

# first arg is `-f` or `--some-option`
if [ "${1#-}" != "$1" ]; then
	set -- php "$@"
fi

# Run the command passed
exec "$@"
