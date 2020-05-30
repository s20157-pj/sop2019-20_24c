#!/bin/bash
#Program zamieniający końcówkę w damskich imionach na 3 różne sposoby
A=Ala

echo $A ma kota, a kot ma ${A::-1}ę

echo $A ma kota, a kot ma ${A:0:2}ę

echo $A ma kota, a kot ma ${A/a/ę}



