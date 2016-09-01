
OVERVIEW
=====================
The module makes it possible on node level to exclude a node from Apache Solr.
This is useful if you have indexed a specific content type, and want to 
exclude a few nodes of that type.

CONFIGURATION
=====================
Enable excluding of nodes in the submission form settings fieldset in the 
content type settings (e.g. admin/structure/types/page).

EXCLUDE A NODE
=====================
Find the vertical tabs fieldset "Apache Solr exclude" in the node edit form. 
Check "Exclude from Apache Solr" and save. The node will be removed next time
content is indexed either by cron or manually.

REQUIREMENTS
=====================
- Apache Solr Search Integration (http://drupal.org/project/apachesolr)

CONTRIBUTORS
=====================
Jens Beltofte Sørensen - http://drupal.org/user/151799

SPONSORS
=====================
Propeople - www.wearepropeople.com