<?php
/**
 * @file
 * simple_tweaks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function simple_tweaks_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}