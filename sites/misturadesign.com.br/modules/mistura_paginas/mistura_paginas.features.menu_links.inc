<?php
/**
 * @file
 * mistura_paginas.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mistura_paginas_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin/website/paginas
  $menu_links['management:admin/website/paginas'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/website/paginas',
    'router_path' => 'admin/website/paginas',
    'link_title' => 'Páginas',
    'options' => array(
      'attributes' => array(
        'title' => 'Administração das páginas estáticas',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'admin/website',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Páginas');


  return $menu_links;
}
