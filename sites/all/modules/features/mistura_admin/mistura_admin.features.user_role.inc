<?php
/**
 * @file
 * mistura_admin.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function mistura_admin_user_default_roles() {
  $roles = array();

  // Exported role: admin.
  $roles['admin'] = array(
    'name' => 'admin',
    'weight' => '2',
  );

  return $roles;
}
