Dynamic background
------------------
Enables site administrators to upload a range of images and select one as
background on the site. This enables non HTML/CSS aware administrators to
quickly change the background image on a site from within the administrator
interface.

The selected image is applied to the site by entering a CSS selector in the
administration interface (e.g. body #main-wrapper). It's also possible to attach
CSS to the selector in the interface (e.g. background-size: cover).

Extensions
----------
This module comes with extensions that allows you to used the uploaded
background images in different contexts. The extensions has a weight so the user
extension overrides the image selection made in the node extension. If an
extension do not have a image selected, then it falls back to the next extension
with a lower weight.

Each extension have its own set of configuration options, but they all have the
CSS fields, which have to be filled out.

* User
------
This extension allows authorized users to select a background image to use when
they are logged in. If a used have selected a image it will override all other
background image selection. The image is selected on the "My background" tab on
the user profile page (e.g. /user/1/backgrounds).

* Blog
------
This extension allows users to select a background image for their blog pages
and entries. The image is selected on the user profile on the "My blog
background" tab on at the user profile page (e.g. /user/1/blog/background).

* Panels
--------
The panels extension allow you to select a background image for a given panel 
variant. The image is selected under "General settings" in the variant of the
panel that should use a given image.

* Node
------
This extension allow each node to have its own background image. You can select
which content types should have this ability in the administration interface.
The image for a given node is selected in the individual node edit form, when
creating or updating a node.

* Views
-------
This extension enables administrators to select dynamic background images in
views, so each view can have it's own image. This is achieved exposing a new
display in views called "Page (dynamic background)", which under page settings
have an option to select the image

* Context
---------
The context extension allows administrators to select uploaded images base on
different contexts using the context module. Such contexts as path, role,
node type or taxonomy and may more conditions.

* Inherit
---------
An add-on that works with the Node submodule to automatically use the
background image from the parent page (by path) if one is not manually
selected.

Configuration
-------------
Enable the modules/extensions that you want to use and go to the administration
interface at /admin/config/user-interface/backgrounds/settings. Start by filling
out the form and remember to fill out the CSS behaviour section. Then go into
the configuration tab for each module/extension that you have enabled and as a
minimum filling out the CSS behaviour fields.

Go to /admin/config/user-interface/backgrounds and select some images to upload
after pressing "Save configuration" the form will change and allow you to select
a default image. If you have enable some of the extensions go to their location
and select one of the uploaded images. See the extension descriptions above for
information on where to select images for each extension.