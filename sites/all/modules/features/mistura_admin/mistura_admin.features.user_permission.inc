<?php
/**
 * @file
 * mistura_admin.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mistura_admin_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      0 => 'admin',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'admin',
    ),
    'module' => 'system',
  );

  // Exported permission: acessar mistura admin.
  $permissions['acessar mistura admin'] = array(
    'name' => 'acessar mistura admin',
    'roles' => array(
      0 => 'admin',
    ),
    'module' => 'mistura_admin',
  );

  // Exported permission: administrar mistura.
  $permissions['administrar mistura'] = array(
    'name' => 'administrar mistura',
    'roles' => array(
      0 => 'admin',
    ),
    'module' => 'mistura_admin',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'admin',
    ),
    'module' => 'system',
  );

  return $permissions;
}
