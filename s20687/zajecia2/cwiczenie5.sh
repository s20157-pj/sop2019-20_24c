#!/bin/bash

IMIE=$1;
DLUGOSC=${#IMIE}
BAZA=${IMIE:0:$DLUGOSC-1}
END=${IMIE:$DLUGOSC-1:$DLUGOSC}


if [  ${END} = "a" ] 
then
echo "$IMIE ma kota, a kot ma ${BAZA}e"
else
echo "$IMIE ma kota, a kot ma ${IMIE}a"
fi

