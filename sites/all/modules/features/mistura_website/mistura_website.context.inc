<?php
/**
 * @file
 * features_website.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function features_website_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'website_frontpage';
  $context->description = '';
  $context->tag = 'website';
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
  t('website');
  $export['website_frontpage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'website_sitewide';
  $context->description = '';
  $context->tag = 'website';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~website_admin_sitewide' => '~website_admin_sitewide',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('website');
  $export['website_sitewide'] = $context;

  return $export;
}
