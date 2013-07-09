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
  $context->reactions = array();
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
        'mistura_website-mistura_redes_sociais' => array(
          'module' => 'mistura_website',
          'delta' => 'mistura_redes_sociais',
          'region' => 'redes_sociais',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'outside_top_left',
          'weight' => '-10',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'outside_top_center',
          'weight' => '-10',
        ),
        'webform-client-block-3' => array(
          'module' => 'webform',
          'delta' => 'client-block-3',
          'region' => 'outside_top_right',
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
