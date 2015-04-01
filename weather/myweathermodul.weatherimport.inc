<?php
module_load_include('inc','myweathermodul','wwo/myweathermodul.createWWO');


function myweathermodul_weatherimport()
{
    drupal_set_message('Im WeatherImport');
    myweathermodul_wwo();
}