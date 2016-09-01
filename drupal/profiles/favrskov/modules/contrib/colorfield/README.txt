Colorfield is a module that brings the new field type "color".

You can use the module through two widgets:
* A split input field R, G, B to compose your hexadecimal CSS color through
three fields.
* A textfield. You can decide to enable a colorpicker for this textfield and
select a different colorpicker. By default the colorpicker is core farbtastic
but you can replace the colorpicker by any other colorpicker library.
The module has an example of that with the colorpicker jQuery minicolors (check
the modules directory).

Once your widget is selected you can configure the field formatter, three
formatters are existing:
* Displaying the raw RGB value (may be useful for views integration).
* Displaying a color swatch, the size of the swatch is configurable.
* Displaying a colored message (eg: Illustrate the color filled by the user).

==[Colorfield minicolors]==
In order to install Colorfield minicolors you first need to clone the library
jQuery miniColors hosted on Github.

Site: https://github.com/claviska/jquery-miniColors
Demo: http://labs.abeautifulsite.net/jquery-miniColors/
Clone: https://github.com/claviska/jquery-miniColors/tags

Installation:
* Download & enable jQuery Update
* Switch the version of jQuery to be >= to 1.7.1
* Clone the jQuery miniColors library to sites/all/libraries/jquery-miniColors,
  the files structure should be:
  libraries/jquery-miniColors/jquery.minicolors.css
  libraries/jquery-miniColors/jquery.minicolors.js
* Enable the colorfield minicolors module.
