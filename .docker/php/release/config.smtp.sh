#!/bin/bash

# Configure SMTP
if [ "$SMTP_PORT" != "" -a "$SMTP_HOST" != "" -a "$SMTP_AUTH_USERNAME" != "" -a "$SMTP_AUTH_PASSWORD" != "" ] ; then sed -i \
      -e "s/REPLACE_WITH_REAL_SMTP_PORT/${SMTP_PORT}/" \
      -e "s/REPLACE_WITH_REAL_SMTP_HOST/${SMTP_HOST}/" \
      -e "s/REPLACE_WITH_REAL_SMTP_AUTH_USERNAME/${SMTP_AUTH_USERNAME}/" \
      -e "s/REPLACE_WITH_REAL_SMTP_AUTH_PASSWORD/${SMTP_AUTH_PASSWORD}/" \
      /usr/local/etc/smtp/msmtp.conf ;
fi
