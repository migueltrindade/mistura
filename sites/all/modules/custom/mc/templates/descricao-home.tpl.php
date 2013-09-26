<div class="row">
  <?php foreach ($items as $item): ?>
  <div class="col-sm-4 descricao-item clearfix">
    <div class="col-inner">
      <?php print $item['imagem']; ?>
      <h2><?php print $item['title']; ?></h2>
      <div class="descricao-content"><?php print $item['descricao']; ?></div>
    </div>
  </div>
  <?php endforeach; ?>
</div>