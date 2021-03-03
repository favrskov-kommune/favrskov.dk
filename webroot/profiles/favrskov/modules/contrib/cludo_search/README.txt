Cludo Search

Installation

Take a look at https://www.drupal.org/docs/7/extend/installing-modules  (installing modules)

For this module to function, it requires the following:

1. Cludo account (the account is a paid item, and this module is unaffiliated with the Cludo organization)
2. Cludo must have "crawled your site"
3. Any and all configurations to the Cludo account
4. A valid Cludo account

Without the above, this module will do nothing of interest.


-- INSTALLATION --

Install in Drupal the normal way...

  * https://www.drupal.org/docs/7/extend/installing-modules 

-- CONFIGURATION --

The module needs to be configured to connect to your CS device, which can be found here...

  * admin/config/search/cludo_search/settings
  
The configuration interface can be in the search area on the configuration page.

-- BLOCKS --

The module provides one block, and a results page:

  (1) Search Form


The search page:

  * csearch/

No records of you search content are stored on your server.

-- TESTING --


  (1) Basic testing that doesn't require a connection to your CS


FEATURES

All settings can be exported to features, will appear as Config for cludo search


Thanks to https://github.com/Kirchheimer the creator of this module. 

KNOWN ISSUES:

On the search template unset warnings are being thrown, to resolve these this 
patch can be applied against core https://www.drupal.org/project/drupal/issues/2884171
