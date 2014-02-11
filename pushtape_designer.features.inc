<?php
/**
 * @file
 * pushtape_designer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pushtape_designer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
