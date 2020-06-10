INTRODUCTION
------------

Token Filter is a very simple module to make token values available as an input
filter.


REQUIREMENTS
------------

This module requires the following modules:

 * Token (https://www.drupal.org/project/token)


INSTALLATION
------------

 * Install as you would normally install a contributed Drupal module. Visit
   https://www.drupal.org/documentation/install/modules-themes/modules-7
   for further information.

 * You may want to disable Toolbar module, since its output clashes with
   Administration Menu.


CONFIGURATION
-------------

    1. Enable the module.
    2. Go to /admin/config/content/formats and enable the token_filter for any
       of your existing filter type or if you wish, create a new one.
    3. In the text where you use that input filter, you can use substitution
       tokens enclosing your token square brackets, i.e., [site:name] .
       Token Filter will replace this entry with the name of your site.

You will find an extensive list of tokens on this page:
http://drupal.org/node/390482#drupal7tokenslist
