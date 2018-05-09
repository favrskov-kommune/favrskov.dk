<!DOCTYPE html>
<!--[if IE 10]>        <html lang="<?php print $language->language; ?>" class="ie"> <![endif]-->
<!--[if lt IE 7]>      <html lang="<?php print $language->language; ?>" class="no-js lt-ie9 lt-ie8 lt-ie7"> <![endif]-->
<!--[if IE 7]>         <html lang="<?php print $language->language; ?>" class="no-js lt-ie9 lt-ie8"> <![endif]-->
<!--[if IE 8]>         <html lang="<?php print $language->language; ?>" class="no-js lt-ie8"> <![endif]-->
<!--[if IE 9]>         <html lang="<?php print $language->language; ?>" class="no-js ie9"> <![endif]-->
<!--[if gt IE 8]><!--> <html lang="<?php print $language->language; ?>" class="no-js" xmlns:og="http://opengraphprotocol.org/schema/"> <!--<![endif]-->
<head>
  <meta name="viewport" content="width=device-width, initial-scale=1.0, user-scalable=no, maximum-scale=1">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $html5shiv; ?>
  <?php print $mediaqueryshiv; ?>
  <?php print $jwplayer; ?>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <?php print $page_top; ?>
  <?php print $page; ?>

  <?php print $scripts; ?>
  <?php print $page_bottom; ?>
</body>
</html>
