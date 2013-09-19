<?php if ($site_name): ?>
  <h1 title="<?php print $site_name; ?>" class="site-name"><?php print $site_name; ?></h1>
<?php endif; ?>
<?php if ($site_slogan): ?>
  <h2 title="<?php print $site_slogan; ?>" class="site-slogan"><?php print $site_slogan; ?></h2>
<?php endif; ?>
<div class="navbar navbar-fixed-top" role="navigation">
  <div class="container">
    <div class="navbar-header">
      <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
        <span class="sr-only">Toggle navigation</span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </button>
      <?php if ($logo) { ?>
        <a class="navbar-brand" href="<?php print $front_page; ?>" title="<?php print $site_name; ?>">
          <img src="<?php print $logo; ?>" alt="<?php print $site_name; ?>"/>
        </a>
      <?php } ?>
    </div>
    <div class="navbar-collapse collapse pull-right">
      <?php print render($page['header']); ?>
    </div>
  </div>
</div><!-- .navbar -->