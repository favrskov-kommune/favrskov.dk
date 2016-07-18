 Encrypt Description
====================================
(Two-way) Encryption Drupal module.  Please see
the following page for more current information:

http://drupal.org/project/encrypt

Encrypt is an API module to provide (two-way)
encryption.  It also provides a system for
other modules to provide encryption methods.


 Installation
====================================
Regular Drupal module installation.  You
can then choose a different default
encryption method here:

admin/settings/encrypt

It is not required, but will actually MAKE
YOU ENCRYPTION SECURE by putting your encryption
key outside of the webroot.  You can choose the 
the directory in the administrative interface.


 API
====================================
encrypt($text, $options, $method, $key)

This encrypts text.  Only the text is needed.
The default method will be used unless specified.
The default key will be used unless specified.

decrypt($text, $options, $method, $key)

This decrypts text.  Only the text is needed.
The default method will be used unless specified.
The default key will be used unless specified.
Since the key and method names are stored with
the encrypted data, it is suggested to not
use any options, so that the correct
method and key can be used.

Please see the following file on how to implement
your own encryption methods:

encrypt.api.php


 Credits
====================================
zzolo (Alan Palazzolo): http://drupal.org/user/147331
theunraveler (Jake Bell): http://drupal.org/user/71548
