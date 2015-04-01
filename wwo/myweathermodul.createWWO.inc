<?php

function myweathermodul_wwo()
{
    //request bauen
    //api befeuern
    //response ausgeben
    drupal_set_message('URL: '.variable_get('myweathermodul_wwo_url'));
    drupal_set_message('KEY: '.variable_get('myweathermodul_wwo_key'));
    $url = variable_get('myweathermodul_wwo_url');
    $key = variable_get('myweathermodul_wwo_key');
    $url = $url.'Rostock&format=json&extra=utcDateTime&date=2015-03-20&enddate=2015-03-30&key='.$key;
    $stream_options = stream_context_create(array
        ( 
            'http' => array
            ( 
                'timeout' => 10 
            ) 
        )
    );
    $json = file_get_contents($url,0,$stream_options);
    $response = json_decode($json,true);
    drupal_set_message(json_last_error());
    
    dpm($response);
}