<?php include "header.php"; ?>

  <div class="destaque">
    <div class="container">KEY YOU
    </div>
  </div>
  <!--destaque -->

  <div class="helpers-frontpage container">

    <?php if ($action_links): ?>
      <div class="action-links">
        <ul><?php print render($action_links); ?></ul>
      </div><!-- .action-links -->
    <?php endif; ?>

    <?php if ($messages): ?>
      <div class="wrapper-messages">
        <?php print $messages; ?>
      </div><!-- .messages -->
    <?php endif; ?>

    <?php if ($tabs): ?>
      <div class="tabs"><?php print render($tabs); ?></div>
    <?php endif; ?>

  </div><!-- .container -->

<?php if ($page['descricao']): ?>
  <div class="descricao">
    <div class="container">
      <?php print render($page['descricao']); ?>
    </div>
  </div><!-- .content-top -->
<?php endif; ?>

<?php if ($page['servicos']): ?>
  <div class="servicos">
    <div class="container">
      <?php print render($page['servicos']); ?>
    </div>
  </div><!-- .servicos -->
<?php endif; ?>

<?php if ($page['cases']): ?>
  <div class="cases">
    <div class="container">
      <?php print render($page['cases']); ?>
    </div>
  </div><!-- .content-bottom -->
<?php endif; ?>

<?php include "footer.php"; ?>