<?php
/**
 * @file
 * mistura_portfolio.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mistura_portfolio_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin/website/portfolio
  $menu_links['management:admin/website/portfolio'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/website/portfolio',
    'router_path' => 'admin/website/portfolio',
    'link_title' => 'Portfólio',
    'options' => array(
      'attributes' => array(
        'title' => 'Administração do portfólio',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'admin/website',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Portfólio');


  return $menu_links;
}
