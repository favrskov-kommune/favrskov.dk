
CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Implemented Reviews


INTRODUCTION
------------

Current Maintainer: Morbus Iff <morbus@disobey.com>

Coder Tough Love REQUIRES Coder 6.x-2.x-dev <http://drupal.org/node/314393>

Coder Tough Love is a companion to the existing Coder module by Doug Green.
Unlike Coder, which strives to follow the documented style guidelines of Drupal
core, Coder Tough Love takes the tougher tactic of applying finely aged and
obsessively anal wisdom from years of Drupal development and persnickety
quality control.

Part of the reason for this module's creation was to obsess over my own code:
I claim no higher standard than myself, but even I am infinitely fallible.
Likewise, as chx and I wrote DrupalToughLove.com reviews, we found ourselves
repeating suggestions from module to module, and a few of our critiques could
have been automated, leaving us to focus on more important design issues.

You should expect some false positives with Coder Tough Love, but I'd still
want you to report them as bugs so I can continue to tighten the analysis.


IMPLEMENTED REVIEWS
-------------------

Have some suggestions? Let Morbus, or the issue queue, know!

A number of reviews focus on Doxygen quality:

  * "Proper documentation is needed for this mysterious blackhole."
    Triggers against "@param unknown", "@return unknown_type", etc.

  * "If you define a @param or @return, you should document it as well."
    Triggers against "@param $var" with no explanation on the next line.

  * "Doxygen uses @todo and @bug to markup things to be done."
    Triggers against "TODO" or "BUG" usage. @todo and @bug are defined
    in the Doxygen standards (not the Drupal Doxygen standards).

  * "Separate comments from comment syntax by a space."
    Triggers on syntax like "//this" (should be "// this").

  * "Remove the empty commented line in your function documentation."
    We've seen some instances of this style of function Doxygen:

      /**
       * Implementation of hook_menu().
       *
       */

  * "Function documentation should be less than 80 characters per line."

  * "Function summaries should be one line only."

  * "@param and @return syntax does not indicate the data type."
    Triggers against "@param int $uid" and similar. While the conceit is
    nice (and, apparently, some IDEs do this by default), Drupal core tends
    to explain the data type, if at all, in the parameter's documentation.

  * "@param and @return descriptions begin indented on the next line."
    Triggers against stuff like "@param $uid the user ID to operate on."

A number of grammar, spelling, and capitalization rules exist:

  * "Core uses "e-mail" in end-user text and "mail" elsewhere (database,
    function names, etc.)" The only exception is valid_email_address().

  * "Core uses "web server" in end-user text."

  * ""Module" should rarely be capitalized as part of a module\'s proper name."
    A lot of people seem to think that the proper name for a module includes
    the word "Module", like "the Views Module" or "Coder Module is...".

  * "Use sentence case, not title case, for end-user strings."
    Drupal core's strings are written like this, Not All Capitalized Like
    This. This complicated rule attempts to find title cased strings.

  * "An unknown or misspelled word has been detected on this line."
    If you have the PHP pspell extension installed, Coder Tough Love will
    perform spelling checks on all your strings. This is a rule that tends
    to give false positives quite easily, since "strings" include a lot
    more than just end-user text (SQL, function parameters, etc.). You can
    whitelist words at admin/settings/coder_tough_love.

A number of freshly scented potpourri rules are also shipped:

  * "Use the matching Drupal theme functions, not raw HTML."
    Triggers against use of A, IMG, or TABLE elements in strings.

  * "Use Drupal's format_date(), not PHP's default date()."

  * "Use PHP's master function, not an alias."
    Triggers against use of "sizeof()" instead of "count()", etc.

  * "Administrative menu items should have a description."
    When you define an administrative menu, it is also shown, along with a
    description, on the primary administrative pages. A lot of developers
    have been forgetting to define a description.
