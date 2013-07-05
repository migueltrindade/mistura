<?php
$html_attributes = ' lang="' . $language->language . '" dir="' . $language->dir . '"';
?>
<!DOCTYPE html>
<!--[if IE 7]><html<?php print $html_attributes; ?> class="no-js lt-ie9 ie7"><![endif]-->
<!--[if IE 8]><html<?php print $html_attributes; ?> class="no-js lt-ie9 ie8"><![endif]-->
<!--[if IE 9]><html<?php print $html_attributes; ?> class="no-js ie9"><![endif]-->
<!--[if gt IE 9]><!--><html<?php print $html_attributes; ?> class="no-js"><!--<![endif]-->
  <head>
    <?php print $head; ?>
    <meta name="viewport" content="width=device-width">
    <title><?php print $head_title; ?></title>
    <?php print $styles; ?>
    <!--[if lt IE 9]>
      <script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script>
    <![endif]-->
  </head>
  <body class="<?php print $classes; ?>" <?php print $attributes; ?>>
    <?php print $page_top; ?> <?php print $page; ?> <?php print $page_bottom; ?>
    <?php print $scripts; ?>
  </body>
</html>
