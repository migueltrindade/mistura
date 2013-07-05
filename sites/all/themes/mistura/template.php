<?php

/**
 * Implements template_html_head_alter();
 *
 * Changes the default meta content-type tag to the shorter HTML5 version
 */
function mistura_html_head_alter(&$head_elements) {
  $head_elements['system_meta_content_type']['#attributes'] = array(
    'charset' => 'utf-8'
  );
}

/**
 * Implements template_proprocess_search_block_form().
 *
 * Changes the search form to use the HTML5 "search" input attribute
 */
function mistura_preprocess_search_block_form(&$vars) {
  $vars['search_form'] = str_replace('type="text"', 'type="search"', $vars['search_form']);
}

/**
 * Implements template_preprocess_html();
 */
function mistura_preprocess_html(&$vars) { }

/**
 * Implements template_preprocess_page();
 */
function mistura_preprocess_page(&$vars) {
  $classes = array();
  if ($vars['page']['sidebar_first'] || $vars['page']['sidebar_second']) {
    $classes['sidebar'] = 'span3';
    $classes['content'] = 'span9 main-content';
  }
  elseif (!$vars['page']['sidebar_first'] && !$vars['page']['sidebar_second']) {
    $classes['sidebar'] = '';
    $classes['content'] = 'span12 main-content';
  }
  $vars['bs_sidebar'] = $classes['sidebar'];
  $vars['bs_content'] = $classes['content'];

}

/**
 * Implements template_preprocess_node();
 */
function mistura_preprocess_node(&$vars) {
  //include_once drupal_get_path('module', 'devel') . '/krumo/class.krumo.php';
  //krumo($vars);
  //$vars['content']['field_sa_fotos']['#title'] = 'Check out our photo gallery';
}

/**
 * Implements template_breadcrumb();
 */
function mistura_breadcrumb($vars) {
  include_once drupal_get_path('module', 'devel') . '/krumo/class.krumo.php';
  $path = drupal_get_path_alias($_GET['q']);
  $crumbs = explode('/', $path);  
	$breadcrumb = $vars['breadcrumb'];

  if (!empty($breadcrumb)) {
		
		$breadcrumb[] = drupal_get_title();
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

    $output .= '<div class="breadcrumb">' . implode(' » ', $breadcrumb) . '</div>';
    return $output;
  }
}


function mistura_links__system_main_menu(&$vars) {
	krumo($vars);
	foreach ($vars['links'] as &$link) {
		// do what you need here...
		$link['title'] = '<span>' . $link['title'] . '</span>';
		$link['html'] = TRUE;
	}
	return theme_links($vars);
}