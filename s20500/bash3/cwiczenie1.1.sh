#!/bin/bash
#Skrypt sprawdzający dzy podano więcej jak jeden parametr

if [[ "" != "$1" && "" != "$2" ]]; then 
	echo $1
else 
	echo "nie podano żadnych parametrow"
fi
