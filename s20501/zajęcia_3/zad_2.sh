#!/bin/bash
currentDir=$(pwd)

if [ -e $currentDir/config.cfg ]; then
    $currentDir/config.cfg
elif [ $# -gt 0 ] && [ -e $currentDir/$1 ]; then
    $currentDir/$1
else
    echo Blad
fi              