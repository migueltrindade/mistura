<?php
/**
 * @file
 * mistura_website.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mistura_website_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mistura_frontpage';
  $context->description = '';
  $context->tag = 'mistura';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'mc-mc_descricao' => array(
          'module' => 'mc',
          'delta' => 'mc_descricao',
          'region' => 'descricao',
          'weight' => '-10',
        ),
        'mc-mc_servicos' => array(
          'module' => 'mc',
          'delta' => 'mc_servicos',
          'region' => 'servicos',
          'weight' => '-10',
        ),
        'mc-mc_cases' => array(
          'module' => 'mc',
          'delta' => 'mc_cases',
          'region' => 'cases',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('mistura');
  $export['mistura_frontpage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mistura_sitewide';
  $context->description = '';
  $context->tag = 'mistura';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~mistura_admin_sitewide' => '~mistura_admin_sitewide',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'header',
          'weight' => '-8',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'mistura_website-mistura_block_2' => array(
          'module' => 'mistura_website',
          'delta' => 'mistura_block_2',
          'region' => 'footer_left',
          'weight' => '-10',
        ),
        'mistura_website-mistura_block_1' => array(
          'module' => 'mistura_website',
          'delta' => 'mistura_block_1',
          'region' => 'footer_right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('mistura');
  $export['mistura_sitewide'] = $context;

  return $export;
}
