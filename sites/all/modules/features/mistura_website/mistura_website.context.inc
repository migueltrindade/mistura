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
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('mistura');
  $export['mistura_sitewide'] = $context;

  return $export;
}
