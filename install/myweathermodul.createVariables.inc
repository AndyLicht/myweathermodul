<?php
function myweathermodul_install_variables()
{
    variable_set('myweathermodul_dwd_temp','CDC, FTP');
    variable_set('myweathermodul_dwd_rain','CDC, FTP');
    variable_set('myweathermodul_ow_url','URL');
    variable_set('myweathermodul_ow_key','key');
    variable_set('myweathermodul_wwo_url','URL');
    variable_set('myweathermodul_wwo_key','key');
}

function myweathermodul_uninstall_variables()
{
    variable_del('myweathermodul_dwd_temp');
    variable_del('myweathermodul_dwd_rain');
    variable_del('myweathermodul_ow_url');
    variable_del('myweathermodul_ow_key');
    variable_del('myweathermodul_wwo_url');
    variable_del('myweathermodul_wwo_key');
}