<?php
/**
 * @file
 * mistura_portfolio.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mistura_portfolio_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'portfolio';
  $context->description = '';
  $context->tag = 'portfolio';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'portfolio' => 'portfolio',
        'portfolio/*' => 'portfolio/*',
        '~portfolio/*/*' => '~portfolio/*/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-categoria-block' => array(
          'module' => 'views',
          'delta' => 'categoria-block',
          'region' => 'sidebar_first',
          'weight' => '-15',
        ),
        'simple_tweaks-texto_portfolio' => array(
          'module' => 'simple_tweaks',
          'delta' => 'texto_portfolio',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'easy_social-easy_social_block_1' => array(
          'module' => 'easy_social',
          'delta' => 'easy_social_block_1',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('portfolio');
  $export['portfolio'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'portfolio_item_view';
  $context->description = '';
  $context->tag = 'portfolio';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'portfolio' => 'portfolio',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-categoria-block' => array(
          'module' => 'views',
          'delta' => 'categoria-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-portfolio-block_1' => array(
          'module' => 'views',
          'delta' => 'portfolio-block_1',
          'region' => 'sidebar_second',
          'weight' => '-14',
        ),
        'easy_social-easy_social_block_1' => array(
          'module' => 'easy_social',
          'delta' => 'easy_social_block_1',
          'region' => 'sidebar_second',
          'weight' => '-13',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('portfolio');
  $export['portfolio_item_view'] = $context;

  return $export;
}
