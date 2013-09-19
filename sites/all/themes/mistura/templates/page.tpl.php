<?php include "header.php"; ?>

  <div class="destaque">
    <div class="container">KEY YOU
    </div>
  </div>
  <!--destaque -->


  <div class="container">

    <div class="row">

      <?php if ($page['sidebar_first']) { ?>
        <aside class="<?php print $bs_sidebar; ?>" role="complementary"><?php print render($page['sidebar_first']); ?></aside><!-- .sidebar-first -->
      <?php } ?>

      <div class="col-md-12">

        <?php if ($page['content_top']) { ?>
          <div class="content-top"> <?php print render($page['content_top']); ?> </div><!-- .content-top -->
        <?php } ?>

        <div class="main-content">

          <?php if ($breadcrumb) { ?>
            <div id="breadcrumb" class="clearfix"><?php print $breadcrumb; ?> </div><!-- .breadcrumb -->
          <?php } ?>

          <?php if ($page['highlighted']) { ?>
            <div class="highlighted"><?php print render($page['highlighted']); ?></div><!-- .highlighted -->
          <?php } ?>

          <?php print render($title_prefix); ?>

          <?php if ($title) print '<h2 class="page-title">' . $title . '</h2>'; ?>

          <?php print render($title_suffix); ?>

          <?php if ($tabs) { ?>
            <div class="tabs"><?php print render($tabs); ?></div>
          <?php } ?>

          <?php if ($messages) { ?>
            <div class="wrapper-messages"><?php print $messages; ?></div><!-- .messages -->
          <?php } ?>

          <?php if ($page['help']) { ?>
            <div class="help"><?php print render($page['help']); ?></div><!-- .help -->
          <?php } ?>

          <?php if ($action_links) { ?>
            <div class="action-links">
              <ul><?php print render($action_links); ?></ul>
            </div><!-- .action-links -->
          <?php } ?>

          <?php print render($page['content']); ?>

          <?php if ($feed_icons) { ?>
            <div class='rss'><?php print $feed_icons ?></div>
          <?php } ?>

        </div>
        <!-- .content -->

        <?php if ($page['content_bottom']) { ?>
          <div class="content-bottom"><?php print render($page['content_bottom']); ?></div><!-- .content-bottom -->
        <?php } ?>

      </div>

      <?php if ($page['sidebar_second']) { ?>
        <aside class="span3" role="complementary"> <?php print render($page['sidebar_second']) ?> </aside><!-- .sidebar-second -->
      <?php } ?>

    </div>

  </div><!-- .container -->

<?php include "footer.php"; ?>