<?php
/**
 * @file
 * features_admin.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function features_admin_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'website_admin_sitewide';
  $context->description = '';
  $context->tag = 'website';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'admin' => 'admin',
        'admin/*' => 'admin/*',
        'batch' => 'batch',
        'node/add' => 'node/add',
        'node/add/*' => 'node/add/*',
        'node/*/edit' => 'node/*/edit',
        'node/*/delete' => 'node/*/delete',
        'node/*/devel' => 'node/*/devel',
        'node/*/translate' => 'node/*/translate',
        'devel' => 'devel',
        'devel/*' => 'devel/*',
        'help' => 'help',
        'help/*' => 'help/*',
        'taxonomy/term/*/edit' => 'taxonomy/term/*/edit',
        'taxonomy/term/*/delete' => 'taxonomy/term/*/delete',
        'user/*/edit' => 'user/*/edit',
      ),
    ),
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'features_admin-features_admin_menu' => array(
          'module' => 'features_admin',
          'delta' => 'features_admin_menu',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'features_website-features_block_1' => array(
          'module' => 'features_website',
          'delta' => 'features_block_1',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'features_website-features_block_2' => array(
          'module' => 'features_website',
          'delta' => 'features_block_2',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'features_website-features_redes_sociais' => array(
          'module' => 'features_website',
          'delta' => 'features_redes_sociais',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('website');
  $export['website_admin_sitewide'] = $context;

  return $export;
}
