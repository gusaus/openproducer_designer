<?php
/**
 * @file
 * pushtape_designer.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pushtape_designer_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_classes_exclude';
  $strongarm->value = 'clear

clearfix

sweaver

sweaver-hovered

sweaver-clicked

sweaver-clicked-temp';
  $export['sweaver_classes_exclude'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_combined_selectors';
  $strongarm->value = 0;
  $export['sweaver_combined_selectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_ctools_allowed_properties';
  $strongarm->value = '-moz-border-radius

-webkit-border-radius

border-top-right-radius

border-bottom-right-radius

border-bottom-left-radius

border-top-left-radius

webkit-border-top-right-radius

webkit-border-bottom-right-radius

webkit-border-bottom-left-radius

webkit-border-top-left-radius

moz-border-radius-topright

moz-border-radius-bottomright

moz-border-radius-bottomleft

moz-border-radius-topleft

position

top

left

bottom

right

border-collapse

border-spacing

list-style-image

list-style-type

min-width

max-width

min-height

max-height

visibility';
  $export['sweaver_ctools_allowed_properties'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_editor_form_configuration';
  $strongarm->value = array(
    'one' => array(
      'properties' => array(
        0 => 'font-family',
        1 => 'font-properties-wrapper',
      ),
      'title' => 'Font',
    ),
    'two' => array(
      'properties' => array(
        0 => 'background-color',
        1 => 'background-image',
        2 => 'background-repeat',
        3 => 'background-attachment',
        4 => 'background-position',
      ),
      'title' => 'Background',
    ),
    'three' => array(
      'properties' => array(
        0 => 'position-settings',
        1 => 'border-style',
        2 => 'border-color',
        3 => 'border-collapse',
        4 => 'border-spacing',
        5 => 'vertical-align',
      ),
      'title' => 'Borders & Spacing',
    ),
    'four' => array(
      'title' => 'Other',
      'properties' => array(),
    ),
  );
  $export['sweaver_editor_form_configuration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_enabled';
  $strongarm->value = 1;
  $export['sweaver_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_paths';
  $strongarm->value = 'admin*

node/add*
node/*/edit
node/*/panel*
panels/ajax*
user/*/edit
batch*
wysiwyg_imageupload/*
media/*
taxonomy/*
imce';

  $export['sweaver_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_plugins_weight';
  $strongarm->value = array(
    'sweaver_plugin_editor' => '-49',
    'sweaver_plugin_styles' => '-47',
    'sweaver_plugin_palettes' => '-44',
    'sweaver_plugin_advanced' => '-45',
    'sweaver_plugin_images' => '-48',
    'sweaver_plugin_themeswitch' => '-43',
    'sweaver_plugin_themesettings' => '-46',
    'sweaver_plugin_themeclasses' => '-42',
    'sweaver_plugin_fontface' => '-41',
    'sweaver_plugin_kb' => '-40',
    'sweaver_plugin_toolbar' => '-50',
  );
  $export['sweaver_plugins_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_plugin_handle_images';
  $strongarm->value = 'sweaver_plugin_images';
  $export['sweaver_plugin_handle_images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_plugin_images_styles';
  $strongarm->value = 0;
  $export['sweaver_plugin_images_styles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_plugin_images_tab';
  $strongarm->value = 1;
  $export['sweaver_plugin_images_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_plugin_status_sweaver_plugin';
  $strongarm->value = TRUE;
  $export['sweaver_plugin_status_sweaver_plugin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_plugin_status_sweaver_plugin_advanced';
  $strongarm->value = 1;
  $export['sweaver_plugin_status_sweaver_plugin_advanced'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_plugin_status_sweaver_plugin_editor';
  $strongarm->value = 1;
  $export['sweaver_plugin_status_sweaver_plugin_editor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_plugin_status_sweaver_plugin_images';
  $strongarm->value = 1;
  $export['sweaver_plugin_status_sweaver_plugin_images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_plugin_status_sweaver_plugin_styles';
  $strongarm->value = 1;
  $export['sweaver_plugin_status_sweaver_plugin_styles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_plugin_status_sweaver_plugin_themeclasses';
  $strongarm->value = 0;
  $export['sweaver_plugin_status_sweaver_plugin_themeclasses'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_plugin_status_sweaver_plugin_themesettings';
  $strongarm->value = 1;
  $export['sweaver_plugin_status_sweaver_plugin_themesettings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_plugin_status_sweaver_plugin_themeswitch';
  $strongarm->value = 0;
  $export['sweaver_plugin_status_sweaver_plugin_themeswitch'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_plugin_status_sweaver_plugin_toolbar';
  $strongarm->value = 1;
  $export['sweaver_plugin_status_sweaver_plugin_toolbar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_preview_selection';
  $strongarm->value = 1;
  $export['sweaver_preview_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_selectors_exclude';
  $strongarm->value = '#sweaver-frontend

#admin-menu
.colorpicker
#sweaver-messages
#sweaver-popup
#follow-link
#toolbar
#l10n-client
#navbar-bar
#navbar-tray
#panels-ipe-control-container';

  $export['sweaver_selectors_exclude'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_skin';
  $strongarm->value = 'grey';
  $export['sweaver_skin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_styles_delete_tab';
  $strongarm->value = 1;
  $export['sweaver_styles_delete_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sweaver_translate_path';
  $strongarm->value = 1;
  $export['sweaver_translate_path'] = $strongarm;

  return $export;
}
