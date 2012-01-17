<?php
/**
 * @file
 * mistura_redessociais.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mistura_redessociais_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'redessociais';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'redessociais';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_text'] = 'mais';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Restaurar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Crescente';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Conteúdo: Link */
  $handler->display->display_options['fields']['field_redessociais_link']['id'] = 'field_redessociais_link';
  $handler->display->display_options['fields']['field_redessociais_link']['table'] = 'field_data_field_redessociais_link';
  $handler->display->display_options['fields']['field_redessociais_link']['field'] = 'field_redessociais_link';
  $handler->display->display_options['fields']['field_redessociais_link']['label'] = '';
  $handler->display->display_options['fields']['field_redessociais_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_redessociais_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_redessociais_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_redessociais_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_redessociais_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_redessociais_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_redessociais_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_redessociais_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_redessociais_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_redessociais_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_redessociais_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_redessociais_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_redessociais_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_redessociais_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_redessociais_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_redessociais_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_redessociais_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_redessociais_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_redessociais_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_redessociais_link']['group_column'] = 'url';
  $handler->display->display_options['fields']['field_redessociais_link']['field_api_classes'] = 0;
  /* Campo: Conteúdo: Icone */
  $handler->display->display_options['fields']['field_redessociais_icone']['id'] = 'field_redessociais_icone';
  $handler->display->display_options['fields']['field_redessociais_icone']['table'] = 'field_data_field_redessociais_icone';
  $handler->display->display_options['fields']['field_redessociais_icone']['field'] = 'field_redessociais_icone';
  $handler->display->display_options['fields']['field_redessociais_icone']['label'] = '';
  $handler->display->display_options['fields']['field_redessociais_icone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_redessociais_icone']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_redessociais_icone']['alter']['path'] = '[field_redessociais_link]';
  $handler->display->display_options['fields']['field_redessociais_icone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_redessociais_icone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_redessociais_icone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_redessociais_icone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_redessociais_icone']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_redessociais_icone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_redessociais_icone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_redessociais_icone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_redessociais_icone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_redessociais_icone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_redessociais_icone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_redessociais_icone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_redessociais_icone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_redessociais_icone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_redessociais_icone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_redessociais_icone']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_redessociais_icone']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_redessociais_icone']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_redessociais_icone']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_redessociais_icone']['field_api_classes'] = 0;
  /* Filter criterion: Conteúdo: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Conteúdo: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'redes_sociais' => 'redes_sociais',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mistura Social';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critério de ordenação: Conteúdo: Título */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';

  /* Display: pg_admin */
  $handler = $view->new_display('page', 'pg_admin', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Redes Sociais';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Itens por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Deslocamento';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['group_rendered'] = 1;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Cabeçalho: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class="form-item form-type-textfield form-item-name"><a href="/node/add/redes-sociais" title="Cadastrar novo item">Cadastrar novo item</a></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Conteúdo: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Campo: Node: Link "editar" */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'editar';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['edit_node']['text'] = 'editar';
  /* Campo: Node: Link "apagar" */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'apagar';
  $handler->display->display_options['fields']['delete_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['delete_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['delete_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['delete_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['delete_node']['text'] = 'apagar';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Conteúdo: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'redes_sociais' => 'redes_sociais',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  $handler->display->display_options['path'] = 'admin/website/redes-sociais';
  $handler->display->display_options['menu']['title'] = 'Redes Sociais';
  $handler->display->display_options['menu']['description'] = 'Administração das redes sociais';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $translatables['redessociais'] = array(
    t('Master'),
    t('mais'),
    t('Aplicar'),
    t('Restaurar'),
    t('Ordenar por'),
    t('Crescente'),
    t('Desc'),
    t('[field_redessociais_link]'),
    t('_blank'),
    t('Block'),
    t('Mistura Social'),
    t('pg_admin'),
    t('Redes Sociais'),
    t('Itens por página'),
    t('- Todos -'),
    t('Deslocamento'),
    t('<div class="form-item form-type-textfield form-item-name"><a href="/node/add/redes-sociais" title="Cadastrar novo item">Cadastrar novo item</a></div>'),
    t('Título'),
    t('editar'),
    t('apagar'),
  );
  $export['redessociais'] = $view;

  return $export;
}
