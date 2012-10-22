<?php
/**
 * @file
 * features_paginas.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function features_paginas_user_default_permissions() {
  $permissions = array();

  // Exported permission: access admin paginas.
  $permissions['access admin paginas'] = array(
    'name' => 'access admin paginas',
    'roles' => array(
      0 => 'admin',
    ),
    'module' => 'features_paginas',
  );

  // Exported permission: create pagina content.
  $permissions['create pagina content'] = array(
    'name' => 'create pagina content',
    'roles' => array(
      0 => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any pagina content.
  $permissions['delete any pagina content'] = array(
    'name' => 'delete any pagina content',
    'roles' => array(
      0 => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own pagina content.
  $permissions['delete own pagina content'] = array(
    'name' => 'delete own pagina content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any pagina content.
  $permissions['edit any pagina content'] = array(
    'name' => 'edit any pagina content',
    'roles' => array(
      0 => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own pagina content.
  $permissions['edit own pagina content'] = array(
    'name' => 'edit own pagina content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
