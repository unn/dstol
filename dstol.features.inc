<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function dstol_context_default_contexts() {
  module_load_include('inc', 'dstol', 'dstol.defaults');
  $args = func_get_args();
  return call_user_func_array('_dstol_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function dstol_ctools_plugin_api() {
  module_load_include('inc', 'dstol', 'dstol.defaults');
  $args = func_get_args();
  return call_user_func_array('_dstol_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function dstol_strongarm() {
  module_load_include('inc', 'dstol', 'dstol.defaults');
  $args = func_get_args();
  return call_user_func_array('_dstol_strongarm', $args);
}
