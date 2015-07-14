<?php
/**
 * @file
 * openproducer_designer.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openproducer_designer_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use editor'.
  $permissions['use editor'] = array(
    'name' => 'use editor',
    'roles' => array(
      'administrator' => 'administrator',
      'designer' => 'designer',
    ),
    'module' => 'sweaver',
  );

  return $permissions;
}
