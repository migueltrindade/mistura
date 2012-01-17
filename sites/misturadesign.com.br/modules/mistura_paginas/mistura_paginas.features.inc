<?php
/**
 * @file
 * mistura_paginas.features.inc
 */

/**
 * Implements hook_views_api().
 */
function mistura_paginas_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function mistura_paginas_node_info() {
  $items = array(
    'paginas' => array(
      'name' => t('Paginas'),
      'base' => 'node_content',
      'description' => t('Permite ao usuário cadastrar páginas estáticas.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
