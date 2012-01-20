<?php
/**
 * @file
 * mistura_portfolio.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mistura_portfolio_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'portfolio';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'portfolio';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Itens por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Deslocamento';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Campo: Conteúdo: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Critério de ordenação: Conteúdo: Data de publicação */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'portfolio' => 'portfolio',
  );

  /* Display: pg_portfolio */
  $handler = $view->new_display('page', 'pg_portfolio', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Itens por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Deslocamento';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relação: Conteúdo: Categoria (field_portfolio_categoria) */
  $handler->display->display_options['relationships']['field_portfolio_categoria_nid']['id'] = 'field_portfolio_categoria_nid';
  $handler->display->display_options['relationships']['field_portfolio_categoria_nid']['table'] = 'field_data_field_portfolio_categoria';
  $handler->display->display_options['relationships']['field_portfolio_categoria_nid']['field'] = 'field_portfolio_categoria_nid';
  $handler->display->display_options['relationships']['field_portfolio_categoria_nid']['label'] = 'Categoria';
  $handler->display->display_options['relationships']['field_portfolio_categoria_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_portfolio_categoria_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Conteúdo: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Campo: Conteúdo: Chamada */
  $handler->display->display_options['fields']['field_portfolio_chamada']['id'] = 'field_portfolio_chamada';
  $handler->display->display_options['fields']['field_portfolio_chamada']['table'] = 'field_data_field_portfolio_chamada';
  $handler->display->display_options['fields']['field_portfolio_chamada']['field'] = 'field_portfolio_chamada';
  $handler->display->display_options['fields']['field_portfolio_chamada']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['text'] = '<div class="portfolio-infos-item">
  <div class="title-portfolio">[title]</div>
  <div class="body-portfolio">[field_portfolio_chamada]</div>
</div>';
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_portfolio_chamada']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_chamada']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_portfolio_chamada']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_portfolio_chamada']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_portfolio_chamada']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_portfolio_chamada']['field_api_classes'] = 0;
  /* Campo: Conteúdo: Imagens */
  $handler->display->display_options['fields']['field_portfolio_imagens']['id'] = 'field_portfolio_imagens';
  $handler->display->display_options['fields']['field_portfolio_imagens']['table'] = 'field_data_field_portfolio_imagens';
  $handler->display->display_options['fields']['field_portfolio_imagens']['field'] = 'field_portfolio_imagens';
  $handler->display->display_options['fields']['field_portfolio_imagens']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_imagens']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_portfolio_imagens']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_portfolio_imagens']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_imagens']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_portfolio_imagens']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_portfolio_imagens']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_imagens']['settings'] = array(
    'image_style' => 'portfolio_thumb_preview',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_portfolio_imagens']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_portfolio_imagens']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_portfolio_imagens']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_portfolio_imagens']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['separator'] = '';
  $handler->display->display_options['fields']['field_portfolio_imagens']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Conteúdo: Url Key (field_categoria_urlkey) */
  $handler->display->display_options['arguments']['field_categoria_urlkey_value']['id'] = 'field_categoria_urlkey_value';
  $handler->display->display_options['arguments']['field_categoria_urlkey_value']['table'] = 'field_data_field_categoria_urlkey';
  $handler->display->display_options['arguments']['field_categoria_urlkey_value']['field'] = 'field_categoria_urlkey_value';
  $handler->display->display_options['arguments']['field_categoria_urlkey_value']['relationship'] = 'field_portfolio_categoria_nid';
  $handler->display->display_options['arguments']['field_categoria_urlkey_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_categoria_urlkey_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_categoria_urlkey_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_categoria_urlkey_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_categoria_urlkey_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_categoria_urlkey_value']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_categoria_urlkey_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_categoria_urlkey_value']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_categoria_urlkey_value']['break_phrase'] = 0;
  $handler->display->display_options['path'] = 'portfolio';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Portfólio';
  $handler->display->display_options['menu']['description'] = 'Portfólio';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: bc_info_lateral */
  $handler = $view->new_display('block', 'bc_info_lateral', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Itens por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Deslocamento';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Conteúdo: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Campo: Conteúdo: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<h2 class="portifolio-item-title">[title]</h2>
<div class="portifolio-item-description">[body]</div>';
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Campo: Conteúdo: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Conteúdo: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = 'return arg(1);';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;

  /* Display: pg_port_home */
  $handler = $view->new_display('page', 'pg_port_home', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Últimos trabalhos';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Conteúdo: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Campo: Conteúdo: Chamada */
  $handler->display->display_options['fields']['field_portfolio_chamada']['id'] = 'field_portfolio_chamada';
  $handler->display->display_options['fields']['field_portfolio_chamada']['table'] = 'field_data_field_portfolio_chamada';
  $handler->display->display_options['fields']['field_portfolio_chamada']['field'] = 'field_portfolio_chamada';
  $handler->display->display_options['fields']['field_portfolio_chamada']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['text'] = '<div class="portfolio-infos-item">
  <div class="title-portfolio">[title]</div>
  <div class="body-portfolio">[field_portfolio_chamada]</div>
</div>';
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_portfolio_chamada']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_portfolio_chamada']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_chamada']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_portfolio_chamada']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_portfolio_chamada']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_portfolio_chamada']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_portfolio_chamada']['field_api_classes'] = 0;
  /* Campo: Conteúdo: Imagens */
  $handler->display->display_options['fields']['field_portfolio_imagens']['id'] = 'field_portfolio_imagens';
  $handler->display->display_options['fields']['field_portfolio_imagens']['table'] = 'field_data_field_portfolio_imagens';
  $handler->display->display_options['fields']['field_portfolio_imagens']['field'] = 'field_portfolio_imagens';
  $handler->display->display_options['fields']['field_portfolio_imagens']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_imagens']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_portfolio_imagens']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_portfolio_imagens']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_imagens']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_portfolio_imagens']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_portfolio_imagens']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_imagens']['settings'] = array(
    'image_style' => 'portfolio_thumb_preview',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_portfolio_imagens']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_portfolio_imagens']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_portfolio_imagens']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_portfolio_imagens']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_portfolio_imagens']['separator'] = '';
  $handler->display->display_options['fields']['field_portfolio_imagens']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'portfolio-home';

  /* Display: pg_admin */
  $handler = $view->new_display('page', 'pg_admin', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Portfólio';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
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
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
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
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<div class="form-item form-type-textfield form-item-name"><a href="/node/add/portfolio" title="Cadastrar novo item">Cadastrar novo item</a></div>';
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
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
  $handler->display->display_options['path'] = 'admin/website/portfolio';
  $handler->display->display_options['menu']['title'] = 'Portfólio';
  $handler->display->display_options['menu']['description'] = 'Administração do portfólio';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $translatables['portfolio'] = array(
    t('Master'),
    t('mais'),
    t('Aplicar'),
    t('Restaurar'),
    t('Ordenar por'),
    t('Crescente'),
    t('Desc'),
    t('Itens por página'),
    t('- Todos -'),
    t('Deslocamento'),
    t('pg_portfolio'),
    t('Categoria'),
    t('<div class="portfolio-infos-item">
  <div class="title-portfolio">[title]</div>
  <div class="body-portfolio">[field_portfolio_chamada]</div>
</div>'),
    t('Tudo'),
    t('bc_info_lateral'),
    t('<h2 class="portifolio-item-title">[title]</h2>
<div class="portifolio-item-description">[body]</div>'),
    t('Nid'),
    t('pg_port_home'),
    t('Últimos trabalhos'),
    t('pg_admin'),
    t('Portfólio'),
    t('<div class="form-item form-type-textfield form-item-name"><a href="/node/add/portfolio" title="Cadastrar novo item">Cadastrar novo item</a></div>'),
    t('Título'),
    t('editar'),
    t('apagar'),
  );
  $export['portfolio'] = $view;

  return $export;
}
