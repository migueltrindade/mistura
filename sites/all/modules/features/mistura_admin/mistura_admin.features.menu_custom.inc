<?php
/**
 * @file
 * features_admin.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function features_admin_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-admin-menu.
  $menus['menu-admin-menu'] = array(
    'menu_name' => 'menu-admin-menu',
    'title' => 'Admin menu',
    'description' => 'Menu administrativo',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Admin menu');
  t('Main menu');
  t('Menu administrativo');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
