<?php
/**
 * @file
 * mistura_categorias.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mistura_categorias_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin/website/categorias
  $menu_links['management:admin/website/categorias'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/website/categorias',
    'router_path' => 'admin/website/categorias',
    'link_title' => 'Categorias',
    'options' => array(
      'attributes' => array(
        'title' => 'Administração das categorias do portfólio',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'admin/website',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Categorias');


  return $menu_links;
}
