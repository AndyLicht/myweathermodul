<?php

function myweathermodul_installFieldGroups()
{
    $groups = myweathermodul_createFieldGroups();
    foreach ($groups as $group)
    {
        field_group_group_save($group);
    }
}
 
 
 
function myweathermodul_createFieldGroups()
{
    $groups = array();
    $groups[] = (object) array
    (
        'identifier' => 'group_dwd|node|myweatherstation|default',
        'group_name' => 'group_dwd',
        'entity_type' => 'node',
        'bundle' => 'myweatherstation',
        'mode' => 'default',
        'parent_name' => 'group_information',
        'table' => 'field_group',
        'type' => 'Normal',
        'label' => 'Deutscher Wetter Dienst',
        'weight' => '0',
        'children' => array
        (
            0 => 'field_mywm_dwd_firstweather',
            1 => 'field_mywm_dwd_lastweather',
            2 => 'field_mywm_dwd_tablename',
            3 => 'field_mywm_dwd_point',
        ),
        'format_type' => 'htab',
        'format_settings' => array
        (
            'formatter' => 'closed',
            'instance_settings' => array
            (
                'description' => '',
                'classes' => 'group-dwd field-group-htab',
                'id' => '',
            ),
        ),
    );
    $groups[] = (object) array
    (
        'identifier' => 'group_ow|node|myweatherstation|default',
        'group_name' => 'group_ow',
        'entity_type' => 'node',
        'bundle' => 'myweatherstation',
        'mode' => 'default',
        'parent_name' => 'group_information',
        'table' => 'field_group',
        'type' => 'Normal',
        'label' => 'OpenWeatherMap',
        'weight' => '1',
        'children' => array
        (
            0 => 'field_mywm_ow_firstweather',
            1 => 'field_mywm_ow_lastweather',
            2 => 'field_mywm_ow_tablename',
            3 => 'field_mywm_ow_point',
            4 => 'field_mywm_ow_uuid',
        ),
        'format_type' => 'htab',
        'format_settings' => array
        (
            'formatter' => 'closed',
            'instance_settings' => array
            (
                'description' => '',
                'classes' => 'group-ow field-group-htab',
                'id' => '',
            ),
        ),
    );
    $groups[] = (object) array
    (
        'identifier' => 'group_wwo|node|myweatherstation|default',
        'group_name' => 'group_wwo',
        'entity_type' => 'node',
        'bundle' => 'myweatherstation',
        'mode' => 'default',
        'parent_name' => 'group_information',
        'table' => 'field_group',
        'type' => 'Normal',
        'label' => 'WorldWeatherOnline',
        'weight' => '2',
        'children' => array
        (
            0 => 'field_mywm_wwo_firstweather',
            1 => 'field_mywm_wwo_lastweather',
            2 => 'field_mywm_wwo_tablename',
            3 => 'field_mywm_wwo_point',
        ),
        'format_type' => 'htab',
        'format_settings' => array
        (
            'formatter' => 'closed',
            'instance_settings' => array
            (
                'description' => '',
                'classes' => 'group-wwo field-group-htab',
                'id' => '',
            ),
        ),
    );
    $groups[] = (object) array
    (
        'identifier' => 'group_information|node|myweatherstation|default',
        'group_name' => 'group_information',
        'entity_type' => 'node',
        'bundle' => 'myweatherstation',
        'mode' => 'default',
        'table' => 'field_group',
        'type' => 'Normal',
        'label' => 'Wetterprovider',
        'weight' => '17',
        'children' => array
        (
            0 => 'group_dwd',
            1 => 'group_ow',
            2 => 'group_wwo',
        ),
        'format_type' => 'htabs',
        'format_settings' => array
        (
            'formatter' => '',
            'instance_settings' => array
            (
                'classes' => 'group-information field-group-htabs',
            ),
        ),
    );
    return $groups;
}