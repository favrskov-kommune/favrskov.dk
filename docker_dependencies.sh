#!/bin/bash

sudo curl -L https://raw.githubusercontent.com/docksal/docksal/master/bin/fin -o /usr/local/bin/fin
sudo chmod +x /usr/local/bin/fin
echo "export IMAGE_VHOST_PROXY=hilmutdinov/vhost-proxy:1.0.1" > ~/.zshrc