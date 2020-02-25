Pane social combi
===================
Custom module that provides a panel pane(Ctools plugin) for displaying tweets, facebook posts and instagram pictures.

It uses [Instagramm.class.php](https://github.com/cosenary/Instagram-PHP-API/blob/master/instagram.class.php) and
[TwitterApiExchange.class.php](https://github.com/J7mbo/twitter-api-php/blob/master/TwitterAPIExchange.php)
for fetching data.

Calls to facebook api are made via plain curl() calls.

Fetched data is cached in database (cache_set, cache_get).