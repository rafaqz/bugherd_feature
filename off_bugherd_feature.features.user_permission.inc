<?php
/**
 * @file
 * off_bugherd_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function off_bugherd_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access bugherd'.
  $permissions['access bugherd'] = array(
    'name' => 'access bugherd',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bugherd',
  );

  // Exported permission: 'administer bugherd'.
  $permissions['administer bugherd'] = array(
    'name' => 'administer bugherd',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'bugherd',
  );

  return $permissions;
}
