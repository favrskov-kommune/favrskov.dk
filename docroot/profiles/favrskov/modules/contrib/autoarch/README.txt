Autoarch module is for automatic archivation of nodes.

===============================================
About
===============================================

The autoarch module is for archivating nodes. Essentially the node gets a flag
or sign, if that is actual or archive, and that data will be saved to the 
database. There are two options for the user to choose, whether he/she wants
to archivate the contents, also these options can be performed in several ways.
The first possibility or mode of it, is the manual archivation, where selecting
the preferred value, the content can be 'Actual' or 'Archive'. This kind of 
mode doesn't include time-bond or time-limit, instead of the other mode, the 
automatic archivation. The latter case, the user has the chance to attach a 
date/time to the content, which defines how long the node should be actual, 
because in default all nodes are actual till the user changes to other value. 

Other value then can be set like 
the two option above. The mode of the archivation can be set by two ways:
-one-by-one differently at the node/add or node/edit forms inside 'Archive'
fieldgroup

OR

-through node-operations/bulk operations for bunch of nodes, by selecting the 
proper option from 'Update options' ("admin/content/node")

The user also has the possibility to add a new filter to a new or existing 
view, by adding the 'State of the node' filter from the 'Autoarch' group. 
This filter checks the state of the node depending if the node is actual or
archive.

This module can be useful for portals where meathers the chance for 
archivating and the content's information actuality.

===============================================
Install & Usage
===============================================

1. Install the module as a normal drupal module, see description here: 
http://drupal.org/node/70151
--NOTE: This will install 2 tables to your install's database: 
autoarch_state & autoarch_date



2. Select the content type and the date granularity for the archivation at the
Autoarch admin settings page: "admin/settings/autoarch" !

--The granularity is for the date field of the automatic archivation mode, 
sometimes it might be not enough to set the granularity to 'day' only, so the
module lets the user to choose.
--NOTE: The date is saved as 'UNIX timestamp' in the database, 
for more details visit: http://en.wikipedia.org/wiki/Unix_time
--NOTE: The module is connected to the server's CRON and depends on it, so even
if the user sets the granularity to 'Hour - Minute', the module checks the 
node's dates at CRON run. The easy way to test, is to set the 'Actual until'
date in the past and run cron.php from browser (with the right permissions
of course).

For more details and descriptions about CRON, visit:
http://www.webmasters-central.com/article-blog/tutorials/cron-tutorial-managing-cron-tab-or-cron-job-is-easy/



3. After selecting the content type(s), a new 'Archive' fieldgroup will appear
on the selected content type(s) node forms (node/add and node/edit).

--Inside 'Archive' choose the mode of archivation at the 'Options' field 
('Manual' or 'Automatic')!

--If set the 'Options' field's value to 'Manual', then choose the 'Actual or
Archive' field's value, from between 'Actual' or 'Archive'! Then the date 
won't be used.

--If set the 'Options' to 'Automatic', then the 'Actual or Archive' field's 
value will be 'Actual', then set the date field by typing or by selecting from
the popup calendar (after clicking in the field)! This field's granularity can
be set at the Autoarch admin settings page @ "admin/settings/autoarch".

--NOTE: When the CRON runs, it checks the current time, and makes a comparison
between the current date and the saved date. If the saved date less than the
current time, than switches the 'Options' field's value to 'Manual' and the
'Actual or Archive' field's value to 'Archive'.



4. If the user wants not just one but more nodes to set archivation on, now has
the possibility to make so. At "admin/content/node", there are 2 operations 
available: 
'Set manual archivation' and 'Set automatic archivation'.

--After selecting the nodes, choose the preferred operation!

--If operation is 'Set manual archivation', then a new field, 'Actual or 
Archive' will appear. Choose the preffered option, then press Update!
Then the selected nodes archive settings will be updated.

--If operation is 'Set automatic archivation', then a new field, 'Actual until'
will appear. Fill in the preffered date, then press Update! Then the selected
nodes archive settings will be updated.

--NOTE: The 'Actual until' field's granularity can also be set at the Autoarch
admin settings page: "admin/settings/autoarch".

--NOTE: If a selected node's type is not associated to Autoarch 
(admin/settings/autoarch) and an operation is performed, than an error message
will appear with the node's id, which couldn't the operation update on.
Then that node won't be updated. 

For example:
If you have two content types: content_type_1 & content_type_2, and 
content_type_1 is associated to Autoarch and content_type_2 NOT, after
selecting two content_type_1 nodes and one content_type_2 node than the two
content_type_1 nodes will and the one content_type_node won't be updated.

--NOTE: If you want advanced content listing and operations, we prefer using
Views Bulk Operations and creating your own view.



5. Currently one Autoarch filter is available for views, the 
'State of the node', which can be obiously 'Archive' or 'Actual'. 
Select at the views edit form's filter section!
