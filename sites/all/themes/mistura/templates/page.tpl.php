<?php if ($site_name): ?>
	<h1 title="<?php print $site_name; ?>" class="site-name"><?php print $site_name; ?></h1>
<?php endif; ?>
<?php if ($site_slogan): ?>
	<h2 title="<?php print $site_slogan; ?>" class="site-slogan"><?php print $site_slogan; ?></h2>
<?php endif; ?>

<div class="wrapper-header-page">

	<div class="container">

		<div class="row-fluid header-page" role="banner">

			<div class="span3">
				<?php if ($logo) { ?>
					<a class="logo" href="<?php print $front_page; ?>" title="<?php print $site_name; ?>">
						<img src="<?php print $logo; ?>" alt="<?php print $site_name; ?>"/>
					</a>
				<?php } ?>
			</div>

			<div class="span7">
				<?php print render($page['header']); ?>
			</div>

			<div class="span2">
				<?php print render($page['redes_sociais']); ?>
			</div>

		</div>

		<!-- .header-page -->
	</div>

</div>

<div class="destaque">

</div>

<div class="container">


	<?php if ($page['preface']) { ?>
		<div class="preface clearfix"><?php print render($page['preface']); ?></div><!-- .preface -->
	<?php } ?>

	<?php if (!$is_front) { ?>

		<div class="container-fluid">
			<div class="row-fluid">

				<?php if ($page['sidebar_first']) { ?>
					<aside class="<?php print $bs_sidebar; ?>" role="complementary"><?php print render($page['sidebar_first']); ?></aside><!-- .sidebar-first -->
				<?php } ?>

				<div class="<?php print $bs_content; ?>">

					<?php if ($page['content_top']) { ?>
						<div class="content-top"> <?php print render($page['content_top']); ?> </div><!-- .content-top -->
					<?php } ?>

					<div class="content">

						<?php if ($breadcrumb) { ?>
							<div id="breadcrumb" class="clearfix"><?php print $breadcrumb; ?> </div><!-- .breadcrumb -->
						<?php } ?>

						<?php if ($page['highlighted']) { ?>
							<div class="highlighted"><?php print render($page['highlighted']); ?></div><!-- .highlighted -->
						<?php } ?>

						<?php print render($title_prefix); ?>
						<?php
						if ($title) {
							print '<h2 class="page-title">' . $title . '</h2>';
						}
						?>
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
		</div>

	<?php } ?>

	<?php if ($page['postscript']) { ?>
		<div class="postscript"><?php print render($page['postscript']); ?></div><!-- .postscript -->
	<?php } ?>

</div><!-- .container -->

<div class="wrapper-footer-page">
	<footer class="footer-page"><?php print render($page['footer']); ?></footer>
</div>

<?php if ($page['outside_bottom']) { ?>
	<div class="outside-bottom"><?php print render($page['outside_bottom']); ?></div><!-- .outside-bottom -->
<?php } ?>
