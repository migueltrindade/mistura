<?php
/**
 * @file
 * mistura_admin.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mistura_admin_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-admin-menu:admin/mistura
  $menu_links['menu-admin-menu:admin/mistura'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'admin/mistura',
    'router_path' => 'admin/mistura',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => 'Página inicial do sistema',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-admin-menu:user/logout
  $menu_links['menu-admin-menu:user/logout'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => 'Efetuar logout do sistema',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Home');
  t('Logout');


  return $menu_links;
}
