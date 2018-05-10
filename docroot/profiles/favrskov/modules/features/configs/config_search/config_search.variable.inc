<?php
/**
 * @file
 * config_search.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function config_search_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['language']['da'] = array(
  'apachesolr_confgen_textfiles_stopwords_txt' => ' | From svn.tartarus.org/snowball/trunk/website/algorithms/danish/stop.txt
 | This file is distributed under the BSD License.
 | See http://snowball.tartarus.org/license.php
 | Also see http://www.opensource.org/licenses/bsd-license.html
 |  - Encoding was converted to UTF-8.
 |  - This notice was added.

 | A Danish stop word list. Comments begin with vertical bar. Each stop
 | word is at the start of a line.

 | This is a ranked list (commonest to rarest) of stopwords derived from
 | a large text sample.


og           | and
i            | in
jeg          | I
det          | that (dem. pronoun)/it (pers. pronoun)
at           | that (in front of a sentence)/to (with infinitive)
en           | a/an
den          | it (pers. pronoun)/that (dem. pronoun)
til          | to/at/for/until/against/by/of/into, more
er           | present tense of "to be"
som          | who, as
på           | on/upon/in/on/at/to/after/of/with/for, on
de           | they
med          | with/by/in, along
han          | he
af           | of/by/from/off/for/in/with/on, off
for          | at/for/to/from/by/of/ago, in front/before, because
ikke         | not
der          | who/which, there/those
var          | past tense of "to be"
mig          | me/myself
sig          | oneself/himself/herself/itself/themselves
men          | but
et           | a/an/one, one (number), someone/somebody/one
har          | present tense of "to have"
om           | round/about/for/in/a, about/around/down, if
vi           | we
min          | my
havde        | past tense of "to have"
ham          | him
hun          | she
nu           | now
over         | over/above/across/by/beyond/past/on/about, over/past
da           | then, when/as/since
fra          | from/off/since, off, since
du           | you
ud           | out
sin          | his/her/its/one\'s
dem          | them
os           | us/ourselves
op           | up
man          | you/one
hans         | his
hvor         | where
eller        | or
hvad         | what
skal         | must/shall etc.
selv         | myself/youself/herself/ourselves etc., even
her          | here
alle         | all/everyone/everybody etc.
vil          | will (verb)
blev         | past tense of "to stay/to remain/to get/to become"
kunne        | could
ind          | in
når          | when
være         | present tense of "to be"
dog          | however/yet/after all
noget        | something
ville        | would
jo           | you know/you see (adv), yes
deres        | their/theirs
efter        | after/behind/according to/for/by/from, later/afterwards
ned          | down
skulle       | should
denne        | this
end          | than
dette        | this
mit          | my/mine
også         | also
under        | under/beneath/below/during, below/underneath
have         | have
dig          | you
anden        | other
hende        | her
mine         | my
alt          | everything
meget        | much/very, plenty of
sit          | his, her, its, one\'s
sine         | his, her, its, one\'s
vor          | our
mod          | against
disse        | these
hvis         | if
din          | your/yours
nogle        | some
hos          | by/at
blive        | be/become
mange        | many
ad           | by/through
bliver       | present tense of "to be/to become"
hendes       | her/hers
været        | be
thi          | for (conj)
jer          | you
sådan        | such, like this/like that
',
  'apachesolr_multilingual_stemmer_language' => 'Danish',
);
  $realm_variables['language']['en'] = array(
  'apachesolr_confgen_textfiles_stopwords_txt' => '# Licensed to the Apache Software Foundation (ASF) under one or more
# contributor license agreements.  See the NOTICE file distributed with
# this work for additional information regarding copyright ownership.
# The ASF licenses this file to You under the Apache License, Version 2.0
# (the "License"); you may not use this file except in compliance with
# the License.  You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# a couple of test stopwords to test that the words are really being
# configured from this file:
stopworda
stopwordb

# Standard english stop words taken from Lucene\'s StopAnalyzer
a
an
and
are
as
at
be
but
by
for
if
in
into
is
it
no
not
of
on
or
such
that
the
their
then
there
these
they
this
to
was
will
with
',
  'apachesolr_multilingual_stemmer_language' => 'English',
);
  $realm_variables['language_solr_version']['da:1.4.x'] = array();
  $realm_variables['language_solr_version']['da:3.5.x'] = array();
  $realm_variables['language_solr_version']['en:1.4.x'] = array();
  $realm_variables['language_solr_version']['en:3.5.x'] = array();
  $realm_variables['solr_version']['1.4.x'] = array();
  $realm_variables['solr_version']['3.5.x'] = array();

return $realm_variables;
}
