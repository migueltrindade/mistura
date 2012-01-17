<?php

/**
 * Implements template_preprocess_page();
 */
function mistura_preprocess_page(&$variables) {
  include_once drupal_get_path('module', 'devel') . '/krumo/class.krumo.php';
  if(!drupal_is_front_page()) {
    $variables['logo'] = base_path().drupal_get_path('theme', 'mistura') . '/logo-interna.png';
  }
  //krumo($variables);
}


/**
 * Implements template_preprocess_page();
 */
function mistura_preprocess_html(&$variables) {
  include_once drupal_get_path('module', 'devel') . '/krumo/class.krumo.php';
  if(drupal_is_front_page()) {
    $variables['head_title'] = $variables['head_title_array']['name'];
  }  
  //krumo($variables);
}
