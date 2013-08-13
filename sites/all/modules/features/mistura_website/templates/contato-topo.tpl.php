<div class="wrapper-contato-topo">
	<div class="row-fluid">
		<div class="span6"><?php print drupal_render($form['submitted']['nome']); ?></div>
		<div class="span6"> <?php print drupal_render($form['submitted']['telefone']); ?></div>
	</div>
	<div class="row-fluid">
		<div class="span12">
			<?php print drupal_render($form['submitted']['e_mail']); ?>
		</div>
	</div>
	<div class="row-fluid">
		<div class="span12">
			<?php print drupal_render($form['submitted']['mensagem']); ?>
		</div>
	</div>
	<div class="row-fluid">
		<div class="span12">
			<?php print drupal_render_children($form); ?>
		</div>
	</div>
</div>