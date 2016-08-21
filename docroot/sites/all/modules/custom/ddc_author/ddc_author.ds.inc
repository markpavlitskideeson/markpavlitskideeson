<?php
/**
 * @file
 * ddc_author.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ddc_author_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'author|author|default';
  $ds_fieldsetting->entity_type = 'author';
  $ds_fieldsetting->bundle = 'author';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'about_the_author' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['author|author|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ddc_author_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'author|author|default';
  $ds_layout->entity_type = 'author';
  $ds_layout->bundle = 'author';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'about_the_author',
      ),
      'left' => array(
        1 => 'field_picture',
      ),
      'right' => array(
        2 => 'field_name',
        3 => 'field_biography',
      ),
    ),
    'fields' => array(
      'about_the_author' => 'header',
      'field_picture' => 'left',
      'field_name' => 'right',
      'field_biography' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['author|author|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'author|author|teaser';
  $ds_layout->entity_type = 'author';
  $ds_layout->bundle = 'author';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_picture',
      ),
      'right' => array(
        1 => 'field_name',
        2 => 'field_biography',
      ),
    ),
    'fields' => array(
      'field_picture' => 'left',
      'field_name' => 'right',
      'field_biography' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['author|author|teaser'] = $ds_layout;

  return $export;
}
