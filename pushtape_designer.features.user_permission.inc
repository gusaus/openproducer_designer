<?php
/**
 * @file
 * pushtape_designer.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pushtape_designer_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use editor'.
  $permissions['use editor'] = array(
    'name' => 'use editor',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'sweaver',
  );

  return $permissions;
}
