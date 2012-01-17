<?php
/**
 * @file
 * mistura_categorias.features.inc
 */

/**
 * Implements hook_views_api().
 */
function mistura_categorias_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function mistura_categorias_node_info() {
  $items = array(
    'categorias' => array(
      'name' => t('Categorias'),
      'base' => 'node_content',
      'description' => t('Permite ao usuário cadastrar categorias do portfolio.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
