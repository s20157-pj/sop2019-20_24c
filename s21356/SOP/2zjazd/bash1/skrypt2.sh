#!/bin/bash
echo "Wpisz tekst"
read a
echo $a
#echo ${#a}
x=${#a}
echo "Pierwszy znak tekstu: " ${a:0:1}
echo "Ostatni znak tekstu: " ${a:x-1}
