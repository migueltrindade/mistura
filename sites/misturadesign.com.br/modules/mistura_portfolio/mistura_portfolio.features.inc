<?php
/**
 * @file
 * mistura_portfolio.features.inc
 */

/**
 * Implements hook_views_api().
 */
function mistura_portfolio_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function mistura_portfolio_image_default_styles() {
  $styles = array();

  // Exported image style: portfolio_thumb
  $styles['portfolio_thumb'] = array(
    'name' => 'portfolio_thumb',
    'effects' => array(
      1 => array(
        'label' => 'Escalar e cortar',
        'help' => '"Escalar e cortar", primeiro redimensiona a imagem mantendo a proporção e em seguida, vai cortará a dimensão maior. Isto é útil para criar miniaturas quadradas, sem esticar a imagem.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '545',
          'height' => '315',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: portfolio_thumb_preview
  $styles['portfolio_thumb_preview'] = array(
    'name' => 'portfolio_thumb_preview',
    'effects' => array(
      2 => array(
        'label' => 'Escalar e cortar',
        'help' => '"Escalar e cortar", primeiro redimensiona a imagem mantendo a proporção e em seguida, vai cortará a dimensão maior. Isto é útil para criar miniaturas quadradas, sem esticar a imagem.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '229',
          'height' => '237',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function mistura_portfolio_node_info() {
  $items = array(
    'portfolio' => array(
      'name' => t('Portfolio'),
      'base' => 'node_content',
      'description' => t('Permite ao usuário cadastrar o portfólio da empresa.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
