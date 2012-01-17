<?php
/**
 * @file
 * mistura_redessociais.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mistura_redessociais_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin/website/redes-sociais
  $menu_links['management:admin/website/redes-sociais'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/website/redes-sociais',
    'router_path' => 'admin/website/redes-sociais',
    'link_title' => 'Redes Sociais',
    'options' => array(
      'attributes' => array(
        'title' => 'Administração das redes sociais',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'admin/website',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Redes Sociais');


  return $menu_links;
}
