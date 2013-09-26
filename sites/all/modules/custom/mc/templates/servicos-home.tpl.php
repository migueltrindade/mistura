<div class="row">
  <?php
  $count = 0;
  $size = sizeof($items);
  foreach ($items as $item):
    $direcao = ($count >= 3 ? 'left' : 'right');
    ?>
    <div class="col-md-2 servicos-item clearfix">
      <div class="icone">
        <a class="botao" title="<?php print $item['title']; ?>" data-content="<?php print $item['descricao']; ?>" <?php print drupal_attributes($item['attributes']); ?> data-placement="<?php print $direcao; ?>" data-toggle="popover">
          <span><?php print $item['title']; ?></span>
        </a>
      </div>
      <div class="hidden-lg hidden-md col-sm-8">
        <h2><?php print $item['title']; ?></h2>
        <div class="servicos-descricao">
          <?php print $item['descricao']; ?>
        </div>
      </div>

    </div>
    <?php
    $count++;
  endforeach;
  ?>
</div>
<div class="center hidden-md hidden-lg">
  <a href="#" id="prev"> << Prev </a>
  <a href="#" id="next"> Next >> </a>
</div>