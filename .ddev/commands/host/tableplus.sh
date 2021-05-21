#!/bin/bash

## Description: Run Tableplus against current db
## Usage: tableplus
## Example: "ddev tableplus"

open "mysql://db:db@127.0.0.1:${DDEV_HOST_DB_PORT}/db?enviroment=local&name=${DDEV_SITENAME}"
