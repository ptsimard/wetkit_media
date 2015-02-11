<?php
/**
 * @file
 * wetkit_media.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function wetkit_media_taxonomy_default_vocabularies() {
  return array(
    'media_file_tags' => array(
      'name' => 'Media File Tags',
      'machine_name' => 'media_file_tags',
      'description' => 'Taxonomy list for free-tagging media files.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
  );
}
