<?php
/**
 * @file
 * features_admin.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function features_admin_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-admin-menu:admin/website
  $menu_links['menu-admin-menu:admin/website'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'admin/website',
    'router_path' => 'admin/website',
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
  // Exported menu link: menu-admin-menu:admin/website/settings
  $menu_links['menu-admin-menu:admin/website/settings'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'admin/website/settings',
    'router_path' => 'admin/website/settings',
    'link_title' => 'Configurações',
    'options' => array(
      'attributes' => array(
        'title' => 'Configurações do website e do painel adminstrativo',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '48',
  );
  // Exported menu link: menu-admin-menu:user/edit
  $menu_links['menu-admin-menu:user/edit'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'user/edit',
    'router_path' => 'user/edit',
    'link_title' => 'Minha conta',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '49',
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
  t('Configurações');
  t('Home');
  t('Logout');
  t('Minha conta');


  return $menu_links;
}
