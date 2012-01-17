<?php
/**
 * @file
 * mistura_redessociais.features.inc
 */

/**
 * Implements hook_views_api().
 */
function mistura_redessociais_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function mistura_redessociais_node_info() {
  $items = array(
    'redes_sociais' => array(
      'name' => t('Redes Sociais'),
      'base' => 'node_content',
      'description' => t('Permite ao usuário cadastrar as redes sociais da empresa.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
