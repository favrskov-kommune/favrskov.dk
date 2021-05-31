#!/bin/bash

# Configure NewRelic
if [ "$NEWRELIC_LICENSE_KEY" != "" -a "$NEWRELIC_PROJECT_NAME" != "" ] ; then sed -i \
      -e "s/REPLACE_WITH_REAL_KEY/${NEWRELIC_LICENSE_KEY}/" \
      -e "s/newrelic.appname = \"PHP Application\"/newrelic.appname = \"${NEWRELIC_PROJECT_NAME}\"/" \
      -e "s/;newrelic.daemon.app_connect_timeout =.*/newrelic.daemon.app_connect_timeout=15s/" \
      -e "s/;newrelic.daemon.start_timeout =.*/newrelic.daemon.start_timeout=5s/" \
      /usr/local/etc/php/conf.d/newrelic.ini ;
fi
