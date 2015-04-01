<?php

function _myweathermodul_installed_instances()
{
    $t = get_t();
    $instances = array();
    //allgemein
    $instances['mywm_area'] = installHelper_getInstance_Geometry($t,'field_mywm_area','Einzugsgebiet','myweatherstation','node','Einzugsgebiet');
    $instances['mywm_station'] = installHelper_getInstance_shortText($t,'field_mywm_station','Wetterstation','myweatherstation','node','Wetterstation');
    $instances['mywm_szfreiername'] = installHelper_getInstance_shortText($t,'field_mywm_szfreiername','Maschinenname','myweatherstation','node','Maschinenname');
    $instances['mywm_staat'] = installHelper_getInstance_shortText($t,'field_mywm_staat','Staat','myweatherstation','node','Staat');
    
    //DWD
    $instances['mywm_dwd_firstweather'] = installHelper_getInstance_Integer($t,'field_mywm_dwd_firstweather','erster Wettereintrag','myweatherstation','node','erster Wettereintrag');
    $instances['mywm_dwd_lastweather'] = installHelper_getInstance_Integer($t,'field_mywm_dwd_lastweather','letzter Wettereintrag','myweatherstation','node','letzter Wettereintrag');
    $instances['mywm_dwddb_tablename'] = installHelper_getInstance_shortText($t,'field_mywm_dwd_tablename','Datenbank Tabellenname(DWD)','myweatherstation','node','Datenbank Tabellenname (DWD)');
    $instances['mywm_dwd_point'] = installHelper_getInstance_Geometry($t,'field_mywm_dwd_point','Standort(DWD)','myweatherstation','node','Standort');
    //OW
    $instances['mywm_ow_uuid'] = installHelper_getInstance_Integer($t,'field_mywm_ow_uuid','UUID','myweatherstation','node','UUID');
    $instances['mywm_ow_firstweather'] = installHelper_getInstance_Integer($t,'field_mywm_ow_firstweather','erster Wettereintrag','myweatherstation','node','erster Wettereintrag');
    $instances['mywm_ow_lastweather'] = installHelper_getInstance_Integer($t,'field_mywm_ow_lastweather','letzter Wettereintrag','myweatherstation','node','letzter Wettereintrag');
    $instances['mywm_owdb_tablename'] = installHelper_getInstance_shortText($t,'field_mywm_ow_tablename','Datenbank Tabellenname(OW)','myweatherstation','node','Datenbank Tabellenname (OW)');
    $instances['mywm_ow_point'] = installHelper_getInstance_Geometry($t,'field_mywm_ow_point','Standort (OW)','myweatherstation','node','Standort');
    //WWO
    $instances['mywm_wwo_firstweather'] = installHelper_getInstance_Integer($t,'field_mywm_wwo_firstweather','erster Wettereintrag','myweatherstation','node','erster Wettereintrag');
    $instances['mywm_wwo_lastweather'] = installHelper_getInstance_Integer($t,'field_mywm_wwo_lastweather','letzter Wettereintrag','myweatherstation','node','letzter Wettereintrag');
    $instances['mywm_wwodb_tablename'] = installHelper_getInstance_shortText($t,'field_mywm_wwo_tablename','Datenbank Tabellenname (WWO)','myweatherstation','node','Datenbank Tabellenname (WWO)');
    $instances['mywm_wwo_point'] = installHelper_getInstance_Geometry($t,'field_mywm_wwo_point','Standort(WWO)','myweatherstation','node','Standort');
    
    return $instances;
}

function myweathermodul_installInstances()
{
    foreach (_myweathermodul_installed_instances() as $instance)
    {
        field_create_instance($instance);
    }
}
function myweathermodul_uninstallInstances()
{
    foreach (_myweathermodul_installed_instances() as $instance)
    {
        field_delete_instance($instance);
    }
}