<?php
/**
 * @file
 * off_bugherd_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function off_bugherd_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bugherd_disable_on_admin';
  $strongarm->value = 0;
  $export['bugherd_disable_on_admin'] = $strongarm;

  return $export;
}
