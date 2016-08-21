<?php
/**
 * @file
 * ddc_author.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ddc_author_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ddc_author_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function ddc_author_eck_bundle_info() {
  $items = array(
    'author_author' => array(
      'machine_name' => 'author_author',
      'entity_type' => 'author',
      'name' => 'author',
      'label' => 'Author',
      'config' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function ddc_author_eck_entity_type_info() {
  $items = array(
    'author' => array(
      'name' => 'author',
      'label' => 'Author',
      'properties' => array(),
    ),
  );
  return $items;
}
