#!/bin/bash

# Mount logs dir
if [[ ! -d /app/logs ]]; then
    mkdir /app/logs
fi

rm -rf /app/logs/*  /app/logs/.keep
mount -o bind /mnt/logs /app/logs

echo "Logs mounts complete."
