<?php
/**
 * @file
 * openproducer_designer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openproducer_designer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "sweaver" && $api == "sweaver") {
    return array("version" => "1");
  }
}
