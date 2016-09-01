This module drastically increase the validation power of Drupal Form API (FAPI).
You can use the existent filters and rules or create your own. It is up to you!

For the most information, visit the project documenation.


rules 			Usage						Description
------------------------------------------------------
numeric 			numeric 			Must contains only numbers.

alpha 				alpha 				Must contains only alpha characters.

length				length[<total>]
							length[<min>, <max>]
							length[<min>, *] 	

chars 				chars[<char 1>, <char 2>, ..., <char N>] 
														Accept only specified characters.

email 				email 				Valid email

url 					url
							url[absolute] Valid URL. If absolute parameter is specified,
														the field value must have to be a full URL.

ipv4 					ipv4 					Valid IPv4

alpha_numeric alpha_numeric Accept only Alpha Numeric characters

alpha_dash 		alpha_dash 		Accept only Alpha characters and Dash ( - )

digit 				digit							Checks wheter a string consists of digits only (no dots or dashes).

decimal 			decimal
							decimal[<digits>,<decimals>] 

regexp 				regexp[/^regular expression$/] 
														PCRE Regular Expression

match_field 	match_field[otherfield] 	
														Check if the field has same value of otherfield.

range 	range[<min>, <max>] Check if the field value is in defined range.



Filters					Description
----------------------------------------------------------------------
numeric 				Remove all non numeric characters.
trim 						Remove all spaces before and after value.
uppercase 			Transform all characters to upper case.
lowercase 			Transform all characters to lower case.
strip_tags			Uses PHP's strip_tags()
html_entities 	Encodes all entities such as & to &amp;

