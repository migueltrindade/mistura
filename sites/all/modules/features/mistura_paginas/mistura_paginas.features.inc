<?php
/**
 * @file
 * features_paginas.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_paginas_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function features_paginas_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function features_paginas_node_info() {
  $items = array(
    'pagina' => array(
      'name' => t('Página'),
      'base' => 'node_content',
      'description' => t('Permite ao usuário criar páginas estáticas.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
