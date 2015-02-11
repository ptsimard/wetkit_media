<?php
/**
 * @file
 * wetkit_media.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function wetkit_media_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete terms in media_file_tags'.
  $permissions['delete terms in media_file_tags'] = array(
    'name' => 'delete terms in media_file_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in media_file_tags'.
  $permissions['edit terms in media_file_tags'] = array(
    'name' => 'edit terms in media_file_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
