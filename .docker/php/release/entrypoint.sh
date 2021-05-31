#!/bin/bash

# Mount folders for Drupal
/release/mount.public_files_cache_folders.sh
/release/mount.log_folder.sh

# Configure NewRelic
/release/config.newrelic.sh

# Configure NewRelic
/release/config.smtp.sh


# first arg is `-f` or `--some-option`
if [ "${1#-}" != "$1" ]; then
	set -- php "$@"
fi

# Run the command passed
exec "$@"
