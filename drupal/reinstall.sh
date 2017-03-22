#!/bin/sh

if [ "$IS_DOCKER" = "1" ]; then
    time ansible-playbook -vvvv reinstall.yml -i 'localhost,' --connection=local --extra-vars "pp_environment=docker env_domain=docksal mysql_host=db solr_host=solr solr_url='solr/collection1' memcache_server='memcached:11211'"
else
    if [ "$1" = "--windows" ]; then
        time ansible-playbook -vvvv reinstall.yml -i 'localhost,' --connection=local --extra-vars "is_windows=true"
    else
        time ansible-playbook -vvvv reinstall.yml -i 'localhost,' --connection=local
    fi
fi
