Promote Disable
_______________

CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Requirements
 * Installation
 * Configuration
 * Maintainers

INTRODUCTION
------------

This simple module allows a user to select content types on which they 
would like to disable the "Promote to front page" option. Although a 
user can set this option on the content type configuration page, this 
does not stop a content author from reselecting the option on individual
pieces of content. 

Promote Disable actually removes the option on both content type forms
and content addition forms. This module is also useful when programmatically 
creating nodes, such as when using the Devel generate module. Promote Disable 
stops nodes from being programmatically promoted to the front page.

REQUIREMENTS
------------

This module does not have any dependency on any other module.

INSTALLATION
------------

Install as normal (see http://drupal.org/documentation/install/modules-themes).

CONFIGURATION
-------------

Once installed and enabled go to <yoursite>/admin/config/content/promote_disable
and select the node types you would like Promote Disable to apply
to. No more configuration is needed.

MAINTAINERS
-----------
The development of Promote Disable is sponsored by Eon Creative Limited,
a web design and development company specialising in Drupal development based 
in Glasgow, Scotand.
http://www.eoncreative.com/
