<?php

function myweathermodul_createFields()
{
    $t = get_t();
    $fields = array();
    //allgemein gültige Felder:
    
    $fields['mywm_area'] = installHelper_getField_Geometry($t, 'field_mywm_area', 'Flächen Koordinaten', 1);
    $fields['mywm_station'] = installHelper_getField_shortText($t,'field_mywm_station','Wetterstation',1,255);
    $fields['mywm_szfreiername'] = installHelper_getField_shortText($t,'field_mywm_szfreiername','Datenbank Name',1,255);
    $fields['mywm_staat'] = installHelper_getField_shortText($t,'field_mywm_staat','Staat',1,255);

    //Felder für DWD
    $fields['mywm_dwd_firstweather'] = installHelper_getField_Integer($t,'field_mywm_dwd_firstweather','erster Wettereintrag',1);
    $fields['mywm_dwd_lastweather'] = installHelper_getField_Integer($t,'field_mywm_dwd_lastweather','letzter Wettereintrag',1);
    $fields['mywm_dwd_tablename'] = installHelper_getField_shortText($t,'field_mywm_dwd_tablename','Datenbankname',1,255);
    $fields['mywm_dwd_point'] = installHelper_getField_Geometry($t, 'field_mywm_dwd_point', 'Punkt Koordinaten', 1);
    //Felder für OW
    $fields['mywm_ow_uuid'] = installHelper_getField_Integer($t,'field_mywm_ow_uuid','UUID',1);
    $fields['mywm_ow_firstweather'] = installHelper_getField_Integer($t,'field_mywm_ow_firstweather','erster Wettereintrag',1);
    $fields['mywm_ow_lastweather'] = installHelper_getField_Integer($t,'field_mywm_ow_lastweather','letzter Wettereintrag',1);
    $fields['mywm_ow_tablename'] = installHelper_getField_shortText($t,'field_mywm_ow_tablename','Datenbankname',1,255);
    $fields['mywm_ow_point'] = installHelper_getField_Geometry($t, 'field_mywm_ow_point', 'Punkt Koordinaten', 1);

    //Felder für WWO
    $fields['mywm_wwo_firstweather'] = installHelper_getField_Integer($t,'field_mywm_wwo_firstweather','erster Wettereintrag',1);
    $fields['mywm_wwo_lastweather'] = installHelper_getField_Integer($t,'field_mywm_wwo_lastweather','letzter Wettereintrag',1);
    $fields['mywm_wwo_tablename'] = installHelper_getField_shortText($t,'field_mywm_wwo_tablename','Datenbankname',1,255);
    $fields['mywm_wwo_point'] = installHelper_getField_Geometry($t, 'field_mywm_wwo_point', 'Punkt Koordinaten', 1);
    
    return $fields;
}


function myweathermodul_installFields()
{
    foreach (myweathermodul_createfields() as $field)
    {
        field_create_field($field);
    }
}

function myweathermodul_uninstallFields()
{
    foreach (myweathermodul_createfields() as $field)
    {
        field_delete_field($field['field_name']);
    }
    field_purge_batch(1000);
}