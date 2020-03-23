#!/bin/sh
a2enmod expires
a2disconf other-vhosts-access-log

(crontab -l -u root; echo "* * * * * wget -O - -q -t 1 https://$EXTERNAL_DOMAIN/cron.php?cron_key=$CRON_HASH >> /var/log/curllog.log") | crontab
echo "$(hostname -i)\t$(hostname) $(hostname).localhost" >> /etc/hosts
cron

if [ $1 = "https" ]; then
	a2enmod ssl
	/etc/init.d/apache2 reload
fi

/usr/sbin/apache2ctl -D FOREGROUND