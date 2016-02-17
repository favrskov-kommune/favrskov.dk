<?php
/**
 * @file
 * media_breakpoints.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function media_breakpoints_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'blogs';
  $breakpoint_group->name = 'blogs';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.full',
    1 => 'custom.user.tablet',
    2 => 'custom.user.phone_land',
    3 => 'custom.user.phone_port',
    4 => 'custom.user.phone',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['blogs'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'front_banners';
  $breakpoint_group->name = 'front_banners';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.full',
    1 => 'custom.user.tablet',
    2 => 'custom.user.phone_land',
    3 => 'custom.user.phone_port',
    4 => 'custom.user.phone',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['front_banners'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'slider';
  $breakpoint_group->name = 'slider';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.full',
    1 => 'custom.user.tablet',
    2 => 'custom.user.phone_land',
    3 => 'custom.user.phone_port',
    4 => 'custom.user.phone',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['slider'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'subject_image';
  $breakpoint_group->name = 'subject_image';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.full',
    1 => 'custom.user.tablet',
    2 => 'custom.user.phone_land',
    3 => 'custom.user.phone_port',
    4 => 'custom.user.phone',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['subject_image'] = $breakpoint_group;

  return $export;
}
