<?php
/**
 * @file
 * features_paginas.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function features_paginas_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_seo|node|pagina|form';
  $field_group->group_name = 'group_seo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pagina';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Otimização para mecanismos de busca',
    'weight' => '1',
    'children' => array(
      0 => 'meta_description',
      1 => 'meta_keywords',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Otimização para mecanismos de busca',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_seo|node|pagina|form'] = $field_group;

  return $export;
}
