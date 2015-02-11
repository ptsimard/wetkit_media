<?php
/**
 * @file
 * wetkit_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wetkit_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function wetkit_media_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
