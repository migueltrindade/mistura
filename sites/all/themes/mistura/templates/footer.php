<footer class="footer-page">
  <div class="container">
    <div class="row">
      <?php if ($page['footer_left']): ?>
        <div class="col-sm-6 divider"><?php print render($page['footer_left']); ?></div>
      <?php endif; ?>
      <?php if ($page['footer_right']): ?>
        <div class="col-sm-6"><?php print render($page['footer_right']); ?></div>
      <?php endif; ?>
    </div>
    <div class="row copyright">
      <?php //print render($page['footer']); ?>
    </div>
  </div>
</footer>
