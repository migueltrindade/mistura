<?php
/**
 * @file
 * simple_tweaks.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function simple_tweaks_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage';
  $context->description = 'blocos disponíveis somente na frontpage.';
  $context->tag = 'structure';
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
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'header',
          'weight' => '-10',
        ),
        'simple_tweaks-texto_internas' => array(
          'module' => 'simple_tweaks',
          'delta' => 'texto_internas',
          'region' => 'header_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blocos disponíveis somente na frontpage.');
  t('structure');
  $export['frontpage'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'blocos disponíveis em todas as páginas do site.';
  $context->tag = 'structure';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'simple_tweaks-copyright' => array(
          'module' => 'simple_tweaks',
          'delta' => 'copyright',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'views-redessociais-block' => array(
          'module' => 'views',
          'delta' => 'redessociais-block',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'simple_tweaks-telefone' => array(
          'module' => 'simple_tweaks',
          'delta' => 'telefone',
          'region' => 'footer',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blocos disponíveis em todas as páginas do site.');
  t('structure');
  $export['sitewide'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_not_front';
  $context->description = '';
  $context->tag = 'structure';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
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
        'views-redessociais-block' => array(
          'module' => 'views',
          'delta' => 'redessociais-block',
          'region' => 'header_top',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'header_top',
          'weight' => '-9',
        ),
        'simple_tweaks-texto_internas' => array(
          'module' => 'simple_tweaks',
          'delta' => 'texto_internas',
          'region' => 'preface',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('structure');
  $export['sitewide_not_front'] = $context;

  return $export;
}
