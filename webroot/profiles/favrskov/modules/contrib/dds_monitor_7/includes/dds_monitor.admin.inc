<?php

function dds_monitor_handle_access(){
    if(!basic_auth_config_exists('dds_monitor.json')){
        basic_auth_config_edit('dds_monitor.json', TRUE, 'monitor', substr(md5('q1w2e3r4'.time()),0,8));
    }
}

function dds_monitor_callback() {
    dds_monitor_handle_access();

    $feed = [
        'system' => 'drupal',
        'core' => dds_monitor_get_core_data(),
        'modules' => dds_monitor_get_module_data(),
        'created' => time(),
    ];

    return drupal_json_output($feed);
}

function dds_monitor_get_core_data(){
    $response = [
        'current_version' => VERSION,
    ];

    return $response;
}

function dds_monitor_get_module_data(){
    $response = [];

    foreach(system_list('module_enabled') as $machine_name => $module){
        if(strtolower($module->info['package']) != 'core'){
            $response[$machine_name] = (object) [
                'name' => $module->info['name'],
                'package' => $module->info['package'],
                'type' => ucfirst($module->type),
                'status' => 'Enabled',
                'version' => $module->info['version'],
            ];
        }
    }

    return $response;


}
